//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage, WKHotVideoRouter;

@interface WKVideoItemModel : NSObject
{
    _Bool _isAd;
    int _gradeLength;
    int _updateLength;
    NSString *_cover;
    NSString *_corner;
    NSString *_webUrl;
    NSString *_definition;
    NSString *_df_icon;
    NSString *_from;
    NSString *_grade;
    NSString *_icon;
    NSString *_intent;
    NSString *_name;
    NSString *_subhead;
    NSString *_updateto;
    NSString *_wkid;
    NSString *_updateInfo;
    UIImage *_presetImage;
    NSString *_subName;
    NSString *_dot;
    NSString *_mark;
    NSArray *_adInfo;
    WKHotVideoRouter *_router;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) NSString *corner; // @synthesize corner=_corner;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(retain, nonatomic) NSString *df_icon; // @synthesize df_icon=_df_icon;
@property(copy, nonatomic) NSString *dot; // @synthesize dot=_dot;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(nonatomic) int gradeLength; // @synthesize gradeLength=_gradeLength;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *intent; // @synthesize intent=_intent;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *presetImage; // @synthesize presetImage=_presetImage;
@property(retain, nonatomic) WKHotVideoRouter *router; // @synthesize router=_router;
@property(copy, nonatomic) NSString *subName; // @synthesize subName=_subName;
@property(retain, nonatomic) NSString *subhead; // @synthesize subhead=_subhead;
@property(retain, nonatomic) NSString *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(nonatomic) int updateLength; // @synthesize updateLength=_updateLength;
@property(retain, nonatomic) NSString *updateto; // @synthesize updateto=_updateto;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *wkid; // @synthesize wkid=_wkid;
- (int)textLength;
- (void)videoAction;

@end

