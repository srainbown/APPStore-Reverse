//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AppConfigManager : NSObject
{
    NSString *_onlineHost;
    _Bool _hasLoadJSPatch;
    NSArray *_hdliveSrcNameArray;
    NSArray *_hdliveSrcKeyArray;
    NSArray *_videoSrcNameArray;
    NSArray *_videoSrcKeyArray;
}

+ (_Bool)allowDisplayOnTabbar:(id)arg1;
+ (int)appVersionNoSeparate;
+ (id)shareInstances;
- (void).cxx_destruct;
- (void)configAdSetting:(id)arg1;
- (void)configAllHDLiveOrVideoSrc:(id)arg1;
- (void)configAppSetting;
- (void)configDefaultCurrentSrc:(id)arg1;
- (void)configOnlineParam:(id)arg1;
- (void)configTabbarSetting:(id)arg1;
- (id)disposeSrcData:(id)arg1 withKey:(id)arg2;
- (id)getReleaseHostAddress;
@property(nonatomic) _Bool hasLoadJSPatch; // @synthesize hasLoadJSPatch=_hasLoadJSPatch;
@property(retain, nonatomic) NSArray *hdliveSrcKeyArray; // @synthesize hdliveSrcKeyArray=_hdliveSrcKeyArray;
- (id)hdliveSrcName:(id)arg1;
@property(retain, nonatomic) NSArray *hdliveSrcNameArray; // @synthesize hdliveSrcNameArray=_hdliveSrcNameArray;
@property(nonatomic) _Bool ignoreNetworkCache;
@property(nonatomic) _Bool isSecretTestMode;
@property(nonatomic) _Bool loadTestJSPatch;
- (id)replaceWithBackupHostIfNeeded:(id)arg1;
@property(nonatomic) _Bool useTestAPI;
@property(retain, nonatomic) NSArray *videoSrcKeyArray; // @synthesize videoSrcKeyArray=_videoSrcKeyArray;
@property(retain, nonatomic) NSArray *videoSrcNameArray; // @synthesize videoSrcNameArray=_videoSrcNameArray;
- (void)spareHostName;
- (id)videoSrcName:(id)arg1;

@end

