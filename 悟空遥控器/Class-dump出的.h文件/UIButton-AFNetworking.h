//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface UIButton (AFNetworking)
+ (void)setSharedImageDownloader:(id)arg1;
+ (id)sharedImageDownloader;
- (void)cancelBackgroundImageDownloadTaskForState:(unsigned long long)arg1;
- (void)cancelImageDownloadTaskForState:(unsigned long long)arg1;
- (_Bool)isActiveBackgroundTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
@end

