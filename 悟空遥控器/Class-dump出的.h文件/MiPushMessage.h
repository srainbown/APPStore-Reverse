//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface MiPushMessage : NSObject
{
    NSString *strTitle;
    NSString *strDescription;
    NSMutableDictionary *dicExtra;
    NSNumber *nTimeToLive;
}

- (void).cxx_destruct;
- (void)addExtraItem:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)getMessage;
- (id)initWithTitle:(id)arg1 description:(id)arg2;
- (void)setTTL:(double)arg1;

@end

