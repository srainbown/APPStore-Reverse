//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface WKWebSearchHistoryTableViewCell : UITableViewCell
{
    UIImageView *_accessoryImageView;
    UILabel *_historyLabel;
    UIImageView *_leftImageView;
    UILabel *_historyDetailLabel;
    UIView *_seprateLineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (void)awakeFromNib;
- (void)configCellWithHistory:(id)arg1;
@property(nonatomic) __weak UILabel *historyDetailLabel; // @synthesize historyDetailLabel=_historyDetailLabel;
@property(nonatomic) __weak UILabel *historyLabel; // @synthesize historyLabel=_historyLabel;
@property(nonatomic) __weak UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void)prepareForReuse;
@property(nonatomic) __weak UIView *seprateLineView; // @synthesize seprateLineView=_seprateLineView;

@end

