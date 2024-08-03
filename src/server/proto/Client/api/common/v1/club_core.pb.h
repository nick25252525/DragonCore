// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/common/v1/club_core.proto

#ifndef PROTOBUF_api_2fcommon_2fv1_2fclub_5fcore_2eproto__INCLUDED
#define PROTOBUF_api_2fcommon_2fv1_2fclub_5fcore_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "api/common/v1/club_tag.pb.h"
#include "api/common/v1/club_type.pb.h"
#include "api/common/v1/club_enum.pb.h"
#include "api/client/v1/club_member.pb.h"
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace club {
namespace v1 {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_api_2fcommon_2fv1_2fclub_5fcore_2eproto();
void protobuf_AssignDesc_api_2fcommon_2fv1_2fclub_5fcore_2eproto();
void protobuf_ShutdownFile_api_2fcommon_2fv1_2fclub_5fcore_2eproto();

class AvatarId;
class ClubDescription;

// ===================================================================

class TC_PROTO_API AvatarId : public ::google::protobuf::Message {
 public:
  AvatarId();
  virtual ~AvatarId();

  AvatarId(const AvatarId& from);

  inline AvatarId& operator=(const AvatarId& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AvatarId& default_instance();

  void Swap(AvatarId* other);

  // implements Message ----------------------------------------------

  AvatarId* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.club.v1.AvatarId)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 id_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fcommon_2fv1_2fclub_5fcore_2eproto();
  friend void protobuf_AssignDesc_api_2fcommon_2fv1_2fclub_5fcore_2eproto();
  friend void protobuf_ShutdownFile_api_2fcommon_2fv1_2fclub_5fcore_2eproto();

  void InitAsDefaultInstance();
  static AvatarId* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API ClubDescription : public ::google::protobuf::Message {
 public:
  ClubDescription();
  virtual ~ClubDescription();

  ClubDescription(const ClubDescription& from);

  inline ClubDescription& operator=(const ClubDescription& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClubDescription& default_instance();

  void Swap(ClubDescription* other);

  // implements Message ----------------------------------------------

  ClubDescription* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint64 id() const;
  inline void set_id(::google::protobuf::uint64 value);

  // optional .bgs.protocol.club.v1.UniqueClubType type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline const ::bgs::protocol::club::v1::UniqueClubType& type() const;
  inline ::bgs::protocol::club::v1::UniqueClubType* mutable_type();
  inline ::bgs::protocol::club::v1::UniqueClubType* release_type();
  inline void set_allocated_type(::bgs::protocol::club::v1::UniqueClubType* type);

  // optional string name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string description = 4;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 4;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  inline void set_allocated_description(::std::string* description);

  // optional .bgs.protocol.club.v1.AvatarId avatar = 5;
  inline bool has_avatar() const;
  inline void clear_avatar();
  static const int kAvatarFieldNumber = 5;
  inline const ::bgs::protocol::club::v1::AvatarId& avatar() const;
  inline ::bgs::protocol::club::v1::AvatarId* mutable_avatar();
  inline ::bgs::protocol::club::v1::AvatarId* release_avatar();
  inline void set_allocated_avatar(::bgs::protocol::club::v1::AvatarId* avatar);

  // optional .bgs.protocol.club.v1.PrivacyLevel privacy_level = 6;
  inline bool has_privacy_level() const;
  inline void clear_privacy_level();
  static const int kPrivacyLevelFieldNumber = 6;
  inline ::bgs::protocol::club::v1::PrivacyLevel privacy_level() const;
  inline void set_privacy_level(::bgs::protocol::club::v1::PrivacyLevel value);

  // optional .bgs.protocol.club.v1.VisibilityLevel visibility_level = 7;
  inline bool has_visibility_level() const;
  inline void clear_visibility_level();
  static const int kVisibilityLevelFieldNumber = 7;
  inline ::bgs::protocol::club::v1::VisibilityLevel visibility_level() const;
  inline void set_visibility_level(::bgs::protocol::club::v1::VisibilityLevel value);

  // optional uint32 member_count = 8;
  inline bool has_member_count() const;
  inline void clear_member_count();
  static const int kMemberCountFieldNumber = 8;
  inline ::google::protobuf::uint32 member_count() const;
  inline void set_member_count(::google::protobuf::uint32 value);

  // repeated .bgs.protocol.club.v1.client.MemberDescription leader = 9;
  inline int leader_size() const;
  inline void clear_leader();
  static const int kLeaderFieldNumber = 9;
  inline const ::bgs::protocol::club::v1::client::MemberDescription& leader(int index) const;
  inline ::bgs::protocol::club::v1::client::MemberDescription* mutable_leader(int index);
  inline ::bgs::protocol::club::v1::client::MemberDescription* add_leader();
  inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::client::MemberDescription >&
      leader() const;
  inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::client::MemberDescription >*
      mutable_leader();

  // optional uint64 creation_time = 10;
  inline bool has_creation_time() const;
  inline void clear_creation_time();
  static const int kCreationTimeFieldNumber = 10;
  inline ::google::protobuf::uint64 creation_time() const;
  inline void set_creation_time(::google::protobuf::uint64 value);

  // optional string timezone = 11;
  inline bool has_timezone() const;
  inline void clear_timezone();
  static const int kTimezoneFieldNumber = 11;
  inline const ::std::string& timezone() const;
  inline void set_timezone(const ::std::string& value);
  inline void set_timezone(const char* value);
  inline void set_timezone(const char* value, size_t size);
  inline ::std::string* mutable_timezone();
  inline ::std::string* release_timezone();
  inline void set_allocated_timezone(::std::string* timezone);

  // optional string locale = 12;
  inline bool has_locale() const;
  inline void clear_locale();
  static const int kLocaleFieldNumber = 12;
  inline const ::std::string& locale() const;
  inline void set_locale(const ::std::string& value);
  inline void set_locale(const char* value);
  inline void set_locale(const char* value, size_t size);
  inline ::std::string* mutable_locale();
  inline ::std::string* release_locale();
  inline void set_allocated_locale(::std::string* locale);

  // repeated .bgs.protocol.club.v1.TagIdentifier tag = 13;
  inline int tag_size() const;
  inline void clear_tag();
  static const int kTagFieldNumber = 13;
  inline const ::bgs::protocol::club::v1::TagIdentifier& tag(int index) const;
  inline ::bgs::protocol::club::v1::TagIdentifier* mutable_tag(int index);
  inline ::bgs::protocol::club::v1::TagIdentifier* add_tag();
  inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::TagIdentifier >&
      tag() const;
  inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::TagIdentifier >*
      mutable_tag();

  // @@protoc_insertion_point(class_scope:bgs.protocol.club.v1.ClubDescription)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_description();
  inline void clear_has_description();
  inline void set_has_avatar();
  inline void clear_has_avatar();
  inline void set_has_privacy_level();
  inline void clear_has_privacy_level();
  inline void set_has_visibility_level();
  inline void clear_has_visibility_level();
  inline void set_has_member_count();
  inline void clear_has_member_count();
  inline void set_has_creation_time();
  inline void clear_has_creation_time();
  inline void set_has_timezone();
  inline void clear_has_timezone();
  inline void set_has_locale();
  inline void clear_has_locale();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 id_;
  ::bgs::protocol::club::v1::UniqueClubType* type_;
  ::std::string* name_;
  ::std::string* description_;
  ::bgs::protocol::club::v1::AvatarId* avatar_;
  int privacy_level_;
  int visibility_level_;
  ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::client::MemberDescription > leader_;
  ::google::protobuf::uint64 creation_time_;
  ::std::string* timezone_;
  ::std::string* locale_;
  ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::TagIdentifier > tag_;
  ::google::protobuf::uint32 member_count_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fcommon_2fv1_2fclub_5fcore_2eproto();
  friend void protobuf_AssignDesc_api_2fcommon_2fv1_2fclub_5fcore_2eproto();
  friend void protobuf_ShutdownFile_api_2fcommon_2fv1_2fclub_5fcore_2eproto();

  void InitAsDefaultInstance();
  static ClubDescription* default_instance_;
};
// ===================================================================

// ===================================================================

// ===================================================================

// AvatarId

// optional uint32 id = 1;
inline bool AvatarId::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AvatarId::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AvatarId::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AvatarId::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 AvatarId::id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.AvatarId.id)
  return id_;
}
inline void AvatarId::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.AvatarId.id)
}

// -------------------------------------------------------------------

// ClubDescription

// optional uint64 id = 1;
inline bool ClubDescription::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClubDescription::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClubDescription::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClubDescription::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 ClubDescription::id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.id)
  return id_;
}
inline void ClubDescription::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.id)
}

// optional .bgs.protocol.club.v1.UniqueClubType type = 2;
inline bool ClubDescription::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClubDescription::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClubDescription::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClubDescription::clear_type() {
  if (type_ != NULL) type_->::bgs::protocol::club::v1::UniqueClubType::Clear();
  clear_has_type();
}
inline const ::bgs::protocol::club::v1::UniqueClubType& ClubDescription::type() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.type)
  return type_ != NULL ? *type_ : *default_instance_->type_;
}
inline ::bgs::protocol::club::v1::UniqueClubType* ClubDescription::mutable_type() {
  set_has_type();
  if (type_ == NULL) type_ = new ::bgs::protocol::club::v1::UniqueClubType;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.type)
  return type_;
}
inline ::bgs::protocol::club::v1::UniqueClubType* ClubDescription::release_type() {
  clear_has_type();
  ::bgs::protocol::club::v1::UniqueClubType* temp = type_;
  type_ = NULL;
  return temp;
}
inline void ClubDescription::set_allocated_type(::bgs::protocol::club::v1::UniqueClubType* type) {
  delete type_;
  type_ = type;
  if (type) {
    set_has_type();
  } else {
    clear_has_type();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubDescription.type)
}

// optional string name = 3;
inline bool ClubDescription::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClubDescription::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ClubDescription::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ClubDescription::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& ClubDescription::name() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.name)
  return *name_;
}
inline void ClubDescription::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.name)
}
inline void ClubDescription::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.ClubDescription.name)
}
inline void ClubDescription::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.ClubDescription.name)
}
inline ::std::string* ClubDescription::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.name)
  return name_;
}
inline ::std::string* ClubDescription::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClubDescription::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubDescription.name)
}

// optional string description = 4;
inline bool ClubDescription::has_description() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ClubDescription::set_has_description() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ClubDescription::clear_has_description() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ClubDescription::clear_description() {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& ClubDescription::description() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.description)
  return *description_;
}
inline void ClubDescription::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.description)
}
inline void ClubDescription::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.ClubDescription.description)
}
inline void ClubDescription::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.ClubDescription.description)
}
inline ::std::string* ClubDescription::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    description_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.description)
  return description_;
}
inline ::std::string* ClubDescription::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClubDescription::set_allocated_description(::std::string* description) {
  if (description_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete description_;
  }
  if (description) {
    set_has_description();
    description_ = description;
  } else {
    clear_has_description();
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubDescription.description)
}

// optional .bgs.protocol.club.v1.AvatarId avatar = 5;
inline bool ClubDescription::has_avatar() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClubDescription::set_has_avatar() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ClubDescription::clear_has_avatar() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ClubDescription::clear_avatar() {
  if (avatar_ != NULL) avatar_->::bgs::protocol::club::v1::AvatarId::Clear();
  clear_has_avatar();
}
inline const ::bgs::protocol::club::v1::AvatarId& ClubDescription::avatar() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.avatar)
  return avatar_ != NULL ? *avatar_ : *default_instance_->avatar_;
}
inline ::bgs::protocol::club::v1::AvatarId* ClubDescription::mutable_avatar() {
  set_has_avatar();
  if (avatar_ == NULL) avatar_ = new ::bgs::protocol::club::v1::AvatarId;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.avatar)
  return avatar_;
}
inline ::bgs::protocol::club::v1::AvatarId* ClubDescription::release_avatar() {
  clear_has_avatar();
  ::bgs::protocol::club::v1::AvatarId* temp = avatar_;
  avatar_ = NULL;
  return temp;
}
inline void ClubDescription::set_allocated_avatar(::bgs::protocol::club::v1::AvatarId* avatar) {
  delete avatar_;
  avatar_ = avatar;
  if (avatar) {
    set_has_avatar();
  } else {
    clear_has_avatar();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubDescription.avatar)
}

// optional .bgs.protocol.club.v1.PrivacyLevel privacy_level = 6;
inline bool ClubDescription::has_privacy_level() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ClubDescription::set_has_privacy_level() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ClubDescription::clear_has_privacy_level() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ClubDescription::clear_privacy_level() {
  privacy_level_ = 0;
  clear_has_privacy_level();
}
inline ::bgs::protocol::club::v1::PrivacyLevel ClubDescription::privacy_level() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.privacy_level)
  return static_cast< ::bgs::protocol::club::v1::PrivacyLevel >(privacy_level_);
}
inline void ClubDescription::set_privacy_level(::bgs::protocol::club::v1::PrivacyLevel value) {
  assert(::bgs::protocol::club::v1::PrivacyLevel_IsValid(value));
  set_has_privacy_level();
  privacy_level_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.privacy_level)
}

// optional .bgs.protocol.club.v1.VisibilityLevel visibility_level = 7;
inline bool ClubDescription::has_visibility_level() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ClubDescription::set_has_visibility_level() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ClubDescription::clear_has_visibility_level() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ClubDescription::clear_visibility_level() {
  visibility_level_ = 0;
  clear_has_visibility_level();
}
inline ::bgs::protocol::club::v1::VisibilityLevel ClubDescription::visibility_level() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.visibility_level)
  return static_cast< ::bgs::protocol::club::v1::VisibilityLevel >(visibility_level_);
}
inline void ClubDescription::set_visibility_level(::bgs::protocol::club::v1::VisibilityLevel value) {
  assert(::bgs::protocol::club::v1::VisibilityLevel_IsValid(value));
  set_has_visibility_level();
  visibility_level_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.visibility_level)
}

// optional uint32 member_count = 8;
inline bool ClubDescription::has_member_count() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ClubDescription::set_has_member_count() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ClubDescription::clear_has_member_count() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ClubDescription::clear_member_count() {
  member_count_ = 0u;
  clear_has_member_count();
}
inline ::google::protobuf::uint32 ClubDescription::member_count() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.member_count)
  return member_count_;
}
inline void ClubDescription::set_member_count(::google::protobuf::uint32 value) {
  set_has_member_count();
  member_count_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.member_count)
}

// repeated .bgs.protocol.club.v1.client.MemberDescription leader = 9;
inline int ClubDescription::leader_size() const {
  return leader_.size();
}
inline void ClubDescription::clear_leader() {
  leader_.Clear();
}
inline const ::bgs::protocol::club::v1::client::MemberDescription& ClubDescription::leader(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.leader)
  return leader_.Get(index);
}
inline ::bgs::protocol::club::v1::client::MemberDescription* ClubDescription::mutable_leader(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.leader)
  return leader_.Mutable(index);
}
inline ::bgs::protocol::club::v1::client::MemberDescription* ClubDescription::add_leader() {
  // @@protoc_insertion_point(field_add:bgs.protocol.club.v1.ClubDescription.leader)
  return leader_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::client::MemberDescription >&
ClubDescription::leader() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.club.v1.ClubDescription.leader)
  return leader_;
}
inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::client::MemberDescription >*
ClubDescription::mutable_leader() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.club.v1.ClubDescription.leader)
  return &leader_;
}

// optional uint64 creation_time = 10;
inline bool ClubDescription::has_creation_time() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ClubDescription::set_has_creation_time() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ClubDescription::clear_has_creation_time() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ClubDescription::clear_creation_time() {
  creation_time_ = GOOGLE_ULONGLONG(0);
  clear_has_creation_time();
}
inline ::google::protobuf::uint64 ClubDescription::creation_time() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.creation_time)
  return creation_time_;
}
inline void ClubDescription::set_creation_time(::google::protobuf::uint64 value) {
  set_has_creation_time();
  creation_time_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.creation_time)
}

// optional string timezone = 11;
inline bool ClubDescription::has_timezone() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ClubDescription::set_has_timezone() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ClubDescription::clear_has_timezone() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ClubDescription::clear_timezone() {
  if (timezone_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timezone_->clear();
  }
  clear_has_timezone();
}
inline const ::std::string& ClubDescription::timezone() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.timezone)
  return *timezone_;
}
inline void ClubDescription::set_timezone(const ::std::string& value) {
  set_has_timezone();
  if (timezone_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timezone_ = new ::std::string;
  }
  timezone_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.timezone)
}
inline void ClubDescription::set_timezone(const char* value) {
  set_has_timezone();
  if (timezone_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timezone_ = new ::std::string;
  }
  timezone_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.ClubDescription.timezone)
}
inline void ClubDescription::set_timezone(const char* value, size_t size) {
  set_has_timezone();
  if (timezone_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timezone_ = new ::std::string;
  }
  timezone_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.ClubDescription.timezone)
}
inline ::std::string* ClubDescription::mutable_timezone() {
  set_has_timezone();
  if (timezone_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    timezone_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.timezone)
  return timezone_;
}
inline ::std::string* ClubDescription::release_timezone() {
  clear_has_timezone();
  if (timezone_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = timezone_;
    timezone_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClubDescription::set_allocated_timezone(::std::string* timezone) {
  if (timezone_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete timezone_;
  }
  if (timezone) {
    set_has_timezone();
    timezone_ = timezone;
  } else {
    clear_has_timezone();
    timezone_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubDescription.timezone)
}

// optional string locale = 12;
inline bool ClubDescription::has_locale() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ClubDescription::set_has_locale() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ClubDescription::clear_has_locale() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ClubDescription::clear_locale() {
  if (locale_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    locale_->clear();
  }
  clear_has_locale();
}
inline const ::std::string& ClubDescription::locale() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.locale)
  return *locale_;
}
inline void ClubDescription::set_locale(const ::std::string& value) {
  set_has_locale();
  if (locale_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    locale_ = new ::std::string;
  }
  locale_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.club.v1.ClubDescription.locale)
}
inline void ClubDescription::set_locale(const char* value) {
  set_has_locale();
  if (locale_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    locale_ = new ::std::string;
  }
  locale_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.club.v1.ClubDescription.locale)
}
inline void ClubDescription::set_locale(const char* value, size_t size) {
  set_has_locale();
  if (locale_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    locale_ = new ::std::string;
  }
  locale_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.club.v1.ClubDescription.locale)
}
inline ::std::string* ClubDescription::mutable_locale() {
  set_has_locale();
  if (locale_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    locale_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.locale)
  return locale_;
}
inline ::std::string* ClubDescription::release_locale() {
  clear_has_locale();
  if (locale_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = locale_;
    locale_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ClubDescription::set_allocated_locale(::std::string* locale) {
  if (locale_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete locale_;
  }
  if (locale) {
    set_has_locale();
    locale_ = locale;
  } else {
    clear_has_locale();
    locale_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.club.v1.ClubDescription.locale)
}

// repeated .bgs.protocol.club.v1.TagIdentifier tag = 13;
inline int ClubDescription::tag_size() const {
  return tag_.size();
}
inline void ClubDescription::clear_tag() {
  tag_.Clear();
}
inline const ::bgs::protocol::club::v1::TagIdentifier& ClubDescription::tag(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.club.v1.ClubDescription.tag)
  return tag_.Get(index);
}
inline ::bgs::protocol::club::v1::TagIdentifier* ClubDescription::mutable_tag(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.club.v1.ClubDescription.tag)
  return tag_.Mutable(index);
}
inline ::bgs::protocol::club::v1::TagIdentifier* ClubDescription::add_tag() {
  // @@protoc_insertion_point(field_add:bgs.protocol.club.v1.ClubDescription.tag)
  return tag_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::TagIdentifier >&
ClubDescription::tag() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.club.v1.ClubDescription.tag)
  return tag_;
}
inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::club::v1::TagIdentifier >*
ClubDescription::mutable_tag() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.club.v1.ClubDescription.tag)
  return &tag_;
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace club
}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {
}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2fcommon_2fv1_2fclub_5fcore_2eproto__INCLUDED