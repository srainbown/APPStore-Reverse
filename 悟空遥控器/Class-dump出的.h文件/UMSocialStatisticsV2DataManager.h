//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UMSocialStatisticsV2DataManager : NSObject
{
    NSMutableDictionary *_styleDic;
    NSMutableDictionary *_platformNameDic;
    NSMutableDictionary *_platformSdkVersionDic;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)doGetPlatformNameWithPlatformProvider:(id)arg1 withSocialPlatformType:(long long)arg2;
- (id)doGetPlatformSdkVersionWithPlatformProvider:(id)arg1 withSocialPlatformType:(long long)arg2;
- (id)doGetStyleWithPlatformProvider:(id)arg1 withSocialPlatformType:(long long)arg2;
- (id)getPlatformNameWithPlatformProvider:(id)arg1 withSocialPlatformType:(long long)arg2;
- (id)getPlatformSdkVersionWithPlatformProvider:(id)arg1 withSocialPlatformType:(long long)arg2;
- (id)getStyleWithPlatformProvider:(id)arg1 withSocialPlatformType:(long long)arg2;
- (id)init;

@end

