//
//  GUAdsSDK.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/9/24.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <GUAdsSDK/GUAdsNetwork.h>
#import <GUAdsSDK/GUBaseAdapter.h>
#import <GUAdsSDK/GUAdsDefines.h>
#import <GUAdsSDK/GUAdsSize.h>
#import <GUAdsSDK/GUAdsReward.h>
#import <GUAdsSDK/GUAdsBannerDelegate.h>
#import <GUAdsSDK/GUAdsRewardedVideoDelegate.h>
#import <GUAdsSDK/GUAdsInterstitialDelegate.h>
#import <GUAdsSDK/GUAdapterInfoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface GUAdsSDK : NSObject

@property (nonatomic, weak) id<GUAdsBannerDelegate> bannerDelegate;
@property (nonatomic, weak) id<GUAdsRewardedVideoDelegate> rewardedVideoDelegate;
@property (nonatomic, weak) id<GUAdsInterstitialDelegate> interstitialDelegate;


/**
 Adapters information
 */
@property (nonatomic, strong, readonly) NSArray<GUAdapterInfoModel *> *adpatersInfo;

/**
 Singleton model, get the shared instance.

 @return Returns the shared GUAdsSDK instance.
 */
+ (GUAdsSDK *)shared;

/**
 Initialize the app that you create on the dashboard

 @param appKey A identifier for your app
 */
- (void)initWithAppKey:(NSString *)appKey environment:(GUAdsSDKEnvironment)environment;


/**
 GUAdsSDK version info
 */
- (NSString *)sdkVersion;

#pragma mark - GUAds Banner

/**
 Load banners for display
 */
- (void)loadBanner;

/**
 Display the banner on the screen.BannerSize
 
 @param size Banner's displaying size, default size is "kGUAdSizeBanner"
 @param position Banner's displaying position on screen, default position is "GUAdsBannerPositionBottom"
 @param viewController The view controller displays the banner
 */
- (void)showBannerWithBannerSize:(GUAdSize)size
                       bannerPosition:(GUAdsBannerPosition)position
                   rootViewController:(UIViewController *)viewController;
/**
 Display the banner on the screen.

 @param viewController The view controller displays the banner
 */
- (void)showBannerWithRootViewController:(UIViewController *)viewController;
/**
 Hide the banner on the screen
 */
- (void)hideBanner;
/**
 Indicates whether the banner is ready to be showed on screen.
 
 @return If return "YES" means the banner is ready to be showed, otherwish is opposite.
 */
- (BOOL)bannerIsReady;
/**
 Get the banner's frame.
 
 @return banner's frame.
 */
- (CGRect)getBannerFrame;

#pragma mark - GUAds Rewarded Video

/**
 Load rewarded video for playing.
 */
- (void)loadRewardedVideo;

/**
 Play the rewarded video.
 
 @param viewController The view controller will present the video.
 */
- (void)showRewardedVideoWithRootViewController:(nullable UIViewController *)viewController;
/**
 Indicates whether the rewarded video is ready to be played on screen.
 
 @return If return "YES" means the rewarded is ready to be play, otherwish is "NO".
 */
- (BOOL)rewardedVideoIsReady;

#pragma mark - GUAds Interstitial

/**
 Load interstital for playing.
 */
- (void)loadInterstitial;

/**
 Display the interstitial ad

 @param viewController he view controller will present the interstitial.
 */
- (void)showInterstitialWithRootViewController:(UIViewController *)viewController;
/**
 Indicates whether the interstitial is ready to be display on screen.
 
 @return If return "YES" means the rewarded is ready to be play, otherwish is "NO".
 */
- (BOOL)interstitialIsReady;

@end

NS_ASSUME_NONNULL_END
