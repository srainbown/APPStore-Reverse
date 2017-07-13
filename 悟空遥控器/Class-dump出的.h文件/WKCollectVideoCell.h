//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface WKCollectVideoCell : UITableViewCell
{
    NSLayoutConstraint *_bottomLineLeft;
    UIImageView *_imageV;
    UILabel *_videoNameLbl;
    UIButton *_videoTagBtn;
    UILabel *_actorLbl;
    UILabel *_areaLbl;
}

+ (id)loadCollectVideoCell:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *actorLbl; // @synthesize actorLbl=_actorLbl;
@property(nonatomic) __weak UILabel *areaLbl; // @synthesize areaLbl=_areaLbl;
- (void)awakeFromNib;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineLeft; // @synthesize bottomLineLeft=_bottomLineLeft;
- (void)configCellWithData:(id)arg1;
@property(nonatomic) __weak UIImageView *imageV; // @synthesize imageV=_imageV;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak UILabel *videoNameLbl; // @synthesize videoNameLbl=_videoNameLbl;
@property(nonatomic) __weak UIButton *videoTagBtn; // @synthesize videoTagBtn=_videoTagBtn;

@end

