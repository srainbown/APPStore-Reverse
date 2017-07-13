//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFlyLoginParam;

@interface IFlySpeechUtility : NSObject
{
    IFlyLoginParam *_loginParam;
    unsigned long long _engineMode;
    id <IFlySpeechplusDelegate> _delegate;
}

+ (id)createUtility:(id)arg1;
+ (_Bool)destroy;
+ (id)getUtility;
+ (_Bool)isLogin;
- (void)dealloc;
@property(nonatomic) id <IFlySpeechplusDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long engineMode; // @synthesize engineMode=_engineMode;
- (id)init;
- (id)login;
@property(retain, nonatomic) IFlyLoginParam *loginParam; // @synthesize loginParam=_loginParam;
- (int)logout;
- (id)parameterForKey:(id)arg1;
- (void)setEngineMode:(unsigned long long)arg1;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;

@end

