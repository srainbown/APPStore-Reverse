//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class GDTBridge, NSString;

@interface GDTAdWebView : UIWebView
{
    NSString *_threadId;
    GDTBridge *_bridge;
    id <GDTAdLifeEventListener> _adLifeEventListener;
}

- (void).cxx_destruct;
@property(retain) id <GDTAdLifeEventListener> adLifeEventListener; // @synthesize adLifeEventListener=_adLifeEventListener;
@property(retain) GDTBridge *bridge; // @synthesize bridge=_bridge;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onAdEvent:(id)arg1;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;

@end

