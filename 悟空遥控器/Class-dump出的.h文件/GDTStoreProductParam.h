//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GDTStoreProductParam : NSObject
{
    _Bool _innerBrower;
    int _actionType;
    NSString *_itunesId;
    NSString *_campaignId;
    NSString *_providerId;
    NSString *_appname;
}

- (void).cxx_destruct;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *appname; // @synthesize appname=_appname;
@property(copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) _Bool innerBrower; // @synthesize innerBrower=_innerBrower;
@property(copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(copy, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;

@end

