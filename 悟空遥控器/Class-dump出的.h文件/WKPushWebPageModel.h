//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WKPushWebPageModel : NSObject
{
    NSString *_name;
    NSString *_web;
    NSString *_image;
    NSString *_re;
    NSString *_js;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *js; // @synthesize js=_js;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)pushWebPageView;
@property(copy, nonatomic) NSString *re; // @synthesize re=_re;
@property(copy, nonatomic) NSString *web; // @synthesize web=_web;

@end

