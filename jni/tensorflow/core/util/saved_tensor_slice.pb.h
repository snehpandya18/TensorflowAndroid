// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/util/saved_tensor_slice.proto

#ifndef PROTOBUF_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/tensor_slice.pb.h"
#include "tensorflow/core/framework/tensor.pb.h"
#include "tensorflow/core/framework/types.pb.h"
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

class SavedSlice;
class SavedSliceMeta;
class SavedTensorSliceMeta;
class SavedTensorSlices;

// ===================================================================

class SavedSliceMeta : public ::google::protobuf::Message {
 public:
  SavedSliceMeta();
  virtual ~SavedSliceMeta();

  SavedSliceMeta(const SavedSliceMeta& from);

  inline SavedSliceMeta& operator=(const SavedSliceMeta& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedSliceMeta& default_instance();

  void Swap(SavedSliceMeta* other);

  // implements Message ----------------------------------------------

  inline SavedSliceMeta* New() const { return New(NULL); }

  SavedSliceMeta* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedSliceMeta& from);
  void MergeFrom(const SavedSliceMeta& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SavedSliceMeta* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional .tensorflow.TensorShapeProto shape = 2;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 2;
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* mutable_shape();
  ::tensorflow::TensorShapeProto* release_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);

  // optional .tensorflow.DataType type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::tensorflow::DataType type() const;
  void set_type(::tensorflow::DataType value);

  // repeated .tensorflow.TensorSliceProto slice = 4;
  int slice_size() const;
  void clear_slice();
  static const int kSliceFieldNumber = 4;
  const ::tensorflow::TensorSliceProto& slice(int index) const;
  ::tensorflow::TensorSliceProto* mutable_slice(int index);
  ::tensorflow::TensorSliceProto* add_slice();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
      mutable_slice();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
      slice() const;

  // @@protoc_insertion_point(class_scope:tensorflow.SavedSliceMeta)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::tensorflow::TensorShapeProto* shape_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto > slice_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedSliceMeta* default_instance_;
};
// -------------------------------------------------------------------

class SavedTensorSliceMeta : public ::google::protobuf::Message {
 public:
  SavedTensorSliceMeta();
  virtual ~SavedTensorSliceMeta();

  SavedTensorSliceMeta(const SavedTensorSliceMeta& from);

  inline SavedTensorSliceMeta& operator=(const SavedTensorSliceMeta& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedTensorSliceMeta& default_instance();

  void Swap(SavedTensorSliceMeta* other);

  // implements Message ----------------------------------------------

  inline SavedTensorSliceMeta* New() const { return New(NULL); }

  SavedTensorSliceMeta* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedTensorSliceMeta& from);
  void MergeFrom(const SavedTensorSliceMeta& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SavedTensorSliceMeta* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.SavedSliceMeta tensor = 1;
  int tensor_size() const;
  void clear_tensor();
  static const int kTensorFieldNumber = 1;
  const ::tensorflow::SavedSliceMeta& tensor(int index) const;
  ::tensorflow::SavedSliceMeta* mutable_tensor(int index);
  ::tensorflow::SavedSliceMeta* add_tensor();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >*
      mutable_tensor();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >&
      tensor() const;

  // @@protoc_insertion_point(class_scope:tensorflow.SavedTensorSliceMeta)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta > tensor_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedTensorSliceMeta* default_instance_;
};
// -------------------------------------------------------------------

class SavedSlice : public ::google::protobuf::Message {
 public:
  SavedSlice();
  virtual ~SavedSlice();

  SavedSlice(const SavedSlice& from);

  inline SavedSlice& operator=(const SavedSlice& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedSlice& default_instance();

  void Swap(SavedSlice* other);

  // implements Message ----------------------------------------------

  inline SavedSlice* New() const { return New(NULL); }

  SavedSlice* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedSlice& from);
  void MergeFrom(const SavedSlice& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SavedSlice* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional .tensorflow.TensorSliceProto slice = 2;
  bool has_slice() const;
  void clear_slice();
  static const int kSliceFieldNumber = 2;
  const ::tensorflow::TensorSliceProto& slice() const;
  ::tensorflow::TensorSliceProto* mutable_slice();
  ::tensorflow::TensorSliceProto* release_slice();
  void set_allocated_slice(::tensorflow::TensorSliceProto* slice);

  // optional .tensorflow.TensorProto data = 3;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 3;
  const ::tensorflow::TensorProto& data() const;
  ::tensorflow::TensorProto* mutable_data();
  ::tensorflow::TensorProto* release_data();
  void set_allocated_data(::tensorflow::TensorProto* data);

  // @@protoc_insertion_point(class_scope:tensorflow.SavedSlice)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::tensorflow::TensorSliceProto* slice_;
  ::tensorflow::TensorProto* data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedSlice* default_instance_;
};
// -------------------------------------------------------------------

class SavedTensorSlices : public ::google::protobuf::Message {
 public:
  SavedTensorSlices();
  virtual ~SavedTensorSlices();

  SavedTensorSlices(const SavedTensorSlices& from);

  inline SavedTensorSlices& operator=(const SavedTensorSlices& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedTensorSlices& default_instance();

  void Swap(SavedTensorSlices* other);

  // implements Message ----------------------------------------------

  inline SavedTensorSlices* New() const { return New(NULL); }

  SavedTensorSlices* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedTensorSlices& from);
  void MergeFrom(const SavedTensorSlices& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SavedTensorSlices* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tensorflow.SavedTensorSliceMeta meta = 1;
  bool has_meta() const;
  void clear_meta();
  static const int kMetaFieldNumber = 1;
  const ::tensorflow::SavedTensorSliceMeta& meta() const;
  ::tensorflow::SavedTensorSliceMeta* mutable_meta();
  ::tensorflow::SavedTensorSliceMeta* release_meta();
  void set_allocated_meta(::tensorflow::SavedTensorSliceMeta* meta);

  // optional .tensorflow.SavedSlice data = 2;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::tensorflow::SavedSlice& data() const;
  ::tensorflow::SavedSlice* mutable_data();
  ::tensorflow::SavedSlice* release_data();
  void set_allocated_data(::tensorflow::SavedSlice* data);

  // @@protoc_insertion_point(class_scope:tensorflow.SavedTensorSlices)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::tensorflow::SavedTensorSliceMeta* meta_;
  ::tensorflow::SavedSlice* data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedTensorSlices* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SavedSliceMeta

// optional string name = 1;
inline void SavedSliceMeta::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SavedSliceMeta::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedSliceMeta::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.SavedSliceMeta.name)
}
inline void SavedSliceMeta::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.SavedSliceMeta.name)
}
inline void SavedSliceMeta::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.SavedSliceMeta.name)
}
inline ::std::string* SavedSliceMeta::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSliceMeta.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SavedSliceMeta::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedSliceMeta::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSliceMeta.name)
}

// optional .tensorflow.TensorShapeProto shape = 2;
inline bool SavedSliceMeta::has_shape() const {
  return !_is_default_instance_ && shape_ != NULL;
}
inline void SavedSliceMeta::clear_shape() {
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) delete shape_;
  shape_ = NULL;
}
inline const ::tensorflow::TensorShapeProto& SavedSliceMeta::shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.shape)
  return shape_ != NULL ? *shape_ : *default_instance_->shape_;
}
inline ::tensorflow::TensorShapeProto* SavedSliceMeta::mutable_shape() {
  
  if (shape_ == NULL) {
    shape_ = new ::tensorflow::TensorShapeProto;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSliceMeta.shape)
  return shape_;
}
inline ::tensorflow::TensorShapeProto* SavedSliceMeta::release_shape() {
  
  ::tensorflow::TensorShapeProto* temp = shape_;
  shape_ = NULL;
  return temp;
}
inline void SavedSliceMeta::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  delete shape_;
  shape_ = shape;
  if (shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSliceMeta.shape)
}

// optional .tensorflow.DataType type = 3;
inline void SavedSliceMeta::clear_type() {
  type_ = 0;
}
inline ::tensorflow::DataType SavedSliceMeta::type() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.type)
  return static_cast< ::tensorflow::DataType >(type_);
}
inline void SavedSliceMeta::set_type(::tensorflow::DataType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.SavedSliceMeta.type)
}

// repeated .tensorflow.TensorSliceProto slice = 4;
inline int SavedSliceMeta::slice_size() const {
  return slice_.size();
}
inline void SavedSliceMeta::clear_slice() {
  slice_.Clear();
}
inline const ::tensorflow::TensorSliceProto& SavedSliceMeta::slice(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.slice)
  return slice_.Get(index);
}
inline ::tensorflow::TensorSliceProto* SavedSliceMeta::mutable_slice(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSliceMeta.slice)
  return slice_.Mutable(index);
}
inline ::tensorflow::TensorSliceProto* SavedSliceMeta::add_slice() {
  // @@protoc_insertion_point(field_add:tensorflow.SavedSliceMeta.slice)
  return slice_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
SavedSliceMeta::mutable_slice() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.SavedSliceMeta.slice)
  return &slice_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
SavedSliceMeta::slice() const {
  // @@protoc_insertion_point(field_list:tensorflow.SavedSliceMeta.slice)
  return slice_;
}

// -------------------------------------------------------------------

// SavedTensorSliceMeta

// repeated .tensorflow.SavedSliceMeta tensor = 1;
inline int SavedTensorSliceMeta::tensor_size() const {
  return tensor_.size();
}
inline void SavedTensorSliceMeta::clear_tensor() {
  tensor_.Clear();
}
inline const ::tensorflow::SavedSliceMeta& SavedTensorSliceMeta::tensor(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_.Get(index);
}
inline ::tensorflow::SavedSliceMeta* SavedTensorSliceMeta::mutable_tensor(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_.Mutable(index);
}
inline ::tensorflow::SavedSliceMeta* SavedTensorSliceMeta::add_tensor() {
  // @@protoc_insertion_point(field_add:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >*
SavedTensorSliceMeta::mutable_tensor() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.SavedTensorSliceMeta.tensor)
  return &tensor_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >&
SavedTensorSliceMeta::tensor() const {
  // @@protoc_insertion_point(field_list:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_;
}

// -------------------------------------------------------------------

// SavedSlice

// optional string name = 1;
inline void SavedSlice::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SavedSlice::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSlice.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedSlice::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tensorflow.SavedSlice.name)
}
inline void SavedSlice::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tensorflow.SavedSlice.name)
}
inline void SavedSlice::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tensorflow.SavedSlice.name)
}
inline ::std::string* SavedSlice::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSlice.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SavedSlice::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedSlice::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSlice.name)
}

// optional .tensorflow.TensorSliceProto slice = 2;
inline bool SavedSlice::has_slice() const {
  return !_is_default_instance_ && slice_ != NULL;
}
inline void SavedSlice::clear_slice() {
  if (GetArenaNoVirtual() == NULL && slice_ != NULL) delete slice_;
  slice_ = NULL;
}
inline const ::tensorflow::TensorSliceProto& SavedSlice::slice() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSlice.slice)
  return slice_ != NULL ? *slice_ : *default_instance_->slice_;
}
inline ::tensorflow::TensorSliceProto* SavedSlice::mutable_slice() {
  
  if (slice_ == NULL) {
    slice_ = new ::tensorflow::TensorSliceProto;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSlice.slice)
  return slice_;
}
inline ::tensorflow::TensorSliceProto* SavedSlice::release_slice() {
  
  ::tensorflow::TensorSliceProto* temp = slice_;
  slice_ = NULL;
  return temp;
}
inline void SavedSlice::set_allocated_slice(::tensorflow::TensorSliceProto* slice) {
  delete slice_;
  slice_ = slice;
  if (slice) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSlice.slice)
}

// optional .tensorflow.TensorProto data = 3;
inline bool SavedSlice::has_data() const {
  return !_is_default_instance_ && data_ != NULL;
}
inline void SavedSlice::clear_data() {
  if (GetArenaNoVirtual() == NULL && data_ != NULL) delete data_;
  data_ = NULL;
}
inline const ::tensorflow::TensorProto& SavedSlice::data() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSlice.data)
  return data_ != NULL ? *data_ : *default_instance_->data_;
}
inline ::tensorflow::TensorProto* SavedSlice::mutable_data() {
  
  if (data_ == NULL) {
    data_ = new ::tensorflow::TensorProto;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSlice.data)
  return data_;
}
inline ::tensorflow::TensorProto* SavedSlice::release_data() {
  
  ::tensorflow::TensorProto* temp = data_;
  data_ = NULL;
  return temp;
}
inline void SavedSlice::set_allocated_data(::tensorflow::TensorProto* data) {
  delete data_;
  data_ = data;
  if (data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSlice.data)
}

// -------------------------------------------------------------------

// SavedTensorSlices

// optional .tensorflow.SavedTensorSliceMeta meta = 1;
inline bool SavedTensorSlices::has_meta() const {
  return !_is_default_instance_ && meta_ != NULL;
}
inline void SavedTensorSlices::clear_meta() {
  if (GetArenaNoVirtual() == NULL && meta_ != NULL) delete meta_;
  meta_ = NULL;
}
inline const ::tensorflow::SavedTensorSliceMeta& SavedTensorSlices::meta() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedTensorSlices.meta)
  return meta_ != NULL ? *meta_ : *default_instance_->meta_;
}
inline ::tensorflow::SavedTensorSliceMeta* SavedTensorSlices::mutable_meta() {
  
  if (meta_ == NULL) {
    meta_ = new ::tensorflow::SavedTensorSliceMeta;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedTensorSlices.meta)
  return meta_;
}
inline ::tensorflow::SavedTensorSliceMeta* SavedTensorSlices::release_meta() {
  
  ::tensorflow::SavedTensorSliceMeta* temp = meta_;
  meta_ = NULL;
  return temp;
}
inline void SavedTensorSlices::set_allocated_meta(::tensorflow::SavedTensorSliceMeta* meta) {
  delete meta_;
  meta_ = meta;
  if (meta) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedTensorSlices.meta)
}

// optional .tensorflow.SavedSlice data = 2;
inline bool SavedTensorSlices::has_data() const {
  return !_is_default_instance_ && data_ != NULL;
}
inline void SavedTensorSlices::clear_data() {
  if (GetArenaNoVirtual() == NULL && data_ != NULL) delete data_;
  data_ = NULL;
}
inline const ::tensorflow::SavedSlice& SavedTensorSlices::data() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedTensorSlices.data)
  return data_ != NULL ? *data_ : *default_instance_->data_;
}
inline ::tensorflow::SavedSlice* SavedTensorSlices::mutable_data() {
  
  if (data_ == NULL) {
    data_ = new ::tensorflow::SavedSlice;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedTensorSlices.data)
  return data_;
}
inline ::tensorflow::SavedSlice* SavedTensorSlices::release_data() {
  
  ::tensorflow::SavedSlice* temp = data_;
  data_ = NULL;
  return temp;
}
inline void SavedTensorSlices::set_allocated_data(::tensorflow::SavedSlice* data) {
  delete data_;
  data_ = data;
  if (data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedTensorSlices.data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto__INCLUDED
