//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GDTAdRequest : NSObject
{
    NSString *_url;
    NSDictionary *_param;
    long long _timestamp;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

