//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseIdcPacket.h"

@class NSString;

@interface ScreenShotPacket : WKBaseIdcPacket
{
    int _mCompressQuality;
    int _resizeH;
    int _resizeW;
    int _cmdReqId;
    int _resizeRatio;
    NSString *_jstr;
    NSString *_reqIdStr;
}

- (void).cxx_destruct;
@property(nonatomic) int cmdReqId; // @synthesize cmdReqId=_cmdReqId;
- (id)init;
@property(retain, nonatomic) NSString *jstr; // @synthesize jstr=_jstr;
@property(nonatomic) int mCompressQuality; // @synthesize mCompressQuality=_mCompressQuality;
- (void)param_decode:(id)arg1;
- (void)param_encode:(id)arg1;
- (int)param_length;
- (void)param_preEncode;
@property(retain, nonatomic) NSString *reqIdStr; // @synthesize reqIdStr=_reqIdStr;
@property(nonatomic) int resizeH; // @synthesize resizeH=_resizeH;
@property(nonatomic) int resizeRatio; // @synthesize resizeRatio=_resizeRatio;
@property(nonatomic) int resizeW; // @synthesize resizeW=_resizeW;

@end

