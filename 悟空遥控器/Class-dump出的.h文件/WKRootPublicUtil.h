//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, WKDeviceItem;

@interface WKRootPublicUtil : NSObject
{
    NSArray *_appList;
    NSMutableArray *_deviceArray;
    WKDeviceItem *_currentDevices;
    _Bool _alreadyCheckOnline;
}

+ (id)createImageWithBgColor:(id)arg1 placeholder:(id)arg2 size:(struct CGSize)arg3;
+ (id)createImageWithColor:(id)arg1;
+ (id)createImageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)getPreferredLanguage;
+ (id)getTimeStringWithDate:(id)arg1;
+ (id)getTimeStringWithDate:(id)arg1 formatStr:(id)arg2;
+ (id)shareInstances;
- (void).cxx_destruct;
- (_Bool)checkAppAlreayExist:(id)arg1;
- (id)init;

@end

