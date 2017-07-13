//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioSessionDelegate.h"

@class NSString;

@interface IFlyPcmPlayer : NSObject <AVAudioSessionDelegate>
{
    struct IFlyAQCallBackStruct _aqc;
    _Bool _isSystemPaused;
    _Bool _isHaveData;
    _Bool _isLastData;
    _Bool _isRegisterRunningCB;
    unsigned int _wholeBufferLen;
    int _beginPos;
    int _endPos;
    int _sampleRate;
    int _isSave;
    int _state;
    id <IFlyAudioPlayerDelegate> _delegate;
}

- (void)appendAudioData:(const void *)arg1 length:(unsigned int)arg2 progress:(int)arg3 isLast:(_Bool)arg4;
- (_Bool)begin;
- (void)beginInterruption;
- (void)cancel;
- (void)clear;
- (void)dealloc;
@property id <IFlyAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endInterruption;
- (id)init;
- (_Bool)initAudioQueue;
- (void)initCallbackStruct;
- (void)interruption:(id)arg1;
@property int isSave; // @synthesize isSave=_isSave;
- (void)pause;
- (_Bool)play;
- (void)removeNotification;
- (void)resume;
@property int sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)setPlayerState:(int)arg1;
@property int state; // @synthesize state=_state;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

