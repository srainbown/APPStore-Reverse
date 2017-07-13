//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MiPushASIDataCompressor : NSObject
{
    _Bool streamReady;
    struct z_stream_s zStream;
}

+ (id)compressData:(id)arg1 error:(id *)arg2;
+ (_Bool)compressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)compressor;
+ (id)deflateErrorWithCode:(int)arg1;
- (id)closeStream;
- (id)compressBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3 shouldFinish:(_Bool)arg4;
- (void)dealloc;
- (id)setupStream;
@property(readonly) _Bool streamReady; // @synthesize streamReady;

@end

