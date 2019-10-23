//
//  GUAdsRewardedVideoDelegate.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/9/26.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GUAdsReward.h"

#ifndef GUAdsRewardedVideoDelegate_h
#define GUAdsRewardedVideoDelegate_h

@protocol GUAdsRewardedVideoDelegate <NSObject>
/**
 Call theis method tell the delegate that a rewarded video ad was received.
 */
- (void)adsRewardedVideoDidReceive;
/**
 Call this method tell delegate the rewarded video load faild, need to reload it.
 */
- (void)adsRewardedVideoDidFailToLoadWithError:(NSError *)error;
/**
 Call this method tell delegate that the reward based video ad has rewarded the user.
 */
- (void)adsRewardedVideoDidRewardUserWithReward:(GUAdsReward *)reward;
/**
 Call this method tell delegate the rewarded is begin.
 */
- (void)adsRewardedVideoDidShow;
/**
 Call this method tell delegate the rewarded ads did clicked.
 */
- (void)adsRewardedVideoDidClicked;
/**
 Call this method tell delegate the rewarded video is over.
 */
- (void)adsRewardedVideoIsOver;
/**
 Call this method tell delegate the rewarded video ads did clicked.
 */
- (void)adsRewardedVideoDidClosed;

@end


#endif /* GUAdsRewardedVideoDelegate_h */
