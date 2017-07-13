//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTAdLifeEventListener.h"

@class GDTBaseInterstitialDialog, GDTMobInterstitial, NSString;

@interface GDTInterstitialLifeCycleStateListener : NSObject <GDTAdLifeEventListener>
{
    id <GDTMobInterstitialDelegate> _delegate;
    GDTMobInterstitial *_interstitial;
    GDTBaseInterstitialDialog *_dialog;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GDTMobInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GDTBaseInterstitialDialog *dialog; // @synthesize dialog=_dialog;
- (void)handleAdLoadFailEvent:(id)arg1;
- (id)initWithInterstitial:(id)arg1;
@property(nonatomic) __weak GDTMobInterstitial *interstitial; // @synthesize interstitial=_interstitial;
- (void)interstitialApplicationWillEnterBackground;
- (void)interstitialDidDismissScreen;
- (void)interstitialSuccessToLoadAd;
- (void)onEvent:(id)arg1;
- (void)showError:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

