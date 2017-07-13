//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, STDPingServices, UIButton, UITextField, UITextView;

@interface PingNetView : UIView <UITextViewDelegate>
{
    UITextView *_pingResultTextView;
    UITextField *_firstInputView;
    UITextField *_secentInputView;
    UITextField *_thressInputView;
    UITextField *_fourInputView;
    UIButton *_cancelButton;
    UIButton *_rePingButton;
    NSString *_receiveMsg;
    STDPingServices *_pingServices;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)cancleAction:(id)arg1;
@property(nonatomic) __weak UITextField *firstInputView; // @synthesize firstInputView=_firstInputView;
@property(nonatomic) __weak UITextField *fourInputView; // @synthesize fourInputView=_fourInputView;
- (void)loadLocalIp;
- (void)pingAction:(id)arg1;
@property(nonatomic) __weak UITextView *pingResultTextView; // @synthesize pingResultTextView=_pingResultTextView;
@property(retain, nonatomic) STDPingServices *pingServices; // @synthesize pingServices=_pingServices;
@property(nonatomic) __weak UIButton *rePingButton; // @synthesize rePingButton=_rePingButton;
@property(copy, nonatomic) NSString *receiveMsg; // @synthesize receiveMsg=_receiveMsg;
- (void)removePing;
@property(nonatomic) __weak UITextField *secentInputView; // @synthesize secentInputView=_secentInputView;
@property(nonatomic) __weak UITextField *thressInputView; // @synthesize thressInputView=_thressInputView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

