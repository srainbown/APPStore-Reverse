//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface BoutiqueRecommendTableViewCell : UITableViewCell <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_recommendTableView;
    NSArray *_tableViewDatasource;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cellSetDatasource:(id)arg1;
- (void)dealloc;
- (void)downLoadProgress:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) __weak UITableView *recommendTableView; // @synthesize recommendTableView=_recommendTableView;
@property(retain, nonatomic) NSArray *tableViewDatasource; // @synthesize tableViewDatasource=_tableViewDatasource;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

