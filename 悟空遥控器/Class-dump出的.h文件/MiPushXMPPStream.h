//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MiPushGCDAsyncSocketDelegate.h"

@class MiPushDDList, MiPushDDXMLElement, MiPushGCDAsyncSocket, MiPushGCDMulticastDelegate<XMPPStreamDelegate>, MiPushXMPPJID, MiPushXMPPParser, MiPushXMPPPresence, MiPushXMPPSRVResolver, NSArray, NSError, NSMutableArray, NSMutableData, NSMutableDictionary, NSRunLoop, NSString, NSThread;

@interface MiPushXMPPStream : NSObject <MiPushGCDAsyncSocketDelegate>
{
    struct dispatch_queue_s *xmppQueue;
    struct dispatch_queue_s *parserQueue;
    MiPushGCDMulticastDelegate<XMPPStreamDelegate> *multicastDelegate;
    int state;
    MiPushGCDAsyncSocket *asyncSocket;
    NSMutableData *socketBuffer;
    unsigned long long numberOfBytesSent;
    unsigned long long numberOfBytesReceived;
    MiPushXMPPParser *parser;
    NSError *parserError;
    unsigned char flags;
    unsigned char config;
    NSString *hostName;
    unsigned short hostPort;
    NSString *strModel;
    NSString *strOS;
    NSString *strLocal;
    NSString *strConnpt;
    NSString *strHost;
    NSString *tempPassword;
    _Bool isAccessToken;
    NSString *appId;
    MiPushXMPPJID *myJID;
    MiPushXMPPJID *remoteJID;
    MiPushXMPPPresence *myPresence;
    MiPushDDXMLElement *rootElement;
    double keepAliveInterval;
    struct dispatch_source_s *keepAliveTimer;
    double lastSendReceiveTime;
    MiPushDDList *registeredModules;
    NSMutableDictionary *autoDelegateDict;
    MiPushXMPPSRVResolver *srvResolver;
    NSArray *srvResults;
    unsigned long long srvResultsIndex;
    NSMutableArray *receipts;
    NSThread *xmppUtilityThread;
    NSRunLoop *xmppUtilityRunLoop;
    id userTag;
    NSString *strChallenge;
    NSString *strXmppVersion;
}

+ (id)generateUUID;
+ (void)xmppThreadIgnore:(id)arg1;
+ (void)xmppThreadMain;
+ (void)xmppThreadStop;
- (void)MiPushXMPPParser:(id)arg1 didFail:(id)arg2;
- (void)MiPushXMPPParser:(id)arg1 didReadElement:(id)arg2;
- (void)MiPushXMPPParser:(id)arg1 didReadRoot:(id)arg2;
- (void)addDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
@property(copy) NSString *appId;
- (_Bool)authenticateAnonymously:(id *)arg1;
- (_Bool)authenticateBind:(id)arg1 error:(id *)arg2;
- (_Bool)authenticateEasyWithToken:(id)arg1 sid:(id)arg2 signa:(id)arg3 dictAttrs:(id)arg4 error:(id *)arg5;
- (_Bool)authenticateWithFacebookAccessToken:(id)arg1 error:(id *)arg2;
- (_Bool)authenticateWithPassword:(id)arg1 error:(id *)arg2;
- (void)autoAddDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2 toModulesOfClass:(Class)arg3;
- (void)commonInit;
- (_Bool)connect:(id *)arg1;
- (_Bool)connectP2PWithSocket:(id)arg1 error:(id *)arg2;
- (_Bool)connectTo:(id)arg1 withAddress:(id)arg2 error:(id *)arg3;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (void)continueSendElement:(id)arg1 withTag:(long long)arg2;
- (void)continueStartTLS:(id)arg1;
- (void)dealloc;
- (_Bool)didStartNegotiation;
- (void)disconnect;
- (void)disconnectAfterSending;
@property _Bool enableBackgroundingOnSocket;
- (void)enumerateModulesWithBlock:(CDUnknownBlockType)arg1;
- (id)generateUUID;
- (struct dispatch_queue_s *)getXmppQueue;
- (void)handleAuth1:(id)arg1;
- (void)handleAuth2:(id)arg1;
- (void)handleAuth3:(id)arg1;
- (void)handleBinding:(id)arg1;
- (void)handleRegistration:(id)arg1;
- (void)handleStartSessionResponse:(id)arg1;
- (void)handleStartTLSResponse:(id)arg1;
- (void)handleStreamFeatures;
@property(copy) NSString *hostName;
@property unsigned short hostPort;
- (id)init;
- (id)initP2PFrom:(id)arg1;
- (id)initWithFacebookAppId:(id)arg1;
- (_Bool)isAuthenticated;
- (_Bool)isConnected;
- (_Bool)isDisconnected;
- (_Bool)isP2P;
- (_Bool)isP2PInitiator;
- (_Bool)isP2PRecipient;
- (_Bool)isSecure;
- (void)keepAlive;
@property double keepAliveInterval;
@property(copy) MiPushXMPPJID *myJID;
@property(readonly) MiPushXMPPPresence *myPresence;
@property(readonly) unsigned long long numberOfBytesReceived;
@property(readonly) unsigned long long numberOfBytesSent;
- (_Bool)oldSchoolSecureConnect:(id *)arg1;
- (void)registerModule:(id)arg1;
- (_Bool)registerWithPassword:(id)arg1 error:(id *)arg2;
@property(readonly) MiPushXMPPJID *remoteJID;
- (void)removeAutoDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2 fromModulesOfClass:(Class)arg3;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
@property _Bool resetByteCountPerConnection;
- (id)rootElement;
- (_Bool)secureConnection:(id *)arg1;
- (void)sendElement:(id)arg1;
- (void)sendElement:(id)arg1 andGetReceipt:(id *)arg2;
- (void)sendElement:(id)arg1 withTag:(long long)arg2;
- (void)sendIQ:(id)arg1 withTag:(long long)arg2;
- (void)sendMessage:(id)arg1 withTag:(long long)arg2;
- (void)sendOpeningNegotiation;
- (void)sendPresence:(id)arg1 withTag:(long long)arg2;
- (void)sendSASLRequestForMechanism:(id)arg1;
- (void)sendStartTLSRequest;
- (float)serverXmppStreamVersionNumber;
- (void)setDidStartNegotiation:(_Bool)arg1;
- (void)setIsAuthenticated:(_Bool)arg1;
- (void)setIsSecure:(_Bool)arg1;
@property(retain, nonatomic) NSString *strChallenge; // @synthesize strChallenge;
@property(copy) NSString *strConnpt;
@property(copy) NSString *strHost;
@property(copy) NSString *strLocal;
@property(copy) NSString *strModel;
@property(copy) NSString *strOS;
@property(retain, nonatomic) NSString *strXmppVersion; // @synthesize strXmppVersion;
@property(retain) id tag; // @synthesize tag=userTag;
- (void)setXmppUtilityRunLoop:(id)arg1;
- (void)setupKeepAliveTimer;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2 dataSent:(unsigned long long)arg3;
- (void)socket:(id)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socketDidSecure:(id)arg1;
- (void)srvResolver:(id)arg1 didNotResolveDueToError:(id)arg2;
- (void)srvResolver:(id)arg1 didResolveRecords:(id)arg2;
- (void)startNegotiation;
- (void)startTLS;
- (_Bool)supportsAnonymousAuthentication;
- (_Bool)supportsDeprecatedDigestAuthentication;
- (_Bool)supportsDeprecatedPlainAuthentication;
- (_Bool)supportsDigestMD5Authentication;
- (_Bool)supportsInBandRegistration;
- (_Bool)supportsPlainAuthentication;
- (_Bool)supportsStartTLS;
- (_Bool)supportsXFacebookPlatformAuthentication;
- (void)tryNextSrvResult;
- (void)unregisterModule:(id)arg1;
- (void)xmppParserDidEnd:(id)arg1;
- (id)xmppUtilityRunLoop;
- (id)xmppUtilityThread;

@end

