//
//  RNUmengAnalytics.h
//  RNUMPush
//
//  Created by winter on 2019/2/20.
//  Copyright © 2019 tnrn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#elif __has_include("React/RCTBridgeModule.h")
#import "React/RCTBridgeModule.h"
#endif

@interface RNUmengAnalytics : NSObject <RCTBridgeModule>

@end
