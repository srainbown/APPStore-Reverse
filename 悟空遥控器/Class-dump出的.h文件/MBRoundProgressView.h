//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MBRoundProgressView : UIView
{
    _Bool _annular;
    float _progress;
    UIColor *_progressTintColor;
    UIColor *_backgroundTintColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, getter=isAnnular) _Bool annular; // @synthesize annular=_annular;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;

@end

