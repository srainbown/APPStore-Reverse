//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WiFiMessage : NSObject
{
    _Bool _isWiFiConnecting;
    NSString *_homeWifissid;
    NSString *_ssid;
    NSString *_ssidpwd;
    NSString *_TVip;
}

+ (id)sharedMessage;
+ (void)startMonitorWifiChange;
+ (void)stopMonitorWifiChange;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *TVip; // @synthesize TVip=_TVip;
- (void)getCurrentWifiMessage;
@property(copy, nonatomic) NSString *homeWifissid; // @synthesize homeWifissid=_homeWifissid;
@property(nonatomic) _Bool isWiFiConnecting; // @synthesize isWiFiConnecting=_isWiFiConnecting;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(copy, nonatomic) NSString *ssidpwd; // @synthesize ssidpwd=_ssidpwd;

@end

