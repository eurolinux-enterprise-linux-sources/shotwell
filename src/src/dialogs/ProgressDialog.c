/* ProgressDialog.c generated by valac 0.40.4, the Vala compiler
 * generated from ProgressDialog.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 * Copyright 2017 Jens Georg <mail@jensge.org>
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>
#include <glib/gi18n-lib.h>
#include <float.h>
#include <math.h>


#define TYPE_PROGRESS_DIALOG (progress_dialog_get_type ())
#define PROGRESS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROGRESS_DIALOG, ProgressDialog))
#define PROGRESS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROGRESS_DIALOG, ProgressDialogClass))
#define IS_PROGRESS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROGRESS_DIALOG))
#define IS_PROGRESS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROGRESS_DIALOG))
#define PROGRESS_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROGRESS_DIALOG, ProgressDialogClass))

typedef struct _ProgressDialog ProgressDialog;
typedef struct _ProgressDialogClass ProgressDialogClass;
typedef struct _ProgressDialogPrivate ProgressDialogPrivate;
enum  {
	PROGRESS_DIALOG_0_PROPERTY,
	PROGRESS_DIALOG_NUM_PROPERTIES
};
static GParamSpec* progress_dialog_properties[PROGRESS_DIALOG_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _ProgressDialog {
	GtkWindow parent_instance;
	ProgressDialogPrivate * priv;
};

struct _ProgressDialogClass {
	GtkWindowClass parent_class;
};

struct _ProgressDialogPrivate {
	GtkProgressBar* progress_bar;
	GtkButton* cancel_button;
	GCancellable* cancellable;
	guint64 last_count;
	gint update_every;
	gint minimum_on_screen_time_msec;
	gulong time_started;
};


static gpointer progress_dialog_parent_class = NULL;

GType progress_dialog_get_type (void) G_GNUC_CONST;
#define PROGRESS_DIALOG_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PROGRESS_DIALOG, ProgressDialogPrivate))
ProgressDialog* progress_dialog_new (GtkWindow* owner,
                                     const gchar* text,
                                     GCancellable* cancellable);
ProgressDialog* progress_dialog_construct (GType object_type,
                                           GtkWindow* owner,
                                           const gchar* text,
                                           GCancellable* cancellable);
#define RESOURCES_CANCEL_LABEL _ ("_Cancel")
static void progress_dialog_on_cancel (ProgressDialog* self);
static void _progress_dialog_on_cancel_gtk_button_clicked (GtkButton* _sender,
                                                    gpointer self);
static gboolean progress_dialog_on_window_closed (ProgressDialog* self);
static gboolean _progress_dialog_on_window_closed_gtk_widget_delete_event (GtkWidget* _sender,
                                                                    GdkEventAny* event,
                                                                    gpointer self);
gulong now_ms (void);
static void progress_dialog_real_realize (GtkWidget* base);
void progress_dialog_update_display_every (ProgressDialog* self,
                                           gint update_every);
void progress_dialog_set_minimum_on_screen_time_msec (ProgressDialog* self,
                                                      gint minimum_on_screen_time_msec);
void progress_dialog_set_fraction (ProgressDialog* self,
                                   gint current,
                                   gint total);
void progress_dialog_set_percentage (ProgressDialog* self,
                                     gdouble pct);
static void progress_dialog_maybe_show_all (ProgressDialog* self,
                                     gdouble pct);
void progress_dialog_set_status (ProgressDialog* self,
                                 const gchar* text);
gboolean progress_dialog_monitor (ProgressDialog* self,
                                  guint64 count,
                                  guint64 total,
                                  gboolean do_event_loop);
void spin_event_loop (void);
void progress_dialog_close (ProgressDialog* self);
static void progress_dialog_finalize (GObject * obj);


static gpointer
_g_object_ref0 (gpointer self)
{
#line 21 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	return self ? g_object_ref (self) : NULL;
#line 115 "ProgressDialog.c"
}


static void
_progress_dialog_on_cancel_gtk_button_clicked (GtkButton* _sender,
                                               gpointer self)
{
#line 38 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	progress_dialog_on_cancel ((ProgressDialog*) self);
#line 125 "ProgressDialog.c"
}


static gboolean
_progress_dialog_on_window_closed_gtk_widget_delete_event (GtkWidget* _sender,
                                                           GdkEventAny* event,
                                                           gpointer self)
{
	gboolean result;
	result = progress_dialog_on_window_closed ((ProgressDialog*) self);
#line 39 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	return result;
#line 138 "ProgressDialog.c"
}


ProgressDialog*
progress_dialog_construct (GType object_type,
                           GtkWindow* owner,
                           const gchar* text,
                           GCancellable* cancellable)
{
	ProgressDialog * self = NULL;
	GCancellable* _tmp0_;
	GtkProgressBar* _tmp1_;
	GtkProgressBar* _tmp2_;
	GtkBox* vbox_bar = NULL;
	GtkBox* _tmp3_;
	GtkBox* _tmp4_;
	GtkProgressBar* _tmp5_;
	GtkBox* hbox = NULL;
	GtkBox* _tmp8_;
	GtkBox* _tmp9_;
	GtkBox* _tmp10_;
	GtkButton* _tmp11_;
	GtkLabel* primary_text_label = NULL;
	GtkLabel* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	GtkBox* vbox = NULL;
	GtkBox* _tmp17_;
	GtkBox* _tmp18_;
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_val_if_fail ((owner == NULL) || GTK_IS_WINDOW (owner), NULL);
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_val_if_fail (text != NULL, NULL);
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_val_if_fail ((cancellable == NULL) || G_IS_CANCELLABLE (cancellable), NULL);
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self = (ProgressDialog*) g_object_new (object_type, NULL);
#line 21 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp0_ = _g_object_ref0 (cancellable);
#line 21 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (self->priv->cancellable);
#line 21 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->cancellable = _tmp0_;
#line 23 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_window_set_title (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow), text);
#line 24 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_window_set_resizable (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow), FALSE);
#line 25 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (owner != NULL) {
#line 26 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		gtk_window_set_transient_for (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow), owner);
#line 190 "ProgressDialog.c"
	}
#line 27 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_window_set_modal (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow), TRUE);
#line 28 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_window_set_type_hint (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow), GDK_WINDOW_TYPE_HINT_DIALOG);
#line 30 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp1_ = self->priv->progress_bar;
#line 30 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_size_request (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, gtk_widget_get_type (), GtkWidget), 300, -1);
#line 31 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp2_ = self->priv->progress_bar;
#line 31 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_progress_bar_set_show_text (_tmp2_, TRUE);
#line 33 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp3_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
#line 33 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_object_ref_sink (_tmp3_);
#line 33 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	vbox_bar = _tmp3_;
#line 34 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp4_ = vbox_bar;
#line 34 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp5_ = self->priv->progress_bar;
#line 34 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_box_pack_start (_tmp4_, G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, gtk_widget_get_type (), GtkWidget), TRUE, FALSE, (guint) 0);
#line 36 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (cancellable != NULL) {
#line 218 "ProgressDialog.c"
		GtkButton* _tmp6_;
		GtkButton* _tmp7_;
#line 37 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp6_ = (GtkButton*) gtk_button_new_with_mnemonic (RESOURCES_CANCEL_LABEL);
#line 37 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		g_object_ref_sink (_tmp6_);
#line 37 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_g_object_unref0 (self->priv->cancel_button);
#line 37 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		self->priv->cancel_button = _tmp6_;
#line 38 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp7_ = self->priv->cancel_button;
#line 38 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		g_signal_connect_object (_tmp7_, "clicked", (GCallback) _progress_dialog_on_cancel_gtk_button_clicked, self, 0);
#line 39 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		g_signal_connect_object (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget), "delete-event", (GCallback) _progress_dialog_on_window_closed_gtk_widget_delete_event, self, 0);
#line 235 "ProgressDialog.c"
	}
#line 42 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp8_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 8);
#line 42 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_object_ref_sink (_tmp8_);
#line 42 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	hbox = _tmp8_;
#line 43 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp9_ = hbox;
#line 43 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp10_ = vbox_bar;
#line 43 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_box_pack_start (_tmp9_, G_TYPE_CHECK_INSTANCE_CAST (_tmp10_, gtk_widget_get_type (), GtkWidget), TRUE, FALSE, (guint) 0);
#line 44 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp11_ = self->priv->cancel_button;
#line 44 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (_tmp11_ != NULL) {
#line 253 "ProgressDialog.c"
		GtkBox* _tmp12_;
		GtkButton* _tmp13_;
#line 45 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp12_ = hbox;
#line 45 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp13_ = self->priv->cancel_button;
#line 45 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		gtk_box_pack_end (_tmp12_, G_TYPE_CHECK_INSTANCE_CAST (_tmp13_, gtk_widget_get_type (), GtkWidget), FALSE, FALSE, (guint) 0);
#line 262 "ProgressDialog.c"
	}
#line 47 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp14_ = (GtkLabel*) gtk_label_new ("");
#line 47 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_object_ref_sink (_tmp14_);
#line 47 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	primary_text_label = _tmp14_;
#line 48 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp15_ = g_strdup_printf ("<span weight=\"bold\">%s</span>", text);
#line 48 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp16_ = _tmp15_;
#line 48 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_label_set_markup (primary_text_label, _tmp16_);
#line 48 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_free0 (_tmp16_);
#line 49 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_label_set_xalign (primary_text_label, 0.0f);
#line 50 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_label_set_yalign (primary_text_label, 0.5f);
#line 52 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp17_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 12);
#line 52 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_object_ref_sink (_tmp17_);
#line 52 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	vbox = _tmp17_;
#line 53 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_box_pack_start (vbox, G_TYPE_CHECK_INSTANCE_CAST (primary_text_label, gtk_widget_get_type (), GtkWidget), FALSE, FALSE, (guint) 0);
#line 54 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp18_ = hbox;
#line 54 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_box_pack_start (vbox, G_TYPE_CHECK_INSTANCE_CAST (_tmp18_, gtk_widget_get_type (), GtkWidget), TRUE, FALSE, (guint) 0);
#line 55 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_halign (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), GTK_ALIGN_CENTER);
#line 56 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_valign (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), GTK_ALIGN_CENTER);
#line 57 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_hexpand (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), TRUE);
#line 58 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_vexpand (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), TRUE);
#line 59 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_margin_start (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), 12);
#line 60 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_margin_end (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), 12);
#line 61 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_margin_top (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), 12);
#line 62 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_margin_bottom (G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget), 12);
#line 64 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_container_add (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_container_get_type (), GtkContainer), G_TYPE_CHECK_INSTANCE_CAST (vbox, gtk_widget_get_type (), GtkWidget));
#line 66 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->time_started = now_ms ();
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (vbox);
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (primary_text_label);
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (hbox);
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (vbox_bar);
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	return self;
#line 324 "ProgressDialog.c"
}


ProgressDialog*
progress_dialog_new (GtkWindow* owner,
                     const gchar* text,
                     GCancellable* cancellable)
{
#line 20 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	return progress_dialog_construct (TYPE_PROGRESS_DIALOG, owner, text, cancellable);
#line 335 "ProgressDialog.c"
}


static void
progress_dialog_real_realize (GtkWidget* base)
{
	ProgressDialog * self;
	GCancellable* _tmp0_;
#line 69 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_PROGRESS_DIALOG, ProgressDialog);
#line 70 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	GTK_WIDGET_CLASS (progress_dialog_parent_class)->realize (G_TYPE_CHECK_INSTANCE_CAST (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow), gtk_widget_get_type (), GtkWidget));
#line 73 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp0_ = self->priv->cancellable;
#line 73 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (_tmp0_ == NULL) {
#line 352 "ProgressDialog.c"
		GdkWindow* _tmp1_;
#line 74 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp1_ = gtk_widget_get_window (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget));
#line 74 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		gdk_window_set_functions (_tmp1_, GDK_FUNC_MOVE);
#line 358 "ProgressDialog.c"
	}
}


void
progress_dialog_update_display_every (ProgressDialog* self,
                                      gint update_every)
{
#line 77 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 78 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_vala_assert (update_every >= 1, "update_every >= 1");
#line 80 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->update_every = update_every;
#line 373 "ProgressDialog.c"
}


void
progress_dialog_set_minimum_on_screen_time_msec (ProgressDialog* self,
                                                 gint minimum_on_screen_time_msec)
{
#line 83 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 84 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->minimum_on_screen_time_msec = minimum_on_screen_time_msec;
#line 385 "ProgressDialog.c"
}


void
progress_dialog_set_fraction (ProgressDialog* self,
                              gint current,
                              gint total)
{
#line 87 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 88 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	progress_dialog_set_percentage (self, ((gdouble) current) / ((gdouble) total));
#line 398 "ProgressDialog.c"
}


void
progress_dialog_set_percentage (ProgressDialog* self,
                                gdouble pct)
{
	GtkProgressBar* _tmp0_;
	GtkProgressBar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
#line 91 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 92 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	pct = CLAMP (pct, 0.0, 1.0);
#line 94 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	progress_dialog_maybe_show_all (self, pct);
#line 96 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp0_ = self->priv->progress_bar;
#line 96 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_progress_bar_set_fraction (_tmp0_, pct);
#line 97 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp1_ = self->priv->progress_bar;
#line 97 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp2_ = g_strdup_printf (_ ("%d%%"), (gint) (pct * 100.0));
#line 97 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp3_ = _tmp2_;
#line 97 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_progress_bar_set_text (_tmp1_, _tmp3_);
#line 97 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_free0 (_tmp3_);
#line 430 "ProgressDialog.c"
}


void
progress_dialog_set_status (ProgressDialog* self,
                            const gchar* text)
{
	GtkProgressBar* _tmp0_;
#line 105 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 105 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (text != NULL);
#line 106 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp0_ = self->priv->progress_bar;
#line 106 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_progress_bar_set_text (_tmp0_, text);
#line 112 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_show_all (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget));
#line 449 "ProgressDialog.c"
}


gboolean
progress_dialog_monitor (ProgressDialog* self,
                         guint64 count,
                         guint64 total,
                         gboolean do_event_loop)
{
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	guint64 _tmp1_;
	gboolean _tmp4_ = FALSE;
	GCancellable* _tmp5_;
	gboolean keep_going = FALSE;
#line 116 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_val_if_fail (IS_PROGRESS_DIALOG (self), FALSE);
#line 117 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp1_ = self->priv->last_count;
#line 117 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (_tmp1_ == G_MAXUINT64) {
#line 117 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp0_ = TRUE;
#line 473 "ProgressDialog.c"
	} else {
		guint64 _tmp2_;
		gint _tmp3_;
#line 117 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp2_ = self->priv->last_count;
#line 117 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp3_ = self->priv->update_every;
#line 117 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp0_ = (count - _tmp2_) >= ((guint64) _tmp3_);
#line 483 "ProgressDialog.c"
	}
#line 117 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (_tmp0_) {
#line 118 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		progress_dialog_set_percentage (self, ((gdouble) count) / ((gdouble) total));
#line 119 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		self->priv->last_count = count;
#line 491 "ProgressDialog.c"
	}
#line 122 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp5_ = self->priv->cancellable;
#line 122 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (_tmp5_ != NULL) {
#line 497 "ProgressDialog.c"
		GCancellable* _tmp6_;
#line 122 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp6_ = self->priv->cancellable;
#line 122 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp4_ = !g_cancellable_is_cancelled (_tmp6_);
#line 503 "ProgressDialog.c"
	} else {
#line 122 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp4_ = TRUE;
#line 507 "ProgressDialog.c"
	}
#line 122 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	keep_going = _tmp4_;
#line 130 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (do_event_loop) {
#line 131 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		spin_event_loop ();
#line 515 "ProgressDialog.c"
	}
#line 133 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	result = keep_going;
#line 133 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	return result;
#line 521 "ProgressDialog.c"
}


void
progress_dialog_close (ProgressDialog* self)
{
#line 136 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 141 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_hide (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget));
#line 142 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_destroy (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget));
#line 534 "ProgressDialog.c"
}


static gboolean
progress_dialog_on_window_closed (ProgressDialog* self)
{
	gboolean result = FALSE;
#line 145 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_val_if_fail (IS_PROGRESS_DIALOG (self), FALSE);
#line 146 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	progress_dialog_on_cancel (self);
#line 147 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	result = FALSE;
#line 147 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	return result;
#line 550 "ProgressDialog.c"
}


static void
progress_dialog_on_cancel (ProgressDialog* self)
{
	GCancellable* _tmp0_;
	GtkButton* _tmp2_;
#line 151 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 152 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp0_ = self->priv->cancellable;
#line 152 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (_tmp0_ != NULL) {
#line 565 "ProgressDialog.c"
		GCancellable* _tmp1_;
#line 153 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp1_ = self->priv->cancellable;
#line 153 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		g_cancellable_cancel (_tmp1_);
#line 571 "ProgressDialog.c"
	}
#line 155 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp2_ = self->priv->cancel_button;
#line 155 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	gtk_widget_set_sensitive (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, gtk_widget_get_type (), GtkWidget), FALSE);
#line 577 "ProgressDialog.c"
}


static void
progress_dialog_maybe_show_all (ProgressDialog* self,
                                gdouble pct)
{
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_;
	gboolean _tmp2_;
#line 158 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_return_if_fail (IS_PROGRESS_DIALOG (self));
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp1_ = gtk_widget_get_visible (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget));
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp2_ = _tmp1_;
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (!_tmp2_) {
#line 596 "ProgressDialog.c"
		gulong _tmp3_;
		gint _tmp4_;
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp3_ = self->priv->time_started;
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp4_ = self->priv->minimum_on_screen_time_msec;
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp0_ = (now_ms () - _tmp3_) > ((gulong) _tmp4_);
#line 605 "ProgressDialog.c"
	} else {
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp0_ = FALSE;
#line 609 "ProgressDialog.c"
	}
#line 161 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	if (_tmp0_) {
#line 613 "ProgressDialog.c"
		gdouble pps = 0.0;
		gint _tmp5_;
		gdouble ttc = 0.0;
		gdouble _tmp6_;
		gdouble _tmp7_;
		gint _tmp8_;
#line 163 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp5_ = self->priv->minimum_on_screen_time_msec;
#line 163 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		pps = (pct * 100.0) / _tmp5_;
#line 165 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp6_ = pps;
#line 165 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		ttc = 100.0 / _tmp6_;
#line 168 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp7_ = ttc;
#line 168 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		_tmp8_ = self->priv->minimum_on_screen_time_msec;
#line 168 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
		if (_tmp7_ > ((gdouble) _tmp8_)) {
#line 173 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
			gtk_widget_show_all (G_TYPE_CHECK_INSTANCE_CAST (self, gtk_widget_get_type (), GtkWidget));
#line 174 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
			spin_event_loop ();
#line 638 "ProgressDialog.c"
		}
	}
}


static void
progress_dialog_class_init (ProgressDialogClass * klass)
{
#line 8 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	progress_dialog_parent_class = g_type_class_peek_parent (klass);
#line 8 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_type_class_add_private (klass, sizeof (ProgressDialogPrivate));
#line 8 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	((GtkWidgetClass *) klass)->realize = (void (*) (GtkWidget *)) progress_dialog_real_realize;
#line 8 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	G_OBJECT_CLASS (klass)->finalize = progress_dialog_finalize;
#line 655 "ProgressDialog.c"
}


static void
progress_dialog_instance_init (ProgressDialog * self)
{
	GtkProgressBar* _tmp0_;
#line 8 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv = PROGRESS_DIALOG_GET_PRIVATE (self);
#line 9 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_tmp0_ = (GtkProgressBar*) gtk_progress_bar_new ();
#line 9 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	g_object_ref_sink (_tmp0_);
#line 9 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->progress_bar = _tmp0_;
#line 10 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->cancel_button = NULL;
#line 12 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->last_count = G_MAXUINT64;
#line 13 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->update_every = 1;
#line 14 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self->priv->minimum_on_screen_time_msec = 500;
#line 679 "ProgressDialog.c"
}


static void
progress_dialog_finalize (GObject * obj)
{
	ProgressDialog * self;
#line 8 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PROGRESS_DIALOG, ProgressDialog);
#line 9 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (self->priv->progress_bar);
#line 10 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (self->priv->cancel_button);
#line 11 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	_g_object_unref0 (self->priv->cancellable);
#line 8 "/home/jens/Source/shotwell/src/dialogs/ProgressDialog.vala"
	G_OBJECT_CLASS (progress_dialog_parent_class)->finalize (obj);
#line 697 "ProgressDialog.c"
}


GType
progress_dialog_get_type (void)
{
	static volatile gsize progress_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&progress_dialog_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ProgressDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) progress_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ProgressDialog), 0, (GInstanceInitFunc) progress_dialog_instance_init, NULL };
		GType progress_dialog_type_id;
		progress_dialog_type_id = g_type_register_static (gtk_window_get_type (), "ProgressDialog", &g_define_type_info, 0);
		g_once_init_leave (&progress_dialog_type_id__volatile, progress_dialog_type_id);
	}
	return progress_dialog_type_id__volatile;
}



