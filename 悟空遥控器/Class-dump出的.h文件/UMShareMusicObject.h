//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMShareObject.h"

@class NSString;

@interface UMShareMusicObject : UMShareObject
{
    NSString *_musicUrl;
    NSString *_musicLowBandUrl;
    NSString *_musicDataUrl;
    NSString *_musicLowBandDataUrl;
}

+ (id)shareObjectWithTitle:(id)arg1 descr:(id)arg2 thumImage:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *musicDataUrl; // @synthesize musicDataUrl=_musicDataUrl;
@property(retain, nonatomic) NSString *musicLowBandDataUrl; // @synthesize musicLowBandDataUrl=_musicLowBandDataUrl;
@property(retain, nonatomic) NSString *musicLowBandUrl; // @synthesize musicLowBandUrl=_musicLowBandUrl;
@property(retain, nonatomic) NSString *musicUrl; // @synthesize musicUrl=_musicUrl;

@end

