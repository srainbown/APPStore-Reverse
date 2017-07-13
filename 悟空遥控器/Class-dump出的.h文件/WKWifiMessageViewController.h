//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface WKWifiMessageViewController : BaseViewController <UITextFieldDelegate>
{
    float _cursorHeight;
    float _spacingWithKeyboardAndCursor;
    UIButton *_goNextButton;
    UIButton *_hiddenButton;
    UITextField *_pwdTextFiled;
    UIButton *_changeOtherNetButton;
    UITextField *_wifiSSIDTextFiled;
}

- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)changeOtherNet:(id)arg1;
@property(nonatomic) __weak UIButton *changeOtherNetButton; // @synthesize changeOtherNetButton=_changeOtherNetButton;
- (void)dealloc;
@property(nonatomic) __weak UIButton *goNextButton; // @synthesize goNextButton=_goNextButton;
- (void)goNextButtonAction:(id)arg1;
@property(nonatomic) __weak UIButton *hiddenButton; // @synthesize hiddenButton=_hiddenButton;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(nonatomic) __weak UITextField *pwdTextFiled; // @synthesize pwdTextFiled=_pwdTextFiled;
- (void)rightButtonAction:(id)arg1;
- (void)setGoNextEnable;
@property(nonatomic) __weak UITextField *wifiSSIDTextFiled; // @synthesize wifiSSIDTextFiled=_wifiSSIDTextFiled;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)wifichanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

