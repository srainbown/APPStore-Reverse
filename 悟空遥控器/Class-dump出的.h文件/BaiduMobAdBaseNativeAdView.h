//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BaiduMobAdActionComposerDelegate.h"

@class BaiduMobAdBaseNativeAdObject, BaiduMobAdImageDownloadQueue, BaiduMobAdNativeVideoBaseView, BaiduMobAdNativeWebView, BaiduMobAdRendererHelper, BaiduMobAdSpamViewValidator, NSString, UIImageView, UILabel, UITapGestureRecognizer, UIViewController;

@interface BaiduMobAdBaseNativeAdView : UIView <BaiduMobAdActionComposerDelegate>
{
    _Bool _needSendImpressLog;
    int _checkVisibleCount;
    int _lastVisibility;
    UIImageView *_iconImageView;
    UIImageView *_mainImageView;
    UIImageView *_adLogoImageView;
    UIImageView *_baiduLogoImageView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UILabel *_brandLabel;
    BaiduMobAdNativeVideoBaseView *_videoView;
    BaiduMobAdNativeWebView *_webView;
    UIViewController *_presentAdViewController;
    UITapGestureRecognizer *_tapGesture;
    BaiduMobAdImageDownloadQueue *_imageDownloadQueue;
    BaiduMobAdSpamViewValidator *_validater;
    NSString *_uniqueId;
    NSString *_showRecord;
    NSString *_forcecurl;
    BaiduMobAdBaseNativeAdObject *_object;
    id <BaiduMobAdBaseNativeAdDelegate> _delegate;
    BaiduMobAdRendererHelper *_rendererHelper;
}

- (void).cxx_destruct;
@property(nonatomic) UIImageView *adLogoImageView; // @synthesize adLogoImageView=_adLogoImageView;
@property(nonatomic) UIImageView *baiduLogoImageView; // @synthesize baiduLogoImageView=_baiduLogoImageView;
@property(nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
- (void)callbackAdClick;
- (void)checkVisible;
@property int checkVisibleCount; // @synthesize checkVisibleCount=_checkVisibleCount;
- (void)clearAds;
- (void)clickAd;
- (void)dealloc;
@property(nonatomic) __weak id <BaiduMobAdBaseNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishWithResult:(id)arg1;
- (void)display:(id)arg1;
@property(copy, nonatomic) NSString *forcecurl; // @synthesize forcecurl=_forcecurl;
- (id)generateUniqueId;
- (void)handleTapGesture:(id)arg1;
@property(nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) BaiduMobAdImageDownloadQueue *imageDownloadQueue; // @synthesize imageDownloadQueue=_imageDownloadQueue;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 brandName:(id)arg2 title:(id)arg3 text:(id)arg4 icon:(id)arg5 mainImage:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 brandName:(id)arg2 title:(id)arg3 text:(id)arg4 icon:(id)arg5 mainImage:(id)arg6 videoView:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1 object:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 text:(id)arg3 icon:(id)arg4 mainImage:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 text:(id)arg3 icon:(id)arg4 mainImage:(id)arg5 videoView:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 webview:(id)arg2;
- (_Bool)isVisible;
@property int lastVisibility; // @synthesize lastVisibility=_lastVisibility;
- (void)loadAndDisplayNativeAdWithObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadImageForURL:(id)arg1 intoImageView:(id)arg2;
- (void)loadImageForURLString:(id)arg1 intoImageView:(id)arg2;
- (_Bool)locationInVideo:(id)arg1;
@property(nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property _Bool needSendImpressLog; // @synthesize needSendImpressLog=_needSendImpressLog;
@property(retain, nonatomic) BaiduMobAdBaseNativeAdObject *object; // @synthesize object=_object;
@property(nonatomic) UIViewController *presentAdViewController; // @synthesize presentAdViewController=_presentAdViewController;
@property(retain, nonatomic) BaiduMobAdRendererHelper *rendererHelper; // @synthesize rendererHelper=_rendererHelper;
- (void)safeMainQueueSetImage:(id)arg1 intoImageView:(id)arg2;
- (void)sendLog:(int)arg1 withtype:(long long)arg2;
@property(copy, nonatomic) NSString *showRecord; // @synthesize showRecord=_showRecord;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) BaiduMobAdSpamViewValidator *validater; // @synthesize validater=_validater;
@property(nonatomic) BaiduMobAdNativeVideoBaseView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) BaiduMobAdNativeWebView *webView; // @synthesize webView=_webView;
- (void)trackImpression;
- (void)trackVideoEvent:(int)arg1 withCurrentTime:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

