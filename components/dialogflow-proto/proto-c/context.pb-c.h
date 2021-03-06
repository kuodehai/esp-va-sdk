/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: google/cloud/dialogflow/v2beta1/context.proto */

#ifndef PROTOBUF_C_google_2fcloud_2fdialogflow_2fv2beta1_2fcontext_2eproto__INCLUDED
#define PROTOBUF_C_google_2fcloud_2fdialogflow_2fv2beta1_2fcontext_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "annotations.pb-c.h"
#include "empty.pb-c.h"
#include "field_mask.pb-c.h"
#include "struct.pb-c.h"

typedef struct _Google__Cloud__Dialogflow__V2beta1__Context Google__Cloud__Dialogflow__V2beta1__Context;
typedef struct _Google__Cloud__Dialogflow__V2beta1__ListContextsRequest Google__Cloud__Dialogflow__V2beta1__ListContextsRequest;
typedef struct _Google__Cloud__Dialogflow__V2beta1__ListContextsResponse Google__Cloud__Dialogflow__V2beta1__ListContextsResponse;
typedef struct _Google__Cloud__Dialogflow__V2beta1__GetContextRequest Google__Cloud__Dialogflow__V2beta1__GetContextRequest;
typedef struct _Google__Cloud__Dialogflow__V2beta1__CreateContextRequest Google__Cloud__Dialogflow__V2beta1__CreateContextRequest;
typedef struct _Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest;
typedef struct _Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest;
typedef struct _Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest;


/* --- enums --- */


/* --- messages --- */

/*
 * Represents a context.
 */
struct  _Google__Cloud__Dialogflow__V2beta1__Context
{
  ProtobufCMessage base;
  /*
   * Required. The unique identifier of the context. Format:
   * `projects/<Project ID>/agent/sessions/<Session ID>/contexts/<Context ID>`,
   * or `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
   * ID>/sessions/<Session ID>/contexts/<Context ID>`. The `Context ID` is
   * always converted to lowercase. If `Environment ID` is not specified, we
   * assume default 'draft' environment. If `User ID` is not specified, we
   * assume default '-' user.
   */
  char *name;
  /*
   * Optional. The number of conversational query requests after which the
   * context expires. If set to `0` (the default) the context expires
   * immediately. Contexts expire automatically after 10 minutes even if there
   * are no matching queries.
   */
  int32_t lifespan_count;
  /*
   * Optional. The collection of parameters associated with this context.
   * Refer to [this doc](https://dialogflow.com/docs/actions-and-parameters) for
   * syntax.
   */
  Google__Protobuf__Struct *parameters;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__CONTEXT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__context__descriptor) \
    , (char *)protobuf_c_empty_string, 0, NULL }


/*
 * The request message for [Contexts.ListContexts][google.cloud.dialogflow.v2beta1.Contexts.ListContexts].
 */
struct  _Google__Cloud__Dialogflow__V2beta1__ListContextsRequest
{
  ProtobufCMessage base;
  /*
   * Required. The session to list all contexts from.
   * Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
   * `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
   * ID>/sessions/<Session ID>`. If `Environment ID` is not specified, we assume
   * default 'draft' environment. If `User ID` is not specified, we assume
   * default '-' user.
   */
  char *parent;
  /*
   * Optional. The maximum number of items to return in a single page. By
   * default 100 and at most 1000.
   */
  int32_t page_size;
  /*
   * Optional. The next_page_token value returned from a previous list request.
   */
  char *page_token;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__LIST_CONTEXTS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__list_contexts_request__descriptor) \
    , (char *)protobuf_c_empty_string, 0, (char *)protobuf_c_empty_string }


/*
 * The response message for [Contexts.ListContexts][google.cloud.dialogflow.v2beta1.Contexts.ListContexts].
 */
struct  _Google__Cloud__Dialogflow__V2beta1__ListContextsResponse
{
  ProtobufCMessage base;
  /*
   * The list of contexts. There will be a maximum number of items
   * returned based on the page_size field in the request.
   */
  size_t n_contexts;
  Google__Cloud__Dialogflow__V2beta1__Context **contexts;
  /*
   * Token to retrieve the next page of results, or empty if there are no
   * more results in the list.
   */
  char *next_page_token;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__LIST_CONTEXTS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__list_contexts_response__descriptor) \
    , 0,NULL, (char *)protobuf_c_empty_string }


/*
 * The request message for [Contexts.GetContext][google.cloud.dialogflow.v2beta1.Contexts.GetContext].
 */
struct  _Google__Cloud__Dialogflow__V2beta1__GetContextRequest
{
  ProtobufCMessage base;
  /*
   * Required. The name of the context. Format:
   * `projects/<Project ID>/agent/sessions/<Session ID>/contexts/<Context ID>`
   * or `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
   * ID>/sessions/<Session ID>/contexts/<Context ID>`. If `Environment ID` is
   * not specified, we assume default 'draft' environment. If `User ID` is not
   * specified, we assume default '-' user.
   */
  char *name;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__GET_CONTEXT_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__get_context_request__descriptor) \
    , (char *)protobuf_c_empty_string }


/*
 * The request message for [Contexts.CreateContext][google.cloud.dialogflow.v2beta1.Contexts.CreateContext].
 */
struct  _Google__Cloud__Dialogflow__V2beta1__CreateContextRequest
{
  ProtobufCMessage base;
  /*
   * Required. The session to create a context for.
   * Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
   * `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
   * ID>/sessions/<Session ID>`. If `Environment ID` is not specified, we assume
   * default 'draft' environment. If `User ID` is not specified, we assume
   * default '-' user.
   */
  char *parent;
  /*
   * Required. The context to create.
   */
  Google__Cloud__Dialogflow__V2beta1__Context *context;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__CREATE_CONTEXT_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__create_context_request__descriptor) \
    , (char *)protobuf_c_empty_string, NULL }


/*
 * The request message for [Contexts.UpdateContext][google.cloud.dialogflow.v2beta1.Contexts.UpdateContext].
 */
struct  _Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest
{
  ProtobufCMessage base;
  /*
   * Required. The context to update.
   */
  Google__Cloud__Dialogflow__V2beta1__Context *context;
  /*
   * Optional. The mask to control which fields get updated.
   */
  Google__Protobuf__FieldMask *update_mask;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__UPDATE_CONTEXT_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__update_context_request__descriptor) \
    , NULL, NULL }


/*
 * The request message for [Contexts.DeleteContext][google.cloud.dialogflow.v2beta1.Contexts.DeleteContext].
 */
struct  _Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest
{
  ProtobufCMessage base;
  /*
   * Required. The name of the context to delete. Format:
   * `projects/<Project ID>/agent/sessions/<Session ID>/contexts/<Context ID>`
   * or `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
   * ID>/sessions/<Session ID>/contexts/<Context ID>`. If `Environment ID` is
   * not specified, we assume default 'draft' environment. If `User ID` is not
   * specified, we assume default '-' user.
   */
  char *name;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__DELETE_CONTEXT_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__delete_context_request__descriptor) \
    , (char *)protobuf_c_empty_string }


/*
 * The request message for [Contexts.DeleteAllContexts][google.cloud.dialogflow.v2beta1.Contexts.DeleteAllContexts].
 */
struct  _Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest
{
  ProtobufCMessage base;
  /*
   * Required. The name of the session to delete all contexts from. Format:
   * `projects/<Project ID>/agent/sessions/<Session ID>` or `projects/<Project
   * ID>/agent/environments/<Environment ID>/users/<User ID>/sessions/<Session
   * ID>`. If `Environment ID` is not specified we assume default 'draft'
   * environment. If `User ID` is not specified, we assume default '-' user.
   */
  char *parent;
};
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__DELETE_ALL_CONTEXTS_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__cloud__dialogflow__v2beta1__delete_all_contexts_request__descriptor) \
    , (char *)protobuf_c_empty_string }


/* Google__Cloud__Dialogflow__V2beta1__Context methods */
void   google__cloud__dialogflow__v2beta1__context__init
                     (Google__Cloud__Dialogflow__V2beta1__Context         *message);
size_t google__cloud__dialogflow__v2beta1__context__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__Context   *message);
size_t google__cloud__dialogflow__v2beta1__context__pack
                     (const Google__Cloud__Dialogflow__V2beta1__Context   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__context__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__Context   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__Context *
       google__cloud__dialogflow__v2beta1__context__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__context__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__Context *message,
                      ProtobufCAllocator *allocator);
/* Google__Cloud__Dialogflow__V2beta1__ListContextsRequest methods */
void   google__cloud__dialogflow__v2beta1__list_contexts_request__init
                     (Google__Cloud__Dialogflow__V2beta1__ListContextsRequest         *message);
size_t google__cloud__dialogflow__v2beta1__list_contexts_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__ListContextsRequest   *message);
size_t google__cloud__dialogflow__v2beta1__list_contexts_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__ListContextsRequest   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__list_contexts_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__ListContextsRequest   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__ListContextsRequest *
       google__cloud__dialogflow__v2beta1__list_contexts_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__list_contexts_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__ListContextsRequest *message,
                      ProtobufCAllocator *allocator);
/* Google__Cloud__Dialogflow__V2beta1__ListContextsResponse methods */
void   google__cloud__dialogflow__v2beta1__list_contexts_response__init
                     (Google__Cloud__Dialogflow__V2beta1__ListContextsResponse         *message);
size_t google__cloud__dialogflow__v2beta1__list_contexts_response__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__ListContextsResponse   *message);
size_t google__cloud__dialogflow__v2beta1__list_contexts_response__pack
                     (const Google__Cloud__Dialogflow__V2beta1__ListContextsResponse   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__list_contexts_response__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__ListContextsResponse   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__ListContextsResponse *
       google__cloud__dialogflow__v2beta1__list_contexts_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__list_contexts_response__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__ListContextsResponse *message,
                      ProtobufCAllocator *allocator);
/* Google__Cloud__Dialogflow__V2beta1__GetContextRequest methods */
void   google__cloud__dialogflow__v2beta1__get_context_request__init
                     (Google__Cloud__Dialogflow__V2beta1__GetContextRequest         *message);
size_t google__cloud__dialogflow__v2beta1__get_context_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__GetContextRequest   *message);
size_t google__cloud__dialogflow__v2beta1__get_context_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__GetContextRequest   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__get_context_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__GetContextRequest   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__GetContextRequest *
       google__cloud__dialogflow__v2beta1__get_context_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__get_context_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__GetContextRequest *message,
                      ProtobufCAllocator *allocator);
/* Google__Cloud__Dialogflow__V2beta1__CreateContextRequest methods */
void   google__cloud__dialogflow__v2beta1__create_context_request__init
                     (Google__Cloud__Dialogflow__V2beta1__CreateContextRequest         *message);
size_t google__cloud__dialogflow__v2beta1__create_context_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__CreateContextRequest   *message);
size_t google__cloud__dialogflow__v2beta1__create_context_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__CreateContextRequest   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__create_context_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__CreateContextRequest   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__CreateContextRequest *
       google__cloud__dialogflow__v2beta1__create_context_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__create_context_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__CreateContextRequest *message,
                      ProtobufCAllocator *allocator);
/* Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest methods */
void   google__cloud__dialogflow__v2beta1__update_context_request__init
                     (Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest         *message);
size_t google__cloud__dialogflow__v2beta1__update_context_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest   *message);
size_t google__cloud__dialogflow__v2beta1__update_context_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__update_context_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest *
       google__cloud__dialogflow__v2beta1__update_context_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__update_context_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest *message,
                      ProtobufCAllocator *allocator);
/* Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest methods */
void   google__cloud__dialogflow__v2beta1__delete_context_request__init
                     (Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest         *message);
size_t google__cloud__dialogflow__v2beta1__delete_context_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest   *message);
size_t google__cloud__dialogflow__v2beta1__delete_context_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__delete_context_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest *
       google__cloud__dialogflow__v2beta1__delete_context_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__delete_context_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest *message,
                      ProtobufCAllocator *allocator);
/* Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest methods */
void   google__cloud__dialogflow__v2beta1__delete_all_contexts_request__init
                     (Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest         *message);
size_t google__cloud__dialogflow__v2beta1__delete_all_contexts_request__get_packed_size
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest   *message);
size_t google__cloud__dialogflow__v2beta1__delete_all_contexts_request__pack
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest   *message,
                      uint8_t             *out);
size_t google__cloud__dialogflow__v2beta1__delete_all_contexts_request__pack_to_buffer
                     (const Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest   *message,
                      ProtobufCBuffer     *buffer);
Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest *
       google__cloud__dialogflow__v2beta1__delete_all_contexts_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__cloud__dialogflow__v2beta1__delete_all_contexts_request__free_unpacked
                     (Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Google__Cloud__Dialogflow__V2beta1__Context_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__Context *message,
                  void *closure_data);
typedef void (*Google__Cloud__Dialogflow__V2beta1__ListContextsRequest_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__ListContextsRequest *message,
                  void *closure_data);
typedef void (*Google__Cloud__Dialogflow__V2beta1__ListContextsResponse_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__ListContextsResponse *message,
                  void *closure_data);
typedef void (*Google__Cloud__Dialogflow__V2beta1__GetContextRequest_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__GetContextRequest *message,
                  void *closure_data);
typedef void (*Google__Cloud__Dialogflow__V2beta1__CreateContextRequest_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__CreateContextRequest *message,
                  void *closure_data);
typedef void (*Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest *message,
                  void *closure_data);
typedef void (*Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest *message,
                  void *closure_data);
typedef void (*Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest_Closure)
                 (const Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest *message,
                  void *closure_data);

/* --- services --- */

typedef struct _Google__Cloud__Dialogflow__V2beta1__Contexts_Service Google__Cloud__Dialogflow__V2beta1__Contexts_Service;
struct _Google__Cloud__Dialogflow__V2beta1__Contexts_Service
{
  ProtobufCService base;
  void (*list_contexts)(Google__Cloud__Dialogflow__V2beta1__Contexts_Service *service,
                        const Google__Cloud__Dialogflow__V2beta1__ListContextsRequest *input,
                        Google__Cloud__Dialogflow__V2beta1__ListContextsResponse_Closure closure,
                        void *closure_data);
  void (*get_context)(Google__Cloud__Dialogflow__V2beta1__Contexts_Service *service,
                      const Google__Cloud__Dialogflow__V2beta1__GetContextRequest *input,
                      Google__Cloud__Dialogflow__V2beta1__Context_Closure closure,
                      void *closure_data);
  void (*create_context)(Google__Cloud__Dialogflow__V2beta1__Contexts_Service *service,
                         const Google__Cloud__Dialogflow__V2beta1__CreateContextRequest *input,
                         Google__Cloud__Dialogflow__V2beta1__Context_Closure closure,
                         void *closure_data);
  void (*update_context)(Google__Cloud__Dialogflow__V2beta1__Contexts_Service *service,
                         const Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest *input,
                         Google__Cloud__Dialogflow__V2beta1__Context_Closure closure,
                         void *closure_data);
  void (*delete_context)(Google__Cloud__Dialogflow__V2beta1__Contexts_Service *service,
                         const Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest *input,
                         Google__Protobuf__Empty_Closure closure,
                         void *closure_data);
  void (*delete_all_contexts)(Google__Cloud__Dialogflow__V2beta1__Contexts_Service *service,
                              const Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest *input,
                              Google__Protobuf__Empty_Closure closure,
                              void *closure_data);
};
typedef void (*Google__Cloud__Dialogflow__V2beta1__Contexts_ServiceDestroy)(Google__Cloud__Dialogflow__V2beta1__Contexts_Service *);
void google__cloud__dialogflow__v2beta1__contexts__init (Google__Cloud__Dialogflow__V2beta1__Contexts_Service *service,
                                                         Google__Cloud__Dialogflow__V2beta1__Contexts_ServiceDestroy destroy);
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__CONTEXTS__BASE_INIT \
    { &google__cloud__dialogflow__v2beta1__contexts__descriptor, protobuf_c_service_invoke_internal, NULL }
#define GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__CONTEXTS__INIT(function_prefix__) \
    { GOOGLE__CLOUD__DIALOGFLOW__V2BETA1__CONTEXTS__BASE_INIT,\
      function_prefix__ ## list_contexts,\
      function_prefix__ ## get_context,\
      function_prefix__ ## create_context,\
      function_prefix__ ## update_context,\
      function_prefix__ ## delete_context,\
      function_prefix__ ## delete_all_contexts  }
void google__cloud__dialogflow__v2beta1__contexts__list_contexts(ProtobufCService *service,
                                                                 const Google__Cloud__Dialogflow__V2beta1__ListContextsRequest *input,
                                                                 Google__Cloud__Dialogflow__V2beta1__ListContextsResponse_Closure closure,
                                                                 void *closure_data);
void google__cloud__dialogflow__v2beta1__contexts__get_context(ProtobufCService *service,
                                                               const Google__Cloud__Dialogflow__V2beta1__GetContextRequest *input,
                                                               Google__Cloud__Dialogflow__V2beta1__Context_Closure closure,
                                                               void *closure_data);
void google__cloud__dialogflow__v2beta1__contexts__create_context(ProtobufCService *service,
                                                                  const Google__Cloud__Dialogflow__V2beta1__CreateContextRequest *input,
                                                                  Google__Cloud__Dialogflow__V2beta1__Context_Closure closure,
                                                                  void *closure_data);
void google__cloud__dialogflow__v2beta1__contexts__update_context(ProtobufCService *service,
                                                                  const Google__Cloud__Dialogflow__V2beta1__UpdateContextRequest *input,
                                                                  Google__Cloud__Dialogflow__V2beta1__Context_Closure closure,
                                                                  void *closure_data);
void google__cloud__dialogflow__v2beta1__contexts__delete_context(ProtobufCService *service,
                                                                  const Google__Cloud__Dialogflow__V2beta1__DeleteContextRequest *input,
                                                                  Google__Protobuf__Empty_Closure closure,
                                                                  void *closure_data);
void google__cloud__dialogflow__v2beta1__contexts__delete_all_contexts(ProtobufCService *service,
                                                                       const Google__Cloud__Dialogflow__V2beta1__DeleteAllContextsRequest *input,
                                                                       Google__Protobuf__Empty_Closure closure,
                                                                       void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__context__descriptor;
extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__list_contexts_request__descriptor;
extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__list_contexts_response__descriptor;
extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__get_context_request__descriptor;
extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__create_context_request__descriptor;
extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__update_context_request__descriptor;
extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__delete_context_request__descriptor;
extern const ProtobufCMessageDescriptor google__cloud__dialogflow__v2beta1__delete_all_contexts_request__descriptor;
extern const ProtobufCServiceDescriptor google__cloud__dialogflow__v2beta1__contexts__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_google_2fcloud_2fdialogflow_2fv2beta1_2fcontext_2eproto__INCLUDED */
