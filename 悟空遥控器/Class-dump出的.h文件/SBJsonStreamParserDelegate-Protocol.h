//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSNumber, NSString, SBJsonStreamParser;

@protocol SBJsonStreamParserDelegate
- (void)parser:(SBJsonStreamParser *)arg1 foundBoolean:(_Bool)arg2;
- (void)parser:(SBJsonStreamParser *)arg1 foundNumber:(NSNumber *)arg2;
- (void)parser:(SBJsonStreamParser *)arg1 foundObjectKey:(NSString *)arg2;
- (void)parser:(SBJsonStreamParser *)arg1 foundString:(NSString *)arg2;
- (void)parserFoundArrayEnd:(SBJsonStreamParser *)arg1;
- (void)parserFoundArrayStart:(SBJsonStreamParser *)arg1;
- (void)parserFoundNull:(SBJsonStreamParser *)arg1;
- (void)parserFoundObjectEnd:(SBJsonStreamParser *)arg1;
- (void)parserFoundObjectStart:(SBJsonStreamParser *)arg1;
@end

