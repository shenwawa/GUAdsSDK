//
//  GUBaseAdapter.h
//  GUAdSDK
//
//  Created by gamesuion on 2019/9/24.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GUAdsBannerDelegate.h"
#import "GUAdsRewardedVideoDelegate.h"
#import "GUAdsInterstitialDelegate.h"
#import "GUAdsSize.h"

typedef NS_ENUM(NSUInteger, GUAdsBannerPosition) {
    GUAdsBannerPositionTop,
    GUAdsBannerPositionCenter,
    GUAdsBannerPositionBottom,
};

typedef NS_ENUM(NSUInteger, GUAdsBannerStatus) {
    GUAdsBannerStatusUnload,
    GUAdsBannerStatusLoading,
    GUAdsBannerStatusDidLoad,
};

NS_ASSUME_NONNULL_BEGIN

@interface GUBaseAdapter : NSObject

@property (nonatomic, weak) id<GUAdsBannerDelegate> bannerDelegate;
@property (nonatomic, weak) id<GUAdsRewardedVideoDelegate> videoDelegate;
@property (nonatomic, weak) id<GUAdsInterstitialDelegate> interstitialDelegate;
/**
 The view controller displays the banner, interstitial or rewarded video
 */
@property (nonatomic, weak) UIViewController *rootViewController;

@property (nonatomic, assign) GUAdSize bannerSize;

@property (nonatomic, assign) GUAdsBannerStatus bannerStatus;

@property (nonatomic, assign) BOOL bannerIsReady;
/**
 Banner's displaying position on screen
 */
@property (nonatomic, assign) GUAdsBannerPosition bannerPosition;
/**
 The identifier for the banner
 */
@property (nonatomic, copy) NSString *bannerIdentifier;
/**
 The identifier for the interstitial
 */
@property (nonatomic, copy) NSString *interstitialIdentifier;
/**
 The identifier for the rewarded video
 */
@property (nonatomic, copy) NSString *rewardedVideoIdentifier;
/**
 initialize GUAdsSDK

 @param appKey Your own appkey. This key is automatically generated when you create the application in the dashboard.
 */
- (void)initWithAppKey:(NSString *)appKey;

/**
 The version of third-party SDK
 */
- (NSString *)adaptVersion;

#pragma mark - GUAdsSDK Banner ads

- (void)guAdsLoadBannerWithIdentifier:(NSString *)identifier
                   rootViewController:(UIViewController *)viewController;

/**
 Display the banner on the screen.

 @param identifier Some third party Ads SDK need a identifier to init banner, Example, AdMob need a adUnitId to init the banner ads unit.
 @param size Banner's displaying size
 @param position Banner's displaying position on screen
 @param viewController The view controller displays the banner
 */
- (void)guAdsShowBannerWithIdentifier:(NSString *)identifier
                           bannerSize:(GUAdSize)size
                       bannerPosition:(GUAdsBannerPosition)position
                   rootViewController:(UIViewController *)viewController;
/**
 Hide the banner on the screen
 */
- (void)guAdsHideBanner;
/**
 Indicates whether the banner is ready to be showed on screen.

 @param identifier Some third party Ads SDK need a identifier to check the banner is load, Example, UnityAds need a placementId to check the banner is ready.
 @return If return "YES" means the banner is ready to be showed, otherwish is opposite.
 */
- (BOOL)guAdsCheckBannerIsReadyByIdentifier:(nullable NSString *)identifier;
/**
 Get the banner's frame.

 @return banner's frame.
 */
- (CGRect)guAdsGetBannerFrame;

#pragma mark - GUAdsSDK RewardedVideo ads

/**
 load the video for playing

 @param identifier Some third party Ads SDK need a identifier to load the rewarded video, Example, UnityAds need a placementId to check the rewarded video is ready.
 */
- (void)guAdsLoadRewardedVideoWithIdentifier:(nullable NSString *)identifier;
/**
 Play the rewarded video.

 @param viewController The view controller will present the video.
 */
- (void)guAdsShowRewardedVideoWithRootViewController:(nullable UIViewController *)viewController;
/**
 Indicates whether the rewarded video is ready to be played on screen.

 @param identifier Some third party Ads SDK need a identifier to check the rewarded video is ready, Example, UnityAds need a placementId to check the rewarded video is ready.
 @return If return "YES" means the rewarded is ready to be play, otherwish is opposite.
 */
- (BOOL)guAdsCheckRewardedVideoIsReadyByIdentifier:(nullable NSString *)identifier;

#pragma mark - GUAdsSDK Interstitial ads

/**
 load the interstitial for display
 
 @param identifier Some third party Ads SDK need a identifier to load the interstitial, Example, UnityAds need a placementId to check the rewarded video is ready.
 */
- (void)guAdsLoadInterstitialWithIdentifier:(nullable NSString *)identifier;
/**
 Presents the interstitial ad which takes over the entire screen until the user dismisses it.

 @param viewController The view controller will present the interstitial.
 */
- (void)guAdsShowInterstitialWithRootViewController:(nullable UIViewController *)viewController;
/**
 Indicates whether the interstitial is ready to be presented.

 @param identifier Some third party Ads SDK need a identifier to check the interstitial is ready, Example, UnityAds need a placementId to check the interstitial is ready.
 @return If return "YES" means the interstitial is ready to be presented, otherwish is opposite.
 */
- (BOOL)guAdsCheckInterstitialIsReadyByIdentifier:(nullable NSString *)identifier;

@end

NS_ASSUME_NONNULL_END
