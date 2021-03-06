//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTClickControllerDelegate.h"
#import "GDTSplashSkipViewDelegate.h"
#import "GDTSplashViewDelegate.h"

@class GDTAdMgr, GDTAntiSpamParam, GDTClickController, GDTSplashAdData, GDTSplashService, GDTSplashSkipView, GDTSplashView, GDTSplashViewController, NSString, NSTimer, UIColor, UIView, UIWindow;

@interface GDTSplashAd : NSObject <GDTSplashViewDelegate, GDTClickControllerDelegate, GDTSplashSkipViewDelegate>
{
    GDTSplashView *_splashView;
    GDTSplashSkipView *_skipView;
    GDTSplashViewController *splashVC;
    NSString *_placementId;
    NSString *_appkey;
    GDTAdMgr *_adMgr;
    GDTSplashService *_splashService;
    UIWindow *_window;
    UIView *_defaultView;
    NSTimer *_fetchTimer;
    int _fetchDelay;
    int _exposureDuration;
    _Bool _loading;
    long long _loadAdTime;
    long long _loadImageTime;
    long long _startExporsureTime;
    long long _endExporsureTime;
    long long _playBeginTime;
    NSString *_threadId;
    GDTSplashAdData *_splashAdData;
    GDTClickController *_clickController;
    GDTAntiSpamParam *_antiSpam;
    id <GDTSplashAdDelegate> _delegate;
    UIColor *_backgroundColor;
    struct CGPoint _skipButtonCenter;
}

- (void).cxx_destruct;
- (id)antiSpamClickUrl:(id)arg1;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)checkParams:(id)arg1;
- (_Bool)checkSkipView:(id)arg1;
- (void)clickSplashAd:(id)arg1;
- (void)closeDefaultView;
- (void)closeSplashAdAnimated:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <GDTSplashAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dissmissSplashAdAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exposureAd:(long long)arg1;
- (void)exposureTimeout:(_Bool)arg1;
- (void)exposureTimeoutSkip:(_Bool)arg1;
@property(nonatomic) int fetchDelay; // @synthesize fetchDelay=_fetchDelay;
- (void)fetchTimerUpdate;
- (void)initAdMgr;
- (void)initSplashView:(id)arg1;
- (id)initWithAppkey:(id)arg1 placementId:(id)arg2;
- (void)leaveApp;
- (void)lifeTime:(unsigned long long)arg1;
- (void)loadAdAndShowInWindow:(id)arg1;
- (void)loadAdAndShowInWindow:(id)arg1 withBottomView:(id)arg2;
- (void)loadAdAndShowInWindow:(id)arg1 withBottomView:(id)arg2 skipView:(id)arg3;
- (void)modalDidDismiss;
- (void)modalDidPresent;
- (void)modalWillDismiss;
- (void)modalWillPresent;
- (void)resignActive;
@property(nonatomic) struct CGPoint skipButtonCenter; // @synthesize skipButtonCenter=_skipButtonCenter;
- (void)showDefaultBackground;
- (void)showError:(int)arg1;
- (void)showSplashAd;
- (void)skipSplashView:(_Bool)arg1;
- (void)splashSkipViewLifeTime:(unsigned long long)arg1;
- (void)splashViewBottom:(id)arg1;
- (void)splashViewImage:(id)arg1;
- (void)splashViewSkipButton:(_Bool)arg1;
- (void)splashViewTsaLogo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

