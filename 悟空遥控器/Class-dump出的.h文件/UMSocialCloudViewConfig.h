//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton, UIColor;

@interface UMSocialCloudViewConfig : NSObject
{
    NSString *_authViewTitle;
    UIColor *_authViewTitleColor;
    UIColor *_authViewNavBarColor;
    UIButton *_authViewCloseButton;
    NSString *_editViewTitle;
    UIColor *_editViewTitleColor;
    UIColor *_editViewNavBarColor;
    UIButton *_editViewCloseButton;
    UIButton *_editViewShareButton;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *authViewCloseButton; // @synthesize authViewCloseButton=_authViewCloseButton;
@property(retain, nonatomic) UIColor *authViewNavBarColor; // @synthesize authViewNavBarColor=_authViewNavBarColor;
@property(retain, nonatomic) NSString *authViewTitle; // @synthesize authViewTitle=_authViewTitle;
@property(retain, nonatomic) UIColor *authViewTitleColor; // @synthesize authViewTitleColor=_authViewTitleColor;
@property(retain, nonatomic) UIButton *editViewCloseButton; // @synthesize editViewCloseButton=_editViewCloseButton;
@property(retain, nonatomic) UIColor *editViewNavBarColor; // @synthesize editViewNavBarColor=_editViewNavBarColor;
@property(retain, nonatomic) UIButton *editViewShareButton; // @synthesize editViewShareButton=_editViewShareButton;
@property(retain, nonatomic) NSString *editViewTitle; // @synthesize editViewTitle=_editViewTitle;
@property(retain, nonatomic) UIColor *editViewTitleColor; // @synthesize editViewTitleColor=_editViewTitleColor;

@end

