//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UITableView;

@interface AppCenterHotViewController : WKBaseSubViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isHorizontal2;
    NSString *_pagetype;
    UITableView *_hotTableView;
    NSMutableArray *_datasource;
    long long _currentStart;
    NSLayoutConstraint *_bottomValue;
}

- (void).cxx_destruct;
- (void)allInstallAppListArray:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *bottomValue; // @synthesize bottomValue=_bottomValue;
@property(nonatomic) long long currentStart; // @synthesize currentStart=_currentStart;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
- (void)downLoadProgress:(id)arg1;
- (void)filterData:(id)arg1;
- (void)getDataFromSever:(_Bool)arg1;
@property(nonatomic) __weak UITableView *hotTableView; // @synthesize hotTableView=_hotTableView;
@property(nonatomic) _Bool isHorizontal2; // @synthesize isHorizontal2=_isHorizontal2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(copy, nonatomic) NSString *pagetype; // @synthesize pagetype=_pagetype;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)waitDownloadAppListArray:(id)arg1;
- (void)waitInstallAppListArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

