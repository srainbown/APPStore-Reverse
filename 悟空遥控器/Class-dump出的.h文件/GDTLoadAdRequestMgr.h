//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GDTLoadAdRequestMgr : NSObject
{
    NSMutableDictionary *_adRequestsDict;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)instance;
+ (id)sharedGDTLoadAdRequestMgr;
- (void).cxx_destruct;
- (id)adRequestParam:(id)arg1;
- (id)adRequestServerReport:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *adRequestsDict; // @synthesize adRequestsDict=_adRequestsDict;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)removeFirstAddRequest;
- (void)saveLoadAdRequest:(id)arg1 threadId:(id)arg2;

@end

