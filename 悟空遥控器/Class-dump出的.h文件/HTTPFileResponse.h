//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class HTTPConnection, NSString;

@interface HTTPFileResponse : NSObject <HTTPResponse>
{
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    _Bool aborted;
    int fileFD;
    void *buffer;
    unsigned long long bufferSize;
}

- (void).cxx_destruct;
- (void)abort;
- (unsigned long long)contentLength;
- (void)dealloc;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;
- (_Bool)isDone;
- (unsigned long long)offset;
- (_Bool)openFile;
- (_Bool)openFileIfNeeded;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end

