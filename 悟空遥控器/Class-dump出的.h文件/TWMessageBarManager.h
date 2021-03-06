//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TWMessageViewDelegate.h"

@class NSArray, NSMutableArray, NSObject<TWMessageBarStyleSheet>, NSString, TWMessageWindow;

@interface TWMessageBarManager : NSObject <TWMessageViewDelegate>
{
    _Bool _messageVisible;
    unsigned long long _managerSupportedOrientationsMask;
    NSObject<TWMessageBarStyleSheet> *_styleSheet;
    NSMutableArray *_messageBarQueue;
    TWMessageWindow *_messageWindow;
    NSArray *_accessibleElements;
}

+ (double)defaultDuration;
+ (double)durationForMessageType:(long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(retain, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
- (void)generateAccessibleElementWithTitle:(id)arg1 description:(id)arg2;
- (void)hideAll;
- (void)hideAllAnimated:(_Bool)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)init;
- (_Bool)isAccessibilityElement;
@property(nonatomic, getter=isMessageVisible) _Bool messageVisible; // @synthesize messageVisible=_messageVisible;
- (void)itemSelected:(id)arg1;
@property(nonatomic) unsigned long long managerSupportedOrientationsMask; // @synthesize managerSupportedOrientationsMask=_managerSupportedOrientationsMask;
@property(retain, nonatomic) NSMutableArray *messageBarQueue; // @synthesize messageBarQueue=_messageBarQueue;
- (id)messageBarViewController;
@property(retain, nonatomic) TWMessageWindow *messageWindow; // @synthesize messageWindow=_messageWindow;
- (id)messageWindowView;
@property(retain, nonatomic) NSObject<TWMessageBarStyleSheet> *styleSheet; // @synthesize styleSheet=_styleSheet;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 duration:(double)arg4;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 duration:(double)arg4 callback:(CDUnknownBlockType)arg5;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 duration:(double)arg4 statusBarHidden:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 duration:(double)arg4 statusBarHidden:(_Bool)arg5 statusBarStyle:(long long)arg6 callback:(CDUnknownBlockType)arg7;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 duration:(double)arg4 statusBarStyle:(long long)arg5 callback:(CDUnknownBlockType)arg6;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 statusBarHidden:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)showMessageWithTitle:(id)arg1 description:(id)arg2 type:(long long)arg3 statusBarStyle:(long long)arg4 callback:(CDUnknownBlockType)arg5;
- (void)showNextMessage;
- (id)styleSheetForMessageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

