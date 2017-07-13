//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDAsyncSocket, HTTPMessage, NSData, NSObject<OS_dispatch_queue>;

@interface WebSocket : NSObject
{
    NSObject<OS_dispatch_queue> *websocketQueue;
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    NSData *term;
    _Bool isStarted;
    _Bool isOpen;
    _Bool isVersion76;
    id delegate;
    _Bool isRFC6455;
    _Bool nextFrameMasked;
    unsigned long long nextOpCode;
    NSData *maskingKey;
}

+ (_Bool)isRFC6455Request:(id)arg1;
+ (_Bool)isVersion76Request:(id)arg1;
+ (_Bool)isWebSocketRequest:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property id delegate;
- (void)didClose;
- (void)didOpen;
- (void)didReceiveMessage:(id)arg1;
- (id)initWithRequest:(id)arg1 socket:(id)arg2;
- (_Bool)isValidWebSocketFrame:(unsigned char)arg1;
- (id)locationResponseHeaderValue;
- (id)originResponseHeaderValue;
- (id)processKey:(id)arg1;
- (void)readRequestBody;
- (id)secWebSocketKeyResponseHeaderValue;
- (void)sendData:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendResponseBody:(id)arg1;
- (void)sendResponseHeaders;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)start;
- (void)stop;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *websocketQueue; // @synthesize websocketQueue;

@end

