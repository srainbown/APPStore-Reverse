//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SimplePingDelegate.h"

@class NSDate, NSMutableArray, NSOperationQueue, NSString, NSTimer, WKDeviceItem, WKScanOperation;

@interface WKDeviceManager : NSObject <SimplePingDelegate>
{
    NSDate *_startTime;
    NSString *_tempDeviceIp;
    WKDeviceItem *_lastDevice;
    WKScanOperation *_scanOperation;
    CDUnknownBlockType _callBackBlock;
    _Bool _elevateStop;
    _Bool _elevating;
    NSOperationQueue *operationQueue;
    NSMutableArray *netStatusArray;
    NSTimer *pingTimer;
    NSString *loadLastDeviceIP;
}

+ (_Bool)isHDLiveMingPai;
+ (id)shareInstances;
+ (long long)shouldShowPlateView;
- (void).cxx_destruct;
- (void)cancelScanDevices;
- (void)chooseDevice:(id)arg1;
- (double)computeAverageTime;
- (void)dealloc;
- (void)detectionNetworkStatus;
- (void)discoverDevice;
- (void)discoverDevices;
- (void)disposeTimedout;
- (void)elevateLoop;
@property(nonatomic) _Bool elevateStop; // @synthesize elevateStop=_elevateStop;
@property(nonatomic) _Bool elevating; // @synthesize elevating=_elevating;
- (id)init;
@property(retain, nonatomic) NSString *loadLastDeviceIP; // @synthesize loadLastDeviceIP;
- (void)loopSendPingData;
@property(retain, nonatomic) NSMutableArray *netStatusArray; // @synthesize netStatusArray;
- (unsigned long long)netWorkStatus:(double)arg1;
- (void)onAppEnterBackground;
- (void)onAppWillEnterForeground;
- (void)onCurrentLaunchAppChanged;
- (void)onNetWrokChange:(id)arg1;
- (void)onUdpDeviceArrived:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue;
@property(retain, nonatomic) NSTimer *pingTimer; // @synthesize pingTimer;
- (void)registerNoticationCenter;
- (void)resetHDLiveLabel;
- (void)saveLastDeviceIp:(id)arg1;
- (void)saveTempDeviceIp;
- (void)scanDevice;
- (void)scanDevicesWithResultBlock:(CDUnknownBlockType)arg1;
- (void)serverIsUp:(id)arg1;
- (void)setCurrentDevices:(id)arg1;
- (void)setNetStatusArrayDataWithDurationTime:(float)arg1;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)startElevateLoop;
- (void)stopElevateLoop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

