//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "IFlyPcmRecorderDelegate.h"
#import "ISREngineDelegate.h"

@class IFlyISRParam, IFlyPcmRecorder, ISREngine, NSDate, NSMutableArray, NSString;

@interface IFlyMscRecognizer : NSOperation <ISREngineDelegate, IFlyPcmRecorderDelegate>
{
    ISREngine *_isrEngine;
    IFlyPcmRecorder *_isrRecorder;
    int _error;
    int _index;
    id <IFlySpeechRecognizerDelegate> _delegate;
    long long _audioCount;
    long long _resultCount;
    _Bool _isNeedExit;
    int _netTimeout;
    NSDate *_startDate;
    NSDate *_stopDate;
    _Bool _isWait;
    int _state;
    NSString *_params;
    NSString *_grammarId;
    NSMutableArray *_queue;
    IFlyISRParam *_sessionConfig;
}

+ (void)setTimeout:(unsigned long long)arg1;
- (void)beginSession;
- (int)buildGrammar:(CDUnknownBlockType)arg1 grammarType:(id)arg2 grammarContent:(id)arg3;
- (void)dealloc;
@property(copy, nonatomic) NSString *grammarId; // @synthesize grammarId=_grammarId;
- (id)init:(id)arg1 config:(id)arg2;
- (void)main;
- (void)onEnd:(int)arg1;
- (void)onEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(id)arg4;
- (void)onIFlyRecorderBuffer:(const void *)arg1 bufferSize:(int)arg2;
- (void)onIFlyRecorderError:(id)arg1 theError:(int)arg2;
- (void)onIFlyRecorderVolumeChanged:(int)arg1;
- (void)onResult:(id)arg1 isLast:(_Bool)arg2;
- (void)onStop;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
@property(nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) IFlyISRParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
- (void)setDelegate:(id)arg1;
- (void)setSessionInfo;
@property(nonatomic) int state; // @synthesize state=_state;
- (_Bool)startRecord;
- (_Bool)stopRecordAndWaitResult;
- (void)writeEndData;
- (void)writeWaveData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

