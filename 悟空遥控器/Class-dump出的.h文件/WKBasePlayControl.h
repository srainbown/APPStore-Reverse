//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKPlayControlEpisodeModel;

@interface WKBasePlayControl : NSObject
{
    WKPlayControlEpisodeModel *_episodeVideoInfoModel;
}

+ (void)checkControlUsable:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)changeVideoDefinition:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)changeVideoEpisode:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)changeVideoSource:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)forwardVideo:(CDUnknownBlockType)arg1;
- (void)getVideoInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)pauseVideo:(CDUnknownBlockType)arg1;
- (void)playVideo:(CDUnknownBlockType)arg1;
- (void)releaseSources;
- (void)rewindVideo:(CDUnknownBlockType)arg1;
- (void)seekProgress:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setVideoDataSource:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setVideoVolume:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (id)videoInfoUrl:(id)arg1;

@end

