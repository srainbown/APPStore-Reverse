//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMSocialWarterMarkUtility : NSObject
{
}

+ (id)doGenerateImageWithWarterMarkConfig:(id)arg1 withImageWarterMarkConfig:(id)arg2 withStringWarterMarkConfig:(id)arg3 withSourceImage:(id)arg4;
+ (id)generateImageWithWarterMarkConfig:(id)arg1 withImageWarterMarkConfig:(id)arg2 withStringWarterMarkConfig:(id)arg3 withSourceImage:(id)arg4;
+ (id)generateImageWithWarterMarkConfig:(id)arg1 withSourceImage:(id)arg2;
+ (struct CGSize)getImageSizewithImageWarterMarkConfig:(id)arg1 withTargetSize:(struct CGSize)arg2;
+ (struct CGRect)getImageWarterMarkRectWithTargetSize:(struct CGSize)arg1 withImageWarterMarkSize:(struct CGSize)arg2 withWarterMarkPositon:(long long)arg3 withPaddingToHorizontalParentBorder:(double)arg4 withPaddingToVerticalParentBorder:(double)arg5;
+ (struct CGSize)getStringSizewithStringWarterMarkConfig:(id)arg1;
+ (struct CGRect)getStringWarterMarkRectWithTargetSize:(struct CGSize)arg1 withStringWarterMarkSize:(struct CGSize)arg2 withWarterMarkPositon:(long long)arg3 withPaddingToHorizontalParentBorder:(double)arg4 withPaddingToVerticalParentBorder:(double)arg5;
+ (void)layoutStringWarterMarkAndImageWithWarterMarkWithWarterMarkConfig:(id)arg1 withImageWarterMarkConfig:(id)arg2 withStringWarterMarkConfig:(id)arg3 withTargetSize:(struct CGSize)arg4 withContext:(struct CGContext *)arg5;

@end

