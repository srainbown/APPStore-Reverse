//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class BCFeedbackKit, BCHybridWebView, NSDictionary, NSMutableDictionary, NSString, UIBarButtonItem, UIColor;

@interface BCFeedbackViewController : UIViewController <UIWebViewDelegate>
{
    _Bool _isForbiddenBroswerViewPull;
    _Bool _canGoBack;
    BCHybridWebView *_contentView;
    NSDictionary *_extInfo;
    CDUnknownBlockType _closeBlock;
    NSString *_originUrl;
    NSString *_backCallback;
    NSString *_rightButtonCallback;
    BCFeedbackKit *_feedbackKitRef;
    UIColor *_color;
    UIColor *_backgroundColor;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_closeButton;
    NSMutableDictionary *_defaultNavigationSet;
}

+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
- (void).cxx_destruct;
- (void)addNotificationObserver;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) NSString *backCallback; // @synthesize backCallback=_backCallback;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UIBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeItemAction;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSDictionary *configration;
@property(retain, nonatomic) BCHybridWebView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *defaultNavigationSet; // @synthesize defaultNavigationSet=_defaultNavigationSet;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) __weak BCFeedbackKit *feedbackKitRef; // @synthesize feedbackKitRef=_feedbackKitRef;
- (id)initWithFeedbackKit:(id)arg1 extInfo:(id)arg2 configration:(id)arg3;
@property(nonatomic) _Bool isForbiddenBroswerViewPull; // @synthesize isForbiddenBroswerViewPull=_isForbiddenBroswerViewPull;
- (void)leftItemAction;
- (void)loadView;
@property(retain, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
- (void)receiveYWToolBarManagerNotification:(id)arg1;
- (void)reloadNavbar:(id)arg1;
- (void)removeNotificationObserver;
@property(copy, nonatomic) NSString *rightButtonCallback; // @synthesize rightButtonCallback=_rightButtonCallback;
- (void)rightItemAction;
@property(nonatomic) long long unreadCount;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)whiteList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

