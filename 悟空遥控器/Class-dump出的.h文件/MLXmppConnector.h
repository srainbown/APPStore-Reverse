//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFireHouseDogDelegate.h"
#import "MLXmppConnectorProtocol.h"
#import "XMXmppConnectionDelegate.h"
#import "XMXmppHostConnectProtocol.h"

@class MLFireHouseDog, MLSmartHost, MLXmppHostInfo, NSString, XMMulticastDelegate<MLXmppConnectionDelegate>, XMXmppConnectionManager;

@interface MLXmppConnector : NSObject <XMXmppHostConnectProtocol, XMXmppConnectionDelegate, MLFireHouseDogDelegate, MLXmppConnectorProtocol>
{
    XMXmppConnectionManager *mConnectionManager;
    XMMulticastDelegate<MLXmppConnectionDelegate> *mConnectionMultiDelegate;
    long long mReconnectCount;
    long long mInvalidTokenCount;
    MLFireHouseDog *mFireHouseDog;
    _Bool isInBackground;
    int networkStatus;
    MLSmartHost *mSmartHost;
    MLXmppHostInfo *mHostInfo;
    int state;
}

- (void).cxx_destruct;
- (void)activateFireHouseDog;
- (void)addConnectionDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (void)addXmppChannel:(id)arg1;
- (void)authenticateBind:(id)arg1 error:(id *)arg2 challenge:(id)arg3;
- (void)checkConnectionWhileBecomeActive;
- (void)checkConnectionWhileResignActive;
- (void)clearReconnectMechanism;
- (void)connectServer;
- (id)connectionChallenge;
- (void)deactivateFireHouseDog;
- (void)dealloc;
- (void)disconnectServer;
- (void)doConnectServer;
- (void)doFireHouseDogJob;
- (void)doReConnectServer;
- (void)doRealOffline;
- (void)errorHandling:(id)arg1;
- (id)getHostIp;
- (id)getXmppHostInfo;
- (void)gotoState:(int)arg1;
- (id)initWithJID:(id)arg1;
- (_Bool)isServerConnected;
- (_Bool)isServerDisconnected;
- (_Bool)needReconnectServer;
- (void)networkChanged:(int)arg1 oldStatus:(int)arg2;
- (void)onMultiLogin;
- (void)onNotRetryIndicate:(id)arg1;
- (void)onReceivedKick:(id)arg1 asError:(id)arg2;
- (void)reachabilityChanged:(id)arg1;
- (void)reconnectServer;
- (void)registerForNetworkReachabilityNotifications;
- (void)removeConnectionDelegate:(id)arg1;
- (void)removeXmppChannel:(id)arg1;
- (void)reportOffline;
- (void)reportOnline;
- (void)resetReconnectMechanism;
- (void)sendMessage:(id)arg1 channel:(id)arg2;
- (void)unsubscribeFromNetworkReachabilityNotifications;
- (_Bool)validateLoginState;
- (void)xmppConnectionError:(id)arg1;
- (void)xmppDidConnect:(id)arg1;
- (void)xmppDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppDidNotReceivePong:(id)arg1;
- (void)xmppDidReceivePresence:(id)arg1;
- (void)xmppStream:(id)arg1 bytesConnected:(long long)arg2;
- (void)xmppStream:(id)arg1 bytesDisconnected:(long long)arg2;
- (void)xmppStream:(id)arg1 bytesRecv:(long long)arg2;
- (void)xmppStream:(id)arg1 bytesSent:(long long)arg2;
- (void)xmppStream:(id)arg1 didReceiveError:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)xmppWillConnect:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

