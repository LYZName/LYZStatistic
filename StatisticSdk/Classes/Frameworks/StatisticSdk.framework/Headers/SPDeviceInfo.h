//
//  SPDeviceInfo.h
//  StatisticSdk
//
//  Created by liyazhou on 2019/3/26.
//  Copyright © 2019 liyazhou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPDeviceInfo : NSObject


/**
 获取uuid值

 @return uuid
 */
+ (NSString *)UUIDStr;

/**
 获取idfa

 @return idfa
 */
+ (NSString *)IDFAStr;

/**
 系统类型和版本号

 @return 系统类型和版本号
 */
+ (NSString *)systemVersion;

/**
 @return 手机rom信息
 */
+ (NSString *)romInfo;

/**
 获取SIM卡里的国家代码，无SIM卡时，取手机系统语言里的国家代码，如:CN(全部小写)

 @return 国家代码
 */
+ (NSString *)countryCode;

/**
 @return 语言代码
 */
+ (NSString *)language;

/**
 @return app的build值
 */
+ (NSString *)versionCode;

/**
 @return app的版本号
 */
+ (NSString *)versionName;

/**
 设备类型。1:手机,2:平板

 @return 设备类型值
 */
+ (int)phoneType;

/**
 获取手机对应的具体型号

 @return 手机型号字符串
 */
+ (NSString *)deviceTypeStr;
@end

NS_ASSUME_NONNULL_END
