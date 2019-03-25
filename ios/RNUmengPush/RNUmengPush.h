//
//  RNUmengPush.h
//  RNUMPush
//
//  Created by winter on 2019/2/20.
//  Copyright © 2019 tnrn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>

#if __has_include(<React/RCTBridgeModule.h>)

#import <React/RCTBridge.h>
#import <React/RCTEventEmitter.h>
#import <React/RCTBridgeModule.h>

#else

#import "RCTBridge.h"
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"

#endif

@interface RNUmengPush : RCTEventEmitter <RCTBridgeModule>
/** 初始化友盟所有组件产品
 @param appkey 开发者在友盟官网申请的appkey.
 @param launchOptions didFinishLaunchingWithOptions:launchOptions
 */
+ (void)registerWithAppkey:(NSString *)appkey launchOptions:(NSDictionary *)launchOptions;
+ (void)didRegisterDeviceToken:(NSData *)deviceToken;
+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo applicationState:(UIApplicationState)state;
@end
