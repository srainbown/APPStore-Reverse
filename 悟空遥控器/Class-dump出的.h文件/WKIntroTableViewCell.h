//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIButton, UILabel, UIView;

@interface WKIntroTableViewCell : UITableViewCell
{
    UILabel *_introTextView;
    UIButton *_foldButton;
    NSString *_introText;
    _Bool _isShowArrow;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isShowArrow; // @synthesize isShowArrow=_isShowArrow;
- (void)layoutSubviews;
- (void)setIntroTextViewDataSources:(id)arg1 isShowArrow:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

