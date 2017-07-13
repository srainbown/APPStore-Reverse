//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UMSocialShareEmailObjectConfig, UMSocialShareEmotionObjectConfig, UMSocialShareExtendObjectConfig, UMSocialShareFileObjectConfig, UMSocialShareImageObjectConfig, UMSocialShareMusicObjectConfig, UMSocialShareSmsObjectConfig, UMSocialShareTextObjectConfig, UMSocialShareVideoObjectConfig, UMSocialShareWebpageObjectConfig;

@interface UMSocialHandlerConfig : NSObject
{
    UMSocialShareTextObjectConfig *_shareTextObjectConfig;
    UMSocialShareImageObjectConfig *_shareImageObjectConfig;
    UMSocialShareMusicObjectConfig *_shareMusicObjectConfig;
    UMSocialShareVideoObjectConfig *_shareVideoObjectConfig;
    UMSocialShareWebpageObjectConfig *_shareWebpageObjectConfig;
    UMSocialShareEmailObjectConfig *_shareEmailObjectConfig;
    UMSocialShareSmsObjectConfig *_shareSmsObjectConfig;
    UMSocialShareEmotionObjectConfig *_shareEmotionObjectConfig;
    UMSocialShareFileObjectConfig *_shareFileObjectConfig;
    UMSocialShareExtendObjectConfig *_shareExtendObjectConfig;
}

+ (_Bool)checkData:(id)arg1 withDataLimit:(unsigned long long)arg2;
+ (_Bool)checkText:(id)arg1 withTextLimit:(unsigned long long)arg2;
+ (id)compressImage:(id)arg1 toLength:(double)arg2;
+ (id)compressImageData:(id)arg1 toLength:(double)arg2;
+ (id)truncationText:(id)arg1 withTextLimit:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) UMSocialShareEmailObjectConfig *shareEmailObjectConfig; // @synthesize shareEmailObjectConfig=_shareEmailObjectConfig;
@property(retain, nonatomic) UMSocialShareEmotionObjectConfig *shareEmotionObjectConfig; // @synthesize shareEmotionObjectConfig=_shareEmotionObjectConfig;
@property(retain, nonatomic) UMSocialShareExtendObjectConfig *shareExtendObjectConfig; // @synthesize shareExtendObjectConfig=_shareExtendObjectConfig;
@property(retain, nonatomic) UMSocialShareFileObjectConfig *shareFileObjectConfig; // @synthesize shareFileObjectConfig=_shareFileObjectConfig;
@property(retain, nonatomic) UMSocialShareImageObjectConfig *shareImageObjectConfig; // @synthesize shareImageObjectConfig=_shareImageObjectConfig;
@property(retain, nonatomic) UMSocialShareMusicObjectConfig *shareMusicObjectConfig; // @synthesize shareMusicObjectConfig=_shareMusicObjectConfig;
@property(retain, nonatomic) UMSocialShareSmsObjectConfig *shareSmsObjectConfig; // @synthesize shareSmsObjectConfig=_shareSmsObjectConfig;
@property(retain, nonatomic) UMSocialShareTextObjectConfig *shareTextObjectConfig; // @synthesize shareTextObjectConfig=_shareTextObjectConfig;
@property(retain, nonatomic) UMSocialShareVideoObjectConfig *shareVideoObjectConfig; // @synthesize shareVideoObjectConfig=_shareVideoObjectConfig;
@property(retain, nonatomic) UMSocialShareWebpageObjectConfig *shareWebpageObjectConfig; // @synthesize shareWebpageObjectConfig=_shareWebpageObjectConfig;

@end

