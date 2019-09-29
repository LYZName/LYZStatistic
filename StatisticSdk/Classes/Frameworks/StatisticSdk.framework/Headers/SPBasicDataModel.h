//
//  SPBasicDataModel.h
//  StatisticSdk
//
//  Created by caibingyuan on 2019/3/26.
//  Copyright © 2019 liyazhou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPBasicDataModel : NSObject

@property(strong, nonatomic)NSString *productNum; // 项目的代号
@property(strong, nonatomic)NSString *productPublicKey; // 产品公钥
@property(strong, nonatomic)NSString *appleId; // AppleId
@property(strong, nonatomic)NSString *abtestId; // ABTest ID
@property(assign, nonatomic)int channelId; // 渠道号ID
@property (nonatomic, copy) NSString *devKey; //appFlyer devKey
@property(assign, nonatomic)BOOL isLogEnable; // 运行日志打印


+ (instancetype)sharedManager;

#pragma mark - Unavailable Method
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (id)copy NS_UNAVAILABLE;
- (id)mutableCopy NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
