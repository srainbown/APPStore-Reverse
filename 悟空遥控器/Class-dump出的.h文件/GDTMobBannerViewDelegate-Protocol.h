//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol GDTMobBannerViewDelegate <NSObject>

@optional
- (void)bannerViewClicked;
- (void)bannerViewDidDismissFullScreenModal;
- (void)bannerViewDidPresentFullScreenModal;
- (void)bannerViewDidReceived;
- (void)bannerViewFailToReceived:(NSError *)arg1;
- (void)bannerViewMemoryWarning;
- (void)bannerViewWillClose;
- (void)bannerViewWillDismissFullScreenModal;
- (void)bannerViewWillExposure;
- (void)bannerViewWillLeaveApplication;
- (void)bannerViewWillPresentFullScreenModal;
@end

