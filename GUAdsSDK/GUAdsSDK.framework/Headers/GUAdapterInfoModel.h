//
//  GUAdapterInfoModel.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/10/18.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GUAdapterConfiguration;

NS_ASSUME_NONNULL_BEGIN

@interface GUAdapterInfoModel : NSObject

@property (nonatomic, copy, readonly) NSString *adaptName;
@property (nonatomic, copy, readonly) NSString *adaptVersion;
@property (nonatomic, assign, readonly) BOOL isValid;

- (instancetype)initWithAdpConfig:(nullable GUAdapterConfiguration *)config adpName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
