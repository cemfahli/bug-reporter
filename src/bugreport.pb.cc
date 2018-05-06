// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bugreport.proto

#include "bugreport.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace tracker {
class ReportDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Report>
      _instance;
} _Report_default_instance_;
class Bug_trackerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Bug_tracker>
      _instance;
} _Bug_tracker_default_instance_;
}  // namespace tracker
namespace protobuf_bugreport_2eproto {
void InitDefaultsReportImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tracker::_Report_default_instance_;
    new (ptr) ::tracker::Report();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tracker::Report::InitAsDefaultInstance();
}

void InitDefaultsReport() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsReportImpl);
}

void InitDefaultsBug_trackerImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_bugreport_2eproto::InitDefaultsReport();
  {
    void* ptr = &::tracker::_Bug_tracker_default_instance_;
    new (ptr) ::tracker::Bug_tracker();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tracker::Bug_tracker::InitAsDefaultInstance();
}

void InitDefaultsBug_tracker() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBug_trackerImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Report, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Report, application_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Report, time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Report, information_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Report, severity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Report, status_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Bug_tracker, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tracker::Bug_tracker, reports_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tracker::Report)},
  { 10, -1, sizeof(::tracker::Bug_tracker)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tracker::_Report_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tracker::_Bug_tracker_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "bugreport.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\017bugreport.proto\022\007tracker\"b\n\006Report\022\023\n\013"
      "application\030\001 \001(\t\022\014\n\004time\030\002 \001(\t\022\023\n\013infor"
      "mation\030\003 \001(\t\022\020\n\010severity\030\004 \001(\t\022\016\n\006status"
      "\030\005 \001(\t\"/\n\013Bug_tracker\022 \n\007reports\030\001 \003(\0132\017"
      ".tracker.Reportb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 183);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "bugreport.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_bugreport_2eproto
namespace tracker {

// ===================================================================

void Report::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Report::kApplicationFieldNumber;
const int Report::kTimeFieldNumber;
const int Report::kInformationFieldNumber;
const int Report::kSeverityFieldNumber;
const int Report::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Report::Report()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_bugreport_2eproto::InitDefaultsReport();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tracker.Report)
}
Report::Report(const Report& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  application_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.application().size() > 0) {
    application_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.application_);
  }
  time_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.time().size() > 0) {
    time_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.time_);
  }
  information_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.information().size() > 0) {
    information_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.information_);
  }
  severity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.severity().size() > 0) {
    severity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.severity_);
  }
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.status().size() > 0) {
    status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
  // @@protoc_insertion_point(copy_constructor:tracker.Report)
}

void Report::SharedCtor() {
  application_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  information_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  severity_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Report::~Report() {
  // @@protoc_insertion_point(destructor:tracker.Report)
  SharedDtor();
}

void Report::SharedDtor() {
  application_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  information_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  severity_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Report::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Report::descriptor() {
  ::protobuf_bugreport_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bugreport_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Report& Report::default_instance() {
  ::protobuf_bugreport_2eproto::InitDefaultsReport();
  return *internal_default_instance();
}

Report* Report::New(::google::protobuf::Arena* arena) const {
  Report* n = new Report;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Report::Clear() {
// @@protoc_insertion_point(message_clear_start:tracker.Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  application_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  information_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  severity_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Report::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tracker.Report)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string application = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_application()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->application().data(), static_cast<int>(this->application().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tracker.Report.application"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_time()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->time().data(), static_cast<int>(this->time().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tracker.Report.time"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string information = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_information()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->information().data(), static_cast<int>(this->information().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tracker.Report.information"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string severity = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_severity()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->severity().data(), static_cast<int>(this->severity().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tracker.Report.severity"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string status = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_status()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->status().data(), static_cast<int>(this->status().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tracker.Report.status"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tracker.Report)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tracker.Report)
  return false;
#undef DO_
}

void Report::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tracker.Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string application = 1;
  if (this->application().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->application().data(), static_cast<int>(this->application().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.application");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->application(), output);
  }

  // string time = 2;
  if (this->time().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->time().data(), static_cast<int>(this->time().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.time");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->time(), output);
  }

  // string information = 3;
  if (this->information().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->information().data(), static_cast<int>(this->information().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.information");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->information(), output);
  }

  // string severity = 4;
  if (this->severity().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->severity().data(), static_cast<int>(this->severity().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.severity");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->severity(), output);
  }

  // string status = 5;
  if (this->status().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.status");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->status(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tracker.Report)
}

::google::protobuf::uint8* Report::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tracker.Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string application = 1;
  if (this->application().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->application().data(), static_cast<int>(this->application().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.application");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->application(), target);
  }

  // string time = 2;
  if (this->time().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->time().data(), static_cast<int>(this->time().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.time");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->time(), target);
  }

  // string information = 3;
  if (this->information().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->information().data(), static_cast<int>(this->information().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.information");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->information(), target);
  }

  // string severity = 4;
  if (this->severity().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->severity().data(), static_cast<int>(this->severity().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.severity");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->severity(), target);
  }

  // string status = 5;
  if (this->status().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->status().data(), static_cast<int>(this->status().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tracker.Report.status");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->status(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tracker.Report)
  return target;
}

size_t Report::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tracker.Report)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string application = 1;
  if (this->application().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->application());
  }

  // string time = 2;
  if (this->time().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->time());
  }

  // string information = 3;
  if (this->information().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->information());
  }

  // string severity = 4;
  if (this->severity().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->severity());
  }

  // string status = 5;
  if (this->status().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Report::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tracker.Report)
  GOOGLE_DCHECK_NE(&from, this);
  const Report* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Report>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tracker.Report)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tracker.Report)
    MergeFrom(*source);
  }
}

void Report::MergeFrom(const Report& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tracker.Report)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.application().size() > 0) {

    application_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.application_);
  }
  if (from.time().size() > 0) {

    time_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.time_);
  }
  if (from.information().size() > 0) {

    information_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.information_);
  }
  if (from.severity().size() > 0) {

    severity_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.severity_);
  }
  if (from.status().size() > 0) {

    status_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.status_);
  }
}

void Report::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tracker.Report)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Report::CopyFrom(const Report& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tracker.Report)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Report::IsInitialized() const {
  return true;
}

void Report::Swap(Report* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Report::InternalSwap(Report* other) {
  using std::swap;
  application_.Swap(&other->application_);
  time_.Swap(&other->time_);
  information_.Swap(&other->information_);
  severity_.Swap(&other->severity_);
  status_.Swap(&other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Report::GetMetadata() const {
  protobuf_bugreport_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bugreport_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Bug_tracker::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Bug_tracker::kReportsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Bug_tracker::Bug_tracker()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_bugreport_2eproto::InitDefaultsBug_tracker();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tracker.Bug_tracker)
}
Bug_tracker::Bug_tracker(const Bug_tracker& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      reports_(from.reports_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tracker.Bug_tracker)
}

void Bug_tracker::SharedCtor() {
  _cached_size_ = 0;
}

Bug_tracker::~Bug_tracker() {
  // @@protoc_insertion_point(destructor:tracker.Bug_tracker)
  SharedDtor();
}

void Bug_tracker::SharedDtor() {
}

void Bug_tracker::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Bug_tracker::descriptor() {
  ::protobuf_bugreport_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bugreport_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Bug_tracker& Bug_tracker::default_instance() {
  ::protobuf_bugreport_2eproto::InitDefaultsBug_tracker();
  return *internal_default_instance();
}

Bug_tracker* Bug_tracker::New(::google::protobuf::Arena* arena) const {
  Bug_tracker* n = new Bug_tracker;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Bug_tracker::Clear() {
// @@protoc_insertion_point(message_clear_start:tracker.Bug_tracker)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  reports_.Clear();
  _internal_metadata_.Clear();
}

bool Bug_tracker::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tracker.Bug_tracker)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tracker.Report reports = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_reports()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tracker.Bug_tracker)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tracker.Bug_tracker)
  return false;
#undef DO_
}

void Bug_tracker::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tracker.Bug_tracker)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tracker.Report reports = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->reports_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->reports(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tracker.Bug_tracker)
}

::google::protobuf::uint8* Bug_tracker::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tracker.Bug_tracker)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tracker.Report reports = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->reports_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->reports(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tracker.Bug_tracker)
  return target;
}

size_t Bug_tracker::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tracker.Bug_tracker)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .tracker.Report reports = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->reports_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->reports(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Bug_tracker::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tracker.Bug_tracker)
  GOOGLE_DCHECK_NE(&from, this);
  const Bug_tracker* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Bug_tracker>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tracker.Bug_tracker)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tracker.Bug_tracker)
    MergeFrom(*source);
  }
}

void Bug_tracker::MergeFrom(const Bug_tracker& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tracker.Bug_tracker)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  reports_.MergeFrom(from.reports_);
}

void Bug_tracker::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tracker.Bug_tracker)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Bug_tracker::CopyFrom(const Bug_tracker& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tracker.Bug_tracker)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bug_tracker::IsInitialized() const {
  return true;
}

void Bug_tracker::Swap(Bug_tracker* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Bug_tracker::InternalSwap(Bug_tracker* other) {
  using std::swap;
  reports_.InternalSwap(&other->reports_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Bug_tracker::GetMetadata() const {
  protobuf_bugreport_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bugreport_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tracker

// @@protoc_insertion_point(global_scope)