//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKUserModel;

@interface AccountManager : NSObject
{
    WKUserModel *_user;
}

+ (id)filePath;
+ (id)getDeviceId;
+ (id)shareManager;
- (void).cxx_destruct;
- (id)getCurrentUser;
- (void)logout;
- (void)realLoginWithId:(id)arg1 Token:(id)arg2 callBack:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) WKUserModel *user; // @synthesize user=_user;

@end

