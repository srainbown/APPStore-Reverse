//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYJCEBaseObject.h"

#import "NSCoding.h"

@interface BLYJceObject : BLYJCEBaseObject <NSCoding>
{
}

+ (id)fromData:(id)arg1;
+ (id)jceType;
+ (id)object;
+ (id)objectWithName:(id)arg1 andType:(id)arg2 inAttributes:(id)arg3;
- (void)__pack:(id)arg1;
- (void)__unpack:(id)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jceType;
- (void)setInAttributes:(id)arg1 withName:(id)arg2 andType:(id)arg3;
- (id)toData;

@end

