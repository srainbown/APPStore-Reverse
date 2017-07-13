//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGBaseMenu.h"

@class NSArray, SGButton, UILabel, UIScrollView;

@interface SGGridMenu : SGBaseMenu
{
    UILabel *_titleLabel;
    UIScrollView *_contentScrollView;
    SGButton *_cancelButton;
    NSArray *_itemTitles;
    NSArray *_itemImages;
    NSArray *_items;
    CDUnknownBlockType _actionHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandle; // @synthesize actionHandle=_actionHandle;
@property(retain, nonatomic) SGButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 itemTitles:(id)arg2 images:(id)arg3;
@property(retain, nonatomic) NSArray *itemImages; // @synthesize itemImages=_itemImages;
@property(retain, nonatomic) NSArray *itemTitles; // @synthesize itemTitles=_itemTitles;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutContentScrollView;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupWithItemTitles:(id)arg1 images:(id)arg2;
- (void)tapAction:(id)arg1;
- (void)triggerSelectedAction:(CDUnknownBlockType)arg1;

@end

