//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView, WKGlobalSearchRecommendTableModel;

@interface WKGlobalSearchKeyWordTableViewCell : UITableViewCell <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_hotAppKeyWordTableView;
    UITableView *_hotVideoKeyWordTableView;
    WKGlobalSearchRecommendTableModel *_recommendModel;
    id <WKGlobalSearchKeyWordTableViewCellDelegate> _cellDelegate;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak id <WKGlobalSearchKeyWordTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)initHotAppKeyWordTableView;
- (void)initHotVideoKeyWordTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setRecommendTableViewDataSources:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

