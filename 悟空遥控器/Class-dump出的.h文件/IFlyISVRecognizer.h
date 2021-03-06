//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFlyISVMSCHandler, IFlyISVParam, ISVEngine, NSMutableArray, NSString;

@interface IFlyISVRecognizer : NSObject
{
    NSMutableArray *_queue;
    IFlyISVMSCHandler *_isvHandler;
    ISVEngine *_isv;
    _Bool isError;
    _Bool isTvp;
    NSString *ivpvid;
    IFlyISVParam *_isvParam;
    id <IFlyISVDelegate> _delegate;
}

+ (id)sharedInstance;
+ (id)sharedInstanceQue;
- (void)cancel;
- (void)dealloc;
@property id <IFlyISVDelegate> delegate; // @synthesize delegate=_delegate;
- (void)end:(id)arg1;
- (id)generatePassword:(int)arg1;
- (id)getParameter:(id)arg1;
- (id)getPasswordList:(int)arg1;
- (id)init;
- (_Bool)isListening;
- (void)onError:(id)arg1;
- (void)onRecognition;
- (void)onResult:(id)arg1;
- (void)onVolumeChanged:(int)arg1;
- (void)recognition;
- (void)refreashVolume:(id)arg1;
- (oneway void)release;
- (void)result:(id)arg1;
- (_Bool)sendRequest:(id)arg1 authid:(id)arg2 pwdt:(int)arg3 ptxt:(id)arg4 vid:(id)arg5 err:(int *)arg6;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;
- (void)startListening;
- (void)stopListening;

@end

