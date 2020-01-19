/* ImportQueueSidebarEntry.c generated by valac 0.34.4, the Vala compiler
 * generated from ImportQueueSidebarEntry.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <glib/gi18n-lib.h>


#define SIDEBAR_TYPE_ENTRY (sidebar_entry_get_type ())
#define SIDEBAR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_ENTRY, SidebarEntry))
#define SIDEBAR_IS_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_ENTRY))
#define SIDEBAR_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_ENTRY, SidebarEntryIface))

typedef struct _SidebarEntry SidebarEntry;
typedef struct _SidebarEntryIface SidebarEntryIface;

#define SIDEBAR_TYPE_TREE (sidebar_tree_get_type ())
#define SIDEBAR_TREE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_TREE, SidebarTree))
#define SIDEBAR_TREE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIDEBAR_TYPE_TREE, SidebarTreeClass))
#define SIDEBAR_IS_TREE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_TREE))
#define SIDEBAR_IS_TREE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIDEBAR_TYPE_TREE))
#define SIDEBAR_TREE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIDEBAR_TYPE_TREE, SidebarTreeClass))

typedef struct _SidebarTree SidebarTree;
typedef struct _SidebarTreeClass SidebarTreeClass;

#define SIDEBAR_TYPE_SELECTABLE_ENTRY (sidebar_selectable_entry_get_type ())
#define SIDEBAR_SELECTABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_SELECTABLE_ENTRY, SidebarSelectableEntry))
#define SIDEBAR_IS_SELECTABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_SELECTABLE_ENTRY))
#define SIDEBAR_SELECTABLE_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_SELECTABLE_ENTRY, SidebarSelectableEntryIface))

typedef struct _SidebarSelectableEntry SidebarSelectableEntry;
typedef struct _SidebarSelectableEntryIface SidebarSelectableEntryIface;

#define SIDEBAR_TYPE_PAGE_REPRESENTATIVE (sidebar_page_representative_get_type ())
#define SIDEBAR_PAGE_REPRESENTATIVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_PAGE_REPRESENTATIVE, SidebarPageRepresentative))
#define SIDEBAR_IS_PAGE_REPRESENTATIVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_PAGE_REPRESENTATIVE))
#define SIDEBAR_PAGE_REPRESENTATIVE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_PAGE_REPRESENTATIVE, SidebarPageRepresentativeIface))

typedef struct _SidebarPageRepresentative SidebarPageRepresentative;
typedef struct _SidebarPageRepresentativeIface SidebarPageRepresentativeIface;

#define TYPE_PAGE (page_get_type ())
#define PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PAGE, Page))
#define PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PAGE, PageClass))
#define IS_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PAGE))
#define IS_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PAGE))
#define PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PAGE, PageClass))

typedef struct _Page Page;
typedef struct _PageClass PageClass;

#define SIDEBAR_TYPE_CONTEXTABLE (sidebar_contextable_get_type ())
#define SIDEBAR_CONTEXTABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_CONTEXTABLE, SidebarContextable))
#define SIDEBAR_IS_CONTEXTABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_CONTEXTABLE))
#define SIDEBAR_CONTEXTABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_CONTEXTABLE, SidebarContextableIface))

typedef struct _SidebarContextable SidebarContextable;
typedef struct _SidebarContextableIface SidebarContextableIface;

#define SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY (sidebar_simple_page_entry_get_type ())
#define SIDEBAR_SIMPLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY, SidebarSimplePageEntry))
#define SIDEBAR_SIMPLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY, SidebarSimplePageEntryClass))
#define SIDEBAR_IS_SIMPLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY))
#define SIDEBAR_IS_SIMPLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY))
#define SIDEBAR_SIMPLE_PAGE_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY, SidebarSimplePageEntryClass))

typedef struct _SidebarSimplePageEntry SidebarSimplePageEntry;
typedef struct _SidebarSimplePageEntryClass SidebarSimplePageEntryClass;
typedef struct _SidebarSimplePageEntryPrivate SidebarSimplePageEntryPrivate;

#define LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY (library_hideable_page_entry_get_type ())
#define LIBRARY_HIDEABLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntry))
#define LIBRARY_HIDEABLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntryClass))
#define LIBRARY_IS_HIDEABLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY))
#define LIBRARY_IS_HIDEABLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY))
#define LIBRARY_HIDEABLE_PAGE_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntryClass))

typedef struct _LibraryHideablePageEntry LibraryHideablePageEntry;
typedef struct _LibraryHideablePageEntryClass LibraryHideablePageEntryClass;
typedef struct _LibraryHideablePageEntryPrivate LibraryHideablePageEntryPrivate;

#define LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY (library_import_queue_sidebar_entry_get_type ())
#define LIBRARY_IMPORT_QUEUE_SIDEBAR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY, LibraryImportQueueSidebarEntry))
#define LIBRARY_IMPORT_QUEUE_SIDEBAR_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY, LibraryImportQueueSidebarEntryClass))
#define LIBRARY_IS_IMPORT_QUEUE_SIDEBAR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY))
#define LIBRARY_IS_IMPORT_QUEUE_SIDEBAR_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY))
#define LIBRARY_IMPORT_QUEUE_SIDEBAR_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY, LibraryImportQueueSidebarEntryClass))

typedef struct _LibraryImportQueueSidebarEntry LibraryImportQueueSidebarEntry;
typedef struct _LibraryImportQueueSidebarEntryClass LibraryImportQueueSidebarEntryClass;
typedef struct _LibraryImportQueueSidebarEntryPrivate LibraryImportQueueSidebarEntryPrivate;

#define TYPE_SINGLE_PHOTO_PAGE (single_photo_page_get_type ())
#define SINGLE_PHOTO_PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SINGLE_PHOTO_PAGE, SinglePhotoPage))
#define SINGLE_PHOTO_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SINGLE_PHOTO_PAGE, SinglePhotoPageClass))
#define IS_SINGLE_PHOTO_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SINGLE_PHOTO_PAGE))
#define IS_SINGLE_PHOTO_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SINGLE_PHOTO_PAGE))
#define SINGLE_PHOTO_PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SINGLE_PHOTO_PAGE, SinglePhotoPageClass))

typedef struct _SinglePhotoPage SinglePhotoPage;
typedef struct _SinglePhotoPageClass SinglePhotoPageClass;

#define TYPE_IMPORT_QUEUE_PAGE (import_queue_page_get_type ())
#define IMPORT_QUEUE_PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_IMPORT_QUEUE_PAGE, ImportQueuePage))
#define IMPORT_QUEUE_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_IMPORT_QUEUE_PAGE, ImportQueuePageClass))
#define IS_IMPORT_QUEUE_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_IMPORT_QUEUE_PAGE))
#define IS_IMPORT_QUEUE_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_IMPORT_QUEUE_PAGE))
#define IMPORT_QUEUE_PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_IMPORT_QUEUE_PAGE, ImportQueuePageClass))

typedef struct _ImportQueuePage ImportQueuePage;
typedef struct _ImportQueuePageClass ImportQueuePageClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_BATCH_IMPORT (batch_import_get_type ())
#define BATCH_IMPORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BATCH_IMPORT, BatchImport))
#define BATCH_IMPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_BATCH_IMPORT, BatchImportClass))
#define IS_BATCH_IMPORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BATCH_IMPORT))
#define IS_BATCH_IMPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_BATCH_IMPORT))
#define BATCH_IMPORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BATCH_IMPORT, BatchImportClass))

typedef struct _BatchImport BatchImport;
typedef struct _BatchImportClass BatchImportClass;

struct _SidebarEntryIface {
	GTypeInterface parent_iface;
	gchar* (*get_sidebar_name) (SidebarEntry* self);
	gchar* (*get_sidebar_tooltip) (SidebarEntry* self);
	gchar* (*get_sidebar_icon) (SidebarEntry* self);
	gchar* (*to_string) (SidebarEntry* self);
	void (*grafted) (SidebarEntry* self, SidebarTree* tree);
	void (*pruned) (SidebarEntry* self, SidebarTree* tree);
};

struct _SidebarSelectableEntryIface {
	GTypeInterface parent_iface;
};

struct _SidebarPageRepresentativeIface {
	GTypeInterface parent_iface;
	gboolean (*has_page) (SidebarPageRepresentative* self);
	Page* (*get_page) (SidebarPageRepresentative* self);
};

struct _SidebarContextableIface {
	GTypeInterface parent_iface;
	GtkMenu* (*get_sidebar_context_menu) (SidebarContextable* self, GdkEventButton* event);
};

struct _SidebarSimplePageEntry {
	GObject parent_instance;
	SidebarSimplePageEntryPrivate * priv;
};

struct _SidebarSimplePageEntryClass {
	GObjectClass parent_class;
	gchar* (*get_sidebar_name) (SidebarSimplePageEntry* self);
	gchar* (*get_sidebar_tooltip) (SidebarSimplePageEntry* self);
	gchar* (*get_sidebar_icon) (SidebarSimplePageEntry* self);
	gchar* (*to_string) (SidebarSimplePageEntry* self);
	Page* (*create_page) (SidebarSimplePageEntry* self);
};

struct _LibraryHideablePageEntry {
	SidebarSimplePageEntry parent_instance;
	LibraryHideablePageEntryPrivate * priv;
};

struct _LibraryHideablePageEntryClass {
	SidebarSimplePageEntryClass parent_class;
};

struct _LibraryImportQueueSidebarEntry {
	LibraryHideablePageEntry parent_instance;
	LibraryImportQueueSidebarEntryPrivate * priv;
};

struct _LibraryImportQueueSidebarEntryClass {
	LibraryHideablePageEntryClass parent_class;
};


static gpointer library_import_queue_sidebar_entry_parent_class = NULL;

GType sidebar_tree_get_type (void) G_GNUC_CONST;
GType sidebar_entry_get_type (void) G_GNUC_CONST;
GType sidebar_selectable_entry_get_type (void) G_GNUC_CONST;
GType page_get_type (void) G_GNUC_CONST;
GType sidebar_page_representative_get_type (void) G_GNUC_CONST;
GType sidebar_contextable_get_type (void) G_GNUC_CONST;
GType sidebar_simple_page_entry_get_type (void) G_GNUC_CONST;
GType library_hideable_page_entry_get_type (void) G_GNUC_CONST;
GType library_import_queue_sidebar_entry_get_type (void) G_GNUC_CONST;
enum  {
	LIBRARY_IMPORT_QUEUE_SIDEBAR_ENTRY_DUMMY_PROPERTY
};
LibraryImportQueueSidebarEntry* library_import_queue_sidebar_entry_new (void);
LibraryImportQueueSidebarEntry* library_import_queue_sidebar_entry_construct (GType object_type);
LibraryHideablePageEntry* library_hideable_page_entry_construct (GType object_type);
static void library_import_queue_sidebar_entry_on_page_created (LibraryImportQueueSidebarEntry* self);
static void _library_import_queue_sidebar_entry_on_page_created_sidebar_page_representative_page_created (SidebarPageRepresentative* _sender, Page* page, gpointer self);
static void library_import_queue_sidebar_entry_on_destroying_page (LibraryImportQueueSidebarEntry* self);
static void _library_import_queue_sidebar_entry_on_destroying_page_sidebar_page_representative_destroying_page (SidebarPageRepresentative* _sender, Page* page, gpointer self);
void library_hideable_page_entry_set_visible (LibraryHideablePageEntry* self, gboolean value);
static gchar* library_import_queue_sidebar_entry_real_get_sidebar_name (SidebarSimplePageEntry* base);
#define IMPORT_QUEUE_PAGE_NAME _ ("Importing...")
static gchar* library_import_queue_sidebar_entry_real_get_sidebar_icon (SidebarSimplePageEntry* base);
#define RESOURCES_ICON_IMPORTING "go-down"
static Page* library_import_queue_sidebar_entry_real_create_page (SidebarSimplePageEntry* base);
ImportQueuePage* import_queue_page_new (void);
ImportQueuePage* import_queue_page_construct (GType object_type);
GType single_photo_page_get_type (void) G_GNUC_CONST;
GType import_queue_page_get_type (void) G_GNUC_CONST;
static ImportQueuePage* library_import_queue_sidebar_entry_get_queue_page (LibraryImportQueueSidebarEntry* self);
Page* sidebar_page_representative_get_page (SidebarPageRepresentative* self);
static void library_import_queue_sidebar_entry_on_batch_added_or_removed (LibraryImportQueueSidebarEntry* self);
GType batch_import_get_type (void) G_GNUC_CONST;
static void _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_added (ImportQueuePage* _sender, BatchImport* batch_import, gpointer self);
static void _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_removed (ImportQueuePage* _sender, BatchImport* batch_import, gpointer self);
gint import_queue_page_get_batch_count (ImportQueuePage* self);
void library_import_queue_sidebar_entry_enqueue_and_schedule (LibraryImportQueueSidebarEntry* self, BatchImport* batch_import, gboolean allow_user_cancel);
void import_queue_page_enqueue_and_schedule (ImportQueuePage* self, BatchImport* batch_import, gboolean allow_user_cancel);


static void _library_import_queue_sidebar_entry_on_page_created_sidebar_page_representative_page_created (SidebarPageRepresentative* _sender, Page* page, gpointer self) {
#line 10 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_import_queue_sidebar_entry_on_page_created ((LibraryImportQueueSidebarEntry*) self);
#line 239 "ImportQueueSidebarEntry.c"
}


static void _library_import_queue_sidebar_entry_on_destroying_page_sidebar_page_representative_destroying_page (SidebarPageRepresentative* _sender, Page* page, gpointer self) {
#line 11 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_import_queue_sidebar_entry_on_destroying_page ((LibraryImportQueueSidebarEntry*) self);
#line 246 "ImportQueueSidebarEntry.c"
}


LibraryImportQueueSidebarEntry* library_import_queue_sidebar_entry_construct (GType object_type) {
	LibraryImportQueueSidebarEntry * self = NULL;
#line 8 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	self = (LibraryImportQueueSidebarEntry*) library_hideable_page_entry_construct (object_type);
#line 10 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_connect_object (G_TYPE_CHECK_INSTANCE_CAST (self, SIDEBAR_TYPE_PAGE_REPRESENTATIVE, SidebarPageRepresentative), "page-created", (GCallback) _library_import_queue_sidebar_entry_on_page_created_sidebar_page_representative_page_created, self, 0);
#line 11 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_connect_object (G_TYPE_CHECK_INSTANCE_CAST (self, SIDEBAR_TYPE_PAGE_REPRESENTATIVE, SidebarPageRepresentative), "destroying-page", (GCallback) _library_import_queue_sidebar_entry_on_destroying_page_sidebar_page_representative_destroying_page, self, 0);
#line 16 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_hideable_page_entry_set_visible (G_TYPE_CHECK_INSTANCE_CAST (self, LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntry), FALSE);
#line 8 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	return self;
#line 262 "ImportQueueSidebarEntry.c"
}


LibraryImportQueueSidebarEntry* library_import_queue_sidebar_entry_new (void) {
#line 8 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	return library_import_queue_sidebar_entry_construct (LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY);
#line 269 "ImportQueueSidebarEntry.c"
}


static gchar* library_import_queue_sidebar_entry_real_get_sidebar_name (SidebarSimplePageEntry* base) {
	LibraryImportQueueSidebarEntry * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 19 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY, LibraryImportQueueSidebarEntry);
#line 20 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = g_strdup (IMPORT_QUEUE_PAGE_NAME);
#line 20 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	result = _tmp0_;
#line 20 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	return result;
#line 285 "ImportQueueSidebarEntry.c"
}


static gchar* library_import_queue_sidebar_entry_real_get_sidebar_icon (SidebarSimplePageEntry* base) {
	LibraryImportQueueSidebarEntry * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 23 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY, LibraryImportQueueSidebarEntry);
#line 24 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = g_strdup (RESOURCES_ICON_IMPORTING);
#line 24 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	result = _tmp0_;
#line 24 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	return result;
#line 301 "ImportQueueSidebarEntry.c"
}


static Page* library_import_queue_sidebar_entry_real_create_page (SidebarSimplePageEntry* base) {
	LibraryImportQueueSidebarEntry * self;
	Page* result = NULL;
	ImportQueuePage* _tmp0_ = NULL;
#line 27 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, LIBRARY_TYPE_IMPORT_QUEUE_SIDEBAR_ENTRY, LibraryImportQueueSidebarEntry);
#line 28 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = import_queue_page_new ();
#line 28 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_object_ref_sink (_tmp0_);
#line 28 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_PAGE, Page);
#line 28 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	return result;
#line 319 "ImportQueueSidebarEntry.c"
}


static ImportQueuePage* library_import_queue_sidebar_entry_get_queue_page (LibraryImportQueueSidebarEntry* self) {
	ImportQueuePage* result = NULL;
	Page* _tmp0_ = NULL;
	ImportQueuePage* _tmp1_ = NULL;
#line 31 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_return_val_if_fail (LIBRARY_IS_IMPORT_QUEUE_SIDEBAR_ENTRY (self), NULL);
#line 32 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = sidebar_page_representative_get_page (G_TYPE_CHECK_INSTANCE_CAST (self, SIDEBAR_TYPE_PAGE_REPRESENTATIVE, SidebarPageRepresentative));
#line 32 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp1_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, TYPE_IMPORT_QUEUE_PAGE) ? ((ImportQueuePage*) _tmp0_) : NULL;
#line 32 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	if (_tmp1_ == NULL) {
#line 32 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
		_g_object_unref0 (_tmp0_);
#line 337 "ImportQueueSidebarEntry.c"
	}
#line 32 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	result = _tmp1_;
#line 32 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	return result;
#line 343 "ImportQueueSidebarEntry.c"
}


static void _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_added (ImportQueuePage* _sender, BatchImport* batch_import, gpointer self) {
#line 36 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_import_queue_sidebar_entry_on_batch_added_or_removed ((LibraryImportQueueSidebarEntry*) self);
#line 350 "ImportQueueSidebarEntry.c"
}


static void _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_removed (ImportQueuePage* _sender, BatchImport* batch_import, gpointer self) {
#line 37 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_import_queue_sidebar_entry_on_batch_added_or_removed ((LibraryImportQueueSidebarEntry*) self);
#line 357 "ImportQueueSidebarEntry.c"
}


static void library_import_queue_sidebar_entry_on_page_created (LibraryImportQueueSidebarEntry* self) {
	ImportQueuePage* _tmp0_ = NULL;
	ImportQueuePage* _tmp1_ = NULL;
	ImportQueuePage* _tmp2_ = NULL;
	ImportQueuePage* _tmp3_ = NULL;
#line 35 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_return_if_fail (LIBRARY_IS_IMPORT_QUEUE_SIDEBAR_ENTRY (self));
#line 36 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = library_import_queue_sidebar_entry_get_queue_page (self);
#line 36 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp1_ = _tmp0_;
#line 36 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_connect_object (_tmp1_, "batch-added", (GCallback) _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_added, self, 0);
#line 36 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_g_object_unref0 (_tmp1_);
#line 37 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp2_ = library_import_queue_sidebar_entry_get_queue_page (self);
#line 37 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp3_ = _tmp2_;
#line 37 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_connect_object (_tmp3_, "batch-removed", (GCallback) _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_removed, self, 0);
#line 37 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_g_object_unref0 (_tmp3_);
#line 384 "ImportQueueSidebarEntry.c"
}


static void library_import_queue_sidebar_entry_on_destroying_page (LibraryImportQueueSidebarEntry* self) {
	ImportQueuePage* _tmp0_ = NULL;
	ImportQueuePage* _tmp1_ = NULL;
	guint _tmp2_ = 0U;
	ImportQueuePage* _tmp3_ = NULL;
	ImportQueuePage* _tmp4_ = NULL;
	guint _tmp5_ = 0U;
#line 40 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_return_if_fail (LIBRARY_IS_IMPORT_QUEUE_SIDEBAR_ENTRY (self));
#line 41 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = library_import_queue_sidebar_entry_get_queue_page (self);
#line 41 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp1_ = _tmp0_;
#line 41 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_parse_name ("batch-added", TYPE_IMPORT_QUEUE_PAGE, &_tmp2_, NULL, FALSE);
#line 41 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_handlers_disconnect_matched (_tmp1_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp2_, 0, NULL, (GCallback) _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_added, self);
#line 41 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_g_object_unref0 (_tmp1_);
#line 42 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp3_ = library_import_queue_sidebar_entry_get_queue_page (self);
#line 42 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp4_ = _tmp3_;
#line 42 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_parse_name ("batch-removed", TYPE_IMPORT_QUEUE_PAGE, &_tmp5_, NULL, FALSE);
#line 42 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_signal_handlers_disconnect_matched (_tmp4_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp5_, 0, NULL, (GCallback) _library_import_queue_sidebar_entry_on_batch_added_or_removed_import_queue_page_batch_removed, self);
#line 42 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_g_object_unref0 (_tmp4_);
#line 417 "ImportQueueSidebarEntry.c"
}


static void library_import_queue_sidebar_entry_on_batch_added_or_removed (LibraryImportQueueSidebarEntry* self) {
	ImportQueuePage* _tmp0_ = NULL;
	ImportQueuePage* _tmp1_ = NULL;
	gint _tmp2_ = 0;
#line 45 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_return_if_fail (LIBRARY_IS_IMPORT_QUEUE_SIDEBAR_ENTRY (self));
#line 46 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = library_import_queue_sidebar_entry_get_queue_page (self);
#line 46 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp1_ = _tmp0_;
#line 46 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp2_ = import_queue_page_get_batch_count (_tmp1_);
#line 46 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_hideable_page_entry_set_visible (G_TYPE_CHECK_INSTANCE_CAST (self, LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntry), _tmp2_ > 0);
#line 46 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_g_object_unref0 (_tmp1_);
#line 437 "ImportQueueSidebarEntry.c"
}


void library_import_queue_sidebar_entry_enqueue_and_schedule (LibraryImportQueueSidebarEntry* self, BatchImport* batch_import, gboolean allow_user_cancel) {
	ImportQueuePage* _tmp0_ = NULL;
	ImportQueuePage* _tmp1_ = NULL;
	BatchImport* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
#line 49 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_return_if_fail (LIBRARY_IS_IMPORT_QUEUE_SIDEBAR_ENTRY (self));
#line 49 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	g_return_if_fail (IS_BATCH_IMPORT (batch_import));
#line 52 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_hideable_page_entry_set_visible (G_TYPE_CHECK_INSTANCE_CAST (self, LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntry), TRUE);
#line 53 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp0_ = library_import_queue_sidebar_entry_get_queue_page (self);
#line 53 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp1_ = _tmp0_;
#line 53 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp2_ = batch_import;
#line 53 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_tmp3_ = allow_user_cancel;
#line 53 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	import_queue_page_enqueue_and_schedule (_tmp1_, _tmp2_, _tmp3_);
#line 53 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	_g_object_unref0 (_tmp1_);
#line 464 "ImportQueueSidebarEntry.c"
}


static void library_import_queue_sidebar_entry_class_init (LibraryImportQueueSidebarEntryClass * klass) {
#line 7 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	library_import_queue_sidebar_entry_parent_class = g_type_class_peek_parent (klass);
#line 7 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	((SidebarSimplePageEntryClass *) klass)->get_sidebar_name = library_import_queue_sidebar_entry_real_get_sidebar_name;
#line 7 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	((SidebarSimplePageEntryClass *) klass)->get_sidebar_icon = library_import_queue_sidebar_entry_real_get_sidebar_icon;
#line 7 "/home/jens/Source/shotwell/src/library/ImportQueueSidebarEntry.vala"
	((SidebarSimplePageEntryClass *) klass)->create_page = library_import_queue_sidebar_entry_real_create_page;
#line 477 "ImportQueueSidebarEntry.c"
}


static void library_import_queue_sidebar_entry_instance_init (LibraryImportQueueSidebarEntry * self) {
}


GType library_import_queue_sidebar_entry_get_type (void) {
	static volatile gsize library_import_queue_sidebar_entry_type_id__volatile = 0;
	if (g_once_init_enter (&library_import_queue_sidebar_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LibraryImportQueueSidebarEntryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) library_import_queue_sidebar_entry_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LibraryImportQueueSidebarEntry), 0, (GInstanceInitFunc) library_import_queue_sidebar_entry_instance_init, NULL };
		GType library_import_queue_sidebar_entry_type_id;
		library_import_queue_sidebar_entry_type_id = g_type_register_static (LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, "LibraryImportQueueSidebarEntry", &g_define_type_info, 0);
		g_once_init_leave (&library_import_queue_sidebar_entry_type_id__volatile, library_import_queue_sidebar_entry_type_id);
	}
	return library_import_queue_sidebar_entry_type_id__volatile;
}



