//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GDTNetCallback, GDTNetRequest;

@protocol GDTNetClientDelegate <NSObject>
- (void)get:(GDTNetRequest *)arg1 callback:(GDTNetCallback *)arg2;
- (void)get:(GDTNetRequest *)arg1 callback:(GDTNetCallback *)arg2 retryTimes:(int)arg3;
- (void)post:(GDTNetRequest *)arg1 callback:(GDTNetCallback *)arg2;
- (void)post:(GDTNetRequest *)arg1 callback:(GDTNetCallback *)arg2 retryTimes:(int)arg3;
@end

