//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDTBaseHandler.h"

#import "IGDTMsgHandler.h"

@class NSArray, NSString;

@interface GDTADXDomainWhiteListHandler : GDTBaseHandler <IGDTMsgHandler>
{
    NSArray *_domainlist;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)instance;
+ (id)sharedGDTADXDomainWhiteListHandler;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)domainWhitelist;
@property(retain, nonatomic) NSArray *domainlist; // @synthesize domainlist=_domainlist;
- (void)execute:(id)arg1 request:(id)arg2;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

