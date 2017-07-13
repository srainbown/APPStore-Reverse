//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface WKBaiduProtocol : WKBaseProtocol
{
    NSString *mControlKeyUrl;
    NSObject<OS_dispatch_queue> *keyEventQueue;
}

- (void).cxx_destruct;
- (id)getBaiduKeyStrByKeyCode:(long long)arg1;
- (id)getPostContentWithKey:(id)arg1 withAction:(id)arg2;
- (void)installServerApp:(CDUnknownBlockType)arg1;
- (_Bool)needChange:(id)arg1;
- (void)openServerApp:(CDUnknownBlockType)arg1;
- (void)releaseResources;
- (void)sendKeyEventWithContent:(id)arg1 withFinishBlock:(CDUnknownBlockType)arg2;
- (void)sendLongKeyWithKey:(int)arg1 withAction:(int)arg2;
- (void)sendPointerDown:(unsigned long long)arg1;
- (void)sendPointerMoveWithX:(float)arg1 withY:(float)arg2 withMill:(int)arg3;
- (void)sendProtocolKey:(int)arg1;
- (void)willWorkWithDevice:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (_Bool)willWorkWithKey:(int)arg1;

@end

