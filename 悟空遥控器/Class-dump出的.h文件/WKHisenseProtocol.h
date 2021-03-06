//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseProtocol.h"

#import "GCDAsyncUdpSocketDelegate.h"

@class GCDAsyncUdpSocket, NSString, NSTimer;

@interface WKHisenseProtocol : WKBaseProtocol <GCDAsyncUdpSocketDelegate>
{
    GCDAsyncUdpSocket *_gcdUdpSocket;
    NSString *_dstPort;
    NSString *_secDstPort;
    NSString *_heartBeatInfo;
    NSTimer *_heartBeatTimer;
    CDUnknownBlockType _successBlock;
    long long _sendSocketIndex;
}

- (void).cxx_destruct;
- (void)autoInstallServerApp:(CDUnknownBlockType)arg1;
- (_Bool)canAutoInstallServer;
- (void)dealloc;
- (int)getCmdTag:(id)arg1;
- (id)getHisenseKeyCodeStr:(long long)arg1;
- (id)init;
- (_Bool)needChange:(id)arg1;
- (void)onEnterBackground;
- (void)onWillEnterForground;
- (void)openServerApp:(CDUnknownBlockType)arg1;
- (void)releaseResources;
- (void)sendHeartBeat;
- (void)sendHisenseKeycode:(id)arg1;
- (void)sendProtocolKey:(int)arg1;
@property long long sendSocketIndex; // @synthesize sendSocketIndex=_sendSocketIndex;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)willWorkWithDevice:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (_Bool)willWorkWithKey:(int)arg1;

@end

