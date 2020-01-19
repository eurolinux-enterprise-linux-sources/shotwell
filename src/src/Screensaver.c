/* Screensaver.c generated by valac 0.40.4, the Vala compiler
 * generated from Screensaver.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>
#include <gobject/gvaluecollector.h>


#define TYPE_SCREENSAVER (screensaver_get_type ())
#define SCREENSAVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SCREENSAVER, Screensaver))
#define SCREENSAVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SCREENSAVER, ScreensaverClass))
#define IS_SCREENSAVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SCREENSAVER))
#define IS_SCREENSAVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SCREENSAVER))
#define SCREENSAVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SCREENSAVER, ScreensaverClass))

typedef struct _Screensaver Screensaver;
typedef struct _ScreensaverClass ScreensaverClass;
typedef struct _ScreensaverPrivate ScreensaverPrivate;

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
#define _application_unref0(var) ((var == NULL) ? NULL : (var = (application_unref (var), NULL)))
typedef struct _ParamSpecScreensaver ParamSpecScreensaver;

struct _Screensaver {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ScreensaverPrivate * priv;
};

struct _ScreensaverClass {
	GTypeClass parent_class;
	void (*finalize) (Screensaver *self);
};

struct _ScreensaverPrivate {
	guint32 cookie;
};

struct _ParamSpecScreensaver {
	GParamSpec parent_instance;
};


static gpointer screensaver_parent_class = NULL;

gpointer screensaver_ref (gpointer instance);
void screensaver_unref (gpointer instance);
GParamSpec* param_spec_screensaver (const gchar* name,
                                    const gchar* nick,
                                    const gchar* blurb,
                                    GType object_type,
                                    GParamFlags flags);
void value_set_screensaver (GValue* value,
                            gpointer v_object);
void value_take_screensaver (GValue* value,
                             gpointer v_object);
gpointer value_get_screensaver (const GValue* value);
GType screensaver_get_type (void) G_GNUC_CONST;
#define SCREENSAVER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SCREENSAVER, ScreensaverPrivate))
Screensaver* screensaver_new (void);
Screensaver* screensaver_construct (GType object_type);
void screensaver_inhibit (Screensaver* self,
                          const gchar* reason);
gpointer application_ref (gpointer instance);
void application_unref (gpointer instance);
GParamSpec* param_spec_application (const gchar* name,
                                    const gchar* nick,
                                    const gchar* blurb,
                                    GType object_type,
                                    GParamFlags flags);
void value_set_application (GValue* value,
                            gpointer v_object);
void value_take_application (GValue* value,
                             gpointer v_object);
gpointer value_get_application (const GValue* value);
GType application_get_type (void) G_GNUC_CONST;
Application* application_get_instance (void);
guint application_inhibit (Application* self,
                           GtkApplicationInhibitFlags what,
                           const gchar* reason);
void screensaver_uninhibit (Screensaver* self);
void application_uninhibit (Application* self,
                            guint cookie);
static void screensaver_finalize (Screensaver * obj);


Screensaver*
screensaver_construct (GType object_type)
{
	Screensaver* self = NULL;
#line 10 "/home/jens/Source/shotwell/src/Screensaver.vala"
	self = (Screensaver*) g_type_create_instance (object_type);
#line 10 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return self;
#line 115 "Screensaver.c"
}


Screensaver*
screensaver_new (void)
{
#line 10 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return screensaver_construct (TYPE_SCREENSAVER);
#line 124 "Screensaver.c"
}


void
screensaver_inhibit (Screensaver* self,
                     const gchar* reason)
{
	guint32 _tmp0_;
	Application* _tmp1_;
	Application* _tmp2_;
#line 13 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_return_if_fail (IS_SCREENSAVER (self));
#line 13 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_return_if_fail (reason != NULL);
#line 14 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_tmp0_ = self->priv->cookie;
#line 14 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (_tmp0_ != ((guint32) 0)) {
#line 15 "/home/jens/Source/shotwell/src/Screensaver.vala"
		return;
#line 145 "Screensaver.c"
	}
#line 17 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_tmp1_ = application_get_instance ();
#line 17 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_tmp2_ = _tmp1_;
#line 17 "/home/jens/Source/shotwell/src/Screensaver.vala"
	self->priv->cookie = (guint32) application_inhibit (_tmp2_, GTK_APPLICATION_INHIBIT_IDLE | GTK_APPLICATION_INHIBIT_SUSPEND, _ ("Slideshow"));
#line 17 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_application_unref0 (_tmp2_);
#line 155 "Screensaver.c"
}


void
screensaver_uninhibit (Screensaver* self)
{
	guint32 _tmp0_;
	Application* _tmp1_;
	Application* _tmp2_;
	guint32 _tmp3_;
#line 21 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_return_if_fail (IS_SCREENSAVER (self));
#line 22 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_tmp0_ = self->priv->cookie;
#line 22 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (_tmp0_ == ((guint32) 0)) {
#line 23 "/home/jens/Source/shotwell/src/Screensaver.vala"
		return;
#line 174 "Screensaver.c"
	}
#line 25 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_tmp1_ = application_get_instance ();
#line 25 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_tmp2_ = _tmp1_;
#line 25 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_tmp3_ = self->priv->cookie;
#line 25 "/home/jens/Source/shotwell/src/Screensaver.vala"
	application_uninhibit (_tmp2_, (guint) _tmp3_);
#line 25 "/home/jens/Source/shotwell/src/Screensaver.vala"
	_application_unref0 (_tmp2_);
#line 26 "/home/jens/Source/shotwell/src/Screensaver.vala"
	self->priv->cookie = (guint32) 0;
#line 188 "Screensaver.c"
}


static void
value_screensaver_init (GValue* value)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	value->data[0].v_pointer = NULL;
#line 197 "Screensaver.c"
}


static void
value_screensaver_free_value (GValue* value)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (value->data[0].v_pointer) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		screensaver_unref (value->data[0].v_pointer);
#line 208 "Screensaver.c"
	}
}


static void
value_screensaver_copy_value (const GValue* src_value,
                              GValue* dest_value)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (src_value->data[0].v_pointer) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		dest_value->data[0].v_pointer = screensaver_ref (src_value->data[0].v_pointer);
#line 221 "Screensaver.c"
	} else {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		dest_value->data[0].v_pointer = NULL;
#line 225 "Screensaver.c"
	}
}


static gpointer
value_screensaver_peek_pointer (const GValue* value)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return value->data[0].v_pointer;
#line 235 "Screensaver.c"
}


static gchar*
value_screensaver_collect_value (GValue* value,
                                 guint n_collect_values,
                                 GTypeCValue* collect_values,
                                 guint collect_flags)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (collect_values[0].v_pointer) {
#line 247 "Screensaver.c"
		Screensaver * object;
		object = collect_values[0].v_pointer;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		if (object->parent_instance.g_class == NULL) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 254 "Screensaver.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 258 "Screensaver.c"
		}
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		value->data[0].v_pointer = screensaver_ref (object);
#line 262 "Screensaver.c"
	} else {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		value->data[0].v_pointer = NULL;
#line 266 "Screensaver.c"
	}
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return NULL;
#line 270 "Screensaver.c"
}


static gchar*
value_screensaver_lcopy_value (const GValue* value,
                               guint n_collect_values,
                               GTypeCValue* collect_values,
                               guint collect_flags)
{
	Screensaver ** object_p;
	object_p = collect_values[0].v_pointer;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (!object_p) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 286 "Screensaver.c"
	}
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (!value->data[0].v_pointer) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		*object_p = NULL;
#line 292 "Screensaver.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		*object_p = value->data[0].v_pointer;
#line 296 "Screensaver.c"
	} else {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		*object_p = screensaver_ref (value->data[0].v_pointer);
#line 300 "Screensaver.c"
	}
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return NULL;
#line 304 "Screensaver.c"
}


GParamSpec*
param_spec_screensaver (const gchar* name,
                        const gchar* nick,
                        const gchar* blurb,
                        GType object_type,
                        GParamFlags flags)
{
	ParamSpecScreensaver* spec;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_SCREENSAVER), NULL);
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return G_PARAM_SPEC (spec);
#line 324 "Screensaver.c"
}


gpointer
value_get_screensaver (const GValue* value)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_SCREENSAVER), NULL);
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return value->data[0].v_pointer;
#line 335 "Screensaver.c"
}


void
value_set_screensaver (GValue* value,
                       gpointer v_object)
{
	Screensaver * old;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_SCREENSAVER));
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	old = value->data[0].v_pointer;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (v_object) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_SCREENSAVER));
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		value->data[0].v_pointer = v_object;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		screensaver_ref (value->data[0].v_pointer);
#line 358 "Screensaver.c"
	} else {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		value->data[0].v_pointer = NULL;
#line 362 "Screensaver.c"
	}
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (old) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		screensaver_unref (old);
#line 368 "Screensaver.c"
	}
}


void
value_take_screensaver (GValue* value,
                        gpointer v_object)
{
	Screensaver * old;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_SCREENSAVER));
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	old = value->data[0].v_pointer;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (v_object) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_SCREENSAVER));
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		value->data[0].v_pointer = v_object;
#line 390 "Screensaver.c"
	} else {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		value->data[0].v_pointer = NULL;
#line 394 "Screensaver.c"
	}
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (old) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		screensaver_unref (old);
#line 400 "Screensaver.c"
	}
}


static void
screensaver_class_init (ScreensaverClass * klass)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	screensaver_parent_class = g_type_class_peek_parent (klass);
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	((ScreensaverClass *) klass)->finalize = screensaver_finalize;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_type_class_add_private (klass, sizeof (ScreensaverPrivate));
#line 414 "Screensaver.c"
}


static void
screensaver_instance_init (Screensaver * self)
{
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	self->priv = SCREENSAVER_GET_PRIVATE (self);
#line 8 "/home/jens/Source/shotwell/src/Screensaver.vala"
	self->priv->cookie = (guint32) 0;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	self->ref_count = 1;
#line 427 "Screensaver.c"
}


static void
screensaver_finalize (Screensaver * obj)
{
	Screensaver * self;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_SCREENSAVER, Screensaver);
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_signal_handlers_destroy (self);
#line 439 "Screensaver.c"
}


GType
screensaver_get_type (void)
{
	static volatile gsize screensaver_type_id__volatile = 0;
	if (g_once_init_enter (&screensaver_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_screensaver_init, value_screensaver_free_value, value_screensaver_copy_value, value_screensaver_peek_pointer, "p", value_screensaver_collect_value, "p", value_screensaver_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ScreensaverClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) screensaver_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Screensaver), 0, (GInstanceInitFunc) screensaver_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType screensaver_type_id;
		screensaver_type_id = g_type_register_fundamental (g_type_fundamental_next (), "Screensaver", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&screensaver_type_id__volatile, screensaver_type_id);
	}
	return screensaver_type_id__volatile;
}


gpointer
screensaver_ref (gpointer instance)
{
	Screensaver * self;
	self = instance;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	g_atomic_int_inc (&self->ref_count);
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	return instance;
#line 468 "Screensaver.c"
}


void
screensaver_unref (gpointer instance)
{
	Screensaver * self;
	self = instance;
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		SCREENSAVER_GET_CLASS (self)->finalize (self);
#line 7 "/home/jens/Source/shotwell/src/Screensaver.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 483 "Screensaver.c"
	}
}



