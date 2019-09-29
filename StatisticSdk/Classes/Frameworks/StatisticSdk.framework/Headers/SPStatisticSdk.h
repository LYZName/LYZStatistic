//
//  SPStatisticSdk.h
//  StatisticSdk
//
//  Created by caibingyuan on 2019/3/27.
//  Copyright © 2019 liyazhou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPBasicDataModel.h"
#import "SPUserActionCreator.h"
//#import "SPLogUtils.h"

NS_ASSUME_NONNULL_BEGIN

@interface SPStatisticSdk : NSObject

#pragma mark - Property

@property(readonly, nonatomic)SPUserActionCreator *(^creator)(void);

#pragma mark - Method
+ (instancetype)sharedInstance;

- (void)initSdk:(NSString *)productNum productPublicKey:(NSString *)productPublicKey appleId:(NSString *)appleId abtestId:(NSString *)abtestId channelId:(int)channelId afDevKey:(nonnull NSString *)afDevkey isLogEnable:(BOOL)isLogEnable;

- (SPUserActionCreator *)userActionCreator;

+ (void)setABTestId:(NSString *)abtestId;

/**
 需要在appdelegate的- (void)applicationDidBecomeActive:(UIApplication *)application里调用一下
 */
- (void)spApplicationDidBecomeActive;

#pragma mark - Unavailable Method
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (id)copy NS_UNAVAILABLE;
- (id)mutableCopy NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
