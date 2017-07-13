//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "CAAnimationDelegate.h"

@class NSString, NSTimer, UIColor;

@interface WKWaterWaveDangYaDangView : UIImageView <CAAnimationDelegate>
{
    double _minRadius;
    double _maxRadius;
    UIColor *_rippleColor;
    double _rippleWidth;
    double _animationTime;
    double _animationTimerTime;
    double _strokeStart;
    double _strokeEnd;
    long long _radiuNumber;
    NSTimer *_animationTimer;
    double _pantographProportion;
    NSTimer *_rotatingTimer;
    struct CGPoint _shapePosition;
}

- (void).cxx_destruct;
@property(nonatomic) double animationTime; // @synthesize animationTime=_animationTime;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) double animationTimerTime; // @synthesize animationTimerTime=_animationTimerTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSpinAnimating;
- (void)layoutSubviews;
@property(nonatomic) double maxRadius; // @synthesize maxRadius=_maxRadius;
@property(nonatomic) double minRadius; // @synthesize minRadius=_minRadius;
@property(nonatomic) double pantographProportion; // @synthesize pantographProportion=_pantographProportion;
@property(nonatomic) long long radiuNumber; // @synthesize radiuNumber=_radiuNumber;
- (void)rippleAnimation;
@property(retain, nonatomic) UIColor *rippleColor; // @synthesize rippleColor=_rippleColor;
@property(nonatomic) double rippleWidth; // @synthesize rippleWidth=_rippleWidth;
@property(retain, nonatomic) NSTimer *rotatingTimer; // @synthesize rotatingTimer=_rotatingTimer;
@property(nonatomic) struct CGPoint shapePosition; // @synthesize shapePosition=_shapePosition;
@property(nonatomic) double strokeEnd; // @synthesize strokeEnd=_strokeEnd;
@property(nonatomic) double strokeStart; // @synthesize strokeStart=_strokeStart;
- (void)setupRippleView;
- (void)spin;
- (void)startRippleAnimation;
- (void)startRippleAnimationOnce;
- (void)startSpinAnimation;
- (void)stopRippleAnimation;
- (void)stopSpinAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

