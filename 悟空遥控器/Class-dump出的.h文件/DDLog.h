//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DDLog : NSObject
{
}

+ (void)addLogger:(id)arg1;
+ (void)applicationWillTerminate:(id)arg1;
+ (void)flushLog;
+ (void)initialize;
+ (_Bool)isRegisteredClass:(Class)arg1;
+ (void)log:(_Bool)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9;
+ (void)log:(_Bool)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 tag:(id)arg8 format:(id)arg9 args:(char *)arg10;
+ (int)logLevelForClass:(Class)arg1;
+ (int)logLevelForClassWithName:(id)arg1;
+ (id)loggingQueue;
+ (void)lt_addLogger:(id)arg1;
+ (void)lt_flush;
+ (void)lt_log:(id)arg1;
+ (void)lt_removeAllLoggers;
+ (void)lt_removeLogger:(id)arg1;
+ (void)queueLogMessage:(id)arg1 asynchronously:(_Bool)arg2;
+ (id)registeredClassNames;
+ (id)registeredClasses;
+ (void)removeAllLoggers;
+ (void)removeLogger:(id)arg1;
+ (void)setLogLevel:(int)arg1 forClass:(Class)arg2;
+ (void)setLogLevel:(int)arg1 forClassWithName:(id)arg2;

@end

