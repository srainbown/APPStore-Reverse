//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, WKHotVideoSubDataModel;

@interface GlobalSearchCollectionViewCell : UICollectionViewCell
{
    WKHotVideoSubDataModel *_model;
    UIImageView *_searchImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKHotVideoSubDataModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
- (void)searchViewTapped:(id)arg1;
- (void)setVideoItemModelSources:(id)arg1;

@end

