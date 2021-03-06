//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface WKCleanButtonLayer : UIView
{
    double _rectOffset;
    NSTimer *_waveAnimationTimer;
    double _currentLinePointY;
    _Bool _isStop;
    float _motionLastYaw;
}

- (void).cxx_destruct;
- (void)changeWaveHeightWithValue:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) float motionLastYaw; // @synthesize motionLastYaw=_motionLastYaw;
- (void)resetWaveSetting;
- (void)startWaveAnimation;
- (void)stopWaveAnimation;

@end

