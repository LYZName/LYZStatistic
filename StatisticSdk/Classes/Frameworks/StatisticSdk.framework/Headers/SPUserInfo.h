//
//  SPUserInfo.h
//  StatisticSdk
//
//  Created by liyazhou on 2019/4/1.
//  Copyright © 2019 liyazhou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPUserInfo : NSObject

+ (void)updateUserInfo;

/**
 获取安装时的版本号
 
 @return 安装时的版本号
 */
+ (NSString *)installVersion;

/**
 获取安装时的时间戳

 @return 时间戳
 */
+ (NSTimeInterval)installTimestamp;

/**
 是否是升级上来的用户
 
 @return yes:是升级用户
 */
+ (BOOL)isUpgrade;

/**
 是否是新版本第一次打开app

 @return yes:是第一次打开app
 */
+ (BOOL)isFirstOpen;

/**
 appe进入后台时的回调
 */
+ (void)enterBackground;

@end

NS_ASSUME_NONNULL_END
