//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XMXmppStreamConfig : NSObject
{
    unsigned short _port;
    NSString *_xmppVersion;
    NSString *_publicIp;
    NSString *_hostStr;
    NSString *_hostJid;
    NSString *_hostIp;
    NSString *_netType;
    NSString *_platform;
    NSString *_os;
    NSString *_local;
    NSString *_cryptMethod;
    NSString *_sKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cryptMethod; // @synthesize cryptMethod=_cryptMethod;
@property(retain, nonatomic) NSString *hostIp; // @synthesize hostIp=_hostIp;
@property(retain, nonatomic) NSString *hostJid; // @synthesize hostJid=_hostJid;
@property(retain, nonatomic) NSString *hostStr; // @synthesize hostStr=_hostStr;
@property(retain, nonatomic) NSString *local; // @synthesize local=_local;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *publicIp; // @synthesize publicIp=_publicIp;
@property(retain, nonatomic) NSString *sKey; // @synthesize sKey=_sKey;
@property(retain, nonatomic) NSString *xmppVersion; // @synthesize xmppVersion=_xmppVersion;

@end

