//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSession;

@interface WKVideoRequestUtil : NSObject
{
    NSURLSession *_session;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)checkServerNeedUpdateWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)needSpecialTreatmentForModel:(id)arg1;
- (void)playDsmVideoModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)playMoreTVVideo:(id)arg1 withVideoDetail:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)playVideoWithIndex:(unsigned long long)arg1 orSubEpisode:(id)arg2 withVideoDetail:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (id)requestWithIntent:(id)arg1 url:(id)arg2;
- (void)savePlayVideoHistoryWithResultCode:(unsigned long long)arg1 withVideoDetailModel:(id)arg2 subEpisodeModel:(id)arg3;
- (void)sendIntentAction:(id)arg1 isAutoInstall:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)sendIntentAction:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)sendIntentAction:(id)arg1 withUrl:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)sendM3U8FileUrl:(id)arg1 fileName:(id)arg2 trailTime:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)sendVideoModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (long long)videoHistoryIndex:(id)arg1;

@end

