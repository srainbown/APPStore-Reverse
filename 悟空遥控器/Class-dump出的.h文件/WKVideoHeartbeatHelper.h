//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimer, WKPlayControlModel;

@interface WKVideoHeartbeatHelper : NSObject
{
    WKPlayControlModel *_playControlModel;
    NSTimer *_videoPlaySyncTimer;
    NSDate *_lastVideoSyncMsgDate;
    unsigned long long _refreshSdkCount;
}

+ (id)defaultHelper;
- (void).cxx_destruct;
- (void)checkVideoSync;
@property(retain, nonatomic) NSDate *lastVideoSyncMsgDate; // @synthesize lastVideoSyncMsgDate=_lastVideoSyncMsgDate;
@property(retain, nonatomic) WKPlayControlModel *playControlModel; // @synthesize playControlModel=_playControlModel;
- (void)postHeartbeat;
- (void)postSdkHeartbeatMsg:(id)arg1;
@property(nonatomic) unsigned long long refreshSdkCount; // @synthesize refreshSdkCount=_refreshSdkCount;
- (void)refreshSdkVideoInfo;
- (void)refreshTimeOut;
@property(retain, nonatomic) NSTimer *videoPlaySyncTimer; // @synthesize videoPlaySyncTimer=_videoPlaySyncTimer;

@end

