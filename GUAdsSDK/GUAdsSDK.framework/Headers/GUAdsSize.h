//
//  GUAdsSize.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/9/25.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "GUAdsDefines.h"

/// A valid GUAdSize is considered to be one of the predefined GUAdSize constants or a GUAdSize
/// constructed by GUAdSizeFromCGSize, GUAdSizeFullWidthPortraitWithHeight,
/// GUAdSizeFullWidthLandscapeWithHeight.
///
/// Do not create a GUAdSize manually. Use one of the kGUAdSize constants. Treat GUAdSize as an
/// opaque type. Do not access any fields directly. To obtain a concrete CGSize, use the function
/// CGSizeFromGUAdSize().
typedef struct GU_BOXABLE GUAdSize GUAdSize;

/// Ad size.
///
/// @see typedef GADAdSize
struct GU_BOXABLE GUAdSize {
    CGSize size;       ///< The ad size. Don't modify this value directly.
};

#pragma mark Standard Sizes

/// iPhone and iPod Touch ad size. Typically 320x50.
GU_EXTERN GUAdSize const kGUAdSizeBanner;

/// Taller version of kGUAdSizeBanner. Typically 320x100.
GU_EXTERN GUAdSize const kGUAdSizeLargeBanner;

/// Medium Rectangle size for the iPad (especially in a UISplitView's left pane). Typically 300x250.
GU_EXTERN GUAdSize const kGUAdSizeMediumRectangle;

/// Full Banner size for the iPad (especially in a UIPopoverController or in
/// UIModalPresentationFormSheet). Typically 468x60.
GU_EXTERN GUAdSize const kGUAdSizeFullBanner;

/// Leaderboard size for the iPad. Typically 728x90.
GU_EXTERN GUAdSize const kGUAdSizeLeaderboard;


#pragma mark Custom Sizes

/// Returns a custom GADAdSize for the provided CGSize. Use this only if you require a non-standard
/// size. Otherwise, use one of the standard size constants above.
GU_EXTERN GUAdSize GUAdSizeFromCGSize(CGSize size);

/// Returns a custom GUAdSize that spans the full width of the application in portrait orientation
/// with the height provided.
GU_EXTERN GUAdSize GUAdSizeFullWidthPortraitWithHeight(CGFloat height);

/// Returns a custom GUAdSize that spans the full width of the application in landscape orientation
/// with the height provided.
GU_EXTERN GUAdSize GUAdSizeFullWidthLandscapeWithHeight(CGFloat height);

#pragma mark Convenience Functions

/// Returns YES if the two GUAdSizes are equal, otherwise returns NO.
GU_EXTERN BOOL GUAdSizeEqualToSize(GUAdSize size1, GUAdSize size2);


