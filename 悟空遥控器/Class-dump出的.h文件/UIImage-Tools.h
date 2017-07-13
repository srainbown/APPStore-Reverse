//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (Tools)
+ (id)blendImageNamed:(id)arg1;
+ (id)blendImageNamed:(id)arg1 tintColor:(id)arg2;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)applyDarkEffect;
- (id)applyExtraLightEffect;
- (id)applyLightEffect;
- (id)applyTintEffectWithColor:(id)arg1;
- (id)changeBrightToDarkImage;
- (_Bool)getRGBAsFromImage:(id)arg1 atX:(int)arg2 andY:(int)arg3 count:(int)arg4;
- (id)imageResizeTo:(struct CGSize)arg1;
- (id)imageWithGradientTintColor:(id)arg1;
- (id)imageWithTintColor:(id)arg1;
- (id)imageWithTintColor:(id)arg1 blendMode:(int)arg2;
- (_Bool)isNeedChangeImage;
- (id)partialImageWithPercentage:(float)arg1 vertical:(_Bool)arg2 grayscaleRest:(_Bool)arg3;
@end

