//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WKGlobalSearchRecommendModel;

@interface WKGlobalSearchRecommendTableModel : NSObject
{
    NSArray *_historylArray;
    WKGlobalSearchRecommendModel *_appHotKeyModel;
    WKGlobalSearchRecommendModel *_videoHotKeyModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKGlobalSearchRecommendModel *appHotKeyModel; // @synthesize appHotKeyModel=_appHotKeyModel;
@property(retain, nonatomic) NSArray *historylArray; // @synthesize historylArray=_historylArray;
@property(retain, nonatomic) WKGlobalSearchRecommendModel *videoHotKeyModel; // @synthesize videoHotKeyModel=_videoHotKeyModel;

@end

