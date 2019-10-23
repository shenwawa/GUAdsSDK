//
//  GUAdsInterstitialDelegate.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/9/26.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef GUAdsInterstitialDelegate_h
#define GUAdsInterstitialDelegate_h

@protocol GUAdsInterstitialDelegate <NSObject>

/**
 Called when an interstitial ad request succeeded. Show it at the next transition point in your application such as when transitioning between view controllers.
 */
- (void)adsInterstitialDidReceiveAd;

/**
 Called when an interstitial ad request completed without an interstitial to show. This is common since interstitials are shown sparingly to users.

 @param error error message
 */
- (void)adsInterstitialDidFailToReceiveAdWithError:(NSError *)error;

/**
Call this method tell delegate the interstitial appear on the screen.
*/
- (void)adsInterstitialDidShow;

/**
 Call this method tell delegate the interstitial did clicked.
 */
- (void)adsInterstitialDidClicked;

/**
 Call this method tell delegate the interstitial did closed.
 */
- (void)adsInterstitialDidClosed;

@end


#endif /* GUAdsInterstitialDelegate_h */
