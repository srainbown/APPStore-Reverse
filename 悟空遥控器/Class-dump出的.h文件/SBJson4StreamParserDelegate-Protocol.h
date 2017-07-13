//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSNumber, NSString;

@protocol SBJson4StreamParserDelegate <NSObject>
- (void)parserFoundArrayEnd;
- (void)parserFoundArrayStart;
- (void)parserFoundBoolean:(_Bool)arg1;
- (void)parserFoundError:(NSError *)arg1;
- (void)parserFoundNull;
- (void)parserFoundNumber:(NSNumber *)arg1;
- (void)parserFoundObjectEnd;
- (void)parserFoundObjectKey:(NSString *)arg1;
- (void)parserFoundObjectStart;
- (void)parserFoundString:(NSString *)arg1;

@optional
- (_Bool)parserShouldSupportManyDocuments;
@end

