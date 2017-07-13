//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFlyMSCView.h"

#import "IFlySpeechRecognizerDelegate.h"

@class IFlyCancelView, IFlyErrorView, IFlyIdentifyingView, IFlyRecordingView, IFlySpeechError, IFlySpeechRecognizer, NSString;

@interface IFlyRecognizerViewImp : IFlyMSCView <IFlySpeechRecognizerDelegate>
{
    IFlySpeechRecognizer *_iflySpeechRecognizer;
    IFlyRecordingView *_recordingView;
    IFlyErrorView *_errorView;
    IFlyCancelView *_cancelView;
    id <IFlyRecognizerViewImpDelegate> _delegate;
    _Bool _isCancel;
    _Bool _isError;
    IFlySpeechError *_iFlySpeechError;
    NSString *_ent;
    NSString *_params;
    NSString *_grammar;
    _Bool _iFlyTimerDisable;
    IFlyIdentifyingView *_identifyingVIew;
}

- (void)becomeActive;
- (void)cancel;
- (void)dealloc;
@property id <IFlyRecognizerViewImpDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
@property IFlyIdentifyingView *identifyingVIew; // @synthesize identifyingVIew=_identifyingVIew;
- (id)initWithCenter:(struct CGPoint)arg1;
- (void)onBeginOfSpeech;
- (void)onCancel;
- (void)onEndOfSpeech;
- (void)onError:(id)arg1;
- (void)onLeftButton;
- (void)onResults:(id)arg1 isLast:(_Bool)arg2;
- (void)onRigthButton;
- (void)onVolumeChanged:(int)arg1;
- (id)parameterForKey:(id)arg1;
- (_Bool)setParameter:(id)arg1 value:(id)arg2;
- (_Bool)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

