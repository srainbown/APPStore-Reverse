//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CIBNSearchResultCell : UITableViewCell
{
    UIView *_bottomLine;
    NSLayoutConstraint *_bottomLineLeft;
    UIImageView *_posterImageV;
    UILabel *_titleLbl;
    UILabel *_dateLbl;
    UILabel *_actorLbl;
    UILabel *_directorLbl;
    UILabel *_purpleTagLbl;
    UILabel *_greenTagLbl;
    UILabel *_yellowTagLbl;
}

+ (id)CIBNSearchResultCellWithTableView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *actorLbl; // @synthesize actorLbl=_actorLbl;
- (void)awakeFromNib;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineLeft; // @synthesize bottomLineLeft=_bottomLineLeft;
- (void)cofigCellWithModel:(id)arg1;
@property(nonatomic) __weak UILabel *dateLbl; // @synthesize dateLbl=_dateLbl;
@property(nonatomic) __weak UILabel *directorLbl; // @synthesize directorLbl=_directorLbl;
@property(nonatomic) __weak UILabel *greenTagLbl; // @synthesize greenTagLbl=_greenTagLbl;
@property(nonatomic) __weak UIImageView *posterImageV; // @synthesize posterImageV=_posterImageV;
@property(nonatomic) __weak UILabel *purpleTagLbl; // @synthesize purpleTagLbl=_purpleTagLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(nonatomic) __weak UILabel *yellowTagLbl; // @synthesize yellowTagLbl=_yellowTagLbl;

@end

