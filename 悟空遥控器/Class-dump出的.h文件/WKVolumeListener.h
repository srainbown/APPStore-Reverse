//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKVolumeListener : NSObject
{
    float _launchVolume;
}

+ (id)shareInstances;
- (void)startListener;
- (void)stopListener;
- (void)volumeChanged:(id)arg1;

@end

