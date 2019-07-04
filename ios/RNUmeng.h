//
//  RNUmeng.h
//  RNUmeng
//
//  Created by winter on 2019/3/25.
//  Copyright © 2019 tnrn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>

@interface RNUmeng : NSObject

/** 初始化友盟所有组件产品 push & analytics
 @param appkey 开发者在友盟官网申请的appkey.
 @param launchOptions didFinishLaunchingWithOptions:launchOptions
 @param channel 渠道标识，可设置nil表示"App Store"
 */
+ (void)registerWithAppkey:(NSString *)appkey launchOptions:(NSDictionary *)launchOptions channel:(NSString *)channel;
+ (void)registerWithAppkey:(NSString *)appkey launchOptions:(NSDictionary *)launchOptions;

+ (void)didRegisterDeviceToken:(NSData *)deviceToken;
+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo applicationState:(UIApplicationState)state;
@end
