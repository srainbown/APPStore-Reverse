//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WKLaunchAppInfoModel : NSObject
{
    unsigned int _versionCode;
    NSString *_appName;
    NSString *_pkgName;
    NSString *_deviceBuildProduct;
    NSString *_versionName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *deviceBuildProduct; // @synthesize deviceBuildProduct=_deviceBuildProduct;
- (id)initWithInfoData:(id)arg1;
@property(retain, nonatomic) NSString *pkgName; // @synthesize pkgName=_pkgName;
@property(nonatomic) unsigned int versionCode; // @synthesize versionCode=_versionCode;
@property(retain, nonatomic) NSString *versionName; // @synthesize versionName=_versionName;

@end

