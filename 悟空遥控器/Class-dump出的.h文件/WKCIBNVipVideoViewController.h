//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "SDCycleScrollViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "WKCIBNBottomGuideViewDelegate.h"
#import "WKVideoCategoryFooterViewDelegate.h"
#import "WKVideoCategoryHeaderViewDelegate.h"

@class CIBNPurchaseWebViewController, NSArray, NSString, SDCycleScrollView, WKBaseVideoCollectionView, WKCIBNBottomGuideView, WKCIBNVideoAuthModel, WKCIBNVipModel, WKCIBNVipVideoModel;

@interface WKCIBNVipVideoViewController : WKBaseSubViewController <UICollectionViewDataSource, UICollectionViewDelegate, SDCycleScrollViewDelegate, WKVideoCategoryHeaderViewDelegate, WKCIBNBottomGuideViewDelegate, WKVideoCategoryFooterViewDelegate>
{
    _Bool _isShowPurchasePage;
    WKBaseVideoCollectionView *_collectionView;
    SDCycleScrollView *_videoBannerView;
    WKCIBNBottomGuideView *_guideView;
    WKCIBNVipVideoModel *_videoModel;
    WKCIBNVideoAuthModel *_videoAuthModel;
    WKCIBNVipModel *_vipModel;
    NSArray *_bannerDataArray;
    NSArray *_menuDataArray;
    CIBNPurchaseWebViewController *_purchaseWebView;
}

- (void).cxx_destruct;
- (void)CIBNVideoAuth;
@property(retain, nonatomic) NSArray *bannerDataArray; // @synthesize bannerDataArray=_bannerDataArray;
- (void)bottomGuideViewDidBuyButtonClick:(id)arg1;
@property(retain, nonatomic) WKBaseVideoCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)cycleScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)filterVideoDatas:(id)arg1;
@property(retain, nonatomic) WKCIBNBottomGuideView *guideView; // @synthesize guideView=_guideView;
- (void)hideLoadingPage;
@property _Bool isShowPurchasePage; // @synthesize isShowPurchasePage=_isShowPurchasePage;
@property(retain, nonatomic) NSArray *menuDataArray; // @synthesize menuDataArray=_menuDataArray;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onRecommendVideoSectionViewMoreButtonClicked:(long long)arg1;
- (void)onVideoCategoryFooterViewDelegate:(long long)arg1;
- (void)onVideoCategoryHeaderViewDelegate:(long long)arg1;
- (void)paySuccessNotification:(id)arg1;
@property(nonatomic) __weak CIBNPurchaseWebViewController *purchaseWebView; // @synthesize purchaseWebView=_purchaseWebView;
- (void)requestBuy;
- (void)searchMenuButtonClicked:(id)arg1;
@property(retain, nonatomic) WKCIBNVideoAuthModel *videoAuthModel; // @synthesize videoAuthModel=_videoAuthModel;
- (void)setVideoBannerBottomGuideViewModels:(id)arg1;
@property(retain, nonatomic) SDCycleScrollView *videoBannerView; // @synthesize videoBannerView=_videoBannerView;
- (void)setVideoBannerViewModelArray:(id)arg1;
@property(retain, nonatomic) WKCIBNVipVideoModel *videoModel; // @synthesize videoModel=_videoModel;
- (void)setViewLayout;
@property(retain, nonatomic) WKCIBNVipModel *vipModel; // @synthesize vipModel=_vipModel;
- (void)showErrorToastWithMsg:(id)arg1;
- (void)showLoadingPageIfNeed;
- (void)updateUI;
- (void)updateUIWithNewModel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

