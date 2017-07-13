//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImage, UIImageView, UILabel, UIView, WKNativeAd;

@interface WKDianboFindBigAdTableViewCell : UITableViewCell
{
    _Bool flag;
    UIImage *pImage;
    UIImageView *_adImageView;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_desLabel;
    UIButton *_downLoadBtn;
    WKNativeAd *_ad;
    UIView *_bottomVIew;
    NSLayoutConstraint *_adImageViewHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKNativeAd *ad; // @synthesize ad=_ad;
@property(nonatomic) __weak UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(nonatomic) __weak NSLayoutConstraint *adImageViewHeightConstraint; // @synthesize adImageViewHeightConstraint=_adImageViewHeightConstraint;
- (void)awakeFromNib;
@property(nonatomic) __weak UIView *bottomVIew; // @synthesize bottomVIew=_bottomVIew;
@property(nonatomic) __weak UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(nonatomic) __weak UIButton *downLoadBtn; // @synthesize downLoadBtn=_downLoadBtn;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)setData:(id)arg1 model:(id)arg2;
- (void)setDataModel:(id)arg1;

@end

