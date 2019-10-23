//
//  GUAdsNetwork.h
//  GUAdSDK
//
//  Created by gamesuion on 2019/9/24.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GUAdsSDKInitializeInfoModel;
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, GUAdsSDKEnvironment) {
    GUAdsSDKEnvironmentProduct,
    GUAdsSDKEnvironmentDevelop,
};

typedef void(^GUAdsNetworkSuccessHandle)(GUAdsSDKInitializeInfoModel *model);
typedef void(^GUAdsNetworkFailHandle)(NSError *error);

@interface GUAdsNetwork : NSObject

+ (NSString *)getSDKVersion;

+ (void)initGUAdsSDKWithAppkey:(NSString *)appkey
                   environment:(GUAdsSDKEnvironment)environment
                 successHandle:(GUAdsNetworkSuccessHandle)successHandle
                    failHandle:(GUAdsNetworkFailHandle)failHandle;

@end

NS_ASSUME_NONNULL_END
