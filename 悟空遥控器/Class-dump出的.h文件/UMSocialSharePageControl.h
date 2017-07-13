//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageControl.h"

#import "UMSocialSharePageScrollViewDelegate.h"

@class NSString;

@interface UMSocialSharePageControl : UIPageControl <UMSocialSharePageScrollViewDelegate>
{
    id <UMSocialSharePageControlDelegate> _sharePageControlDelegate;
}

- (void).cxx_destruct;
- (struct CGSize)getSharePageControlSize;
- (void)handleSocialSharePageScrollView:(id)arg1 withNumberOfPages:(long long)arg2 withCurrentPage:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <UMSocialSharePageControlDelegate> sharePageControlDelegate; // @synthesize sharePageControlDelegate=_sharePageControlDelegate;
- (void)tapDotAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

