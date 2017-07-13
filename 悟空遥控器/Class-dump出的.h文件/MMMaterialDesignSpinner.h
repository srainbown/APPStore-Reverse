//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAMediaTimingFunction, CAShapeLayer;

@interface MMMaterialDesignSpinner : UIView
{
    _Bool _hidesWhenStopped;
    _Bool _isAnimating;
    CAShapeLayer *_progressLayer;
    CAMediaTimingFunction *_timingFunction;
    double _duration;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dealloc;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)layoutSubviews;
@property(nonatomic) double lineWidth;
@property(readonly, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
- (void)resetAnimations;
- (void)setAnimating:(_Bool)arg1;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void)startAnimating;
- (void)stopAnimating;
- (void)tintColorDidChange;
- (void)updatePath;

@end

