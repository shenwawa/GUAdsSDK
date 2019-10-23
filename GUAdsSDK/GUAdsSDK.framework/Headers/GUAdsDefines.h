//
//  GUAdsDefines.h
//  GUAdsSDK
//
//  Created by gamesuion on 2019/9/25.
//  Copyright © 2019 gamesuion. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef GUAdsDefines_h
#define GUAdsDefines_h

#if defined(__cplusplus)
#define GU_EXTERN extern "C" __attribute__((visibility("default")))
#else
#define GU_EXTERN extern __attribute__((visibility("default")))
#endif

#ifndef GU_SCREENWIDTH
#define GU_SCREENWIDTH UIScreen.mainScreen.bounds.size.width
#endif

#ifndef GU_SCREENHIGHT
#define GU_SCREENHIGHT UIScreen.mainScreen.bounds.size.height
#endif

#ifndef GU_SAFEPADDINGTOP
#define GU_SAFEPADDINGTOP ((GU_SCREENHIGHT == 812 || GU_SCREENHIGHT == 896) ? 44 : 20)
#endif

#ifndef GU_SAFEPADDINGBOTTOM
#define GU_SAFEPADDINGBOTTOM ((GU_SCREENHIGHT == 812 || GU_SCREENHIGHT == 896) ? 34 : 0)
#endif

#if __has_attribute(objc_boxable)  // Available starting in Xcode 7.3.
#define GU_BOXABLE __attribute__((objc_boxable))
#else
#error "Use latest Xcode version."
#endif  // __has_attribute(objc_boxable)

#endif


