//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSession;

@interface CIBNNetworkManager : NSObject
{
    NSURLSession *_session;
}

+ (id)sharedNetworkManager;
- (void).cxx_destruct;
- (id)GETWithUrl:(id)arg1 params:(id)arg2 JSONCallback:(CDUnknownBlockType)arg3;
- (id)HTTPRequestWithUrl:(id)arg1 HTTPMethod:(unsigned long long)arg2 params:(id)arg3 JSONCallback:(CDUnknownBlockType)arg4;
- (id)HTTPRequestWithUrl:(id)arg1 HTTPMethod:(unsigned long long)arg2 params:(id)arg3 additionHeaders:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)POSTWithUrl:(id)arg1 params:(id)arg2 JSONCallback:(CDUnknownBlockType)arg3;
- (id)queryParamsFromDict:(id)arg1 withUrl:(id)arg2;
- (id)reuqestWithUrlStr:(id)arg1 HTTPMethod:(unsigned long long)arg2 params:(id)arg3 additionHeaders:(id)arg4;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;

@end

