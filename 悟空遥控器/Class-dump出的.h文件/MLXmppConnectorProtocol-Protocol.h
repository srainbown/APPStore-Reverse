//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MiPushDDXMLElement, NSError, NSString;

@protocol MLXmppConnectorProtocol <NSObject>
- (void)addConnectionDelegate:(id <MLXmppConnectionDelegate>)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (void)addXmppChannel:(id <XMXmppChannelProtocol>)arg1;
- (void)authenticateBind:(MiPushDDXMLElement *)arg1 error:(id *)arg2 challenge:(NSString *)arg3;
- (void)checkConnectionWhileBecomeActive;
- (void)checkConnectionWhileResignActive;
- (void)connectServer;
- (void)disconnectServer;
- (NSString *)getHostIp;
- (_Bool)isServerConnected;
- (_Bool)isServerDisconnected;
- (void)onReceivedKick:(id <XMXmppChannelProtocol>)arg1 asError:(NSError *)arg2;
- (void)reconnectServer;
- (void)removeConnectionDelegate:(id <MLXmppConnectionDelegate>)arg1;
- (void)removeXmppChannel:(id <XMXmppChannelProtocol>)arg1;
- (void)sendMessage:(MiPushDDXMLElement *)arg1 channel:(id <XMXmppChannelProtocol>)arg2;
@end

