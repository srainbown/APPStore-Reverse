//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseIdcPacket.h"

@class NSString;

@interface WKLoginPacket : WKBaseIdcPacket
{
    NSString *_jStr;
    NSString *_clientType;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
- (id)init;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)param_decode:(id)arg1;
- (void)param_encode:(id)arg1;
- (int)param_length;
- (void)param_preEncode;

@end

