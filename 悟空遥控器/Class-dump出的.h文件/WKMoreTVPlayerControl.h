//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKMoreTVPlayerControl : NSObject
{
    _Bool _isPlay;
}

+ (id)defaultPlayerControl;
+ (id)getLaunchMoreTvIntent:(id)arg1;
+ (_Bool)isHighVersionMortTvApp;
- (void)changeVideoDefinition:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)changeVideoSource:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)checkControlUsable:(CDUnknownBlockType)arg1;
- (void)operationVideoWithPlayState:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)pauseVideo:(CDUnknownBlockType)arg1;
- (void)playVideo:(id)arg1 ssid:(id)arg2 contentType:(id)arg3 isHighVersion:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setSeekProgress:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setVideoVolume:(int)arg1 handler:(CDUnknownBlockType)arg2;

@end

