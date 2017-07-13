//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface BLYThreadInfo : NSObject
{
    unsigned char _index;
    _Bool _highLightThread;
    _Bool _mainThread;
    unsigned long long _threadId;
    NSString *_name;
    NSArray *_stackFrames;
    NSArray *_backtrace;
    NSArray *_exceptionCallStack;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *backtrace; // @synthesize backtrace=_backtrace;
- (id)callStack;
- (id)callStackSymbols;
@property(copy, nonatomic) NSArray *exceptionCallStack; // @synthesize exceptionCallStack=_exceptionCallStack;
- (id)exceptionCallStackSymbols;
@property(nonatomic) unsigned char index; // @synthesize index=_index;
- (id)init;
@property(nonatomic, getter=isHighLightedThread) _Bool highLightThread; // @synthesize highLightThread=_highLightThread;
@property(nonatomic, getter=isMainThread) _Bool mainThread; // @synthesize mainThread=_mainThread;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(nonatomic) unsigned long long threadId; // @synthesize threadId=_threadId;

@end

