//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MiPushXMPPTrackingInfo.h"

@class NSString;

@interface MiPushXMPPBasicTrackingInfo : NSObject <MiPushXMPPTrackingInfo>
{
    id target;
    SEL selector;
    CDUnknownBlockType block;
    double timeout;
    NSString *elementID;
    struct dispatch_source_s *timer;
}

- (void)cancelTimer;
- (void)createTimerWithDispatchQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
@property(copy, nonatomic) NSString *elementID; // @synthesize elementID;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 timeout:(double)arg3;
- (void)invokeWithObject:(id)arg1;
@property(readonly, nonatomic) double timeout; // @synthesize timeout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

