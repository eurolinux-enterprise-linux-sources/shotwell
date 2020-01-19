/* WebAuthenticationPane.c generated by valac 0.40.4, the Vala compiler
 * generated from WebAuthenticationPane.vala, do not modify */

/* Copyright 2016 Jens Georg <mail@jensge.org>
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */


#include <glib.h>
#include <glib-object.h>
#include "shotwell-plugin-dev-1.0.h"
#include <stdlib.h>
#include <string.h>
#include <webkit2/webkit2.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>


#define SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE (shotwell_plugins_common_web_authentication_pane_get_type ())
#define SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane))
#define SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPaneClass))
#define SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE))
#define SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE))
#define SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPaneClass))

typedef struct _ShotwellPluginsCommonWebAuthenticationPane ShotwellPluginsCommonWebAuthenticationPane;
typedef struct _ShotwellPluginsCommonWebAuthenticationPaneClass ShotwellPluginsCommonWebAuthenticationPaneClass;
typedef struct _ShotwellPluginsCommonWebAuthenticationPanePrivate ShotwellPluginsCommonWebAuthenticationPanePrivate;
enum  {
	SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_0_PROPERTY,
	SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_PREFERRED_GEOMETRY_PROPERTY,
	SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_LOGIN_URI_PROPERTY,
	SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_NUM_PROPERTIES
};
static GParamSpec* shotwell_plugins_common_web_authentication_pane_properties[SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ShotwellPluginsCommonWebAuthenticationPane {
	GObject parent_instance;
	ShotwellPluginsCommonWebAuthenticationPanePrivate * priv;
};

struct _ShotwellPluginsCommonWebAuthenticationPaneClass {
	GObjectClass parent_class;
	void (*on_page_load) (ShotwellPluginsCommonWebAuthenticationPane* self);
};

struct _ShotwellPluginsCommonWebAuthenticationPanePrivate {
	SpitPublishingDialogPaneGeometryOptions _preferred_geometry;
	gchar* _login_uri;
	WebKitWebView* webview;
};


static gpointer shotwell_plugins_common_web_authentication_pane_parent_class = NULL;
static SpitPublishingDialogPaneIface * shotwell_plugins_common_web_authentication_pane_spit_publishing_dialog_pane_parent_iface = NULL;

GType shotwell_plugins_common_web_authentication_pane_get_type (void) G_GNUC_CONST;
#define SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPanePrivate))
static void shotwell_plugins_common_web_authentication_pane_real_constructed (GObject* base);
static void shotwell_plugins_common_web_authentication_pane_on_page_load_changed (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                                           WebKitLoadEvent load_event);
static void _shotwell_plugins_common_web_authentication_pane_on_page_load_changed_webkit_web_view_load_changed (WebKitWebView* _sender,
                                                                                                         WebKitLoadEvent load_event,
                                                                                                         gpointer self);
static gboolean __lambda4_ (ShotwellPluginsCommonWebAuthenticationPane* self);
static gboolean ___lambda4__webkit_web_view_context_menu (WebKitWebView* _sender,
                                                   WebKitContextMenu* context_menu,
                                                   GdkEvent* event,
                                                   WebKitHitTestResult* hit_test_result,
                                                   gpointer self);
void shotwell_plugins_common_web_authentication_pane_on_page_load (ShotwellPluginsCommonWebAuthenticationPane* self);
static void shotwell_plugins_common_web_authentication_pane_real_on_page_load (ShotwellPluginsCommonWebAuthenticationPane* self);
void shotwell_plugins_common_web_authentication_pane_set_cursor (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                                 GdkCursorType type);
WebKitWebView* shotwell_plugins_common_web_authentication_pane_get_view (ShotwellPluginsCommonWebAuthenticationPane* self);
static SpitPublishingDialogPaneGeometryOptions shotwell_plugins_common_web_authentication_pane_real_get_preferred_geometry (SpitPublishingDialogPane* base);
SpitPublishingDialogPaneGeometryOptions shotwell_plugins_common_web_authentication_pane_get_preferred_geometry (ShotwellPluginsCommonWebAuthenticationPane* self);
static GtkWidget* shotwell_plugins_common_web_authentication_pane_real_get_widget (SpitPublishingDialogPane* base);
static void shotwell_plugins_common_web_authentication_pane_real_on_pane_installed (SpitPublishingDialogPane* base);
gchar* shotwell_plugins_common_web_authentication_pane_get_login_uri (ShotwellPluginsCommonWebAuthenticationPane* self);
static void shotwell_plugins_common_web_authentication_pane_real_on_pane_uninstalled (SpitPublishingDialogPane* base);
ShotwellPluginsCommonWebAuthenticationPane* shotwell_plugins_common_web_authentication_pane_construct (GType object_type);
static void shotwell_plugins_common_web_authentication_pane_set_preferred_geometry (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                                             SpitPublishingDialogPaneGeometryOptions value);
static void shotwell_plugins_common_web_authentication_pane_set_login_uri (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                                    const gchar* value);
static void shotwell_plugins_common_web_authentication_pane_finalize (GObject * obj);
static void _vala_shotwell_plugins_common_web_authentication_pane_get_property (GObject * object,
                                                                         guint property_id,
                                                                         GValue * value,
                                                                         GParamSpec * pspec);
static void _vala_shotwell_plugins_common_web_authentication_pane_set_property (GObject * object,
                                                                         guint property_id,
                                                                         const GValue * value,
                                                                         GParamSpec * pspec);


static void
_shotwell_plugins_common_web_authentication_pane_on_page_load_changed_webkit_web_view_load_changed (WebKitWebView* _sender,
                                                                                                    WebKitLoadEvent load_event,
                                                                                                    gpointer self)
{
#line 24 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	shotwell_plugins_common_web_authentication_pane_on_page_load_changed ((ShotwellPluginsCommonWebAuthenticationPane*) self, load_event);
#line 110 "WebAuthenticationPane.c"
}


static gboolean
__lambda4_ (ShotwellPluginsCommonWebAuthenticationPane* self)
{
	gboolean result = FALSE;
#line 25 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	result = FALSE;
#line 25 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return result;
#line 122 "WebAuthenticationPane.c"
}


static gboolean
___lambda4__webkit_web_view_context_menu (WebKitWebView* _sender,
                                          WebKitContextMenu* context_menu,
                                          GdkEvent* event,
                                          WebKitHitTestResult* hit_test_result,
                                          gpointer self)
{
	gboolean result;
	result = __lambda4_ ((ShotwellPluginsCommonWebAuthenticationPane*) self);
#line 25 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return result;
#line 137 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_real_constructed (GObject* base)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
	WebKitWebView* _tmp0_;
	WebKitWebView* _tmp1_;
	WebKitSettings* _tmp2_;
	WebKitWebView* _tmp3_;
	WebKitWebView* _tmp4_;
#line 18 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 19 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	G_OBJECT_CLASS (shotwell_plugins_common_web_authentication_pane_parent_class)->constructed (G_TYPE_CHECK_INSTANCE_CAST (self, G_TYPE_OBJECT, GObject));
#line 21 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = (WebKitWebView*) webkit_web_view_new ();
#line 21 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_object_ref_sink (_tmp0_);
#line 21 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_object_unref0 (self->priv->webview);
#line 21 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self->priv->webview = _tmp0_;
#line 22 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp1_ = self->priv->webview;
#line 22 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp2_ = webkit_web_view_get_settings (_tmp1_);
#line 22 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	webkit_settings_set_enable_plugins (_tmp2_, FALSE);
#line 24 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp3_ = self->priv->webview;
#line 24 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_signal_connect_object (_tmp3_, "load-changed", (GCallback) _shotwell_plugins_common_web_authentication_pane_on_page_load_changed_webkit_web_view_load_changed, self, 0);
#line 25 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp4_ = self->priv->webview;
#line 25 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_signal_connect_object (_tmp4_, "context-menu", (GCallback) ___lambda4__webkit_web_view_context_menu, self, 0);
#line 176 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_real_on_page_load (ShotwellPluginsCommonWebAuthenticationPane* self)
{
#line 28 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_critical ("Type `%s' does not implement abstract method `shotwell_plugins_common_web_authentication_pane_on_page_load'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 28 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return;
#line 187 "WebAuthenticationPane.c"
}


void
shotwell_plugins_common_web_authentication_pane_on_page_load (ShotwellPluginsCommonWebAuthenticationPane* self)
{
#line 28 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self));
#line 28 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_GET_CLASS (self)->on_page_load (self);
#line 198 "WebAuthenticationPane.c"
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 31 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return self ? g_object_ref (self) : NULL;
#line 207 "WebAuthenticationPane.c"
}


void
shotwell_plugins_common_web_authentication_pane_set_cursor (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                            GdkCursorType type)
{
	GdkWindow* window = NULL;
	WebKitWebView* _tmp0_;
	GdkWindow* _tmp1_;
	GdkWindow* _tmp2_;
	GdkDisplay* display = NULL;
	GdkDisplay* _tmp3_;
	GdkDisplay* _tmp4_;
	GdkCursor* cursor = NULL;
	GdkCursor* _tmp5_;
#line 30 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self));
#line 31 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = self->priv->webview;
#line 31 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp1_ = gtk_widget_get_window (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_widget_get_type (), GtkWidget));
#line 31 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 31 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	window = _tmp2_;
#line 32 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp3_ = gdk_window_get_display (window);
#line 32 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp4_ = _g_object_ref0 (_tmp3_);
#line 32 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	display = _tmp4_;
#line 33 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp5_ = gdk_cursor_new_for_display (display, type);
#line 33 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	cursor = _tmp5_;
#line 34 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	gdk_window_set_cursor (window, cursor);
#line 30 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_object_unref0 (cursor);
#line 30 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_object_unref0 (display);
#line 30 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_object_unref0 (window);
#line 252 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_on_page_load_changed (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                                      WebKitLoadEvent load_event)
{
#line 37 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self));
#line 38 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	switch (load_event) {
#line 38 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		case WEBKIT_LOAD_STARTED:
#line 38 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		case WEBKIT_LOAD_REDIRECTED:
#line 268 "WebAuthenticationPane.c"
		{
#line 41 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
			shotwell_plugins_common_web_authentication_pane_set_cursor (self, GDK_WATCH);
#line 42 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
			break;
#line 274 "WebAuthenticationPane.c"
		}
#line 38 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		case WEBKIT_LOAD_FINISHED:
#line 278 "WebAuthenticationPane.c"
		{
#line 44 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
			shotwell_plugins_common_web_authentication_pane_set_cursor (self, GDK_LEFT_PTR);
#line 45 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
			shotwell_plugins_common_web_authentication_pane_on_page_load (self);
#line 46 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
			break;
#line 286 "WebAuthenticationPane.c"
		}
		default:
		{
#line 48 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
			break;
#line 292 "WebAuthenticationPane.c"
		}
	}
}


WebKitWebView*
shotwell_plugins_common_web_authentication_pane_get_view (ShotwellPluginsCommonWebAuthenticationPane* self)
{
	WebKitWebView* result = NULL;
	WebKitWebView* _tmp0_;
	WebKitWebView* _tmp1_;
#line 52 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self), NULL);
#line 53 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = self->priv->webview;
#line 53 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 53 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	result = _tmp1_;
#line 53 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return result;
#line 314 "WebAuthenticationPane.c"
}


static SpitPublishingDialogPaneGeometryOptions
shotwell_plugins_common_web_authentication_pane_real_get_preferred_geometry (SpitPublishingDialogPane* base)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
	SpitPublishingDialogPaneGeometryOptions result = 0;
	SpitPublishingDialogPaneGeometryOptions _tmp0_;
#line 56 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 57 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = self->priv->_preferred_geometry;
#line 57 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	result = _tmp0_;
#line 57 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return result;
#line 332 "WebAuthenticationPane.c"
}


static GtkWidget*
shotwell_plugins_common_web_authentication_pane_real_get_widget (SpitPublishingDialogPane* base)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
	GtkWidget* result = NULL;
	WebKitWebView* _tmp0_;
	GtkWidget* _tmp1_;
#line 60 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 61 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = self->priv->webview;
#line 61 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_widget_get_type (), GtkWidget));
#line 61 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	result = _tmp1_;
#line 61 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return result;
#line 353 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_real_on_pane_installed (SpitPublishingDialogPane* base)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
	WebKitWebView* _tmp0_;
	WebKitWebView* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
#line 64 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = shotwell_plugins_common_web_authentication_pane_get_view (self);
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp1_ = _tmp0_;
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp2_ = shotwell_plugins_common_web_authentication_pane_get_login_uri (self);
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp3_ = _tmp2_;
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp4_ = _tmp3_;
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	webkit_web_view_load_uri (_tmp1_, _tmp4_);
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_free0 (_tmp4_);
#line 65 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_object_unref0 (_tmp1_);
#line 384 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_real_on_pane_uninstalled (SpitPublishingDialogPane* base)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
#line 68 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 394 "WebAuthenticationPane.c"
}


ShotwellPluginsCommonWebAuthenticationPane*
shotwell_plugins_common_web_authentication_pane_construct (GType object_type)
{
	ShotwellPluginsCommonWebAuthenticationPane * self = NULL;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self = (ShotwellPluginsCommonWebAuthenticationPane*) g_object_new (object_type, NULL);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return self;
#line 406 "WebAuthenticationPane.c"
}


SpitPublishingDialogPaneGeometryOptions
shotwell_plugins_common_web_authentication_pane_get_preferred_geometry (ShotwellPluginsCommonWebAuthenticationPane* self)
{
	SpitPublishingDialogPaneGeometryOptions result;
	SpitPublishingDialogPaneGeometryOptions _tmp0_;
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self), 0);
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = self->priv->_preferred_geometry;
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	result = _tmp0_;
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return result;
#line 423 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_set_preferred_geometry (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                                        SpitPublishingDialogPaneGeometryOptions value)
{
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self));
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	if (shotwell_plugins_common_web_authentication_pane_get_preferred_geometry (self) != value) {
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		self->priv->_preferred_geometry = value;
#line 11 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		g_object_notify_by_pspec ((GObject *) self, shotwell_plugins_common_web_authentication_pane_properties[SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_PREFERRED_GEOMETRY_PROPERTY]);
#line 439 "WebAuthenticationPane.c"
	}
}


gchar*
shotwell_plugins_common_web_authentication_pane_get_login_uri (ShotwellPluginsCommonWebAuthenticationPane* self)
{
	gchar* result;
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self), NULL);
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp0_ = self->priv->_login_uri;
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	result = _tmp1_;
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	return result;
#line 460 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_set_login_uri (ShotwellPluginsCommonWebAuthenticationPane* self,
                                                               const gchar* value)
{
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_WEB_AUTHENTICATION_PANE (self));
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	if (g_strcmp0 (value, shotwell_plugins_common_web_authentication_pane_get_login_uri (self)) != 0) {
#line 472 "WebAuthenticationPane.c"
		gchar* _tmp0_;
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		_tmp0_ = g_strdup (value);
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		_g_free0 (self->priv->_login_uri);
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		self->priv->_login_uri = _tmp0_;
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		g_object_notify_by_pspec ((GObject *) self, shotwell_plugins_common_web_authentication_pane_properties[SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_LOGIN_URI_PROPERTY]);
#line 482 "WebAuthenticationPane.c"
	}
}


static void
shotwell_plugins_common_web_authentication_pane_class_init (ShotwellPluginsCommonWebAuthenticationPaneClass * klass)
{
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	shotwell_plugins_common_web_authentication_pane_parent_class = g_type_class_peek_parent (klass);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_type_class_add_private (klass, sizeof (ShotwellPluginsCommonWebAuthenticationPanePrivate));
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	((GObjectClass *) klass)->constructed = (void (*) (GObject *)) shotwell_plugins_common_web_authentication_pane_real_constructed;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	((ShotwellPluginsCommonWebAuthenticationPaneClass *) klass)->on_page_load = (void (*) (ShotwellPluginsCommonWebAuthenticationPane *)) shotwell_plugins_common_web_authentication_pane_real_on_page_load;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_shotwell_plugins_common_web_authentication_pane_get_property;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_shotwell_plugins_common_web_authentication_pane_set_property;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	G_OBJECT_CLASS (klass)->finalize = shotwell_plugins_common_web_authentication_pane_finalize;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_PREFERRED_GEOMETRY_PROPERTY, shotwell_plugins_common_web_authentication_pane_properties[SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_PREFERRED_GEOMETRY_PROPERTY] = g_param_spec_enum ("preferred-geometry", "preferred-geometry", "preferred-geometry", SPIT_PUBLISHING_DIALOG_PANE_TYPE_GEOMETRY_OPTIONS, SPIT_PUBLISHING_DIALOG_PANE_GEOMETRY_OPTIONS_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_LOGIN_URI_PROPERTY, shotwell_plugins_common_web_authentication_pane_properties[SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_LOGIN_URI_PROPERTY] = g_param_spec_string ("login-uri", "login-uri", "login-uri", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 508 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_spit_publishing_dialog_pane_interface_init (SpitPublishingDialogPaneIface * iface)
{
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	shotwell_plugins_common_web_authentication_pane_spit_publishing_dialog_pane_parent_iface = g_type_interface_peek_parent (iface);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	iface->get_preferred_geometry = (SpitPublishingDialogPaneGeometryOptions (*) (SpitPublishingDialogPane *)) shotwell_plugins_common_web_authentication_pane_real_get_preferred_geometry;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	iface->get_widget = (GtkWidget* (*) (SpitPublishingDialogPane *)) shotwell_plugins_common_web_authentication_pane_real_get_widget;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	iface->on_pane_installed = (void (*) (SpitPublishingDialogPane *)) shotwell_plugins_common_web_authentication_pane_real_on_pane_installed;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	iface->on_pane_uninstalled = (void (*) (SpitPublishingDialogPane *)) shotwell_plugins_common_web_authentication_pane_real_on_pane_uninstalled;
#line 525 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_instance_init (ShotwellPluginsCommonWebAuthenticationPane * self)
{
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self->priv = SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_GET_PRIVATE (self);
#line 10 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self->priv->_preferred_geometry = SPIT_PUBLISHING_DIALOG_PANE_GEOMETRY_OPTIONS_NONE;
#line 536 "WebAuthenticationPane.c"
}


static void
shotwell_plugins_common_web_authentication_pane_finalize (GObject * obj)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 14 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_free0 (self->priv->_login_uri);
#line 16 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	_g_object_unref0 (self->priv->webview);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	G_OBJECT_CLASS (shotwell_plugins_common_web_authentication_pane_parent_class)->finalize (obj);
#line 552 "WebAuthenticationPane.c"
}


GType
shotwell_plugins_common_web_authentication_pane_get_type (void)
{
	static volatile gsize shotwell_plugins_common_web_authentication_pane_type_id__volatile = 0;
	if (g_once_init_enter (&shotwell_plugins_common_web_authentication_pane_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShotwellPluginsCommonWebAuthenticationPaneClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shotwell_plugins_common_web_authentication_pane_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShotwellPluginsCommonWebAuthenticationPane), 0, (GInstanceInitFunc) shotwell_plugins_common_web_authentication_pane_instance_init, NULL };
		static const GInterfaceInfo spit_publishing_dialog_pane_info = { (GInterfaceInitFunc) shotwell_plugins_common_web_authentication_pane_spit_publishing_dialog_pane_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shotwell_plugins_common_web_authentication_pane_type_id;
		shotwell_plugins_common_web_authentication_pane_type_id = g_type_register_static (G_TYPE_OBJECT, "ShotwellPluginsCommonWebAuthenticationPane", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (shotwell_plugins_common_web_authentication_pane_type_id, SPIT_PUBLISHING_TYPE_DIALOG_PANE, &spit_publishing_dialog_pane_info);
		g_once_init_leave (&shotwell_plugins_common_web_authentication_pane_type_id__volatile, shotwell_plugins_common_web_authentication_pane_type_id);
	}
	return shotwell_plugins_common_web_authentication_pane_type_id__volatile;
}


static void
_vala_shotwell_plugins_common_web_authentication_pane_get_property (GObject * object,
                                                                    guint property_id,
                                                                    GValue * value,
                                                                    GParamSpec * pspec)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	switch (property_id) {
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		case SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_PREFERRED_GEOMETRY_PROPERTY:
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		g_value_set_enum (value, shotwell_plugins_common_web_authentication_pane_get_preferred_geometry (self));
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		case SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_LOGIN_URI_PROPERTY:
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		g_value_take_string (value, shotwell_plugins_common_web_authentication_pane_get_login_uri (self));
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		break;
#line 594 "WebAuthenticationPane.c"
		default:
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		break;
#line 600 "WebAuthenticationPane.c"
	}
}


static void
_vala_shotwell_plugins_common_web_authentication_pane_set_property (GObject * object,
                                                                    guint property_id,
                                                                    const GValue * value,
                                                                    GParamSpec * pspec)
{
	ShotwellPluginsCommonWebAuthenticationPane * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SHOTWELL_PLUGINS_COMMON_TYPE_WEB_AUTHENTICATION_PANE, ShotwellPluginsCommonWebAuthenticationPane);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
	switch (property_id) {
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		case SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_PREFERRED_GEOMETRY_PROPERTY:
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		shotwell_plugins_common_web_authentication_pane_set_preferred_geometry (self, g_value_get_enum (value));
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		case SHOTWELL_PLUGINS_COMMON_WEB_AUTHENTICATION_PANE_LOGIN_URI_PROPERTY:
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		shotwell_plugins_common_web_authentication_pane_set_login_uri (self, g_value_get_string (value));
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		break;
#line 627 "WebAuthenticationPane.c"
		default:
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 9 "/home/jens/Source/shotwell/plugins/common/WebAuthenticationPane.vala"
		break;
#line 633 "WebAuthenticationPane.c"
	}
}



