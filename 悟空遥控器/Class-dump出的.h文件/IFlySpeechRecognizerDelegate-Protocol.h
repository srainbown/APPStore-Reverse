//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFlySpeechError, NSArray, NSData;

@protocol IFlySpeechRecognizerDelegate <NSObject>
- (void)onError:(IFlySpeechError *)arg1;
- (void)onResults:(NSArray *)arg1 isLast:(_Bool)arg2;

@optional
- (void)onBeginOfSpeech;
- (void)onCancel;
- (void)onEndOfSpeech;
- (void)onEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(NSData *)arg4;
- (void)onVolumeChanged:(int)arg1;
@end

