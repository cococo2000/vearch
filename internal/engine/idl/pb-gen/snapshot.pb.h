// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: snapshot.proto

#ifndef PROTOBUF_INCLUDED_snapshot_2eproto
#define PROTOBUF_INCLUDED_snapshot_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_snapshot_2eproto 

namespace protobuf_snapshot_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_snapshot_2eproto
class SnapshotMsg;
class SnapshotMsgDefaultTypeInternal;
extern SnapshotMsgDefaultTypeInternal _SnapshotMsg_default_instance_;
namespace google {
namespace protobuf {
template<> ::SnapshotMsg* Arena::CreateMaybeMessage<::SnapshotMsg>(Arena*);
}  // namespace protobuf
}  // namespace google

enum SnapshotStatus {
  UnUse = 0,
  Start = 1,
  Running = 2,
  Finish = 3,
  SnapshotStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SnapshotStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SnapshotStatus_IsValid(int value);
const SnapshotStatus SnapshotStatus_MIN = UnUse;
const SnapshotStatus SnapshotStatus_MAX = Finish;
const int SnapshotStatus_ARRAYSIZE = SnapshotStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* SnapshotStatus_descriptor();
inline const ::std::string& SnapshotStatus_Name(SnapshotStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    SnapshotStatus_descriptor(), value);
}
inline bool SnapshotStatus_Parse(
    const ::std::string& name, SnapshotStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SnapshotStatus>(
    SnapshotStatus_descriptor(), name, value);
}
// ===================================================================

class SnapshotMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SnapshotMsg) */ {
 public:
  SnapshotMsg();
  virtual ~SnapshotMsg();

  SnapshotMsg(const SnapshotMsg& from);

  inline SnapshotMsg& operator=(const SnapshotMsg& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SnapshotMsg(SnapshotMsg&& from) noexcept
    : SnapshotMsg() {
    *this = ::std::move(from);
  }

  inline SnapshotMsg& operator=(SnapshotMsg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SnapshotMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SnapshotMsg* internal_default_instance() {
    return reinterpret_cast<const SnapshotMsg*>(
               &_SnapshotMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SnapshotMsg* other);
  friend void swap(SnapshotMsg& a, SnapshotMsg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SnapshotMsg* New() const final {
    return CreateMaybeMessage<SnapshotMsg>(NULL);
  }

  SnapshotMsg* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SnapshotMsg>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SnapshotMsg& from);
  void MergeFrom(const SnapshotMsg& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SnapshotMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string file_name = 1;
  void clear_file_name();
  static const int kFileNameFieldNumber = 1;
  const ::std::string& file_name() const;
  void set_file_name(const ::std::string& value);
  #if LANG_CXX11
  void set_file_name(::std::string&& value);
  #endif
  void set_file_name(const char* value);
  void set_file_name(const char* value, size_t size);
  ::std::string* mutable_file_name();
  ::std::string* release_file_name();
  void set_allocated_file_name(::std::string* file_name);

  // bytes data = 2;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // .SnapshotStatus status = 3;
  void clear_status();
  static const int kStatusFieldNumber = 3;
  ::SnapshotStatus status() const;
  void set_status(::SnapshotStatus value);

  // @@protoc_insertion_point(class_scope:SnapshotMsg)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr file_name_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  int status_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_snapshot_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SnapshotMsg

// string file_name = 1;
inline void SnapshotMsg::clear_file_name() {
  file_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SnapshotMsg::file_name() const {
  // @@protoc_insertion_point(field_get:SnapshotMsg.file_name)
  return file_name_.GetNoArena();
}
inline void SnapshotMsg::set_file_name(const ::std::string& value) {
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SnapshotMsg.file_name)
}
#if LANG_CXX11
inline void SnapshotMsg::set_file_name(::std::string&& value) {
  
  file_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SnapshotMsg.file_name)
}
#endif
inline void SnapshotMsg::set_file_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SnapshotMsg.file_name)
}
inline void SnapshotMsg::set_file_name(const char* value, size_t size) {
  
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SnapshotMsg.file_name)
}
inline ::std::string* SnapshotMsg::mutable_file_name() {
  
  // @@protoc_insertion_point(field_mutable:SnapshotMsg.file_name)
  return file_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SnapshotMsg::release_file_name() {
  // @@protoc_insertion_point(field_release:SnapshotMsg.file_name)
  
  return file_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SnapshotMsg::set_allocated_file_name(::std::string* file_name) {
  if (file_name != NULL) {
    
  } else {
    
  }
  file_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_name);
  // @@protoc_insertion_point(field_set_allocated:SnapshotMsg.file_name)
}

// bytes data = 2;
inline void SnapshotMsg::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SnapshotMsg::data() const {
  // @@protoc_insertion_point(field_get:SnapshotMsg.data)
  return data_.GetNoArena();
}
inline void SnapshotMsg::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SnapshotMsg.data)
}
#if LANG_CXX11
inline void SnapshotMsg::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SnapshotMsg.data)
}
#endif
inline void SnapshotMsg::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SnapshotMsg.data)
}
inline void SnapshotMsg::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SnapshotMsg.data)
}
inline ::std::string* SnapshotMsg::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:SnapshotMsg.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SnapshotMsg::release_data() {
  // @@protoc_insertion_point(field_release:SnapshotMsg.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SnapshotMsg::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:SnapshotMsg.data)
}

// .SnapshotStatus status = 3;
inline void SnapshotMsg::clear_status() {
  status_ = 0;
}
inline ::SnapshotStatus SnapshotMsg::status() const {
  // @@protoc_insertion_point(field_get:SnapshotMsg.status)
  return static_cast< ::SnapshotStatus >(status_);
}
inline void SnapshotMsg::set_status(::SnapshotStatus value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:SnapshotMsg.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::SnapshotStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SnapshotStatus>() {
  return ::SnapshotStatus_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_snapshot_2eproto