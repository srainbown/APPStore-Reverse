//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMSocialCryptor : NSObject
{
    char aesKey[17];
}

+ (id)AES128Decrypt:(id)arg1;
+ (id)AES128Encrypt:(id)arg1;
+ (id)sharedInstance;
+ (void)updateAESKey:(id)arg1;
- (id)AES128Decrypt:(id)arg1;
- (id)AES128Encrypt:(id)arg1;
- (id)base64DecodeData:(id)arg1;
- (id)base64EncodeData:(id)arg1;
- (id)init;
- (id)md5Value:(id)arg1;
- (void)updateAESKey:(id)arg1;

@end

