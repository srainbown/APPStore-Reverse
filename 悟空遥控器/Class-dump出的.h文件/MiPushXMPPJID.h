//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface MiPushXMPPJID : NSObject <NSCoding, NSCopying>
{
    NSString *user;
    NSString *domain;
    NSString *resource;
}

+ (id)jidWithString:(id)arg1;
+ (id)jidWithString:(id)arg1 resource:(id)arg2;
+ (id)jidWithUser:(id)arg1 domain:(id)arg2 resource:(id)arg3;
+ (_Bool)parse:(id)arg1 outUser:(id *)arg2 outDomain:(id *)arg3 outResource:(id *)arg4;
+ (_Bool)validateDomain:(id)arg1;
+ (_Bool)validateResource:(id)arg1;
+ (_Bool)validateUser:(id)arg1 domain:(id)arg2 resource:(id)arg3;
- (id)bare;
- (id)bareJID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
@property(readonly) NSString *domain;
- (id)domainJID;
- (void)encodeWithCoder:(id)arg1;
- (id)full;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (_Bool)isBare;
- (_Bool)isBareWithUser;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToJID:(id)arg1;
- (_Bool)isEqualToJID:(id)arg1 options:(int)arg2;
- (_Bool)isFull;
- (_Bool)isFullWithUser;
- (_Bool)isServer;
@property(readonly) NSString *resource;
@property(readonly) NSString *user;

@end

