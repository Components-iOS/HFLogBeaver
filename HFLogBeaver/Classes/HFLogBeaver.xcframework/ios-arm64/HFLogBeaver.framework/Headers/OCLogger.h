//
//  OCLogger.h
//  HFLogBeaver
//
//  Copyright © 2024 liuhongfei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 日志级别枚举
typedef NS_ENUM(NSInteger, HFLogLevel) {
    HFLogLevelVerbose = 0,
    HFLogLevelDebug = 1,
    HFLogLevelInfo = 2,
    HFLogLevelWarning = 3,
    HFLogLevelError = 4,
    HFLogLevelCritical = 5,
    HFLogLevelFault = 6
};

@interface OCLogger : NSObject

/// 日志最低级别
@property (nonatomic, assign) HFLogLevel minLevel;

/// 是否写入本地文件，默认为NO
@property (nonatomic, assign) BOOL enableFileLog;

/// 日志的路径
@property(nonatomic, copy, nonnull) NSString *logFilePath;

/// 日志文件的Size大小，默认是 1024 * 1024 * 5
@property (nonatomic, assign) int logFileMaxSize;

/// 日志文件的最大个数，enableFileLog == YES时生效，默认为7
@property (nonatomic, assign) int logFileAmount;

/// 日志的文件前缀名称，默认为应用名称
@property(nonatomic, copy, nonnull) NSString *logPrefixName;

/// 启动日志系统
- (void)setupLogBeaver;

/// 获取日志存储文件夹
/// - Returns 文件路径
- (NSString *)getLogFilePath;

/// 获取日志的文件前缀名称
/// - Returns 文件前缀
- (NSString *)getLogPrefixName;

/// 模式管理单例
+ (OCLogger *)defaultManager;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

#pragma mark - 日志方法

- (void)verbose:(id)message file:(const char *)file function:(const char *)function line:(NSInteger)line context:(nullable id)context;
- (void)debug:(id)message file:(const char *)file function:(const char *)function line:(NSInteger)line context:(nullable id)context;
- (void)info:(id)message file:(const char *)file function:(const char *)function line:(NSInteger)line context:(nullable id)context;
- (void)warning:(id)message file:(const char *)file function:(const char *)function line:(NSInteger)line context:(nullable id)context;
- (void)error:(id)message file:(const char *)file function:(const char *)function line:(NSInteger)line context:(nullable id)context;
- (void)critical:(id)message file:(const char *)file function:(const char *)function line:(NSInteger)line context:(nullable id)context;
- (void)fault:(id)message file:(const char *)file function:(const char *)function line:(NSInteger)line context:(nullable id)context;

#pragma mark - 便捷宏，自动填充文件、方法和行号

#define HFLogVerbose(message, ...) [[OCLogger defaultManager] verbose:[NSString stringWithFormat:(message), ##__VA_ARGS__] file:__FILE__ function:__FUNCTION__ line:__LINE__ context:nil]
#define HFLogDebug(message, ...) [[OCLogger defaultManager] debug:[NSString stringWithFormat:(message), ##__VA_ARGS__] file:__FILE__ function:__FUNCTION__ line:__LINE__ context:nil]
#define HFLogInfo(message, ...) [[OCLogger defaultManager] info:[NSString stringWithFormat:(message), ##__VA_ARGS__] file:__FILE__ function:__FUNCTION__ line:__LINE__ context:nil]
#define HFLogWarning(message, ...) [[OCLogger defaultManager] warning:[NSString stringWithFormat:(message), ##__VA_ARGS__] file:__FILE__ function:__FUNCTION__ line:__LINE__ context:nil]
#define HFLogError(message, ...) [[OCLogger defaultManager] error:[NSString stringWithFormat:(message), ##__VA_ARGS__] file:__FILE__ function:__FUNCTION__ line:__LINE__ context:nil]
#define HFLogCritical(message, ...) [[OCLogger defaultManager] critical:[NSString stringWithFormat:(message), ##__VA_ARGS__] file:__FILE__ function:__FUNCTION__ line:__LINE__ context:nil]
#define HFLogFault(message, ...) [[OCLogger defaultManager] fault:[NSString stringWithFormat:(message), ##__VA_ARGS__] file:__FILE__ function:__FUNCTION__ line:__LINE__ context:nil]

@end

NS_ASSUME_NONNULL_END
