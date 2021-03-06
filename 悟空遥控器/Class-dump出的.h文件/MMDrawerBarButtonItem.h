//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class MMDrawerMenuButtonView;

@interface MMDrawerBarButtonItem : UIBarButtonItem
{
    MMDrawerMenuButtonView *_buttonView;
}

+ (id)drawerButtonItemImage;
- (void).cxx_destruct;
@property(retain, nonatomic) MMDrawerMenuButtonView *buttonView; // @synthesize buttonView=_buttonView;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)menuButtonColorForState:(unsigned long long)arg1;
- (void)setMenuButtonColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTintColor:(id)arg1;
- (id)shadowColorForState:(unsigned long long)arg1;
- (void)touchUpInside:(id)arg1;

@end

