//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UTLogger : NSObject
{
}

+ (void)d:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (void)e:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (void)i:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (_Bool)isDebug;
+ (_Bool)isDev;
+ (id)logLevelString:(int)arg1;
+ (void)printLog:(int)arg1 level:(int)arg2 tag:(id)arg3 with:(id)arg4 and:(char *)arg5;
+ (void)setDebug:(_Bool)arg1;
+ (void)setDev:(_Bool)arg1;
+ (void)v:(int)arg1 tag:(id)arg2 with:(id)arg3;
+ (void)w:(int)arg1 tag:(id)arg2 with:(id)arg3;

@end

