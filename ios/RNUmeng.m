//
//  RNUmeng.m
//  RNUmeng
//
//  Created by winter on 2019/3/25.
//  Copyright © 2019 tnrn. All rights reserved.
//

#import "RNUmeng.h"
#import "RNUmengPush.h"
#import "RNUmengAnalytics.h"
#import <UMCommon/UMCommon.h>

@implementation RNUmeng

+ (void)registerWithAppkey:(NSString *)appkey launchOptions:(NSDictionary *)launchOptions {
    [self registerWithAppkey:appkey launchOptions:launchOptions channel:nil];
}

+ (void)registerWithAppkey:(NSString *)appkey launchOptions:(NSDictionary *)launchOptions channel:(NSString *)channel {
#ifdef DEBUG
    // 开发者需要显式的调用此函数，日志系统才能工作
    [UMConfigure setLogEnabled:YES];
#endif
    
    [UMConfigure initWithAppkey:appkey channel:nil];
    
    // 注册 推送服务
    [RNUmengPush registerPushWithlaunchOptions:launchOptions];
}

+ (void)didRegisterDeviceToken:(NSData *)deviceToken {
    [RNUmengPush didRegisterDeviceToken:deviceToken];
}

+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo applicationState:(UIApplicationState)state {
    [RNUmengPush didReceiveRemoteNotification:userInfo applicationState:state];
}
@end
