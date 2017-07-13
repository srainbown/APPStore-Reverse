//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class BaiduMobAdReachability, CLLocationManager, NSString;

@interface BaiduMobCpuInfoManager : NSObject <CLLocationManagerDelegate>
{
    BaiduMobAdReachability *_reachabilityManager;
    CLLocationManager *_locationManager;
    struct CLLocationCoordinate2D _currentCoordinate;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
@property(nonatomic) struct CLLocationCoordinate2D currentCoordinate; // @synthesize currentCoordinate=_currentCoordinate;
- (void)dealloc;
- (id)fetchSSIDInfo;
- (id)generateCUIDString;
- (id)getCUIDWithService:(id)arg1;
- (id)getCpuInfoUrlWithBlockId:(id)arg1 appId:(id)arg2;
- (id)getCpuInfoUrlWithChannelId:(id)arg1 appId:(id)arg2;
- (id)getKeyChainQuery:(id)arg1;
- (id)getMd5_32Bit_String:(id)arg1;
- (id)init;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)reachabilityChanged:(id)arg1;
@property(retain, nonatomic) BaiduMobAdReachability *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
- (void)registApplicationNotification;
- (void)saveCUIDString:(id)arg1 CUIDService:(id)arg2;
- (void)setCookie:(id)arg1 andValue:(id)arg2;
- (void)setCookieWithContantParams;
- (void)setCookieWithVariableParams;
- (void)startUserLocationService;
- (void)stopUserLocationService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

