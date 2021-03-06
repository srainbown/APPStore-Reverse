//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WKHDLiveSubModel : NSObject
{
    NSString *_from;
    NSString *_wkid;
    NSString *_intent;
    NSString *_wkname;
    NSString *_wkicon;
    NSString *_dsj;
    NSString *_dsm;
    NSString *_vst;
    NSString *_show;
    NSString *_showgroup;
    NSString *_subtitletext;
}

- (void).cxx_destruct;
- (void)checkresponse:(id)arg1;
@property(retain, nonatomic) NSString *dsj; // @synthesize dsj=_dsj;
@property(retain, nonatomic) NSString *dsm; // @synthesize dsm=_dsm;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *intent; // @synthesize intent=_intent;
- (void)playHDLiveChannel;
- (void)playHDLiveOntvAndAddToHistory;
- (void)playHDLiveOntvAndAddToHistory:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *show; // @synthesize show=_show;
@property(retain, nonatomic) NSString *showgroup; // @synthesize showgroup=_showgroup;
@property(retain, nonatomic) NSString *subtitletext; // @synthesize subtitletext=_subtitletext;
@property(retain, nonatomic) NSString *vst; // @synthesize vst=_vst;
@property(retain, nonatomic) NSString *wkicon; // @synthesize wkicon=_wkicon;
@property(retain, nonatomic) NSString *wkid; // @synthesize wkid=_wkid;
@property(retain, nonatomic) NSString *wkname; // @synthesize wkname=_wkname;

@end

