//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GDTHandlerManager : NSObject
{
    NSMutableDictionary *_handlers;
}

- (void).cxx_destruct;
- (void)execute:(id)arg1 request:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (id)init;

@end

