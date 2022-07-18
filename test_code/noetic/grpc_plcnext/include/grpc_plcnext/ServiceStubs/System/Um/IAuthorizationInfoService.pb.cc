// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IAuthorizationInfoService.proto

#include "IAuthorizationInfoService.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_SecurityToken_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SecurityToken_SecurityToken_2eproto;
namespace Arp {
namespace System {
namespace Um {
namespace Services {
namespace Grpc {
class IAuthorizationInfoServiceHasPermissionForRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<IAuthorizationInfoServiceHasPermissionForRequest> _instance;
} _IAuthorizationInfoServiceHasPermissionForRequest_default_instance_;
class IAuthorizationInfoServiceHasPermissionForResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<IAuthorizationInfoServiceHasPermissionForResponse> _instance;
} _IAuthorizationInfoServiceHasPermissionForResponse_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace Um
}  // namespace System
}  // namespace Arp
static void InitDefaultsscc_info_IAuthorizationInfoServiceHasPermissionForRequest_IAuthorizationInfoService_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::System::Um::Services::Grpc::_IAuthorizationInfoServiceHasPermissionForRequest_default_instance_;
    new (ptr) ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_IAuthorizationInfoServiceHasPermissionForRequest_IAuthorizationInfoService_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_IAuthorizationInfoServiceHasPermissionForRequest_IAuthorizationInfoService_2eproto}, {
      &scc_info_SecurityToken_SecurityToken_2eproto.base,}};

static void InitDefaultsscc_info_IAuthorizationInfoServiceHasPermissionForResponse_IAuthorizationInfoService_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Arp::System::Um::Services::Grpc::_IAuthorizationInfoServiceHasPermissionForResponse_default_instance_;
    new (ptr) ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_IAuthorizationInfoServiceHasPermissionForResponse_IAuthorizationInfoService_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_IAuthorizationInfoServiceHasPermissionForResponse_IAuthorizationInfoService_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_IAuthorizationInfoService_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_IAuthorizationInfoService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_IAuthorizationInfoService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_IAuthorizationInfoService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, entity_),
  PROTOBUF_FIELD_OFFSET(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, operation_),
  PROTOBUF_FIELD_OFFSET(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest, securitytoken_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse, _returnvalue_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest)},
  { 8, -1, sizeof(::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::System::Um::Services::Grpc::_IAuthorizationInfoServiceHasPermissionForRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Arp::System::Um::Services::Grpc::_IAuthorizationInfoServiceHasPermissionForResponse_default_instance_),
};

const char descriptor_table_protodef_IAuthorizationInfoService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037IAuthorizationInfoService.proto\022\033Arp.S"
  "ystem.Um.Services.Grpc\032\023SecurityToken.pr"
  "oto\032\017Operation.proto\"\274\001\n0IAuthorizationI"
  "nfoServiceHasPermissionForRequest\022\016\n\006ent"
  "ity\030\001 \001(\t\0228\n\toperation\030\002 \001(\0162%.Arp.Syste"
  "m.Um.Commons.Grpc.Operation\022>\n\rsecurityT"
  "oken\030\003 \001(\0132\'.Arp.System.Security.Grpc.Se"
  "curityToken\"I\n1IAuthorizationInfoService"
  "HasPermissionForResponse\022\024\n\014_ReturnValue"
  "\030\001 \001(\0102\321\001\n\031IAuthorizationInfoService\022\263\001\n"
  "\020HasPermissionFor\022M.Arp.System.Um.Servic"
  "es.Grpc.IAuthorizationInfoServiceHasPerm"
  "issionForRequest\032N.Arp.System.Um.Service"
  "s.Grpc.IAuthorizationInfoServiceHasPermi"
  "ssionForResponse\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_IAuthorizationInfoService_2eproto_deps[2] = {
  &::descriptor_table_Operation_2eproto,
  &::descriptor_table_SecurityToken_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_IAuthorizationInfoService_2eproto_sccs[2] = {
  &scc_info_IAuthorizationInfoServiceHasPermissionForRequest_IAuthorizationInfoService_2eproto.base,
  &scc_info_IAuthorizationInfoServiceHasPermissionForResponse_IAuthorizationInfoService_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_IAuthorizationInfoService_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_IAuthorizationInfoService_2eproto = {
  false, false, descriptor_table_protodef_IAuthorizationInfoService_2eproto, "IAuthorizationInfoService.proto", 586,
  &descriptor_table_IAuthorizationInfoService_2eproto_once, descriptor_table_IAuthorizationInfoService_2eproto_sccs, descriptor_table_IAuthorizationInfoService_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_IAuthorizationInfoService_2eproto::offsets,
  file_level_metadata_IAuthorizationInfoService_2eproto, 2, file_level_enum_descriptors_IAuthorizationInfoService_2eproto, file_level_service_descriptors_IAuthorizationInfoService_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_IAuthorizationInfoService_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_IAuthorizationInfoService_2eproto)), true);
namespace Arp {
namespace System {
namespace Um {
namespace Services {
namespace Grpc {

// ===================================================================

class IAuthorizationInfoServiceHasPermissionForRequest::_Internal {
 public:
  static const ::Arp::System::Security::Grpc::SecurityToken& securitytoken(const IAuthorizationInfoServiceHasPermissionForRequest* msg);
};

const ::Arp::System::Security::Grpc::SecurityToken&
IAuthorizationInfoServiceHasPermissionForRequest::_Internal::securitytoken(const IAuthorizationInfoServiceHasPermissionForRequest* msg) {
  return *msg->securitytoken_;
}
void IAuthorizationInfoServiceHasPermissionForRequest::clear_securitytoken() {
  if (GetArena() == nullptr && securitytoken_ != nullptr) {
    delete securitytoken_;
  }
  securitytoken_ = nullptr;
}
IAuthorizationInfoServiceHasPermissionForRequest::IAuthorizationInfoServiceHasPermissionForRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
}
IAuthorizationInfoServiceHasPermissionForRequest::IAuthorizationInfoServiceHasPermissionForRequest(const IAuthorizationInfoServiceHasPermissionForRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  entity_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_entity().empty()) {
    entity_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_entity(), 
      GetArena());
  }
  if (from._internal_has_securitytoken()) {
    securitytoken_ = new ::Arp::System::Security::Grpc::SecurityToken(*from.securitytoken_);
  } else {
    securitytoken_ = nullptr;
  }
  operation_ = from.operation_;
  // @@protoc_insertion_point(copy_constructor:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
}

void IAuthorizationInfoServiceHasPermissionForRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_IAuthorizationInfoServiceHasPermissionForRequest_IAuthorizationInfoService_2eproto.base);
  entity_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&securitytoken_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&operation_) -
      reinterpret_cast<char*>(&securitytoken_)) + sizeof(operation_));
}

IAuthorizationInfoServiceHasPermissionForRequest::~IAuthorizationInfoServiceHasPermissionForRequest() {
  // @@protoc_insertion_point(destructor:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void IAuthorizationInfoServiceHasPermissionForRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  entity_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete securitytoken_;
}

void IAuthorizationInfoServiceHasPermissionForRequest::ArenaDtor(void* object) {
  IAuthorizationInfoServiceHasPermissionForRequest* _this = reinterpret_cast< IAuthorizationInfoServiceHasPermissionForRequest* >(object);
  (void)_this;
}
void IAuthorizationInfoServiceHasPermissionForRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void IAuthorizationInfoServiceHasPermissionForRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IAuthorizationInfoServiceHasPermissionForRequest& IAuthorizationInfoServiceHasPermissionForRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_IAuthorizationInfoServiceHasPermissionForRequest_IAuthorizationInfoService_2eproto.base);
  return *internal_default_instance();
}


void IAuthorizationInfoServiceHasPermissionForRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  entity_.ClearToEmpty();
  if (GetArena() == nullptr && securitytoken_ != nullptr) {
    delete securitytoken_;
  }
  securitytoken_ = nullptr;
  operation_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* IAuthorizationInfoServiceHasPermissionForRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string entity = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_entity();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest.entity"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Arp.System.Um.Commons.Grpc.Operation operation = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_operation(static_cast<::Arp::System::Um::Commons::Grpc::Operation>(val));
        } else goto handle_unusual;
        continue;
      // .Arp.System.Security.Grpc.SecurityToken securityToken = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_securitytoken(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* IAuthorizationInfoServiceHasPermissionForRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string entity = 1;
  if (this->entity().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_entity().data(), static_cast<int>(this->_internal_entity().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest.entity");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_entity(), target);
  }

  // .Arp.System.Um.Commons.Grpc.Operation operation = 2;
  if (this->operation() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_operation(), target);
  }

  // .Arp.System.Security.Grpc.SecurityToken securityToken = 3;
  if (this->has_securitytoken()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::securitytoken(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  return target;
}

size_t IAuthorizationInfoServiceHasPermissionForRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string entity = 1;
  if (this->entity().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_entity());
  }

  // .Arp.System.Security.Grpc.SecurityToken securityToken = 3;
  if (this->has_securitytoken()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *securitytoken_);
  }

  // .Arp.System.Um.Commons.Grpc.Operation operation = 2;
  if (this->operation() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_operation());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IAuthorizationInfoServiceHasPermissionForRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const IAuthorizationInfoServiceHasPermissionForRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<IAuthorizationInfoServiceHasPermissionForRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
    MergeFrom(*source);
  }
}

void IAuthorizationInfoServiceHasPermissionForRequest::MergeFrom(const IAuthorizationInfoServiceHasPermissionForRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.entity().size() > 0) {
    _internal_set_entity(from._internal_entity());
  }
  if (from.has_securitytoken()) {
    _internal_mutable_securitytoken()->::Arp::System::Security::Grpc::SecurityToken::MergeFrom(from._internal_securitytoken());
  }
  if (from.operation() != 0) {
    _internal_set_operation(from._internal_operation());
  }
}

void IAuthorizationInfoServiceHasPermissionForRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IAuthorizationInfoServiceHasPermissionForRequest::CopyFrom(const IAuthorizationInfoServiceHasPermissionForRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IAuthorizationInfoServiceHasPermissionForRequest::IsInitialized() const {
  return true;
}

void IAuthorizationInfoServiceHasPermissionForRequest::InternalSwap(IAuthorizationInfoServiceHasPermissionForRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  entity_.Swap(&other->entity_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(IAuthorizationInfoServiceHasPermissionForRequest, operation_)
      + sizeof(IAuthorizationInfoServiceHasPermissionForRequest::operation_)
      - PROTOBUF_FIELD_OFFSET(IAuthorizationInfoServiceHasPermissionForRequest, securitytoken_)>(
          reinterpret_cast<char*>(&securitytoken_),
          reinterpret_cast<char*>(&other->securitytoken_));
}

::PROTOBUF_NAMESPACE_ID::Metadata IAuthorizationInfoServiceHasPermissionForRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class IAuthorizationInfoServiceHasPermissionForResponse::_Internal {
 public:
};

IAuthorizationInfoServiceHasPermissionForResponse::IAuthorizationInfoServiceHasPermissionForResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
}
IAuthorizationInfoServiceHasPermissionForResponse::IAuthorizationInfoServiceHasPermissionForResponse(const IAuthorizationInfoServiceHasPermissionForResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _returnvalue_ = from._returnvalue_;
  // @@protoc_insertion_point(copy_constructor:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
}

void IAuthorizationInfoServiceHasPermissionForResponse::SharedCtor() {
  _returnvalue_ = false;
}

IAuthorizationInfoServiceHasPermissionForResponse::~IAuthorizationInfoServiceHasPermissionForResponse() {
  // @@protoc_insertion_point(destructor:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void IAuthorizationInfoServiceHasPermissionForResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void IAuthorizationInfoServiceHasPermissionForResponse::ArenaDtor(void* object) {
  IAuthorizationInfoServiceHasPermissionForResponse* _this = reinterpret_cast< IAuthorizationInfoServiceHasPermissionForResponse* >(object);
  (void)_this;
}
void IAuthorizationInfoServiceHasPermissionForResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void IAuthorizationInfoServiceHasPermissionForResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IAuthorizationInfoServiceHasPermissionForResponse& IAuthorizationInfoServiceHasPermissionForResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_IAuthorizationInfoServiceHasPermissionForResponse_IAuthorizationInfoService_2eproto.base);
  return *internal_default_instance();
}


void IAuthorizationInfoServiceHasPermissionForResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _returnvalue_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* IAuthorizationInfoServiceHasPermissionForResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool _ReturnValue = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _returnvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* IAuthorizationInfoServiceHasPermissionForResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool _ReturnValue = 1;
  if (this->_returnvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal__returnvalue(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  return target;
}

size_t IAuthorizationInfoServiceHasPermissionForResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool _ReturnValue = 1;
  if (this->_returnvalue() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IAuthorizationInfoServiceHasPermissionForResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const IAuthorizationInfoServiceHasPermissionForResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<IAuthorizationInfoServiceHasPermissionForResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
    MergeFrom(*source);
  }
}

void IAuthorizationInfoServiceHasPermissionForResponse::MergeFrom(const IAuthorizationInfoServiceHasPermissionForResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._returnvalue() != 0) {
    _internal_set__returnvalue(from._internal__returnvalue());
  }
}

void IAuthorizationInfoServiceHasPermissionForResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IAuthorizationInfoServiceHasPermissionForResponse::CopyFrom(const IAuthorizationInfoServiceHasPermissionForResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Arp.System.Um.Services.Grpc.IAuthorizationInfoServiceHasPermissionForResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IAuthorizationInfoServiceHasPermissionForResponse::IsInitialized() const {
  return true;
}

void IAuthorizationInfoServiceHasPermissionForResponse::InternalSwap(IAuthorizationInfoServiceHasPermissionForResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_returnvalue_, other->_returnvalue_);
}

::PROTOBUF_NAMESPACE_ID::Metadata IAuthorizationInfoServiceHasPermissionForResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Grpc
}  // namespace Services
}  // namespace Um
}  // namespace System
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest* Arena::CreateMaybeMessage< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse* Arena::CreateMaybeMessage< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Arp::System::Um::Services::Grpc::IAuthorizationInfoServiceHasPermissionForResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
