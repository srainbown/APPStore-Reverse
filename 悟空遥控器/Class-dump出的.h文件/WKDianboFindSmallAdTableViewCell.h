//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "GDTMobBannerViewDelegate.h"

@class GDTMobBannerView, NSString, UIView, WKVideoFindModel;

@interface WKDianboFindSmallAdTableViewCell : UITableViewCell <GDTMobBannerViewDelegate>
{
    GDTMobBannerView *bannerView;
    _Bool flag;
    WKVideoFindModel *_findModel;
    UIView *_topView;
    UIView *_bottomView;
    UIView *_middleView;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)bannerViewClicked;
- (void)bannerViewDidPresentFullScreenModal;
- (void)bannerViewDidReceived;
- (void)bannerViewFailToReceived:(id)arg1;
- (void)bannerViewMemoryWarning;
- (void)bannerViewWillExposure;
- (void)bannerViewWillLeaveApplication;
- (void)bannerViewWillPresentFullScreenModal;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *middleView; // @synthesize middleView=_middleView;
- (void)setDataModel:(id)arg1;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

