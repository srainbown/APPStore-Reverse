//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface GDTSplashSkipView : UIView
{
    int _exposureTime;
    id <GDTSplashSkipViewDelegate> _delegate;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GDTSplashSkipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int exposureTime; // @synthesize exposureTime=_exposureTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)startTick:(int)arg1;
- (void)stopTick;
- (void)tick;

@end

