//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UMSocialWarterMarkConfig;

@interface UMSocialGlobal : NSObject
{
    _Bool _isUrlRequest;
    _Bool _isTruncateShareText;
    _Bool _isUsingHttpsWhenShareContent;
    _Bool _isClearCacheWhenGetUserInfo;
    _Bool _isUsingWaterMark;
    long long _use_coco2dx;
    NSString *_dc;
    NSString *_type;
    NSString *_thumblr_Tag;
    UMSocialWarterMarkConfig *_warterMarkConfig;
    NSMutableDictionary *_isUmengDictionary;
}

+ (id)shareInstance;
+ (id)umSocialSDKVersion;
- (void).cxx_destruct;
@property(copy) NSString *dc; // @synthesize dc=_dc;
- (id)init;
@property _Bool isClearCacheWhenGetUserInfo; // @synthesize isClearCacheWhenGetUserInfo=_isClearCacheWhenGetUserInfo;
@property _Bool isTruncateShareText; // @synthesize isTruncateShareText=_isTruncateShareText;
@property(retain, nonatomic) NSMutableDictionary *isUmengDictionary; // @synthesize isUmengDictionary=_isUmengDictionary;
@property _Bool isUrlRequest; // @synthesize isUrlRequest=_isUrlRequest;
@property _Bool isUsingHttpsWhenShareContent; // @synthesize isUsingHttpsWhenShareContent=_isUsingHttpsWhenShareContent;
@property _Bool isUsingWaterMark; // @synthesize isUsingWaterMark=_isUsingWaterMark;
@property(copy) NSString *thumblr_Tag; // @synthesize thumblr_Tag=_thumblr_Tag;
@property(copy) NSString *type; // @synthesize type=_type;
@property long long use_coco2dx; // @synthesize use_coco2dx=_use_coco2dx;
@property(retain, nonatomic) UMSocialWarterMarkConfig *warterMarkConfig; // @synthesize warterMarkConfig=_warterMarkConfig;

@end

