//
//  HFViewController.h
//  HFCrashHelper
//
//  Created by liuhongfei on 03/05/2025.
//  Copyright (c) 2025 liuhongfei. All rights reserved.
//

@import UIKit;

@interface HFViewController : UIViewController

@end

@interface Person : NSObject

- (instancetype)initWithName:(NSString *)name
                         age:(NSInteger)age
                      height:(float)height
                      weight:(float)weight;

@end

@interface AvoidCrashPerson : NSObject

@end
