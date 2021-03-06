//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class HTTPConnection, NSData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HTTPAsyncFileResponse : NSObject <HTTPResponse>
{
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    unsigned long long readOffset;
    _Bool aborted;
    NSData *data;
    int fileFD;
    void *readBuffer;
    unsigned long long readBufferSize;
    unsigned long long readBufferOffset;
    unsigned long long readRequestLength;
    NSObject<OS_dispatch_queue> *readQueue;
    NSObject<OS_dispatch_source> *readSource;
    _Bool readSourceSuspended;
}

- (void).cxx_destruct;
- (void)abort;
- (void)cancelReadSource;
- (void)connectionDidClose;
- (unsigned long long)contentLength;
- (void)dealloc;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;
- (_Bool)isAsynchronous;
- (_Bool)isDone;
- (unsigned long long)offset;
- (_Bool)openFileAndSetupReadSource;
- (_Bool)openFileIfNeeded;
- (void)pauseReadSource;
- (void)processReadBuffer;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)resumeReadSource;
- (void)setOffset:(unsigned long long)arg1;

@end

