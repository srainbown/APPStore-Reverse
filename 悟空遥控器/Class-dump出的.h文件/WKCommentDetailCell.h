//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface WKCommentDetailCell : UITableViewCell
{
    CDUnknownBlockType _pressedCommentBtnBlock;
    CDUnknownBlockType _didPressedDianZanBtnBlock;
    UIImageView *_headImagV;
    UILabel *_nickNameLbl;
    UILabel *_createTimeLbl;
    UIButton *_dianZanBtn;
    UIButton *_commentBtn;
    UILabel *_commentLbl;
    UIButton *_hotBtn;
}

+ (id)commentDetailCellWith:(id)arg1;
- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(nonatomic) __weak UILabel *commentLbl; // @synthesize commentLbl=_commentLbl;
@property(nonatomic) __weak UILabel *createTimeLbl; // @synthesize createTimeLbl=_createTimeLbl;
@property(nonatomic) __weak UIButton *dianZanBtn; // @synthesize dianZanBtn=_dianZanBtn;
- (void)didPressedComment:(id)arg1;
- (void)didPressedDianZan:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didPressedDianZanBtnBlock; // @synthesize didPressedDianZanBtnBlock=_didPressedDianZanBtnBlock;
@property(nonatomic) __weak UIImageView *headImagV; // @synthesize headImagV=_headImagV;
@property(nonatomic) __weak UIButton *hotBtn; // @synthesize hotBtn=_hotBtn;
@property(nonatomic) __weak UILabel *nickNameLbl; // @synthesize nickNameLbl=_nickNameLbl;
@property(copy, nonatomic) CDUnknownBlockType pressedCommentBtnBlock; // @synthesize pressedCommentBtnBlock=_pressedCommentBtnBlock;
- (void)setContentData:(id)arg1;

@end

