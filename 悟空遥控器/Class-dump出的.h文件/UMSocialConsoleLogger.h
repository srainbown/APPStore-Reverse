//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UMSocialLogger.h"

@class NSDateFormatter, NSObject<OS_dispatch_queue>, NSString;

@interface UMSocialConsoleLogger : NSObject <UMSocialLogger>
{
    NSObject<OS_dispatch_queue> *_loggerQueue;
    NSString *_loggerName;
    unsigned long long _level;
    NSDateFormatter *_dateFormatter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)flush;
- (id)init;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (void)logMessage:(id)arg1;
@property(copy, nonatomic) NSString *loggerName; // @synthesize loggerName=_loggerName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

