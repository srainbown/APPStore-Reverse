//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface ZhiBoAlertView : UIView
{
    UIImageView *_topImageView;
    UILabel *_tvNameLable;
    UIButton *_livingButton;
    UILabel *_nextActionLabel;
    UILabel *_threeActionLabel;
    UIButton *_colseButton;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)closeButtonAction:(id)arg1;
@property(nonatomic) __weak UIButton *colseButton; // @synthesize colseButton=_colseButton;
@property(nonatomic) __weak UIButton *livingButton; // @synthesize livingButton=_livingButton;
@property(nonatomic) __weak UILabel *nextActionLabel; // @synthesize nextActionLabel=_nextActionLabel;
- (void)setDataSource:(id)arg1;
@property(nonatomic) __weak UILabel *threeActionLabel; // @synthesize threeActionLabel=_threeActionLabel;
@property(nonatomic) __weak UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(nonatomic) __weak UILabel *tvNameLable; // @synthesize tvNameLable=_tvNameLable;

@end

