//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UIViewControllerTransitioningDelegate.h"
#import "WKNavigationControllerDelegate.h"

@class NSString, NSTimer, UIButton, UILabel, UIView;

@interface AboutViewController : WKBaseSubViewController <UIViewControllerTransitioningDelegate, WKNavigationControllerDelegate>
{
    NSTimer *_timer;
    long long _clickedCount;
    UIButton *_mIconButton;
    UILabel *_mAppName;
    UILabel *_mVersionLabel;
    UIButton *_mCheckUpdate;
    UIButton *_mRookieButton;
    UIButton *_mQQButton;
    UIView *_mBackGroudView;
    UILabel *_mWebsizeLabel;
    UILabel *_mCompanyLabel;
}

- (void).cxx_destruct;
- (void)checkUpdateButtonClicked:(id)arg1;
- (void)hideBottomLine;
- (void)iconButtonClicked:(id)arg1;
@property(nonatomic) __weak UILabel *mAppName; // @synthesize mAppName=_mAppName;
@property(nonatomic) __weak UIView *mBackGroudView; // @synthesize mBackGroudView=_mBackGroudView;
@property(nonatomic) __weak UIButton *mCheckUpdate; // @synthesize mCheckUpdate=_mCheckUpdate;
@property(nonatomic) __weak UILabel *mCompanyLabel; // @synthesize mCompanyLabel=_mCompanyLabel;
@property(nonatomic) __weak UIButton *mIconButton; // @synthesize mIconButton=_mIconButton;
@property(nonatomic) __weak UIButton *mQQButton; // @synthesize mQQButton=_mQQButton;
@property(nonatomic) __weak UIButton *mRookieButton; // @synthesize mRookieButton=_mRookieButton;
@property(nonatomic) __weak UILabel *mVersionLabel; // @synthesize mVersionLabel=_mVersionLabel;
@property(nonatomic) __weak UILabel *mWebsizeLabel; // @synthesize mWebsizeLabel=_mWebsizeLabel;
- (void)qqButtonClicked:(id)arg1;
- (void)resetCounter;
- (void)rookieButtonClicked:(id)arg1;
- (void)setUIParameter;
- (void)setupNavigationBar;
- (void)startTimer:(double)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

