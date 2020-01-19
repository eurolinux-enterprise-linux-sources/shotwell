/* Photos.c generated by valac 0.34.4, the Vala compiler
 * generated from Photos.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */
/* This file is the master unit file for the Photo unit.  It should be edited to include
 * whatever code is deemed necessary.
 *
 * The init() and terminate() methods are mandatory.
 *
 * If the unit needs to be configured prior to initialization, add the proper parameters to
 * the preconfigure() method, implement it, and ensure in init() that it's been called.
 */

#include <glib.h>
#include <glib-object.h>


#define TYPE_PHOTO_FILE_FORMAT (photo_file_format_get_type ())

typedef enum  {
	PHOTO_FILE_FORMAT_JFIF,
	PHOTO_FILE_FORMAT_RAW,
	PHOTO_FILE_FORMAT_PNG,
	PHOTO_FILE_FORMAT_TIFF,
	PHOTO_FILE_FORMAT_BMP,
	PHOTO_FILE_FORMAT_UNKNOWN
} PhotoFileFormat;



void photos_preconfigure (void);
void photos_init (GError** error);
GType photo_file_format_get_type (void) G_GNUC_CONST;
PhotoFileFormat* photo_file_format_get_supported (int* result_length1);
void photo_file_format_init (PhotoFileFormat self);
void photos_terminate (void);


void photos_preconfigure (void) {
}


void photos_init (GError** error) {
	gint _tmp0_ = 0;
	PhotoFileFormat* _tmp1_ = NULL;
#line 23 "/home/jens/Source/shotwell/src/photos/Photos.vala"
	_tmp1_ = photo_file_format_get_supported (&_tmp0_);
#line 53 "Photos.c"
	{
		PhotoFileFormat* format_collection = NULL;
		gint format_collection_length1 = 0;
		gint _format_collection_size_ = 0;
		gint format_it = 0;
#line 23 "/home/jens/Source/shotwell/src/photos/Photos.vala"
		format_collection = _tmp1_;
#line 23 "/home/jens/Source/shotwell/src/photos/Photos.vala"
		format_collection_length1 = _tmp0_;
#line 23 "/home/jens/Source/shotwell/src/photos/Photos.vala"
		for (format_it = 0; format_it < _tmp0_; format_it = format_it + 1) {
#line 65 "Photos.c"
			PhotoFileFormat format = 0;
#line 23 "/home/jens/Source/shotwell/src/photos/Photos.vala"
			format = format_collection[format_it];
#line 69 "Photos.c"
			{
				PhotoFileFormat _tmp2_ = 0;
#line 24 "/home/jens/Source/shotwell/src/photos/Photos.vala"
				_tmp2_ = format;
#line 24 "/home/jens/Source/shotwell/src/photos/Photos.vala"
				photo_file_format_init (_tmp2_);
#line 76 "Photos.c"
			}
		}
#line 23 "/home/jens/Source/shotwell/src/photos/Photos.vala"
		format_collection = (g_free (format_collection), NULL);
#line 81 "Photos.c"
	}
}


void photos_terminate (void) {
}



