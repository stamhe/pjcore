// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pjcore/live_addr_info.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pjcore/live_addr_info.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace pjcore {

namespace {

const ::google::protobuf::Descriptor* LiveAddrInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LiveAddrInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* LiveAddrInfo_FamilyType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* LiveAddrInfo_ProtocolType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* LiveAddrInfo_SocketType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_pjcore_2flive_5faddr_5finfo_2eproto() {
  protobuf_AddDesc_pjcore_2flive_5faddr_5finfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pjcore/live_addr_info.proto");
  GOOGLE_CHECK(file != NULL);
  LiveAddrInfo_descriptor_ = file->message_type(0);
  static const int LiveAddrInfo_offsets_[16] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, ptr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flags_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flag_passive_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flag_canonname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flag_numerichost_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flag_numericserv_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flag_all_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flag_addrconfig_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flag_v4mapped_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, family_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, socket_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, protocol_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, addr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, flowinfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, canonname_),
  };
  LiveAddrInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LiveAddrInfo_descriptor_,
      LiveAddrInfo::default_instance_,
      LiveAddrInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, _has_bits_[0]),
      -1,
      -1,
      sizeof(LiveAddrInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LiveAddrInfo, _internal_metadata_));
  LiveAddrInfo_FamilyType_descriptor_ = LiveAddrInfo_descriptor_->enum_type(0);
  LiveAddrInfo_ProtocolType_descriptor_ = LiveAddrInfo_descriptor_->enum_type(1);
  LiveAddrInfo_SocketType_descriptor_ = LiveAddrInfo_descriptor_->enum_type(2);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pjcore_2flive_5faddr_5finfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LiveAddrInfo_descriptor_, &LiveAddrInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pjcore_2flive_5faddr_5finfo_2eproto() {
  delete LiveAddrInfo::default_instance_;
  delete LiveAddrInfo_reflection_;
}

void protobuf_AddDesc_pjcore_2flive_5faddr_5finfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033pjcore/live_addr_info.proto\022\006pjcore\"\316\004"
    "\n\014LiveAddrInfo\022\013\n\003ptr\030\001 \001(\004\022\r\n\005flags\030\002 \001"
    "(\005\022\024\n\014flag_passive\030\003 \001(\010\022\026\n\016flag_canonna"
    "me\030\004 \001(\010\022\030\n\020flag_numerichost\030\005 \001(\010\022\030\n\020fl"
    "ag_numericserv\030\006 \001(\010\022\020\n\010flag_all\030\007 \001(\010\022\027"
    "\n\017flag_addrconfig\030\010 \001(\010\022\025\n\rflag_v4mapped"
    "\030\t \001(\010\022/\n\006family\030\n \001(\0162\037.pjcore.LiveAddr"
    "Info.FamilyType\022/\n\006socket\030\013 \001(\0162\037.pjcore"
    ".LiveAddrInfo.SocketType\0223\n\010protocol\030\014 \001"
    "(\0162!.pjcore.LiveAddrInfo.ProtocolType\022\014\n"
    "\004addr\030\r \001(\t\022\014\n\004port\030\016 \001(\005\022\020\n\010flowinfo\030\017 "
    "\001(\r\022\021\n\tcanonname\030\020 \001(\t\"/\n\nFamilyType\022\017\n\013"
    "FAMILY_INET\020\002\022\020\n\014FAMILY_INET6\020\n\"2\n\014Proto"
    "colType\022\020\n\014PROTOCOL_TCP\020\006\022\020\n\014PROTOCOL_UD"
    "P\020\021\"A\n\nSocketType\022\021\n\rSOCKET_STREAM\020\001\022\020\n\014"
    "SOCKET_DGRAM\020\002\022\016\n\nSOCKET_RAW\020\003", 630);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pjcore/live_addr_info.proto", &protobuf_RegisterTypes);
  LiveAddrInfo::default_instance_ = new LiveAddrInfo();
  LiveAddrInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pjcore_2flive_5faddr_5finfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pjcore_2flive_5faddr_5finfo_2eproto {
  StaticDescriptorInitializer_pjcore_2flive_5faddr_5finfo_2eproto() {
    protobuf_AddDesc_pjcore_2flive_5faddr_5finfo_2eproto();
  }
} static_descriptor_initializer_pjcore_2flive_5faddr_5finfo_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* LiveAddrInfo_FamilyType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LiveAddrInfo_FamilyType_descriptor_;
}
bool LiveAddrInfo_FamilyType_IsValid(int value) {
  switch(value) {
    case 2:
    case 10:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const LiveAddrInfo_FamilyType LiveAddrInfo::FAMILY_INET;
const LiveAddrInfo_FamilyType LiveAddrInfo::FAMILY_INET6;
const LiveAddrInfo_FamilyType LiveAddrInfo::FamilyType_MIN;
const LiveAddrInfo_FamilyType LiveAddrInfo::FamilyType_MAX;
const int LiveAddrInfo::FamilyType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* LiveAddrInfo_ProtocolType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LiveAddrInfo_ProtocolType_descriptor_;
}
bool LiveAddrInfo_ProtocolType_IsValid(int value) {
  switch(value) {
    case 6:
    case 17:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const LiveAddrInfo_ProtocolType LiveAddrInfo::PROTOCOL_TCP;
const LiveAddrInfo_ProtocolType LiveAddrInfo::PROTOCOL_UDP;
const LiveAddrInfo_ProtocolType LiveAddrInfo::ProtocolType_MIN;
const LiveAddrInfo_ProtocolType LiveAddrInfo::ProtocolType_MAX;
const int LiveAddrInfo::ProtocolType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* LiveAddrInfo_SocketType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LiveAddrInfo_SocketType_descriptor_;
}
bool LiveAddrInfo_SocketType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const LiveAddrInfo_SocketType LiveAddrInfo::SOCKET_STREAM;
const LiveAddrInfo_SocketType LiveAddrInfo::SOCKET_DGRAM;
const LiveAddrInfo_SocketType LiveAddrInfo::SOCKET_RAW;
const LiveAddrInfo_SocketType LiveAddrInfo::SocketType_MIN;
const LiveAddrInfo_SocketType LiveAddrInfo::SocketType_MAX;
const int LiveAddrInfo::SocketType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int LiveAddrInfo::kPtrFieldNumber;
const int LiveAddrInfo::kFlagsFieldNumber;
const int LiveAddrInfo::kFlagPassiveFieldNumber;
const int LiveAddrInfo::kFlagCanonnameFieldNumber;
const int LiveAddrInfo::kFlagNumerichostFieldNumber;
const int LiveAddrInfo::kFlagNumericservFieldNumber;
const int LiveAddrInfo::kFlagAllFieldNumber;
const int LiveAddrInfo::kFlagAddrconfigFieldNumber;
const int LiveAddrInfo::kFlagV4MappedFieldNumber;
const int LiveAddrInfo::kFamilyFieldNumber;
const int LiveAddrInfo::kSocketFieldNumber;
const int LiveAddrInfo::kProtocolFieldNumber;
const int LiveAddrInfo::kAddrFieldNumber;
const int LiveAddrInfo::kPortFieldNumber;
const int LiveAddrInfo::kFlowinfoFieldNumber;
const int LiveAddrInfo::kCanonnameFieldNumber;
#endif  // !_MSC_VER

LiveAddrInfo::LiveAddrInfo()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pjcore.LiveAddrInfo)
}

void LiveAddrInfo::InitAsDefaultInstance() {
}

LiveAddrInfo::LiveAddrInfo(const LiveAddrInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pjcore.LiveAddrInfo)
}

void LiveAddrInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ptr_ = GOOGLE_ULONGLONG(0);
  flags_ = 0;
  flag_passive_ = false;
  flag_canonname_ = false;
  flag_numerichost_ = false;
  flag_numericserv_ = false;
  flag_all_ = false;
  flag_addrconfig_ = false;
  flag_v4mapped_ = false;
  family_ = 2;
  socket_ = 1;
  protocol_ = 6;
  addr_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_ = 0;
  flowinfo_ = 0u;
  canonname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LiveAddrInfo::~LiveAddrInfo() {
  // @@protoc_insertion_point(destructor:pjcore.LiveAddrInfo)
  SharedDtor();
}

void LiveAddrInfo::SharedDtor() {
  addr_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  canonname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void LiveAddrInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LiveAddrInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LiveAddrInfo_descriptor_;
}

const LiveAddrInfo& LiveAddrInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pjcore_2flive_5faddr_5finfo_2eproto();
  return *default_instance_;
}

LiveAddrInfo* LiveAddrInfo::default_instance_ = NULL;

LiveAddrInfo* LiveAddrInfo::New(::google::protobuf::Arena* arena) const {
  LiveAddrInfo* n = new LiveAddrInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LiveAddrInfo::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<LiveAddrInfo*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(ptr_, flag_addrconfig_);
  }
  if (_has_bits_[8 / 32] & 65280) {
    ZR_(port_, flowinfo_);
    flag_v4mapped_ = false;
    family_ = 2;
    socket_ = 1;
    protocol_ = 6;
    if (has_addr()) {
      addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_canonname()) {
      canonname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool LiveAddrInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pjcore.LiveAddrInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 ptr = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &ptr_)));
          set_has_ptr();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_flags;
        break;
      }

      // optional int32 flags = 2;
      case 2: {
        if (tag == 16) {
         parse_flags:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &flags_)));
          set_has_flags();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_flag_passive;
        break;
      }

      // optional bool flag_passive = 3;
      case 3: {
        if (tag == 24) {
         parse_flag_passive:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flag_passive_)));
          set_has_flag_passive();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_flag_canonname;
        break;
      }

      // optional bool flag_canonname = 4;
      case 4: {
        if (tag == 32) {
         parse_flag_canonname:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flag_canonname_)));
          set_has_flag_canonname();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_flag_numerichost;
        break;
      }

      // optional bool flag_numerichost = 5;
      case 5: {
        if (tag == 40) {
         parse_flag_numerichost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flag_numerichost_)));
          set_has_flag_numerichost();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_flag_numericserv;
        break;
      }

      // optional bool flag_numericserv = 6;
      case 6: {
        if (tag == 48) {
         parse_flag_numericserv:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flag_numericserv_)));
          set_has_flag_numericserv();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_flag_all;
        break;
      }

      // optional bool flag_all = 7;
      case 7: {
        if (tag == 56) {
         parse_flag_all:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flag_all_)));
          set_has_flag_all();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_flag_addrconfig;
        break;
      }

      // optional bool flag_addrconfig = 8;
      case 8: {
        if (tag == 64) {
         parse_flag_addrconfig:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flag_addrconfig_)));
          set_has_flag_addrconfig();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_flag_v4mapped;
        break;
      }

      // optional bool flag_v4mapped = 9;
      case 9: {
        if (tag == 72) {
         parse_flag_v4mapped:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &flag_v4mapped_)));
          set_has_flag_v4mapped();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_family;
        break;
      }

      // optional .pjcore.LiveAddrInfo.FamilyType family = 10;
      case 10: {
        if (tag == 80) {
         parse_family:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::pjcore::LiveAddrInfo_FamilyType_IsValid(value)) {
            set_family(static_cast< ::pjcore::LiveAddrInfo_FamilyType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(10, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(88)) goto parse_socket;
        break;
      }

      // optional .pjcore.LiveAddrInfo.SocketType socket = 11;
      case 11: {
        if (tag == 88) {
         parse_socket:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::pjcore::LiveAddrInfo_SocketType_IsValid(value)) {
            set_socket(static_cast< ::pjcore::LiveAddrInfo_SocketType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(11, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(96)) goto parse_protocol;
        break;
      }

      // optional .pjcore.LiveAddrInfo.ProtocolType protocol = 12;
      case 12: {
        if (tag == 96) {
         parse_protocol:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::pjcore::LiveAddrInfo_ProtocolType_IsValid(value)) {
            set_protocol(static_cast< ::pjcore::LiveAddrInfo_ProtocolType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(12, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(106)) goto parse_addr;
        break;
      }

      // optional string addr = 13;
      case 13: {
        if (tag == 106) {
         parse_addr:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_addr()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->addr().data(), this->addr().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pjcore.LiveAddrInfo.addr");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(112)) goto parse_port;
        break;
      }

      // optional int32 port = 14;
      case 14: {
        if (tag == 112) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(120)) goto parse_flowinfo;
        break;
      }

      // optional uint32 flowinfo = 15;
      case 15: {
        if (tag == 120) {
         parse_flowinfo:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flowinfo_)));
          set_has_flowinfo();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(130)) goto parse_canonname;
        break;
      }

      // optional string canonname = 16;
      case 16: {
        if (tag == 130) {
         parse_canonname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_canonname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->canonname().data(), this->canonname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pjcore.LiveAddrInfo.canonname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pjcore.LiveAddrInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pjcore.LiveAddrInfo)
  return false;
#undef DO_
}

void LiveAddrInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pjcore.LiveAddrInfo)
  // optional uint64 ptr = 1;
  if (has_ptr()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->ptr(), output);
  }

  // optional int32 flags = 2;
  if (has_flags()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->flags(), output);
  }

  // optional bool flag_passive = 3;
  if (has_flag_passive()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->flag_passive(), output);
  }

  // optional bool flag_canonname = 4;
  if (has_flag_canonname()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->flag_canonname(), output);
  }

  // optional bool flag_numerichost = 5;
  if (has_flag_numerichost()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->flag_numerichost(), output);
  }

  // optional bool flag_numericserv = 6;
  if (has_flag_numericserv()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->flag_numericserv(), output);
  }

  // optional bool flag_all = 7;
  if (has_flag_all()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->flag_all(), output);
  }

  // optional bool flag_addrconfig = 8;
  if (has_flag_addrconfig()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->flag_addrconfig(), output);
  }

  // optional bool flag_v4mapped = 9;
  if (has_flag_v4mapped()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->flag_v4mapped(), output);
  }

  // optional .pjcore.LiveAddrInfo.FamilyType family = 10;
  if (has_family()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      10, this->family(), output);
  }

  // optional .pjcore.LiveAddrInfo.SocketType socket = 11;
  if (has_socket()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      11, this->socket(), output);
  }

  // optional .pjcore.LiveAddrInfo.ProtocolType protocol = 12;
  if (has_protocol()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      12, this->protocol(), output);
  }

  // optional string addr = 13;
  if (has_addr()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->addr().data(), this->addr().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pjcore.LiveAddrInfo.addr");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      13, this->addr(), output);
  }

  // optional int32 port = 14;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->port(), output);
  }

  // optional uint32 flowinfo = 15;
  if (has_flowinfo()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->flowinfo(), output);
  }

  // optional string canonname = 16;
  if (has_canonname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->canonname().data(), this->canonname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pjcore.LiveAddrInfo.canonname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      16, this->canonname(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pjcore.LiveAddrInfo)
}

::google::protobuf::uint8* LiveAddrInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pjcore.LiveAddrInfo)
  // optional uint64 ptr = 1;
  if (has_ptr()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->ptr(), target);
  }

  // optional int32 flags = 2;
  if (has_flags()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->flags(), target);
  }

  // optional bool flag_passive = 3;
  if (has_flag_passive()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->flag_passive(), target);
  }

  // optional bool flag_canonname = 4;
  if (has_flag_canonname()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->flag_canonname(), target);
  }

  // optional bool flag_numerichost = 5;
  if (has_flag_numerichost()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->flag_numerichost(), target);
  }

  // optional bool flag_numericserv = 6;
  if (has_flag_numericserv()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->flag_numericserv(), target);
  }

  // optional bool flag_all = 7;
  if (has_flag_all()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->flag_all(), target);
  }

  // optional bool flag_addrconfig = 8;
  if (has_flag_addrconfig()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->flag_addrconfig(), target);
  }

  // optional bool flag_v4mapped = 9;
  if (has_flag_v4mapped()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->flag_v4mapped(), target);
  }

  // optional .pjcore.LiveAddrInfo.FamilyType family = 10;
  if (has_family()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      10, this->family(), target);
  }

  // optional .pjcore.LiveAddrInfo.SocketType socket = 11;
  if (has_socket()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      11, this->socket(), target);
  }

  // optional .pjcore.LiveAddrInfo.ProtocolType protocol = 12;
  if (has_protocol()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      12, this->protocol(), target);
  }

  // optional string addr = 13;
  if (has_addr()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->addr().data(), this->addr().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pjcore.LiveAddrInfo.addr");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->addr(), target);
  }

  // optional int32 port = 14;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->port(), target);
  }

  // optional uint32 flowinfo = 15;
  if (has_flowinfo()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->flowinfo(), target);
  }

  // optional string canonname = 16;
  if (has_canonname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->canonname().data(), this->canonname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pjcore.LiveAddrInfo.canonname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        16, this->canonname(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pjcore.LiveAddrInfo)
  return target;
}

int LiveAddrInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 255) {
    // optional uint64 ptr = 1;
    if (has_ptr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->ptr());
    }

    // optional int32 flags = 2;
    if (has_flags()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->flags());
    }

    // optional bool flag_passive = 3;
    if (has_flag_passive()) {
      total_size += 1 + 1;
    }

    // optional bool flag_canonname = 4;
    if (has_flag_canonname()) {
      total_size += 1 + 1;
    }

    // optional bool flag_numerichost = 5;
    if (has_flag_numerichost()) {
      total_size += 1 + 1;
    }

    // optional bool flag_numericserv = 6;
    if (has_flag_numericserv()) {
      total_size += 1 + 1;
    }

    // optional bool flag_all = 7;
    if (has_flag_all()) {
      total_size += 1 + 1;
    }

    // optional bool flag_addrconfig = 8;
    if (has_flag_addrconfig()) {
      total_size += 1 + 1;
    }

  }
  if (_has_bits_[8 / 32] & 65280) {
    // optional bool flag_v4mapped = 9;
    if (has_flag_v4mapped()) {
      total_size += 1 + 1;
    }

    // optional .pjcore.LiveAddrInfo.FamilyType family = 10;
    if (has_family()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->family());
    }

    // optional .pjcore.LiveAddrInfo.SocketType socket = 11;
    if (has_socket()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->socket());
    }

    // optional .pjcore.LiveAddrInfo.ProtocolType protocol = 12;
    if (has_protocol()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->protocol());
    }

    // optional string addr = 13;
    if (has_addr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->addr());
    }

    // optional int32 port = 14;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

    // optional uint32 flowinfo = 15;
    if (has_flowinfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->flowinfo());
    }

    // optional string canonname = 16;
    if (has_canonname()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->canonname());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LiveAddrInfo::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const LiveAddrInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LiveAddrInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LiveAddrInfo::MergeFrom(const LiveAddrInfo& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ptr()) {
      set_ptr(from.ptr());
    }
    if (from.has_flags()) {
      set_flags(from.flags());
    }
    if (from.has_flag_passive()) {
      set_flag_passive(from.flag_passive());
    }
    if (from.has_flag_canonname()) {
      set_flag_canonname(from.flag_canonname());
    }
    if (from.has_flag_numerichost()) {
      set_flag_numerichost(from.flag_numerichost());
    }
    if (from.has_flag_numericserv()) {
      set_flag_numericserv(from.flag_numericserv());
    }
    if (from.has_flag_all()) {
      set_flag_all(from.flag_all());
    }
    if (from.has_flag_addrconfig()) {
      set_flag_addrconfig(from.flag_addrconfig());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_flag_v4mapped()) {
      set_flag_v4mapped(from.flag_v4mapped());
    }
    if (from.has_family()) {
      set_family(from.family());
    }
    if (from.has_socket()) {
      set_socket(from.socket());
    }
    if (from.has_protocol()) {
      set_protocol(from.protocol());
    }
    if (from.has_addr()) {
      set_has_addr();
      addr_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.addr_);
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_flowinfo()) {
      set_flowinfo(from.flowinfo());
    }
    if (from.has_canonname()) {
      set_has_canonname();
      canonname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.canonname_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void LiveAddrInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LiveAddrInfo::CopyFrom(const LiveAddrInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LiveAddrInfo::IsInitialized() const {

  return true;
}

void LiveAddrInfo::Swap(LiveAddrInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LiveAddrInfo::InternalSwap(LiveAddrInfo* other) {
  std::swap(ptr_, other->ptr_);
  std::swap(flags_, other->flags_);
  std::swap(flag_passive_, other->flag_passive_);
  std::swap(flag_canonname_, other->flag_canonname_);
  std::swap(flag_numerichost_, other->flag_numerichost_);
  std::swap(flag_numericserv_, other->flag_numericserv_);
  std::swap(flag_all_, other->flag_all_);
  std::swap(flag_addrconfig_, other->flag_addrconfig_);
  std::swap(flag_v4mapped_, other->flag_v4mapped_);
  std::swap(family_, other->family_);
  std::swap(socket_, other->socket_);
  std::swap(protocol_, other->protocol_);
  addr_.Swap(&other->addr_);
  std::swap(port_, other->port_);
  std::swap(flowinfo_, other->flowinfo_);
  canonname_.Swap(&other->canonname_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LiveAddrInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LiveAddrInfo_descriptor_;
  metadata.reflection = LiveAddrInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pjcore

// @@protoc_insertion_point(global_scope)