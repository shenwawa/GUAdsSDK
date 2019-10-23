//
//  GUAdsBannerDelegate.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/9/25.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef GUAdsBannerDelegate_h
#define GUAdsBannerDelegate_h

@protocol GUAdsBannerDelegate<NSObject>

/**
 Tells the delegate that an ad request successfully received an ad. The delegate may want to add the banner view to the view hierarchy if it hasn't been added yet.

 @param bannerView received banner view
 */
- (void)adsBannerViewDidReceive:(UIView *)bannerView;

/**
 Tells the delegate that an ad request failed. The failure is normally due to network connectivity or ad availablility (i.e., no fill).

 @param bannerView Banner view
 @param error Fail message
 */
- (void)adsBannerView:(UIView *)bannerView didFailToReceiveAdWithError:(NSError *)error;

/**
 Call this method tell the delegate banner ads appear on the screen.
 
 @param bannerView Banner view
 */
- (void)adsBannerViewDidShow:(UIView *)bannerView;

/**
 Call this methods tell the delegate banner ads did hide from screen
 */
- (void)adsbannerViewDidHide;

/**
 Call this method tell the delegate banner ads did clicked.
 
 @param bannerView Banner view
 */
- (void)adsBannerViewDidClick:(UIView *)bannerView;

@end

#endif /* GUAdsBannerDelegate_h */
