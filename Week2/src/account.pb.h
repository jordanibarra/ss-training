// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: account.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_account_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_account_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_account_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_account_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_account_2eproto;
namespace bankcli {
class Account;
struct AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
class AccountBook;
struct AccountBookDefaultTypeInternal;
extern AccountBookDefaultTypeInternal _AccountBook_default_instance_;
class Account_Transaction;
struct Account_TransactionDefaultTypeInternal;
extern Account_TransactionDefaultTypeInternal _Account_Transaction_default_instance_;
}  // namespace bankcli
PROTOBUF_NAMESPACE_OPEN
template<> ::bankcli::Account* Arena::CreateMaybeMessage<::bankcli::Account>(Arena*);
template<> ::bankcli::AccountBook* Arena::CreateMaybeMessage<::bankcli::AccountBook>(Arena*);
template<> ::bankcli::Account_Transaction* Arena::CreateMaybeMessage<::bankcli::Account_Transaction>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace bankcli {

enum Account_TransactionType : int {
  Account_TransactionType_DEBIT = 0,
  Account_TransactionType_CREDIT = 1,
  Account_TransactionType_Account_TransactionType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Account_TransactionType_Account_TransactionType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Account_TransactionType_IsValid(int value);
constexpr Account_TransactionType Account_TransactionType_TransactionType_MIN = Account_TransactionType_DEBIT;
constexpr Account_TransactionType Account_TransactionType_TransactionType_MAX = Account_TransactionType_CREDIT;
constexpr int Account_TransactionType_TransactionType_ARRAYSIZE = Account_TransactionType_TransactionType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Account_TransactionType_descriptor();
template<typename T>
inline const std::string& Account_TransactionType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Account_TransactionType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Account_TransactionType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Account_TransactionType_descriptor(), enum_t_value);
}
inline bool Account_TransactionType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Account_TransactionType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Account_TransactionType>(
    Account_TransactionType_descriptor(), name, value);
}
// ===================================================================

class Account_Transaction final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bankcli.Account.Transaction) */ {
 public:
  inline Account_Transaction() : Account_Transaction(nullptr) {}
  ~Account_Transaction() override;
  explicit constexpr Account_Transaction(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Account_Transaction(const Account_Transaction& from);
  Account_Transaction(Account_Transaction&& from) noexcept
    : Account_Transaction() {
    *this = ::std::move(from);
  }

  inline Account_Transaction& operator=(const Account_Transaction& from) {
    CopyFrom(from);
    return *this;
  }
  inline Account_Transaction& operator=(Account_Transaction&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Account_Transaction& default_instance() {
    return *internal_default_instance();
  }
  static inline const Account_Transaction* internal_default_instance() {
    return reinterpret_cast<const Account_Transaction*>(
               &_Account_Transaction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Account_Transaction& a, Account_Transaction& b) {
    a.Swap(&b);
  }
  inline void Swap(Account_Transaction* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Account_Transaction* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Account_Transaction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Account_Transaction>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Account_Transaction& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Account_Transaction& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Account_Transaction* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bankcli.Account.Transaction";
  }
  protected:
  explicit Account_Transaction(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAmountFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // uint64 amount = 2;
  void clear_amount();
  uint64_t amount() const;
  void set_amount(uint64_t value);
  private:
  uint64_t _internal_amount() const;
  void _internal_set_amount(uint64_t value);
  public:

  // .bankcli.Account.TransactionType type = 1;
  void clear_type();
  ::bankcli::Account_TransactionType type() const;
  void set_type(::bankcli::Account_TransactionType value);
  private:
  ::bankcli::Account_TransactionType _internal_type() const;
  void _internal_set_type(::bankcli::Account_TransactionType value);
  public:

  // @@protoc_insertion_point(class_scope:bankcli.Account.Transaction)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  uint64_t amount_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_account_2eproto;
};
// -------------------------------------------------------------------

class Account final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bankcli.Account) */ {
 public:
  inline Account() : Account(nullptr) {}
  ~Account() override;
  explicit constexpr Account(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Account(const Account& from);
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  inline Account& operator=(Account&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Account& default_instance() {
    return *internal_default_instance();
  }
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }
  inline void Swap(Account* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Account* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Account* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Account>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Account& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Account& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Account* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bankcli.Account";
  }
  protected:
  explicit Account(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Account_Transaction Transaction;

  typedef Account_TransactionType TransactionType;
  static constexpr TransactionType DEBIT =
    Account_TransactionType_DEBIT;
  static constexpr TransactionType CREDIT =
    Account_TransactionType_CREDIT;
  static inline bool TransactionType_IsValid(int value) {
    return Account_TransactionType_IsValid(value);
  }
  static constexpr TransactionType TransactionType_MIN =
    Account_TransactionType_TransactionType_MIN;
  static constexpr TransactionType TransactionType_MAX =
    Account_TransactionType_TransactionType_MAX;
  static constexpr int TransactionType_ARRAYSIZE =
    Account_TransactionType_TransactionType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  TransactionType_descriptor() {
    return Account_TransactionType_descriptor();
  }
  template<typename T>
  static inline const std::string& TransactionType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, TransactionType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function TransactionType_Name.");
    return Account_TransactionType_Name(enum_t_value);
  }
  static inline bool TransactionType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      TransactionType* value) {
    return Account_TransactionType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTransactionsFieldNumber = 6,
    kNameFieldNumber = 1,
    kSsnFieldNumber = 2,
    kCreationDateFieldNumber = 4,
    kBalanceFieldNumber = 5,
    kIdFieldNumber = 3,
  };
  // repeated .bankcli.Account.Transaction transactions = 6;
  int transactions_size() const;
  private:
  int _internal_transactions_size() const;
  public:
  void clear_transactions();
  ::bankcli::Account_Transaction* mutable_transactions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account_Transaction >*
      mutable_transactions();
  private:
  const ::bankcli::Account_Transaction& _internal_transactions(int index) const;
  ::bankcli::Account_Transaction* _internal_add_transactions();
  public:
  const ::bankcli::Account_Transaction& transactions(int index) const;
  ::bankcli::Account_Transaction* add_transactions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account_Transaction >&
      transactions() const;

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string ssn = 2;
  void clear_ssn();
  const std::string& ssn() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_ssn(ArgT0&& arg0, ArgT... args);
  std::string* mutable_ssn();
  PROTOBUF_NODISCARD std::string* release_ssn();
  void set_allocated_ssn(std::string* ssn);
  private:
  const std::string& _internal_ssn() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ssn(const std::string& value);
  std::string* _internal_mutable_ssn();
  public:

  // uint64 creation_date = 4;
  void clear_creation_date();
  uint64_t creation_date() const;
  void set_creation_date(uint64_t value);
  private:
  uint64_t _internal_creation_date() const;
  void _internal_set_creation_date(uint64_t value);
  public:

  // uint64 balance = 5;
  void clear_balance();
  uint64_t balance() const;
  void set_balance(uint64_t value);
  private:
  uint64_t _internal_balance() const;
  void _internal_set_balance(uint64_t value);
  public:

  // uint32 id = 3;
  void clear_id();
  uint32_t id() const;
  void set_id(uint32_t value);
  private:
  uint32_t _internal_id() const;
  void _internal_set_id(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:bankcli.Account)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account_Transaction > transactions_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ssn_;
  uint64_t creation_date_;
  uint64_t balance_;
  uint32_t id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_account_2eproto;
};
// -------------------------------------------------------------------

class AccountBook final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bankcli.AccountBook) */ {
 public:
  inline AccountBook() : AccountBook(nullptr) {}
  ~AccountBook() override;
  explicit constexpr AccountBook(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AccountBook(const AccountBook& from);
  AccountBook(AccountBook&& from) noexcept
    : AccountBook() {
    *this = ::std::move(from);
  }

  inline AccountBook& operator=(const AccountBook& from) {
    CopyFrom(from);
    return *this;
  }
  inline AccountBook& operator=(AccountBook&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AccountBook& default_instance() {
    return *internal_default_instance();
  }
  static inline const AccountBook* internal_default_instance() {
    return reinterpret_cast<const AccountBook*>(
               &_AccountBook_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(AccountBook& a, AccountBook& b) {
    a.Swap(&b);
  }
  inline void Swap(AccountBook* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AccountBook* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AccountBook* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AccountBook>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AccountBook& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AccountBook& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AccountBook* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bankcli.AccountBook";
  }
  protected:
  explicit AccountBook(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAccountsFieldNumber = 1,
  };
  // repeated .bankcli.Account accounts = 1;
  int accounts_size() const;
  private:
  int _internal_accounts_size() const;
  public:
  void clear_accounts();
  ::bankcli::Account* mutable_accounts(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account >*
      mutable_accounts();
  private:
  const ::bankcli::Account& _internal_accounts(int index) const;
  ::bankcli::Account* _internal_add_accounts();
  public:
  const ::bankcli::Account& accounts(int index) const;
  ::bankcli::Account* add_accounts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account >&
      accounts() const;

  // @@protoc_insertion_point(class_scope:bankcli.AccountBook)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account > accounts_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_account_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Account_Transaction

// .bankcli.Account.TransactionType type = 1;
inline void Account_Transaction::clear_type() {
  type_ = 0;
}
inline ::bankcli::Account_TransactionType Account_Transaction::_internal_type() const {
  return static_cast< ::bankcli::Account_TransactionType >(type_);
}
inline ::bankcli::Account_TransactionType Account_Transaction::type() const {
  // @@protoc_insertion_point(field_get:bankcli.Account.Transaction.type)
  return _internal_type();
}
inline void Account_Transaction::_internal_set_type(::bankcli::Account_TransactionType value) {
  
  type_ = value;
}
inline void Account_Transaction::set_type(::bankcli::Account_TransactionType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:bankcli.Account.Transaction.type)
}

// uint64 amount = 2;
inline void Account_Transaction::clear_amount() {
  amount_ = uint64_t{0u};
}
inline uint64_t Account_Transaction::_internal_amount() const {
  return amount_;
}
inline uint64_t Account_Transaction::amount() const {
  // @@protoc_insertion_point(field_get:bankcli.Account.Transaction.amount)
  return _internal_amount();
}
inline void Account_Transaction::_internal_set_amount(uint64_t value) {
  
  amount_ = value;
}
inline void Account_Transaction::set_amount(uint64_t value) {
  _internal_set_amount(value);
  // @@protoc_insertion_point(field_set:bankcli.Account.Transaction.amount)
}

// -------------------------------------------------------------------

// Account

// string name = 1;
inline void Account::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Account::name() const {
  // @@protoc_insertion_point(field_get:bankcli.Account.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Account::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:bankcli.Account.name)
}
inline std::string* Account::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:bankcli.Account.name)
  return _s;
}
inline const std::string& Account::_internal_name() const {
  return name_.Get();
}
inline void Account::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Account::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Account::release_name() {
  // @@protoc_insertion_point(field_release:bankcli.Account.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Account::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:bankcli.Account.name)
}

// string ssn = 2;
inline void Account::clear_ssn() {
  ssn_.ClearToEmpty();
}
inline const std::string& Account::ssn() const {
  // @@protoc_insertion_point(field_get:bankcli.Account.ssn)
  return _internal_ssn();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Account::set_ssn(ArgT0&& arg0, ArgT... args) {
 
 ssn_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:bankcli.Account.ssn)
}
inline std::string* Account::mutable_ssn() {
  std::string* _s = _internal_mutable_ssn();
  // @@protoc_insertion_point(field_mutable:bankcli.Account.ssn)
  return _s;
}
inline const std::string& Account::_internal_ssn() const {
  return ssn_.Get();
}
inline void Account::_internal_set_ssn(const std::string& value) {
  
  ssn_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Account::_internal_mutable_ssn() {
  
  return ssn_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Account::release_ssn() {
  // @@protoc_insertion_point(field_release:bankcli.Account.ssn)
  return ssn_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Account::set_allocated_ssn(std::string* ssn) {
  if (ssn != nullptr) {
    
  } else {
    
  }
  ssn_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ssn,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (ssn_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    ssn_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:bankcli.Account.ssn)
}

// uint32 id = 3;
inline void Account::clear_id() {
  id_ = 0u;
}
inline uint32_t Account::_internal_id() const {
  return id_;
}
inline uint32_t Account::id() const {
  // @@protoc_insertion_point(field_get:bankcli.Account.id)
  return _internal_id();
}
inline void Account::_internal_set_id(uint32_t value) {
  
  id_ = value;
}
inline void Account::set_id(uint32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:bankcli.Account.id)
}

// uint64 creation_date = 4;
inline void Account::clear_creation_date() {
  creation_date_ = uint64_t{0u};
}
inline uint64_t Account::_internal_creation_date() const {
  return creation_date_;
}
inline uint64_t Account::creation_date() const {
  // @@protoc_insertion_point(field_get:bankcli.Account.creation_date)
  return _internal_creation_date();
}
inline void Account::_internal_set_creation_date(uint64_t value) {
  
  creation_date_ = value;
}
inline void Account::set_creation_date(uint64_t value) {
  _internal_set_creation_date(value);
  // @@protoc_insertion_point(field_set:bankcli.Account.creation_date)
}

// uint64 balance = 5;
inline void Account::clear_balance() {
  balance_ = uint64_t{0u};
}
inline uint64_t Account::_internal_balance() const {
  return balance_;
}
inline uint64_t Account::balance() const {
  // @@protoc_insertion_point(field_get:bankcli.Account.balance)
  return _internal_balance();
}
inline void Account::_internal_set_balance(uint64_t value) {
  
  balance_ = value;
}
inline void Account::set_balance(uint64_t value) {
  _internal_set_balance(value);
  // @@protoc_insertion_point(field_set:bankcli.Account.balance)
}

// repeated .bankcli.Account.Transaction transactions = 6;
inline int Account::_internal_transactions_size() const {
  return transactions_.size();
}
inline int Account::transactions_size() const {
  return _internal_transactions_size();
}
inline void Account::clear_transactions() {
  transactions_.Clear();
}
inline ::bankcli::Account_Transaction* Account::mutable_transactions(int index) {
  // @@protoc_insertion_point(field_mutable:bankcli.Account.transactions)
  return transactions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account_Transaction >*
Account::mutable_transactions() {
  // @@protoc_insertion_point(field_mutable_list:bankcli.Account.transactions)
  return &transactions_;
}
inline const ::bankcli::Account_Transaction& Account::_internal_transactions(int index) const {
  return transactions_.Get(index);
}
inline const ::bankcli::Account_Transaction& Account::transactions(int index) const {
  // @@protoc_insertion_point(field_get:bankcli.Account.transactions)
  return _internal_transactions(index);
}
inline ::bankcli::Account_Transaction* Account::_internal_add_transactions() {
  return transactions_.Add();
}
inline ::bankcli::Account_Transaction* Account::add_transactions() {
  ::bankcli::Account_Transaction* _add = _internal_add_transactions();
  // @@protoc_insertion_point(field_add:bankcli.Account.transactions)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account_Transaction >&
Account::transactions() const {
  // @@protoc_insertion_point(field_list:bankcli.Account.transactions)
  return transactions_;
}

// -------------------------------------------------------------------

// AccountBook

// repeated .bankcli.Account accounts = 1;
inline int AccountBook::_internal_accounts_size() const {
  return accounts_.size();
}
inline int AccountBook::accounts_size() const {
  return _internal_accounts_size();
}
inline void AccountBook::clear_accounts() {
  accounts_.Clear();
}
inline ::bankcli::Account* AccountBook::mutable_accounts(int index) {
  // @@protoc_insertion_point(field_mutable:bankcli.AccountBook.accounts)
  return accounts_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account >*
AccountBook::mutable_accounts() {
  // @@protoc_insertion_point(field_mutable_list:bankcli.AccountBook.accounts)
  return &accounts_;
}
inline const ::bankcli::Account& AccountBook::_internal_accounts(int index) const {
  return accounts_.Get(index);
}
inline const ::bankcli::Account& AccountBook::accounts(int index) const {
  // @@protoc_insertion_point(field_get:bankcli.AccountBook.accounts)
  return _internal_accounts(index);
}
inline ::bankcli::Account* AccountBook::_internal_add_accounts() {
  return accounts_.Add();
}
inline ::bankcli::Account* AccountBook::add_accounts() {
  ::bankcli::Account* _add = _internal_add_accounts();
  // @@protoc_insertion_point(field_add:bankcli.AccountBook.accounts)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::bankcli::Account >&
AccountBook::accounts() const {
  // @@protoc_insertion_point(field_list:bankcli.AccountBook.accounts)
  return accounts_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace bankcli

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::bankcli::Account_TransactionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bankcli::Account_TransactionType>() {
  return ::bankcli::Account_TransactionType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_account_2eproto
