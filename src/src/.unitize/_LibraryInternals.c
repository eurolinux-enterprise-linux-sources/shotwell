/* _LibraryInternals.c generated by valac 0.40.4, the Vala compiler
 * generated from _LibraryInternals.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */


#include <glib.h>
#include <glib-object.h>



extern gint library__unit_init_count;
gint library__unit_init_count = 0;

void library_init_entry (GError** error);
void unit_init_entry (GError** error);
void util_init_entry (GError** error);
void threads_init_entry (GError** error);
void db_init_entry (GError** error);
void plugins_init_entry (GError** error);
void slideshow_init_entry (GError** error);
void photos_init_entry (GError** error);
void publishing_init_entry (GError** error);
void core_init_entry (GError** error);
void sidebar_init_entry (GError** error);
void events_init_entry (GError** error);
void tags_init_entry (GError** error);
void camera_init_entry (GError** error);
void searches_init_entry (GError** error);
void data_imports_init_entry (GError** error);
void folders_init_entry (GError** error);
void library_init (GError** error);
void library_terminate_entry (void);
void library_terminate (void);
void unit_terminate_entry (void);
void util_terminate_entry (void);
void threads_terminate_entry (void);
void db_terminate_entry (void);
void plugins_terminate_entry (void);
void slideshow_terminate_entry (void);
void photos_terminate_entry (void);
void publishing_terminate_entry (void);
void core_terminate_entry (void);
void sidebar_terminate_entry (void);
void events_terminate_entry (void);
void tags_terminate_entry (void);
void camera_terminate_entry (void);
void searches_terminate_entry (void);
void data_imports_terminate_entry (void);
void folders_terminate_entry (void);


void
library_init_entry (GError** error)
{
	gint _tmp0_;
	GError * _inner_error_ = NULL;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	_tmp0_ = library__unit_init_count;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	library__unit_init_count = _tmp0_ + 1;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (_tmp0_ != 0) {
#line 15 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 73 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	unit_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 83 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	util_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 93 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	threads_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 103 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	db_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 113 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	plugins_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 123 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	slideshow_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 133 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	photos_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 143 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	publishing_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 153 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	core_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 163 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	sidebar_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 173 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	events_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 183 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	tags_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 193 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	camera_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 203 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	searches_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 213 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	data_imports_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 223 "_LibraryInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	folders_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 233 "_LibraryInternals.c"
	}
#line 19 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	library_init (&_inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 19 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 243 "_LibraryInternals.c"
	}
}


void
library_terminate_entry (void)
{
	gboolean _tmp0_ = FALSE;
	gint _tmp1_;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	_tmp1_ = library__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (_tmp1_ == 0) {
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		_tmp0_ = TRUE;
#line 259 "_LibraryInternals.c"
	} else {
		gint _tmp2_;
		gint _tmp3_;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		_tmp2_ = library__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		library__unit_init_count = _tmp2_ - 1;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		_tmp3_ = library__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		_tmp0_ = _tmp3_ != 0;
#line 271 "_LibraryInternals.c"
	}
#line 23 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	if (_tmp0_) {
#line 24 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
		return;
#line 277 "_LibraryInternals.c"
	}
#line 26 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	library_terminate ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	unit_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	util_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	threads_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	db_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	plugins_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	slideshow_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	photos_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	publishing_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	core_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	sidebar_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	events_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	tags_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	camera_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	searches_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	data_imports_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_LibraryInternals.vala"
	folders_terminate_entry ();
#line 313 "_LibraryInternals.c"
}



