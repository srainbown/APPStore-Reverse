//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstraceLogger.h"

#import "BLYLoggerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface BLYDFTLogger : BLYAbstraceLogger <BLYLoggerDelegate>
{
    unsigned long long _calendarUnitFlags;
}

+ (id)defaultLogger;
- (void)addLog:(id)arg1;
- (id)init;
- (void)logMessage:(id)arg1;
@property(readonly, nonatomic) NSString *loggerName;
- (id)logs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

