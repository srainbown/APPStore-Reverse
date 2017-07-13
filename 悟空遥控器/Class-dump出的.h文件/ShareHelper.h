//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface ShareHelper : NSObject
{
    NSArray *permissions;
    NSMutableDictionary *tencentUserInfo;
}

+ (id)sharedHelper;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *permissions; // @synthesize permissions;
- (void)setShareImage:(id)arg1 image:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *tencentUserInfo; // @synthesize tencentUserInfo;
- (void)shareActionClickWithIndex:(unsigned long long)arg1 withShareModel:(id)arg2;
- (void)shareActionClickWithIndex:(unsigned long long)arg1 withShareModel:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)shareMessage:(long long)arg1 messageObject:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)showShareView:(id)arg1;
- (void)showShareView:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

