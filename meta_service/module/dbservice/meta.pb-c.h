/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: meta.proto */

#ifndef PROTOBUF_C_meta_2eproto__INCLUDED
#define PROTOBUF_C_meta_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Dbservice__ChunkServerHealReq Dbservice__ChunkServerHealReq;
typedef struct Dbservice__ChunkServerHealResp Dbservice__ChunkServerHealResp;


/* --- enums --- */


/* --- messages --- */

struct  Dbservice__ChunkServerHealReq
{
  ProtobufCMessage base;
  char *id;
  char *ip;
  char *port;
  double block_mb_size;
  double total_mb_size;
  protobuf_c_boolean is_init;
};
#define DBSERVICE__CHUNK_SERVER_HEAL_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dbservice__chunk_server_heal_req__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0, 0, 0 }


struct  Dbservice__ChunkServerHealResp
{
  ProtobufCMessage base;
  float blksize;
  uint64_t blk_count;
  int32_t code;
  char *msg;
  protobuf_c_boolean is_init;
};
#define DBSERVICE__CHUNK_SERVER_HEAL_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dbservice__chunk_server_heal_resp__descriptor) \
    , 0, 0, 0, (char *)protobuf_c_empty_string, 0 }


/* Dbservice__ChunkServerHealReq methods */
void   dbservice__chunk_server_heal_req__init
                     (Dbservice__ChunkServerHealReq         *message);
size_t dbservice__chunk_server_heal_req__get_packed_size
                     (const Dbservice__ChunkServerHealReq   *message);
size_t dbservice__chunk_server_heal_req__pack
                     (const Dbservice__ChunkServerHealReq   *message,
                      uint8_t             *out);
size_t dbservice__chunk_server_heal_req__pack_to_buffer
                     (const Dbservice__ChunkServerHealReq   *message,
                      ProtobufCBuffer     *buffer);
Dbservice__ChunkServerHealReq *
       dbservice__chunk_server_heal_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dbservice__chunk_server_heal_req__free_unpacked
                     (Dbservice__ChunkServerHealReq *message,
                      ProtobufCAllocator *allocator);
/* Dbservice__ChunkServerHealResp methods */
void   dbservice__chunk_server_heal_resp__init
                     (Dbservice__ChunkServerHealResp         *message);
size_t dbservice__chunk_server_heal_resp__get_packed_size
                     (const Dbservice__ChunkServerHealResp   *message);
size_t dbservice__chunk_server_heal_resp__pack
                     (const Dbservice__ChunkServerHealResp   *message,
                      uint8_t             *out);
size_t dbservice__chunk_server_heal_resp__pack_to_buffer
                     (const Dbservice__ChunkServerHealResp   *message,
                      ProtobufCBuffer     *buffer);
Dbservice__ChunkServerHealResp *
       dbservice__chunk_server_heal_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dbservice__chunk_server_heal_resp__free_unpacked
                     (Dbservice__ChunkServerHealResp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Dbservice__ChunkServerHealReq_Closure)
                 (const Dbservice__ChunkServerHealReq *message,
                  void *closure_data);
typedef void (*Dbservice__ChunkServerHealResp_Closure)
                 (const Dbservice__ChunkServerHealResp *message,
                  void *closure_data);

/* --- services --- */

typedef struct Dbservice__Service_Service Dbservice__Service_Service;
struct Dbservice__Service_Service
{
  ProtobufCService base;
  void (*modify_chunk_server_meta)(Dbservice__Service_Service *service,
                                   const Dbservice__ChunkServerHealReq *input,
                                   Dbservice__ChunkServerHealResp_Closure closure,
                                   void *closure_data);
};
typedef void (*Dbservice__Service_ServiceDestroy)(Dbservice__Service_Service *);
void dbservice__service__init (Dbservice__Service_Service *service,
                               Dbservice__Service_ServiceDestroy destroy);
#define DBSERVICE__SERVICE__BASE_INIT \
    { &dbservice__service__descriptor, protobuf_c_service_invoke_internal, NULL }
#define DBSERVICE__SERVICE__INIT(function_prefix__) \
    { DBSERVICE__SERVICE__BASE_INIT,\
      function_prefix__ ## modify_chunk_server_meta  }
void dbservice__service__modify_chunk_server_meta(ProtobufCService *service,
                                                  const Dbservice__ChunkServerHealReq *input,
                                                  Dbservice__ChunkServerHealResp_Closure closure,
                                                  void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor dbservice__chunk_server_heal_req__descriptor;
extern const ProtobufCMessageDescriptor dbservice__chunk_server_heal_resp__descriptor;
extern const ProtobufCServiceDescriptor dbservice__service__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_meta_2eproto__INCLUDED */
