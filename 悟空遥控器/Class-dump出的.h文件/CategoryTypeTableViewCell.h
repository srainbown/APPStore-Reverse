//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView;

@interface CategoryTypeTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_typeCollectionView;
    NSArray *_dataArray;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDataModel:(id)arg1;
@property(retain, nonatomic) UICollectionView *typeCollectionView; // @synthesize typeCollectionView=_typeCollectionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

