/* International.c generated by valac 0.40.4, the Vala compiler
 * generated from International.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



#define TRANSLATABLE "translatable"
#define INTERNATIONAL_SUPPORT_SYSTEM_LOCALE ""
#define INTERNATIONAL_SUPPORT_LANGUAGE_SUPPORT_DIRECTORY _LANG_SUPPORT_DIR
void international_support_init (const gchar* package_name,
                                 gchar** args,
                                 int args_length1,
                                 const gchar* locale);
gchar* international_support_get_langpack_dir_path (gchar** args,
                                                    int args_length1);


void
international_support_init (const gchar* package_name,
                            gchar** args,
                            int args_length1,
                            const gchar* locale)
{
	gchar* _tmp0_;
	gchar* _tmp1_;
#line 15 "/home/jens/Source/shotwell/src/International.vala"
	g_return_if_fail (package_name != NULL);
#line 15 "/home/jens/Source/shotwell/src/International.vala"
	g_return_if_fail (locale != NULL);
#line 16 "/home/jens/Source/shotwell/src/International.vala"
	setlocale (LC_ALL, locale);
#line 18 "/home/jens/Source/shotwell/src/International.vala"
	_tmp0_ = international_support_get_langpack_dir_path (args, args_length1);
#line 18 "/home/jens/Source/shotwell/src/International.vala"
	_tmp1_ = _tmp0_;
#line 18 "/home/jens/Source/shotwell/src/International.vala"
	bindtextdomain (package_name, _tmp1_);
#line 18 "/home/jens/Source/shotwell/src/International.vala"
	_g_free0 (_tmp1_);
#line 19 "/home/jens/Source/shotwell/src/International.vala"
	bind_textdomain_codeset (package_name, "UTF-8");
#line 20 "/home/jens/Source/shotwell/src/International.vala"
	textdomain (package_name);
#line 62 "International.c"
}


gchar*
international_support_get_langpack_dir_path (gchar** args,
                                             int args_length1)
{
	gchar* result = NULL;
	GFile* local_langpack_dir = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	GFile* _tmp3_;
	GFile* _tmp4_;
	GFile* _tmp5_;
	GFile* _tmp6_;
	GFile* _tmp7_;
	GFile* _tmp8_;
	gchar* _tmp9_ = NULL;
	GFile* _tmp10_;
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp0_ = args[0];
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp1_ = g_find_program_in_path (_tmp0_);
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp2_ = _tmp1_;
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp3_ = g_file_new_for_path (_tmp2_);
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp4_ = _tmp3_;
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp5_ = g_file_get_parent (_tmp4_);
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp6_ = _tmp5_;
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp7_ = g_file_get_child (_tmp6_, "locale-langpack");
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_tmp8_ = _tmp7_;
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_g_object_unref0 (_tmp6_);
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_g_object_unref0 (_tmp4_);
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	_g_free0 (_tmp2_);
#line 24 "/home/jens/Source/shotwell/src/International.vala"
	local_langpack_dir = _tmp8_;
#line 28 "/home/jens/Source/shotwell/src/International.vala"
	_tmp10_ = local_langpack_dir;
#line 28 "/home/jens/Source/shotwell/src/International.vala"
	if (g_file_query_exists (_tmp10_, NULL)) {
#line 113 "International.c"
		GFile* _tmp11_;
		gchar* _tmp12_;
#line 28 "/home/jens/Source/shotwell/src/International.vala"
		_tmp11_ = local_langpack_dir;
#line 28 "/home/jens/Source/shotwell/src/International.vala"
		_tmp12_ = g_file_get_path (_tmp11_);
#line 28 "/home/jens/Source/shotwell/src/International.vala"
		_g_free0 (_tmp9_);
#line 28 "/home/jens/Source/shotwell/src/International.vala"
		_tmp9_ = _tmp12_;
#line 124 "International.c"
	} else {
		gchar* _tmp13_;
#line 29 "/home/jens/Source/shotwell/src/International.vala"
		_tmp13_ = g_strdup (INTERNATIONAL_SUPPORT_LANGUAGE_SUPPORT_DIRECTORY);
#line 29 "/home/jens/Source/shotwell/src/International.vala"
		_g_free0 (_tmp9_);
#line 29 "/home/jens/Source/shotwell/src/International.vala"
		_tmp9_ = _tmp13_;
#line 133 "International.c"
	}
#line 28 "/home/jens/Source/shotwell/src/International.vala"
	result = _tmp9_;
#line 28 "/home/jens/Source/shotwell/src/International.vala"
	_g_object_unref0 (local_langpack_dir);
#line 28 "/home/jens/Source/shotwell/src/International.vala"
	return result;
#line 141 "International.c"
}



