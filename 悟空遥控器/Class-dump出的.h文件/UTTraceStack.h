//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UTTraceStack : NSObject
{
    NSMutableArray *mTraceStack;
    int _capacity;
}

+ (id)defaultInstance;
- (void).cxx_destruct;
- (void)addTrace:(id)arg1;
@property int capacity; // @synthesize capacity=_capacity;
- (id)getTraceStack;
- (id)init;

@end

