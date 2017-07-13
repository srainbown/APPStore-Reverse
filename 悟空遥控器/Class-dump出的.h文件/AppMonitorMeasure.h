//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AppMonitorMeasure : NSObject
{
    NSString *_name;
    NSNumber *_constantValue;
    NSNumber *_min;
    NSNumber *_max;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *constantValue; // @synthesize constantValue=_constantValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 constantValue:(id)arg2;
- (id)initWithName:(id)arg1 constantValue:(id)arg2 min:(id)arg3 max:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)setRangeWithMin:(id)arg1 max:(id)arg2;
- (_Bool)valid:(id)arg1;

@end

