#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0.2 effective-4.1.50 (swiftlang-6.0.2.1.2 clang-1600.0.26.4)
#ifndef HFLOGBEAVER_SWIFT_H
#define HFLOGBEAVER_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="HFLogBeaver",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
/// 日志级别枚举
typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
/// 详细日志，最低级别
  LogLevelVerbose = 0,
/// 调试日志
  LogLevelDebug = 1,
/// 信息日志
  LogLevelInfo = 2,
/// 警告日志
  LogLevelWarning = 3,
/// 错误日志
  LogLevelError = 4,
/// 严重错误日志
  LogLevelCritical = 5,
/// 故障日志，最高级别
  LogLevelFault = 6,
};

@class NSString;

SWIFT_CLASS("_TtC11HFLogBeaver12LoggerBridge")
@interface LoggerBridge : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) LoggerBridge * _Nonnull shared;)
+ (LoggerBridge * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) BOOL enableFileLog;
@property (nonatomic, copy) NSString * _Nullable logFilePrefixName;
@property (nonatomic, copy) NSString * _Nullable logFilePath;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)addConsoleDestinationWithMinLevel:(NSInteger)minLevel useTerminalColors:(BOOL)useTerminalColors;
- (void)addFileDestinationWithLogFileStr:(NSString * _Nullable)logFileStr minLevel:(NSInteger)minLevel logFileMaxSize:(NSUInteger)logFileMaxSize logFileAmount:(NSUInteger)logFileAmount logPrefixName:(NSString * _Nonnull)logPrefixName;
- (void)removeAllDestinations;
- (NSInteger)countDestinations SWIFT_WARN_UNUSED_RESULT;
- (void)rotateLogs;
- (void)verbose:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(int32_t)line context:(id _Nullable)context;
- (void)debug:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(int32_t)line context:(id _Nullable)context;
- (void)info:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(int32_t)line context:(id _Nullable)context;
- (void)warning:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(int32_t)line context:(id _Nullable)context;
- (void)error:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(int32_t)line context:(id _Nullable)context;
- (void)critical:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(int32_t)line context:(id _Nullable)context;
- (void)fault:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(int32_t)line context:(id _Nullable)context;
@end


/// Swift日志记录器
SWIFT_CLASS("_TtC11HFLogBeaver11SwiftLogger")
@interface SwiftLogger : NSObject
/// 共享实例
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SwiftLogger * _Nonnull shared;)
+ (SwiftLogger * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// 是否写入本地文件，默认为false
@property (nonatomic) BOOL enableFileLog;
/// 日志的文件前缀名称，默认为应用名称
@property (nonatomic, copy) NSString * _Nullable logPrefixName;
/// 日志的路径
@property (nonatomic, copy) NSString * _Nullable logFilePath;
/// 日志文件的最大个数，enableFileLog == true时生效，默认为7
@property (nonatomic) NSUInteger logFileAmount;
/// 日志文件的Size大小，默认是 1024 * 1024 * 5
@property (nonatomic) NSUInteger logFileMaxSize;
/// 日志最低级别
@property (nonatomic) enum LogLevel minLevel;
/// 私有初始化方法
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// 添加控制台日志目标
/// \param minLevel 最低日志级别
///
/// \param useTerminalColors 是否使用终端颜色
///
- (void)addConsoleDestinationWithMinLevel:(enum LogLevel)minLevel useTerminalColors:(BOOL)useTerminalColors;
/// 添加文件日志目标
/// \param logFileStr 日志文件路径
///
/// \param minLevel 最低日志级别
///
/// \param logFileMaxSize 日志文件最大大小（字节）
///
/// \param logFileAmount 保留的日志文件数量
///
/// \param logPrefixName 日志文件前缀名称
///
- (void)addFileDestinationWithLogFileStr:(NSString * _Nullable)logFileStr minLevel:(enum LogLevel)minLevel logFileMaxSize:(NSUInteger)logFileMaxSize logFileAmount:(NSUInteger)logFileAmount logPrefixName:(NSString * _Nonnull)logPrefixName;
/// 设置日志系统
- (void)setupLogBeaver;
/// 获取日志的文件前缀名称
///
/// returns:
/// 文件前缀
- (NSString * _Nullable)getLogPrefixName SWIFT_WARN_UNUSED_RESULT;
/// 获取日志存储文件夹
///
/// returns:
/// 文件路径
- (NSString * _Nullable)getLogFilePath SWIFT_WARN_UNUSED_RESULT;
/// 轮转日志文件
- (void)rotateLogs;
/// 移除所有日志目标
- (void)removeAllDestinations;
/// 获取目标数量
///
/// returns:
/// 当前日志目标数量
- (NSInteger)countDestinations SWIFT_WARN_UNUSED_RESULT;
/// 记录详细日志
/// \param message 日志消息
///
/// \param file 文件名
///
/// \param function 函数名
///
/// \param line 行号
///
/// \param context 上下文信息
///
- (void)verbose:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSInteger)line context:(id _Nullable)context;
/// 记录调试日志
/// \param message 日志消息
///
/// \param file 文件名
///
/// \param function 函数名
///
/// \param line 行号
///
/// \param context 上下文信息
///
- (void)debug:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSInteger)line context:(id _Nullable)context;
/// 记录信息日志
/// \param message 日志消息
///
/// \param file 文件名
///
/// \param function 函数名
///
/// \param line 行号
///
/// \param context 上下文信息
///
- (void)info:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSInteger)line context:(id _Nullable)context;
/// 记录警告日志
/// \param message 日志消息
///
/// \param file 文件名
///
/// \param function 函数名
///
/// \param line 行号
///
/// \param context 上下文信息
///
- (void)warning:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSInteger)line context:(id _Nullable)context;
/// 记录错误日志
/// \param message 日志消息
///
/// \param file 文件名
///
/// \param function 函数名
///
/// \param line 行号
///
/// \param context 上下文信息
///
- (void)error:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSInteger)line context:(id _Nullable)context;
/// 记录严重错误日志
/// \param message 日志消息
///
/// \param file 文件名
///
/// \param function 函数名
///
/// \param line 行号
///
/// \param context 上下文信息
///
- (void)critical:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSInteger)line context:(id _Nullable)context;
/// 记录故障日志
/// \param message 日志消息
///
/// \param file 文件名
///
/// \param function 函数名
///
/// \param line 行号
///
/// \param context 上下文信息
///
- (void)fault:(NSString * _Nonnull)message file:(NSString * _Nonnull)file function:(NSString * _Nonnull)function line:(NSInteger)line context:(id _Nullable)context;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
