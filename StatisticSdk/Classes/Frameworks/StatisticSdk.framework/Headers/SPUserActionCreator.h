//
//  SPUserActionCreator.h
//  StatisticSdk
//
//  Created by caibingyuan on 2019/3/28.
//  Copyright © 2019 liyazhou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPBasicDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SPUserActionCreator : NSObject

@property(strong, nonatomic)NSString *operateCodeStr;
@property(strong, nonatomic)NSString *objectStr;
@property(strong, nonatomic)NSString *positionStr;
@property(strong, nonatomic)NSString *enterStr;
@property(strong, nonatomic)NSString *operateResultStr;
@property(strong, nonatomic)NSString *tabStr;
@property(strong, nonatomic)NSString *remarkStr;
@property(strong, nonatomic)NSString *associateStr;
@property(strong, nonatomic)NSString *orderTypeStr;
@property(strong, nonatomic)NSString *advPositionStr;//广告位id
@property(strong, nonatomic)NSString *subAdvPositionStr;//二级广告位id
@property(strong, nonatomic)NSString *acStr;
@property(strong, nonatomic)NSString *seStr;
@property(strong, nonatomic)NSString *srStr;
@property(strong, nonatomic)NSString *saStr;
@property(strong, nonatomic)NSString *ptStr;

@property(readonly, nonatomic)SPUserActionCreator *(^operateCode)(NSString *operateCode);
@property(readonly, nonatomic)SPUserActionCreator *(^object)(NSString *object);
@property(readonly, nonatomic)SPUserActionCreator *(^position)(NSString *position);
@property(readonly, nonatomic)SPUserActionCreator *(^enter)(NSString *enter);
@property(readonly, nonatomic)SPUserActionCreator *(^operateResult)(NSString *operateResult);
@property(readonly, nonatomic)SPUserActionCreator *(^tab)(NSString *tab);
@property(readonly, nonatomic)SPUserActionCreator *(^remark)(NSString *remark);
@property(readonly, nonatomic)SPUserActionCreator *(^associate)(NSString *associate);

@property(readonly, nonatomic)SPUserActionCreator *(^orderType)(NSString *orderType);

@property(readonly, nonatomic)SPUserActionCreator *(^advPosition)(NSString *advPosition);
@property(readonly, nonatomic)SPUserActionCreator *(^subAdvPosition)(NSString *subAdvPosition);
@property(readonly, nonatomic)SPUserActionCreator *(^acString)(NSString *acStr);
@property(readonly, nonatomic)SPUserActionCreator *(^seString)(NSString *seStr);
@property(readonly, nonatomic)SPUserActionCreator *(^srString)(NSString *srStr);
@property(readonly, nonatomic)SPUserActionCreator *(^saString)(NSString *saStr);
@property(readonly, nonatomic)SPUserActionCreator *(^ptString)(NSString *ptStr);


- (void)uploadBasicData;

- (void)upload101;

- (void)upload104;

- (void)upload59;

- (void)upload105;

- (void)check101;

- (void)check104;

- (void)check59;

- (void)check105;

- (void)clearData;
@end

NS_ASSUME_NONNULL_END
