//
//  HFCrashHelper.h
//  HFCrashHelper
//
//  Copyright © 2025 liuhongfei. All rights reserved.
//

#define HFCrashInfoKey @"info"
#define HFCrashNameKey @"date"
#define HFCrashDateKey @"name"
#define HFCrashReasonKey @"reason"
#define HFCrashUserInfoKey @"userInfo"
#define HFCrashCallStackKey @"stack"

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HFCrashHelper : NSObject

/// 最大日志数量
@property (nonatomic, assign) int maxCrashLogNum;

/// 日志的路径
@property (nonatomic, copy) NSString *logPath;

/// 开始崩溃日志收集
- (void)startCrashLogger;

/// 获取崩溃日志列表数据
- (NSArray *)getCrashLogs;

/// 获取崩溃日志列表文件
- (NSArray *)getCrashFiles;

/// 展示崩溃日志页
/// - Parameter VC: 控制器
- (void)showCrashVC:(UIViewController *)VC;

/// 模式管理单例
+ (HFCrashHelper *)defaultManager;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

//! Project version number for HFCrashHelper.
FOUNDATION_EXPORT double HFCrashHelperVersionNumber;

//! Project version string for HFCrashHelper.
FOUNDATION_EXPORT const unsigned char HFCrashHelperVersionString[];

NS_ASSUME_NONNULL_END
