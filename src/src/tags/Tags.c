/* Tags.c generated by valac 0.40.4, the Vala compiler
 * generated from Tags.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */


#include <glib.h>
#include <glib-object.h>




void tags_init (GError** error);
void tags_sidebar_entry_init (void);
void tags_terminate (void);
void tags_sidebar_entry_terminate (void);


void
tags_init (GError** error)
{
#line 10 "/home/jens/Source/shotwell/src/tags/Tags.vala"
	tags_sidebar_entry_init ();
#line 29 "Tags.c"
}


void
tags_terminate (void)
{
#line 14 "/home/jens/Source/shotwell/src/tags/Tags.vala"
	tags_sidebar_entry_terminate ();
#line 38 "Tags.c"
}



