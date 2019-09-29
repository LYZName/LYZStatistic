//
//  SPAFUserManager.h
//  StatisticSdk
//
//  Created by liyazhou on 2019/4/25.
//  Copyright © 2019 liyazhou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SPAppFlyerUserType) {
    SPAppFlyerUserTypeUnknow = -1, //未知用户类型
    SPAppFlyerUserTypePhysical = 0,//自然用户
    SPAppFlyerUserTypeQuqntity = 1,//带量用户
    SPAppFlyerUserTypeBuyingUser = 2,//买量用户
};

typedef NS_ENUM(NSInteger, SPAppFlyerChannelUserType) {
    SPAppFlyerChannelUserTypeUnknow = -2, //未知
    SPAppFlyerChannelUserTypeOrigin = -1, //自然
    SPAppFlyerChannelUserTypeOriginCap = 0, //自然带量
    SPAppFlyerChannelUserTypeNon_originCap = 7, //非自然带量
    SPAppFlyerChannelUserTypeGA = 1, //GA买量
    SPAppFlyerChannelUserTypeNon_adwords = 6, //adwords非自投
    SPAppFlyerChannelUserTypeAdwords = 4, //adwords自投
    SPAppFlyerChannelUserTypeNon_FB = 3, //FB非自投
    SPAppFlyerChannelUserTypeFB = 2, //FB自投
};

static NSString *const kSPAFUserTypeChangeNotification = @"kSPAFUserTypeChangeNotificationKey";

@interface SPAFUserManager : NSObject

@property (nonatomic, assign, readonly) SPAppFlyerUserType userType;

@property (nonatomic, assign, readonly) SPAppFlyerChannelUserType channelUserType;

@property (nonatomic, copy, readonly) NSString *campaign;
@property (nonatomic, copy, readonly) NSString *media_source;

+ (instancetype)shareManager;

- (BOOL)updateUserTypeAndCheckIsUploadWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
