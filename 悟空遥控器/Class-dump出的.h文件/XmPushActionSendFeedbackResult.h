//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, Target, XmPushActionSendFeedback;

@interface XmPushActionSendFeedbackResult : NSObject <NSCoding>
{
    NSString *__debug;
    Target *__target;
    NSString *__id;
    NSString *__appId;
    XmPushActionSendFeedback *__request;
    long long __errorCode;
    NSString *__reason;
    NSString *__category;
    _Bool __debug_isset;
    _Bool __target_isset;
    _Bool __id_isset;
    _Bool __appId_isset;
    _Bool __request_isset;
    _Bool __errorCode_isset;
    _Bool __reason_isset;
    _Bool __category_isset;
}

@property(retain, nonatomic, getter=appId, setter=setAppId:) NSString *appId;
- (_Bool)appIdIsSet;
@property(retain, nonatomic, getter=category, setter=setCategory:) NSString *category;
- (_Bool)categoryIsSet;
- (void)dealloc;
@property(retain, nonatomic, getter=debug, setter=setDebug:) NSString *debug;
- (_Bool)debugIsSet;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic, getter=errorCode, setter=setErrorCode:) long long errorCode;
- (_Bool)errorCodeIsSet;
@property(retain, nonatomic, getter=id, setter=setId:) NSString *id;
- (_Bool)idIsSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithDebug:(id)arg1 target:(id)arg2 id:(id)arg3 appId:(id)arg4 request:(id)arg5 errorCode:(long long)arg6 reason:(id)arg7 category:(id)arg8;
- (void)read:(id)arg1;
@property(retain, nonatomic, getter=reason, setter=setReason:) NSString *reason;
- (_Bool)reasonIsSet;
@property(retain, nonatomic, getter=request, setter=setRequest:) XmPushActionSendFeedback *request;
- (_Bool)requestIsSet;
@property(retain, nonatomic, getter=target, setter=setTarget:) Target *target;
- (_Bool)targetIsSet;
- (void)unsetAppId;
- (void)unsetCategory;
- (void)unsetDebug;
- (void)unsetErrorCode;
- (void)unsetId;
- (void)unsetReason;
- (void)unsetRequest;
- (void)unsetTarget;
- (void)write:(id)arg1;

@end

