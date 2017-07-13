//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class MiPushASIHTTPRequest, NSInputStream, NSString;

@interface MiPushASIInputStream : NSObject <NSStreamDelegate>
{
    NSInputStream *stream;
    id <NSStreamDelegate> delegate;
    CDUnknownFunctionPointerType copiedCallback;
    CDStruct_4210025a copiedContext;
    unsigned long long requestedEvents;
    MiPushASIHTTPRequest *request;
}

+ (void)initialize;
+ (id)inputStreamWithData:(id)arg1 request:(id)arg2;
+ (id)inputStreamWithFileAtPath:(id)arg1 request:(id)arg2;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (id)initWithInputStream:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
@property(nonatomic) MiPushASIHTTPRequest *request; // @synthesize request;
- (void)scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)setDelegate:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

