//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString;

@interface SBJson4StreamTokeniser : NSObject
{
    NSMutableData *data;
    const char *bytes;
    unsigned long long index;
    unsigned long long offset;
    NSString *_error;
}

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (_Bool)decodeHexQuad:(unsigned short *)arg1;
@property(readonly, copy, nonatomic) NSString *error; // @synthesize error=_error;
- (int)getNumberToken:(char **)arg1 length:(unsigned long long *)arg2;
- (int)getStringToken:(char **)arg1 length:(unsigned long long *)arg2;
- (int)getToken:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)getUnichar:(unsigned short *)arg1;
- (_Bool)haveOneMoreCharacter;
- (_Bool)haveRemainingCharacters:(unsigned long long)arg1;
- (int)match:(char *)arg1 retval:(int)arg2 token:(char **)arg3 length:(unsigned long long *)arg4;
- (void)setError:(id)arg1;
- (void)skipWhitespace;

@end

