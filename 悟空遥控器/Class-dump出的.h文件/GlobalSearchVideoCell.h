//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NewVideoInfoModel, UIImageView, UILabel;

@interface GlobalSearchVideoCell : UITableViewCell
{
    NewVideoInfoModel *_videoModel;
    UIImageView *_bannerImg;
    UILabel *_videoTitleLabel;
    UILabel *_starLabel;
    UILabel *_typeLabel;
    UILabel *_yearLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *bannerImg; // @synthesize bannerImg=_bannerImg;
- (void)setCellDataSource:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak UILabel *starLabel; // @synthesize starLabel=_starLabel;
@property(nonatomic) __weak UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(nonatomic) __weak UILabel *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(nonatomic) __weak UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;

@end

