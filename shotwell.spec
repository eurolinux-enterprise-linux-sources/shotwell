Name:           shotwell
Version:        0.24.5
Release:        2%{?dist}
Summary:        A photo organizer for the GNOME desktop

# LGPLv2+ for the code
# CC-BY-SA for some of the icons
License:        LGPLv2+ and CC-BY-SA
URL:            https://wiki.gnome.org/Apps/Shotwell
Source0:        https://download.gnome.org/sources/shotwell/0.24/shotwell-%{version}.tar.xz

BuildRequires:  vala-devel >= 0.20.1
BuildRequires:  desktop-file-utils
BuildRequires:  libappstream-glib
BuildRequires:  gettext
BuildRequires:  itstool
BuildRequires:  pkgconfig(atk)
BuildRequires:  pkgconfig(gdk-3.0)
BuildRequires:  pkgconfig(gdk-x11-3.0)
BuildRequires:  pkgconfig(gee-0.8) >= 0.8.5
BuildRequires:  pkgconfig(gexiv2) >= 0.4.90
BuildRequires:  pkgconfig(gio-unix-2.0) >= 2.20
BuildRequires:  pkgconfig(glib-2.0) >= 2.30.0
BuildRequires:  pkgconfig(gmodule-2.0) >= 2.24.0
BuildRequires:  pkgconfig(gnome-doc-utils)
BuildRequires:  pkgconfig(gstreamer-1.0) >= 1.0.0
BuildRequires:  pkgconfig(gstreamer-base-1.0) >= 1.0.0
BuildRequires:  pkgconfig(gstreamer-plugins-base-1.0) >= 1.0.0
BuildRequires:  pkgconfig(gstreamer-pbutils-1.0) >= 1.0.0
BuildRequires:  pkgconfig(gtk+-3.0) >= 3.12.2
BuildRequires:  pkgconfig(gudev-1.0) >= 145
BuildRequires:  pkgconfig(json-glib-1.0)
BuildRequires:  pkgconfig(libexif) >= 0.6.16
BuildRequires:  pkgconfig(libgphoto2) >= 2.4.2
BuildRequires:  pkgconfig(libraw) >= 0.13.2
BuildRequires:  pkgconfig(libsoup-2.4) >= 2.26.0
BuildRequires:  pkgconfig(libxml-2.0) >= 2.6.32
BuildRequires:  pkgconfig(sqlite3) >= 3.5.9
BuildRequires:  pkgconfig(webkit2gtk-4.0) >= 2.6.3

# Needed by the publishing plugins
BuildRequires:  pkgconfig(rest-0.7) >= 0.7

# used by shotwell-settings-migrator
Requires:       dconf

%description
Shotwell is an easy-to-use, fast photo organizer designed for the GNOME
desktop.  It allows you to import photos from your camera or disk, organize
them by date and subject matter, even ratings.  It also offers basic photo
editing, like crop, red-eye correction, color adjustments, and straighten.
Shotwell's non-destructive photo editor does not alter your master photos,
making it easy to experiment and correct errors.


%prep
%setup -q


%build
%configure \
  --disable-schemas-compile \
  --disable-silent-rules \
  --disable-static
# --disable-rpath to configure doesn't seem to work
sed -i 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' libtool
sed -i 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' libtool
%make_build


%install
# otherwise gettext always returns English text regardless of LANGUAGE asked
export LANG=en_US.utf8
%make_install

# Remove libtool .la files
find $RPM_BUILD_ROOT -name '*.la' -delete

# Update the screenshot shown in the software center
#
# NOTE: It would be *awesome* if this file was pushed upstream.
#
# See http://people.freedesktop.org/~hughsient/appdata/#screenshots for more details.
#
appstream-util replace-screenshots %{buildroot}%{_datadir}/appdata/shotwell.appdata.xml \
  https://raw.githubusercontent.com/hughsie/fedora-appstream/master/screenshots-extra/shotwell/a.png \
  https://raw.githubusercontent.com/hughsie/fedora-appstream/master/screenshots-extra/shotwell/b.png \
  https://raw.githubusercontent.com/hughsie/fedora-appstream/master/screenshots-extra/shotwell/c.png \
  https://raw.githubusercontent.com/hughsie/fedora-appstream/master/screenshots-extra/shotwell/d.png

%find_lang %{name} --with-gnome


%check
desktop-file-validate %{buildroot}%{_datadir}/applications/shotwell.desktop
desktop-file-validate %{buildroot}%{_datadir}/applications/shotwell-viewer.desktop


%post
/sbin/ldconfig
update-desktop-database &>/dev/null || :
touch --no-create %{_datadir}/icons/hicolor &>/dev/null || :


%postun
/sbin/ldconfig
update-desktop-database &> /dev/null || :
if [ $1 -eq 0 ] ; then
  touch --no-create %{_datadir}/icons/hicolor &>/dev/null
  gtk-update-icon-cache --quiet %{_datadir}/icons/hicolor &>/dev/null || :
  /usr/bin/glib-compile-schemas %{_datadir}/glib-2.0/schemas &> /dev/null || :
fi


%posttrans
gtk-update-icon-cache --quiet %{_datadir}/icons/hicolor &>/dev/null || :
/usr/bin/glib-compile-schemas %{_datadir}/glib-2.0/schemas &> /dev/null || :


%files -f %{name}.lang
%license COPYING
%doc README NEWS THANKS AUTHORS
%{_bindir}/shotwell
%{_libdir}/shotwell
%{_libdir}/libshotwell-plugin-common.so.*
%exclude %{_libdir}/libshotwell-plugin-common.so
%{_libexecdir}/shotwell
%{_datadir}/shotwell
%{_datadir}/applications/shotwell.desktop
%{_datadir}/applications/shotwell-viewer.desktop
%{_datadir}/appdata/shotwell.appdata.xml
%{_datadir}/glib-2.0/schemas/*.xml
%{_datadir}/icons/hicolor/*/apps/shotwell.png
%{_datadir}/icons/hicolor/symbolic/apps/shotwell-symbolic.svg
%{_mandir}/man1/*


%changelog
* Tue Oct 10 2017 Debarshi Ray <rishi@fedoraproject.org> - 0.24.5-2
- Rebuild against new libgphoto2 soname
- Resolves: #1500282

* Tue Jan 31 2017 Kalev Lember <klember@redhat.com> - 0.24.5-1
- Update to 0.24.5
- Resolves: #1387046

* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 0.14.1-5
- Mass rebuild 2014-01-24

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 0.14.1-4
- Mass rebuild 2013-12-27

* Thu Dec 12 2013 Matthias Clasen <mclasen@redhat.com> - 0.14.1-3
- Update translations
- Resolves: #1030377

* Mon Sep 30 2013 Debarshi Ray <rishi@fedoraproject.org> - 0.14.1-2
- Add a man page

* Thu Apr  4 2013 Thomas Moschny <thomas.moschny@gmx.de> - 0.14.1-1
- Update to 0.14.1.

* Tue Mar 19 2013 Thomas Moschny <thomas.moschny@gmx.de> - 0.14.0-2
- Rework BR section.

* Tue Mar 19 2013 Thomas Moschny <thomas.moschny@gmx.de> - 0.14.0-1
- Update to 0.14.0.
- Drop GStreamer 1.0 patch, applied upstream.

* Thu Feb 14 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.13.1-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_19_Mass_Rebuild

* Fri Oct  5 2012 Thomas Moschny <thomas.moschny@gmx.de> - 0.13.1-1
- Update to 0.13.1.
- shotwell-settings-migrator has been moved to %%{_libexecdir}.

* Thu Sep 27 2012 Bastien Nocera <bnocera@redhat.com> 0.13.0-2
- Port to GStreamer 1.0 (Shotwell already links against webkitgtk3
  which uses GStreamer 1.0)

* Thu Sep 20 2012 Thomas Moschny <thomas.moschny@gmx.de> - 0.13.0-1
- Update to 0.13.0.
- Remove patches applied upstream.
- Add BR on json-glib.
- Add runtime dependency on dconf.

* Tue Aug 21 2012 Jindrich Novy <jnovy@redhat.com> - 0.12.3-5
- add patch to fix build against libgphoto2-2.5.0, thanks to Clinton Rogers
  (http://redmine.yorba.org/issues/5553)

* Sat Jul 21 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.12.3-4
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Sat Jul 14 2012 Thomas Moschny <thomas.moschny@gmx.de> - 0.12.3-3
- Add patches for compatibility with Vala 0.17.2.

* Sat Jul 14 2012 Michel Salim <salimma@fedoraproject.org> - 0.12.3-2
- Rebuild for libgphoto2 2.5.0

* Tue May 22 2012 Thomas Moschny <thomas.moschny@gmx.de> - 0.12.3-1
- Update to 0.12.3.

* Thu May 03 2012 Rex Dieter <rdieter@fedoraproject.org> 0.12.2-3
- rebuild (exiv2)

* Wed May 02 2012 Kalev Lember <kalevlember@gmail.com> - 0.12.2-2
- Fix startup when invoked as /bin/shotwell (#812652)

* Fri Apr 13 2012 Kalev Lember <kalevlember@gmail.com> - 0.12.2-1
- Update to 0.12.2
- Use find_lang --with-gnome for including help files

* Tue Apr 03 2012 Kalev Lember <kalevlember@gmail.com> - 0.12.1-1
- Update to 0.12.1
- Don't buildrequire gnome-vfs (#690563)

* Wed Feb 22 2012 Michel Salim <salimma@fedoraproject.org> - 0.12.0-0.3.20111117gitcf087489ea
- Remove dependency on totem, unneeded since 0.10 (# 794487)

* Sat Jan 14 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.12.0-0.2.20111117gitcf087489ea
- Rebuilt for https://fedoraproject.org/wiki/Fedora_17_Mass_Rebuild

* Thu Nov 17 2011 Siddhesh Poyarekar <siddhesh.poyarekar@gmail.com> 0.12.0-1.20111117gitcf087489ea
- Bump to current git to fix build against LibRaw
- LibRaw now has a dynamic library and shotwell is using it

* Thu Nov 10 2011 Adam Williamson <awilliam@redhat.com> 0.12.0-1.20111110git163bf4a114
- bump to current git to get vala 0.14 support for rawhide, GTK+ 3 port
- adjust dependencies for vala, gtk, gsettings
- adjust for gsettings port

* Mon Nov  7 2011 Matthias Clasen <mclasen@redhat.com> 0.11.1-3
- Rebuild against new libpng

* Sat Oct 15 2011 Rex Dieter <rdieter@fedoraproject.org> 0.11.1-2
- rebuild (exiv2)

* Thu Sep  8 2011 Matthias Clasen <mclasen@redhat.com> - 0.11.1-1
- Update to 0.11.1

* Wed Aug 24 2011 Matthias Clasen <mclasen@redhat.com> - 0.11.0-1
- Update to 0.11.0

* Wed Jul  6 2011 Matthias Clasen <mclasen@redhat.com> - 0.10.1-1
- Update to 0.10.1

* Thu May 26 2011 Michel Salim <salimma@fedoraproject.org> - 0.9.3-1
- Update to 0.9.3

* Wed Apr 13 2011 Michel Salim <salimma@fedoraproject.org> - 0.9.2-1
- Update to 0.9.2

* Tue Apr  5 2011 Michel Salim <salimma@fedoraproject.org> - 0.9.1-1
- Update to 0.9.1

* Fri Apr  1 2011 Michel Salim <salimma@fedoraproject.org> - 0.9.0-3
- Use more complete multilib fix from upstream

* Mon Mar 28 2011 Michel Salim <salimma@fedoraproject.org> - 0.9.0-2
- Look for plugins in correct directory on 64-bit systems (# 690927)

* Fri Mar 25 2011 Matthias Clasen <mclasen@redhat.com> - 0.9.0-1
- Update to 0.9.0
- Add hi-res icons (#690596)

* Fri Mar 18 2011 Michel Salim <salimma@fedoraproject.org> - 0.8.90-2.r2758
- Get gettext to actually generate translated strings (# 642092)

* Thu Mar 17 2011 Michel Salim <salimma@fedoraproject.org> - 0.8.90-1.r2758
- Update to 0.9.0 pre-release
- Switch declaration of build requirements to pkgconfig

* Wed Feb 09 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.8.1-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_15_Mass_Rebuild

* Sun Jan 16 2011 Christopher Aillon <caillon@redhat.com> - 0.8.1-1
- Update to 0.8.1

* Sat Jan  8 2011 Christopher Aillon <caillon@redhat.com> - 0.8.0-1
- Update to 0.8.0

* Sun Jan  2 2011 Siddhesh Poyarekar <siddhesh@redhat.com> - 0.7.2-4
- Add user_photos to permissions required. Fixes bz #666512.

* Sun Jan 02 2011 Rex Dieter <rdieter@fedoraproject.org> - 0.7.2-3
- rebuild (exiv2)

* Wed Sep 29 2010 jkeating - 0.7.2-2
- Rebuilt for gcc bug 634757

* Mon Sep 13 2010 Matthias Clasen <mclasen@redhat.com> - 0.7.2-1
- Update to 0.7.2

* Wed Sep  1 2010 Matthias Clasen <mclasen@redhat.com> - 0.7.1-1
- Update to 0.7.1

* Tue Jul 13 2010 Mike McGrath <mmcgrath@redhat.com> - 0.6.1-1.1
- Rebuilt to fix broken libwebkit-1.0.so.2 dep

* Fri Jul  9 2010 Matthias Clasen <mclasen@redhat.com> - 0.6.1-1
- Update to 0.6.1

* Wed May 12 2010 Matthias Clasen <mclasen@redhat.com> - 0.5.2-1
- Update to 0.5.2
- Translation updates for Czech, Finnish, Greek, Ukrainian and Russian

* Fri Mar 12 2010 Matthias Clasen <mclasen@redhat.com> - 0.5.0-1
- Update to 0.5.0
- Many new features, see http://www.yorba.org/shotwell/

* Mon Jan 18 2010 Matthias Clasen <mclasen@redhat.com> - 0.4.3-1
- Update to 0.4.3

* Tue Jan  5 2010 Matthias Clasen <mclasen@redhat.com> - 0.4.2-1
- Update to 0.4.2

* Wed Dec 23 2009 Matthias Clasen <mclasen@redhat.com> - 0.4.0-1
- Update to 0.4.0

* Fri Dec 18 2009 Matthias Clasen <mclasen@redhat.com> - 0.4.0-0.1.20091218svn
- 0.4 snapshot

* Thu Nov 12 2009 Matthias Clasen <mclasen@redhat.com> - 0.3.2-1
- Update to 0.3.2

* Tue Nov  3 2009 Matthias Clasen <mclasen@redhat.com> - 0.3.0-1
- Version 0.3.0

* Thu Aug 20 2009 Michel Salim <salimma@fedoraproject.org> - 0.2.0-3
- Rebuild against new libgee

* Wed Aug 12 2009  Matthias Clasen <mclasen@redhat.com> - 0.2.0-2.fc12
- Bring icon cache handling in sync with current guidelines

* Sun Aug  9 2009  Matthias Clasen <mclasen@redhat.com> - 0.2.0-1.fc12
- Initial packaging
