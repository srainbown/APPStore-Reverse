//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorBase.h"

@interface AppMonitorCounter : AppMonitorBase
{
}

+ (void)commitWithPage:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3;
+ (void)commitWithPage:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3 arg:(id)arg4;
+ (void)flushAllLog;
+ (void)setWriteLogInterval:(long long)arg1;
+ (long long)writeLogInterval;

@end

