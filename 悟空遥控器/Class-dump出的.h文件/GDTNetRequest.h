//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString;

@interface GDTNetRequest : NSObject
{
    NSString *_url;
    NSMutableDictionary *_paras;
    NSData *_body;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSMutableDictionary *paras; // @synthesize paras=_paras;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

