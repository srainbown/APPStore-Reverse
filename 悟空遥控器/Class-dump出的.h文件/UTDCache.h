//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableSet;

@interface UTDCache : NSObject
{
    NSMutableSet *logCache;
    NSLock *lock;
    long long _maxCacheSize;
}

- (void).cxx_destruct;
- (void)addLog:(id)arg1;
- (long long)count;
- (void)flush;
- (id)init;
@property(nonatomic) long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;

@end

