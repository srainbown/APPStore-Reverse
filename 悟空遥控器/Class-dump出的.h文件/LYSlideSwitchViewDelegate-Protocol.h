//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LYSlideSwitchView, UIView;

@protocol LYSlideSwitchViewDelegate <NSObject>
- (unsigned long long)numberOfTab:(LYSlideSwitchView *)arg1;
- (UIView *)slideSwitchView:(LYSlideSwitchView *)arg1 viewOfTab:(unsigned long long)arg2;

@optional
- (void)slideSwitchView:(LYSlideSwitchView *)arg1 didselectTab:(unsigned long long)arg2;
@end

