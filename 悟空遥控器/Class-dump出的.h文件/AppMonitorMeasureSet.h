//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableOrderedSet;

@interface AppMonitorMeasureSet : NSObject
{
    NSMutableOrderedSet *_measures;
    NSLock *_lock;
}

+ (id)setWithArray:(id)arg1;
- (void).cxx_destruct;
- (void)addMeasure:(id)arg1;
- (void)addMeasureWithName:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (id)measureForName:(id)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *measures; // @synthesize measures=_measures;
- (void)setConstantValue:(id)arg1;
- (_Bool)valid:(id)arg1 MonitorPoint:(id)arg2 measureValues:(id)arg3;

@end

