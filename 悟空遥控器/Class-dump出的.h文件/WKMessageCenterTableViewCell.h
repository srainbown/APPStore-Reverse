//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UITextView, WKNotRecognizeButton;

@interface WKMessageCenterTableViewCell : UITableViewCell
{
    UIImageView *_bannerImageView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UITextView *_descTextView;
    WKNotRecognizeButton *_detailButton;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(nonatomic) __weak UITextView *descTextView; // @synthesize descTextView=_descTextView;
@property(nonatomic) __weak WKNotRecognizeButton *detailButton; // @synthesize detailButton=_detailButton;
- (void)setCellDataSourceModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

