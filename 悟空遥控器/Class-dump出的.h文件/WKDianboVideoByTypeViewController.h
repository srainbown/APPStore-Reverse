//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

@class NSString, WKCategoryVideoView, WKNoResultView;

@interface WKDianboVideoByTypeViewController : WKBaseSubViewController
{
    NSString *_type;
    WKCategoryVideoView *_categoryVw;
    WKNoResultView *_noResultView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKCategoryVideoView *categoryVw; // @synthesize categoryVw=_categoryVw;
@property(retain, nonatomic) WKNoResultView *noResultView; // @synthesize noResultView=_noResultView;
- (void)requestData;
- (void)setNavTitle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)viewDidLoad;

@end

