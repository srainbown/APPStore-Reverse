//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GDTJsRequest : NSObject
{
    NSString *_service;
    NSString *_action;
    NSString *_callbackId;
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
- (id)description;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;

@end

