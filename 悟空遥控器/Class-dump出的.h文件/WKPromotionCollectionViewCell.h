//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UILabel, UITextView, WKCornerImageView;

@interface WKPromotionCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UITextView *_descTextView;
    UIButton *_typeButton;
    WKCornerImageView *_bannerImageView;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak WKCornerImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(nonatomic) __weak UITextView *descTextView; // @synthesize descTextView=_descTextView;
- (void)setDescText:(id)arg1;
- (void)setPromotionDataModel:(id)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *typeButton; // @synthesize typeButton=_typeButton;

@end

