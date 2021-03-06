//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class CABasicAnimation, CADisplayLink;

@interface WKRoundView : UIImageView
{
    _Bool _isAnimation;
    float _currentDegree;
    float _rotationDuration;
    CADisplayLink *rotatingLink;
    CABasicAnimation *_rotationAnimation;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAnimation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pauseAnimation;
- (void)rePositioningViews:(struct CGRect)arg1;
@property(retain, nonatomic) CADisplayLink *rotatingLink; // @synthesize rotatingLink;
@property(retain, nonatomic) CABasicAnimation *rotationAnimation; // @synthesize rotationAnimation=_rotationAnimation;
@property(nonatomic) float rotationDuration; // @synthesize rotationDuration=_rotationDuration;
- (void)startAnimation;
- (void)stopAnimation;
- (void)transformImageView;
- (void)willMoveToSuperview:(id)arg1;

@end

