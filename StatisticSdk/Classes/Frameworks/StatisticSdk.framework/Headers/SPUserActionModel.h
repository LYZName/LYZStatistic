//
//  SPUserActionModel.h
//  StatisticSdk
//
//  Created by caibingyuan on 2019/3/27.
//  Copyright © 2019 liyazhou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPUserActionCreator.h"

NS_ASSUME_NONNULL_BEGIN

@interface SPUserActionModel : NSObject

@property(strong, nonatomic)NSString *operateCodeStr;
@property(strong, nonatomic)NSString *objectStr;
@property(strong, nonatomic)NSString *positionStr;
@property(strong, nonatomic)NSString *enterStr;
@property(strong, nonatomic)NSString *operateResultStr;
@property(strong, nonatomic)NSString *tabStr;
@property(strong, nonatomic)NSString *remarkStr;
@property(strong, nonatomic)NSString *associateStr;


+ (instancetype)createModel:(SPUserActionCreator *)creator;

@end

NS_ASSUME_NONNULL_END
