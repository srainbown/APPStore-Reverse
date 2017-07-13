//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseProtocol.h"

#import "GCDAsyncUdpSocketDelegate.h"

@class GCDAsyncUdpSocket, NSTimer;

@interface WKKuKaiProtocol : WKBaseProtocol <GCDAsyncUdpSocketDelegate>
{
    NSTimer *_heartBeatTimer;
    GCDAsyncUdpSocket *_sendKeySocket;
    CDUnknownBlockType _successBlock;
    unsigned short _sendDataPort;
}

- (void).cxx_destruct;
- (void)autoInstallServerApp:(CDUnknownBlockType)arg1;
- (_Bool)canAutoInstallServer;
- (void)discoverDevices;
- (id)getKuKaiKeyStrByKeyCode:(long long)arg1;
- (id)getMouseClickBuffer;
- (id)getMouseMoveBuffer:(double)arg1 withY:(double)arg2;
- (_Bool)needChange:(id)arg1;
- (void)openServerApp:(CDUnknownBlockType)arg1;
- (void)releaseResources;
- (void)sendHeartBeat;
- (void)sendLongKeyWithKey:(int)arg1 withAction:(int)arg2;
- (void)sendPointerDown:(unsigned long long)arg1;
- (void)sendPointerMoveWithX:(float)arg1 withY:(float)arg2 withMill:(int)arg3;
- (void)sendProtocolKey:(int)arg1;
- (void)startHeartBeat;
- (void)stopHeartBeat;
- (void)udpSocket:(id)arg1 didNotConnect:(id)arg2;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)willWorkWithDevice:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (_Bool)willWorkWithKey:(int)arg1;

@end

