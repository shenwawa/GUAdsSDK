//
//  GUAdReward.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/9/26.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GUAdsReward : NSObject

/// Type of the reward.
@property(nonatomic, readonly, nonnull) NSString *type;

/// Amount rewarded to the user.
@property(nonatomic, readonly, nonnull) NSDecimalNumber *amount;

/// Returns an initialized GUAdReward with the provided reward type and reward amount.
- (nonnull instancetype)initWithRewardType:(nonnull NSString *)rewardType
                              rewardAmount:(nonnull NSDecimalNumber *)rewardAmount;

@end

NS_ASSUME_NONNULL_END
