// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TriggerRpnItem.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TriggerRpnItem_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TriggerRpnItem_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "RpnItemType.pb.h"
#include "ArpTypes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_TriggerRpnItem_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TriggerRpnItem_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TriggerRpnItem_2eproto;
namespace Arp {
namespace Services {
namespace DataLogger {
namespace Services {
namespace Grpc {
class TriggerRpnItem;
class TriggerRpnItemDefaultTypeInternal;
extern TriggerRpnItemDefaultTypeInternal _TriggerRpnItem_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> ::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem* Arena::CreateMaybeMessage<::Arp::Services::DataLogger::Services::Grpc::TriggerRpnItem>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace Services {
namespace DataLogger {
namespace Services {
namespace Grpc {

// ===================================================================

class TriggerRpnItem PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem) */ {
 public:
  inline TriggerRpnItem() : TriggerRpnItem(nullptr) {}
  virtual ~TriggerRpnItem();

  TriggerRpnItem(const TriggerRpnItem& from);
  TriggerRpnItem(TriggerRpnItem&& from) noexcept
    : TriggerRpnItem() {
    *this = ::std::move(from);
  }

  inline TriggerRpnItem& operator=(const TriggerRpnItem& from) {
    CopyFrom(from);
    return *this;
  }
  inline TriggerRpnItem& operator=(TriggerRpnItem&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TriggerRpnItem& default_instance();

  static inline const TriggerRpnItem* internal_default_instance() {
    return reinterpret_cast<const TriggerRpnItem*>(
               &_TriggerRpnItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TriggerRpnItem& a, TriggerRpnItem& b) {
    a.Swap(&b);
  }
  inline void Swap(TriggerRpnItem* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TriggerRpnItem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TriggerRpnItem* New() const final {
    return CreateMaybeMessage<TriggerRpnItem>(nullptr);
  }

  TriggerRpnItem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TriggerRpnItem>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TriggerRpnItem& from);
  void MergeFrom(const TriggerRpnItem& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TriggerRpnItem* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem";
  }
  protected:
  explicit TriggerRpnItem(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_TriggerRpnItem_2eproto);
    return ::descriptor_table_TriggerRpnItem_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kItemFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // .Arp.Type.Grpc.ObjectType Item = 2;
  bool has_item() const;
  private:
  bool _internal_has_item() const;
  public:
  void clear_item();
  const ::Arp::Type::Grpc::ObjectType& item() const;
  ::Arp::Type::Grpc::ObjectType* release_item();
  ::Arp::Type::Grpc::ObjectType* mutable_item();
  void set_allocated_item(::Arp::Type::Grpc::ObjectType* item);
  private:
  const ::Arp::Type::Grpc::ObjectType& _internal_item() const;
  ::Arp::Type::Grpc::ObjectType* _internal_mutable_item();
  public:
  void unsafe_arena_set_allocated_item(
      ::Arp::Type::Grpc::ObjectType* item);
  ::Arp::Type::Grpc::ObjectType* unsafe_arena_release_item();

  // .Arp.Services.DataLogger.Services.Grpc.RpnItemType Type = 1;
  void clear_type();
  ::Arp::Services::DataLogger::Services::Grpc::RpnItemType type() const;
  void set_type(::Arp::Services::DataLogger::Services::Grpc::RpnItemType value);
  private:
  ::Arp::Services::DataLogger::Services::Grpc::RpnItemType _internal_type() const;
  void _internal_set_type(::Arp::Services::DataLogger::Services::Grpc::RpnItemType value);
  public:

  // @@protoc_insertion_point(class_scope:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::Arp::Type::Grpc::ObjectType* item_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TriggerRpnItem_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TriggerRpnItem

// .Arp.Services.DataLogger.Services.Grpc.RpnItemType Type = 1;
inline void TriggerRpnItem::clear_type() {
  type_ = 0;
}
inline ::Arp::Services::DataLogger::Services::Grpc::RpnItemType TriggerRpnItem::_internal_type() const {
  return static_cast< ::Arp::Services::DataLogger::Services::Grpc::RpnItemType >(type_);
}
inline ::Arp::Services::DataLogger::Services::Grpc::RpnItemType TriggerRpnItem::type() const {
  // @@protoc_insertion_point(field_get:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem.Type)
  return _internal_type();
}
inline void TriggerRpnItem::_internal_set_type(::Arp::Services::DataLogger::Services::Grpc::RpnItemType value) {
  
  type_ = value;
}
inline void TriggerRpnItem::set_type(::Arp::Services::DataLogger::Services::Grpc::RpnItemType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem.Type)
}

// .Arp.Type.Grpc.ObjectType Item = 2;
inline bool TriggerRpnItem::_internal_has_item() const {
  return this != internal_default_instance() && item_ != nullptr;
}
inline bool TriggerRpnItem::has_item() const {
  return _internal_has_item();
}
inline const ::Arp::Type::Grpc::ObjectType& TriggerRpnItem::_internal_item() const {
  const ::Arp::Type::Grpc::ObjectType* p = item_;
  return p != nullptr ? *p : reinterpret_cast<const ::Arp::Type::Grpc::ObjectType&>(
      ::Arp::Type::Grpc::_ObjectType_default_instance_);
}
inline const ::Arp::Type::Grpc::ObjectType& TriggerRpnItem::item() const {
  // @@protoc_insertion_point(field_get:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem.Item)
  return _internal_item();
}
inline void TriggerRpnItem::unsafe_arena_set_allocated_item(
    ::Arp::Type::Grpc::ObjectType* item) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(item_);
  }
  item_ = item;
  if (item) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem.Item)
}
inline ::Arp::Type::Grpc::ObjectType* TriggerRpnItem::release_item() {
  
  ::Arp::Type::Grpc::ObjectType* temp = item_;
  item_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::Arp::Type::Grpc::ObjectType* TriggerRpnItem::unsafe_arena_release_item() {
  // @@protoc_insertion_point(field_release:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem.Item)
  
  ::Arp::Type::Grpc::ObjectType* temp = item_;
  item_ = nullptr;
  return temp;
}
inline ::Arp::Type::Grpc::ObjectType* TriggerRpnItem::_internal_mutable_item() {
  
  if (item_ == nullptr) {
    auto* p = CreateMaybeMessage<::Arp::Type::Grpc::ObjectType>(GetArena());
    item_ = p;
  }
  return item_;
}
inline ::Arp::Type::Grpc::ObjectType* TriggerRpnItem::mutable_item() {
  // @@protoc_insertion_point(field_mutable:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem.Item)
  return _internal_mutable_item();
}
inline void TriggerRpnItem::set_allocated_item(::Arp::Type::Grpc::ObjectType* item) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(item_);
  }
  if (item) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(item)->GetArena();
    if (message_arena != submessage_arena) {
      item = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, item, submessage_arena);
    }
    
  } else {
    
  }
  item_ = item;
  // @@protoc_insertion_point(field_set_allocated:Arp.Services.DataLogger.Services.Grpc.TriggerRpnItem.Item)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Grpc
}  // namespace Services
}  // namespace DataLogger
}  // namespace Services
}  // namespace Arp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TriggerRpnItem_2eproto
