//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYCrashHandler.h"

@interface BLYCrashUserExceptionHandler : BLYCrashHandler
{
}

+ (id)sharedHandler;
- (id)init;
- (_Bool)installHandler;
- (void)reportUserException:(id)arg1;
- (void)uninstallHandler;

@end

