//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLYJCEPair : NSObject
{
    id _key;
    id _value;
}

+ (id)pairFromExtString:(id)arg1;
+ (id)pairWithValue:(id)arg1 forKey:(id)arg2;
+ (id)parseExtString:(id)arg1;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) id key; // @synthesize key=_key;
@property(retain, nonatomic) id value; // @synthesize value=_value;

@end

