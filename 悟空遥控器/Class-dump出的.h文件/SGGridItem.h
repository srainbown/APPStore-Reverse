//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class SGGridMenu;

@interface SGGridItem : UIButton
{
    SGGridMenu *_menu;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak SGGridMenu *menu; // @synthesize menu=_menu;

@end

