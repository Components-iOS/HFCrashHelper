//
//  HFCrashManager.h
//  HFCrashHelper_Example
//
//  Created by bizconf on 2025/3/5.
//  Copyright © 2025 liuhongfei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

extern NSString * const HFCrashInfoKey;
extern NSString * const HFCrashNameKey;
extern NSString * const HFCrashDateKey;
extern NSString * const HFCrashReasonKey;
extern NSString * const HFCrashUserInfoKey;
extern NSString * const HFCrashCallStackKey;

@interface HFCrashManager : NSObject

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
+ (HFCrashManager *)defaultManager;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end
