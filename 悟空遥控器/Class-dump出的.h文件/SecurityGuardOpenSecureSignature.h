//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardOpenSecureSignature.h"

@class NSString;

@interface SecurityGuardOpenSecureSignature : NSObject <ISecurityGuardOpenSecureSignature>
{
}

- (id)callCoreSignFunctionsWithArray:(char **)arg1 arrayLen:(unsigned int)arg2 appKey:(id)arg3 signType:(long long)arg4 mask:(id)arg5;
- (CDStruct_f8bc7150 *)convertNSDatatoPuffer:(id)arg1;
- (void)createArrayForAtlasSignParamWithParamDict:(id)arg1 arrayPtr:(char ***)arg2 arrayLenPtr:(unsigned int *)arg3;
- (void)createArrayForOneParamWithParamDict:(id)arg1 arrayPtr:(char ***)arg2 arrayLenPtr:(unsigned int *)arg3;
- (void)createArrayForTopSignParamWithParamDict:(id)arg1 arrayPtr:(char ***)arg2 arrayLenPtr:(unsigned int *)arg3;
- (Class)getMetaClass;
- (id)getSafeCookie:(id)arg1 secretKey:(id)arg2 authCode:(id)arg3;
- (id)signRequest:(id)arg1 authCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

