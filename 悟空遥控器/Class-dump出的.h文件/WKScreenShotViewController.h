//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UITextFieldDelegate.h"

@class MMMaterialDesignSpinner, NSString, UIButton, UIImageView, UIScrollView, UITextField, UIView;

@interface WKScreenShotViewController : WKBaseSubViewController <UITextFieldDelegate>
{
    UIView *_lineView;
    UIButton *_addTitleButton;
    UIButton *_refreshButton;
    UIButton *_saveButton;
    UIButton *_shareWeiboButton;
    UIButton *_shareWechatButton;
    UIButton *_sharefriendGroupButton;
    UIButton *_shareQQButton;
    UIImageView *_screenImgView;
    UITextField *_theTextField;
    MMMaterialDesignSpinner *_activity;
    _Bool isScreenShotting;
    _Bool isShotSuccess;
    UIView *_bottomView;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (id)addSubtitle:(id)arg1 AddText:(id)arg2;
- (void)addtheSubtitle;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)aliScreenShot:(id)arg1;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void)buildBottomView;
- (void)buildUI;
- (void)buttonAction:(id)arg1;
- (id)creatButtonatAtRelative:(double)arg1 title:(id)arg2;
- (id)creatShareButton:(unsigned long long)arg1 string:(id)arg2;
- (void)dismissView;
- (void)getAliScreenShot;
- (void)getLeShiScreenShot;
- (void)getOtherScreenShot;
- (id)getScreenShotByXiaoProtocol;
- (void)getScreenShotImage;
- (void)getScreenShotImg;
- (_Bool)getScreenShotImgWithUrl:(id)arg1;
- (void)getXiaoMiScreenShot;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)imageWithColor:(id)arg1;
- (void)initActiviIndicator;
- (void)initImageView;
- (void)initToolsButton;
- (void)jumpToHelp;
- (_Bool)prompter;
- (void)saveScreenShotImage;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)shareButton:(id)arg1;
- (void)startGetScreenImg;
- (void)stopLoading;
- (void)tapAction;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

