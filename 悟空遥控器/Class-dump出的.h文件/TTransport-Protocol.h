//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TTransport <NSObject>
- (void)flush;
- (unsigned long long)readAll:(char *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (void)write:(const char *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
@end

