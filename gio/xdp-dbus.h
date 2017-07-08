/*
 * Generated by gdbus-codegen 2.53.3. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef ____XDP_DBUS_H__
#define ____XDP_DBUS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.portal.Documents */

#define GXDP_TYPE_DOCUMENTS (gxdp_documents_get_type ())
#define GXDP_DOCUMENTS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_DOCUMENTS, GXdpDocuments))
#define GXDP_IS_DOCUMENTS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_DOCUMENTS))
#define GXDP_DOCUMENTS_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GXDP_TYPE_DOCUMENTS, GXdpDocumentsIface))

struct _GXdpDocuments;
typedef struct _GXdpDocuments GXdpDocuments;
typedef struct _GXdpDocumentsIface GXdpDocumentsIface;

struct _GXdpDocumentsIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_add) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    GVariant *arg_o_path_fd,
    gboolean arg_reuse_existing,
    gboolean arg_persistent);

  gboolean (*handle_add_full) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    GVariant *arg_o_path_fds,
    guint arg_flags,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions);

  gboolean (*handle_add_named) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    GVariant *arg_o_path_parent_fd,
    const gchar *arg_filename,
    gboolean arg_reuse_existing,
    gboolean arg_persistent);

  gboolean (*handle_delete) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_doc_id);

  gboolean (*handle_get_mount_point) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_grant_permissions) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_doc_id,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions);

  gboolean (*handle_info) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_doc_id);

  gboolean (*handle_list) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_app_id);

  gboolean (*handle_lookup) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_filename);

  gboolean (*handle_revoke_permissions) (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_doc_id,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions);

  guint  (*get_version) (GXdpDocuments *object);

};

GType gxdp_documents_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gxdp_documents_interface_info (void);
guint gxdp_documents_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gxdp_documents_complete_get_mount_point (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *path);

void gxdp_documents_complete_add (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    const gchar *doc_id);

void gxdp_documents_complete_add_named (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    const gchar *doc_id);

void gxdp_documents_complete_add_full (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    const gchar *const *doc_ids,
    GVariant *extra_out);

void gxdp_documents_complete_grant_permissions (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation);

void gxdp_documents_complete_revoke_permissions (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation);

void gxdp_documents_complete_delete (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation);

void gxdp_documents_complete_lookup (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *doc_id);

void gxdp_documents_complete_info (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    const gchar *path,
    GVariant *apps);

void gxdp_documents_complete_list (
    GXdpDocuments *object,
    GDBusMethodInvocation *invocation,
    GVariant *docs);



/* D-Bus method calls: */
void gxdp_documents_call_get_mount_point (
    GXdpDocuments *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_get_mount_point_finish (
    GXdpDocuments *proxy,
    gchar **out_path,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_get_mount_point_sync (
    GXdpDocuments *proxy,
    gchar **out_path,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_add (
    GXdpDocuments *proxy,
    GVariant *arg_o_path_fd,
    gboolean arg_reuse_existing,
    gboolean arg_persistent,
    GUnixFDList *fd_list,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_add_finish (
    GXdpDocuments *proxy,
    gchar **out_doc_id,
    GUnixFDList **out_fd_list,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_add_sync (
    GXdpDocuments *proxy,
    GVariant *arg_o_path_fd,
    gboolean arg_reuse_existing,
    gboolean arg_persistent,
    GUnixFDList  *fd_list,
    gchar **out_doc_id,
    GUnixFDList **out_fd_list,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_add_named (
    GXdpDocuments *proxy,
    GVariant *arg_o_path_parent_fd,
    const gchar *arg_filename,
    gboolean arg_reuse_existing,
    gboolean arg_persistent,
    GUnixFDList *fd_list,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_add_named_finish (
    GXdpDocuments *proxy,
    gchar **out_doc_id,
    GUnixFDList **out_fd_list,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_add_named_sync (
    GXdpDocuments *proxy,
    GVariant *arg_o_path_parent_fd,
    const gchar *arg_filename,
    gboolean arg_reuse_existing,
    gboolean arg_persistent,
    GUnixFDList  *fd_list,
    gchar **out_doc_id,
    GUnixFDList **out_fd_list,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_add_full (
    GXdpDocuments *proxy,
    GVariant *arg_o_path_fds,
    guint arg_flags,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions,
    GUnixFDList *fd_list,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_add_full_finish (
    GXdpDocuments *proxy,
    gchar ***out_doc_ids,
    GVariant **out_extra_out,
    GUnixFDList **out_fd_list,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_add_full_sync (
    GXdpDocuments *proxy,
    GVariant *arg_o_path_fds,
    guint arg_flags,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions,
    GUnixFDList  *fd_list,
    gchar ***out_doc_ids,
    GVariant **out_extra_out,
    GUnixFDList **out_fd_list,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_grant_permissions (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_grant_permissions_finish (
    GXdpDocuments *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_grant_permissions_sync (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_revoke_permissions (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_revoke_permissions_finish (
    GXdpDocuments *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_revoke_permissions_sync (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    const gchar *arg_app_id,
    const gchar *const *arg_permissions,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_delete (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_delete_finish (
    GXdpDocuments *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_delete_sync (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_lookup (
    GXdpDocuments *proxy,
    const gchar *arg_filename,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_lookup_finish (
    GXdpDocuments *proxy,
    gchar **out_doc_id,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_lookup_sync (
    GXdpDocuments *proxy,
    const gchar *arg_filename,
    gchar **out_doc_id,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_info (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_info_finish (
    GXdpDocuments *proxy,
    gchar **out_path,
    GVariant **out_apps,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_info_sync (
    GXdpDocuments *proxy,
    const gchar *arg_doc_id,
    gchar **out_path,
    GVariant **out_apps,
    GCancellable *cancellable,
    GError **error);

void gxdp_documents_call_list (
    GXdpDocuments *proxy,
    const gchar *arg_app_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_documents_call_list_finish (
    GXdpDocuments *proxy,
    GVariant **out_docs,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_documents_call_list_sync (
    GXdpDocuments *proxy,
    const gchar *arg_app_id,
    GVariant **out_docs,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
guint gxdp_documents_get_version (GXdpDocuments *object);
void gxdp_documents_set_version (GXdpDocuments *object, guint value);


/* ---- */

#define GXDP_TYPE_DOCUMENTS_PROXY (gxdp_documents_proxy_get_type ())
#define GXDP_DOCUMENTS_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_DOCUMENTS_PROXY, GXdpDocumentsProxy))
#define GXDP_DOCUMENTS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_DOCUMENTS_PROXY, GXdpDocumentsProxyClass))
#define GXDP_DOCUMENTS_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_DOCUMENTS_PROXY, GXdpDocumentsProxyClass))
#define GXDP_IS_DOCUMENTS_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_DOCUMENTS_PROXY))
#define GXDP_IS_DOCUMENTS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_DOCUMENTS_PROXY))

typedef struct _GXdpDocumentsProxy GXdpDocumentsProxy;
typedef struct _GXdpDocumentsProxyClass GXdpDocumentsProxyClass;
typedef struct _GXdpDocumentsProxyPrivate GXdpDocumentsProxyPrivate;

struct _GXdpDocumentsProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GXdpDocumentsProxyPrivate *priv;
};

struct _GXdpDocumentsProxyClass
{
  GDBusProxyClass parent_class;
};

GType gxdp_documents_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpDocumentsProxy, g_object_unref)
#endif

void gxdp_documents_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpDocuments *gxdp_documents_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpDocuments *gxdp_documents_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gxdp_documents_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpDocuments *gxdp_documents_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpDocuments *gxdp_documents_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GXDP_TYPE_DOCUMENTS_SKELETON (gxdp_documents_skeleton_get_type ())
#define GXDP_DOCUMENTS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_DOCUMENTS_SKELETON, GXdpDocumentsSkeleton))
#define GXDP_DOCUMENTS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_DOCUMENTS_SKELETON, GXdpDocumentsSkeletonClass))
#define GXDP_DOCUMENTS_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_DOCUMENTS_SKELETON, GXdpDocumentsSkeletonClass))
#define GXDP_IS_DOCUMENTS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_DOCUMENTS_SKELETON))
#define GXDP_IS_DOCUMENTS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_DOCUMENTS_SKELETON))

typedef struct _GXdpDocumentsSkeleton GXdpDocumentsSkeleton;
typedef struct _GXdpDocumentsSkeletonClass GXdpDocumentsSkeletonClass;
typedef struct _GXdpDocumentsSkeletonPrivate GXdpDocumentsSkeletonPrivate;

struct _GXdpDocumentsSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GXdpDocumentsSkeletonPrivate *priv;
};

struct _GXdpDocumentsSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gxdp_documents_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpDocumentsSkeleton, g_object_unref)
#endif

GXdpDocuments *gxdp_documents_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.portal.OpenURI */

#define GXDP_TYPE_OPEN_URI (gxdp_open_uri_get_type ())
#define GXDP_OPEN_URI(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_OPEN_URI, GXdpOpenURI))
#define GXDP_IS_OPEN_URI(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_OPEN_URI))
#define GXDP_OPEN_URI_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GXDP_TYPE_OPEN_URI, GXdpOpenURIIface))

struct _GXdpOpenURI;
typedef struct _GXdpOpenURI GXdpOpenURI;
typedef struct _GXdpOpenURIIface GXdpOpenURIIface;

struct _GXdpOpenURIIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_open_file) (
    GXdpOpenURI *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    const gchar *arg_parent_window,
    GVariant *arg_fd,
    GVariant *arg_options);

  gboolean (*handle_open_uri) (
    GXdpOpenURI *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_parent_window,
    const gchar *arg_uri,
    GVariant *arg_options);

  guint  (*get_version) (GXdpOpenURI *object);

};

GType gxdp_open_uri_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gxdp_open_uri_interface_info (void);
guint gxdp_open_uri_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gxdp_open_uri_complete_open_uri (
    GXdpOpenURI *object,
    GDBusMethodInvocation *invocation,
    const gchar *handle);

void gxdp_open_uri_complete_open_file (
    GXdpOpenURI *object,
    GDBusMethodInvocation *invocation,
    GUnixFDList *fd_list,
    const gchar *handle);



/* D-Bus method calls: */
void gxdp_open_uri_call_open_uri (
    GXdpOpenURI *proxy,
    const gchar *arg_parent_window,
    const gchar *arg_uri,
    GVariant *arg_options,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_open_uri_call_open_uri_finish (
    GXdpOpenURI *proxy,
    gchar **out_handle,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_open_uri_call_open_uri_sync (
    GXdpOpenURI *proxy,
    const gchar *arg_parent_window,
    const gchar *arg_uri,
    GVariant *arg_options,
    gchar **out_handle,
    GCancellable *cancellable,
    GError **error);

void gxdp_open_uri_call_open_file (
    GXdpOpenURI *proxy,
    const gchar *arg_parent_window,
    GVariant *arg_fd,
    GVariant *arg_options,
    GUnixFDList *fd_list,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_open_uri_call_open_file_finish (
    GXdpOpenURI *proxy,
    gchar **out_handle,
    GUnixFDList **out_fd_list,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_open_uri_call_open_file_sync (
    GXdpOpenURI *proxy,
    const gchar *arg_parent_window,
    GVariant *arg_fd,
    GVariant *arg_options,
    GUnixFDList  *fd_list,
    gchar **out_handle,
    GUnixFDList **out_fd_list,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
guint gxdp_open_uri_get_version (GXdpOpenURI *object);
void gxdp_open_uri_set_version (GXdpOpenURI *object, guint value);


/* ---- */

#define GXDP_TYPE_OPEN_URI_PROXY (gxdp_open_uri_proxy_get_type ())
#define GXDP_OPEN_URI_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_OPEN_URI_PROXY, GXdpOpenURIProxy))
#define GXDP_OPEN_URI_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_OPEN_URI_PROXY, GXdpOpenURIProxyClass))
#define GXDP_OPEN_URI_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_OPEN_URI_PROXY, GXdpOpenURIProxyClass))
#define GXDP_IS_OPEN_URI_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_OPEN_URI_PROXY))
#define GXDP_IS_OPEN_URI_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_OPEN_URI_PROXY))

typedef struct _GXdpOpenURIProxy GXdpOpenURIProxy;
typedef struct _GXdpOpenURIProxyClass GXdpOpenURIProxyClass;
typedef struct _GXdpOpenURIProxyPrivate GXdpOpenURIProxyPrivate;

struct _GXdpOpenURIProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GXdpOpenURIProxyPrivate *priv;
};

struct _GXdpOpenURIProxyClass
{
  GDBusProxyClass parent_class;
};

GType gxdp_open_uri_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpOpenURIProxy, g_object_unref)
#endif

void gxdp_open_uri_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpOpenURI *gxdp_open_uri_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpOpenURI *gxdp_open_uri_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gxdp_open_uri_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpOpenURI *gxdp_open_uri_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpOpenURI *gxdp_open_uri_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GXDP_TYPE_OPEN_URI_SKELETON (gxdp_open_uri_skeleton_get_type ())
#define GXDP_OPEN_URI_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_OPEN_URI_SKELETON, GXdpOpenURISkeleton))
#define GXDP_OPEN_URI_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_OPEN_URI_SKELETON, GXdpOpenURISkeletonClass))
#define GXDP_OPEN_URI_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_OPEN_URI_SKELETON, GXdpOpenURISkeletonClass))
#define GXDP_IS_OPEN_URI_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_OPEN_URI_SKELETON))
#define GXDP_IS_OPEN_URI_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_OPEN_URI_SKELETON))

typedef struct _GXdpOpenURISkeleton GXdpOpenURISkeleton;
typedef struct _GXdpOpenURISkeletonClass GXdpOpenURISkeletonClass;
typedef struct _GXdpOpenURISkeletonPrivate GXdpOpenURISkeletonPrivate;

struct _GXdpOpenURISkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GXdpOpenURISkeletonPrivate *priv;
};

struct _GXdpOpenURISkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gxdp_open_uri_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpOpenURISkeleton, g_object_unref)
#endif

GXdpOpenURI *gxdp_open_uri_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.portal.NetworkMonitor */

#define GXDP_TYPE_NETWORK_MONITOR (gxdp_network_monitor_get_type ())
#define GXDP_NETWORK_MONITOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_NETWORK_MONITOR, GXdpNetworkMonitor))
#define GXDP_IS_NETWORK_MONITOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_NETWORK_MONITOR))
#define GXDP_NETWORK_MONITOR_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GXDP_TYPE_NETWORK_MONITOR, GXdpNetworkMonitorIface))

struct _GXdpNetworkMonitor;
typedef struct _GXdpNetworkMonitor GXdpNetworkMonitor;
typedef struct _GXdpNetworkMonitorIface GXdpNetworkMonitorIface;

struct _GXdpNetworkMonitorIface
{
  GTypeInterface parent_iface;


  gboolean  (*get_available) (GXdpNetworkMonitor *object);

  guint  (*get_connectivity) (GXdpNetworkMonitor *object);

  gboolean  (*get_metered) (GXdpNetworkMonitor *object);

  void (*changed) (
    GXdpNetworkMonitor *object,
    gboolean arg_available);

};

GType gxdp_network_monitor_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gxdp_network_monitor_interface_info (void);
guint gxdp_network_monitor_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void gxdp_network_monitor_emit_changed (
    GXdpNetworkMonitor *object,
    gboolean arg_available);



/* D-Bus property accessors: */
gboolean gxdp_network_monitor_get_available (GXdpNetworkMonitor *object);
void gxdp_network_monitor_set_available (GXdpNetworkMonitor *object, gboolean value);

gboolean gxdp_network_monitor_get_metered (GXdpNetworkMonitor *object);
void gxdp_network_monitor_set_metered (GXdpNetworkMonitor *object, gboolean value);

guint gxdp_network_monitor_get_connectivity (GXdpNetworkMonitor *object);
void gxdp_network_monitor_set_connectivity (GXdpNetworkMonitor *object, guint value);


/* ---- */

#define GXDP_TYPE_NETWORK_MONITOR_PROXY (gxdp_network_monitor_proxy_get_type ())
#define GXDP_NETWORK_MONITOR_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_NETWORK_MONITOR_PROXY, GXdpNetworkMonitorProxy))
#define GXDP_NETWORK_MONITOR_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_NETWORK_MONITOR_PROXY, GXdpNetworkMonitorProxyClass))
#define GXDP_NETWORK_MONITOR_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_NETWORK_MONITOR_PROXY, GXdpNetworkMonitorProxyClass))
#define GXDP_IS_NETWORK_MONITOR_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_NETWORK_MONITOR_PROXY))
#define GXDP_IS_NETWORK_MONITOR_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_NETWORK_MONITOR_PROXY))

typedef struct _GXdpNetworkMonitorProxy GXdpNetworkMonitorProxy;
typedef struct _GXdpNetworkMonitorProxyClass GXdpNetworkMonitorProxyClass;
typedef struct _GXdpNetworkMonitorProxyPrivate GXdpNetworkMonitorProxyPrivate;

struct _GXdpNetworkMonitorProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GXdpNetworkMonitorProxyPrivate *priv;
};

struct _GXdpNetworkMonitorProxyClass
{
  GDBusProxyClass parent_class;
};

GType gxdp_network_monitor_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpNetworkMonitorProxy, g_object_unref)
#endif

void gxdp_network_monitor_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpNetworkMonitor *gxdp_network_monitor_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpNetworkMonitor *gxdp_network_monitor_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gxdp_network_monitor_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpNetworkMonitor *gxdp_network_monitor_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpNetworkMonitor *gxdp_network_monitor_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GXDP_TYPE_NETWORK_MONITOR_SKELETON (gxdp_network_monitor_skeleton_get_type ())
#define GXDP_NETWORK_MONITOR_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_NETWORK_MONITOR_SKELETON, GXdpNetworkMonitorSkeleton))
#define GXDP_NETWORK_MONITOR_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_NETWORK_MONITOR_SKELETON, GXdpNetworkMonitorSkeletonClass))
#define GXDP_NETWORK_MONITOR_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_NETWORK_MONITOR_SKELETON, GXdpNetworkMonitorSkeletonClass))
#define GXDP_IS_NETWORK_MONITOR_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_NETWORK_MONITOR_SKELETON))
#define GXDP_IS_NETWORK_MONITOR_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_NETWORK_MONITOR_SKELETON))

typedef struct _GXdpNetworkMonitorSkeleton GXdpNetworkMonitorSkeleton;
typedef struct _GXdpNetworkMonitorSkeletonClass GXdpNetworkMonitorSkeletonClass;
typedef struct _GXdpNetworkMonitorSkeletonPrivate GXdpNetworkMonitorSkeletonPrivate;

struct _GXdpNetworkMonitorSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GXdpNetworkMonitorSkeletonPrivate *priv;
};

struct _GXdpNetworkMonitorSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gxdp_network_monitor_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpNetworkMonitorSkeleton, g_object_unref)
#endif

GXdpNetworkMonitor *gxdp_network_monitor_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.portal.ProxyResolver */

#define GXDP_TYPE_PROXY_RESOLVER (gxdp_proxy_resolver_get_type ())
#define GXDP_PROXY_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_PROXY_RESOLVER, GXdpProxyResolver))
#define GXDP_IS_PROXY_RESOLVER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_PROXY_RESOLVER))
#define GXDP_PROXY_RESOLVER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GXDP_TYPE_PROXY_RESOLVER, GXdpProxyResolverIface))

struct _GXdpProxyResolver;
typedef struct _GXdpProxyResolver GXdpProxyResolver;
typedef struct _GXdpProxyResolverIface GXdpProxyResolverIface;

struct _GXdpProxyResolverIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_lookup) (
    GXdpProxyResolver *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_uri);

};

GType gxdp_proxy_resolver_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gxdp_proxy_resolver_interface_info (void);
guint gxdp_proxy_resolver_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gxdp_proxy_resolver_complete_lookup (
    GXdpProxyResolver *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *proxies);



/* D-Bus method calls: */
void gxdp_proxy_resolver_call_lookup (
    GXdpProxyResolver *proxy,
    const gchar *arg_uri,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gxdp_proxy_resolver_call_lookup_finish (
    GXdpProxyResolver *proxy,
    gchar ***out_proxies,
    GAsyncResult *res,
    GError **error);

gboolean gxdp_proxy_resolver_call_lookup_sync (
    GXdpProxyResolver *proxy,
    const gchar *arg_uri,
    gchar ***out_proxies,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define GXDP_TYPE_PROXY_RESOLVER_PROXY (gxdp_proxy_resolver_proxy_get_type ())
#define GXDP_PROXY_RESOLVER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_PROXY_RESOLVER_PROXY, GXdpProxyResolverProxy))
#define GXDP_PROXY_RESOLVER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_PROXY_RESOLVER_PROXY, GXdpProxyResolverProxyClass))
#define GXDP_PROXY_RESOLVER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_PROXY_RESOLVER_PROXY, GXdpProxyResolverProxyClass))
#define GXDP_IS_PROXY_RESOLVER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_PROXY_RESOLVER_PROXY))
#define GXDP_IS_PROXY_RESOLVER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_PROXY_RESOLVER_PROXY))

typedef struct _GXdpProxyResolverProxy GXdpProxyResolverProxy;
typedef struct _GXdpProxyResolverProxyClass GXdpProxyResolverProxyClass;
typedef struct _GXdpProxyResolverProxyPrivate GXdpProxyResolverProxyPrivate;

struct _GXdpProxyResolverProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GXdpProxyResolverProxyPrivate *priv;
};

struct _GXdpProxyResolverProxyClass
{
  GDBusProxyClass parent_class;
};

GType gxdp_proxy_resolver_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpProxyResolverProxy, g_object_unref)
#endif

void gxdp_proxy_resolver_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpProxyResolver *gxdp_proxy_resolver_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpProxyResolver *gxdp_proxy_resolver_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gxdp_proxy_resolver_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GXdpProxyResolver *gxdp_proxy_resolver_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GXdpProxyResolver *gxdp_proxy_resolver_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GXDP_TYPE_PROXY_RESOLVER_SKELETON (gxdp_proxy_resolver_skeleton_get_type ())
#define GXDP_PROXY_RESOLVER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GXDP_TYPE_PROXY_RESOLVER_SKELETON, GXdpProxyResolverSkeleton))
#define GXDP_PROXY_RESOLVER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GXDP_TYPE_PROXY_RESOLVER_SKELETON, GXdpProxyResolverSkeletonClass))
#define GXDP_PROXY_RESOLVER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GXDP_TYPE_PROXY_RESOLVER_SKELETON, GXdpProxyResolverSkeletonClass))
#define GXDP_IS_PROXY_RESOLVER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GXDP_TYPE_PROXY_RESOLVER_SKELETON))
#define GXDP_IS_PROXY_RESOLVER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GXDP_TYPE_PROXY_RESOLVER_SKELETON))

typedef struct _GXdpProxyResolverSkeleton GXdpProxyResolverSkeleton;
typedef struct _GXdpProxyResolverSkeletonClass GXdpProxyResolverSkeletonClass;
typedef struct _GXdpProxyResolverSkeletonPrivate GXdpProxyResolverSkeletonPrivate;

struct _GXdpProxyResolverSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GXdpProxyResolverSkeletonPrivate *priv;
};

struct _GXdpProxyResolverSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gxdp_proxy_resolver_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GXdpProxyResolverSkeleton, g_object_unref)
#endif

GXdpProxyResolver *gxdp_proxy_resolver_skeleton_new (void);


G_END_DECLS

#endif /* ____XDP_DBUS_H__ */
