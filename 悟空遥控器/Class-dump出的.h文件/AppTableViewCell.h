//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIPanGestureRecognizer, WKAppInfoModel, WKAppOperationButton, WKMyTvAppInfoModel;

@interface AppTableViewCell : UITableViewCell
{
    id <WKAppTableViewCellDelegate> _delegate;
    UIPanGestureRecognizer *_pan;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_versionLabel;
    WKAppOperationButton *_removeButton;
    WKAppInfoModel *_cellUpdateData;
    WKMyTvAppInfoModel *_cellListData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKMyTvAppInfoModel *cellListData; // @synthesize cellListData=_cellListData;
@property(retain, nonatomic) WKAppInfoModel *cellUpdateData; // @synthesize cellUpdateData=_cellUpdateData;
@property(nonatomic) __weak id <WKAppTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
- (void)removeAction:(id)arg1;
@property(retain, nonatomic) WKAppOperationButton *removeButton; // @synthesize removeButton=_removeButton;
- (void)setRowData:(id)arg1;
- (void)setRowDataForUpdate:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
- (void)updateApp;

@end

