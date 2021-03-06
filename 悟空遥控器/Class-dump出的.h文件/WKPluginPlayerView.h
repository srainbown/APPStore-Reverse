//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WKEpisodeViewDelegate.h"

@class LeonProgressBar, NSString, NSTimer, UIButton, UIImage, UILabel, WKEpisodeViewController, WKPlayControlEpisodeModel, WKPlayControlModel, WKResolutionActionSheet;

@interface WKPluginPlayerView : UIView <WKEpisodeViewDelegate>
{
    WKPlayControlModel *_playControlModel;
    _Bool _isIgnoreHeartbeat;
    WKEpisodeViewController *episodeCtr;
    NSTimer *durationTimer;
    WKResolutionActionSheet *definitionSheet;
    id <WKPluginPlayerViewDelegate> _delegate;
    LeonProgressBar *_progressBar;
    UILabel *_videoTitleLabel;
    UILabel *_playTimeLabel;
    UILabel *_totalTimeLabel;
    UIButton *_definitionButton;
    UIButton *_episodeButton;
    WKPlayControlEpisodeModel *_playControlEpisodeModel;
    UIButton *_forwardBtn;
    UIButton *_nextBtn;
    UIButton *_startPauseBtn;
    long long _playStatus;
    UIImage *_startNormalImage;
    UIImage *_pauseNormalImage;
    UIImage *_forwardNormalImage;
    UIImage *_nextNormalImage;
    UIImage *_episodeNormalImage;
    UIImage *_definitionNormalImage;
    UIImage *_episodeDisableImage;
    UIImage *_definitionDisableImage;
}

+ (id)defaultPlayerView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)buildImage;
- (void)buildUI;
- (void)changeSeekTimeLabel:(id)arg1;
@property(nonatomic) __weak UIButton *definitionButton; // @synthesize definitionButton=_definitionButton;
- (void)definitionButtonClick:(id)arg1;
@property(retain, nonatomic) UIImage *definitionDisableImage; // @synthesize definitionDisableImage=_definitionDisableImage;
@property(retain, nonatomic) UIImage *definitionNormalImage; // @synthesize definitionNormalImage=_definitionNormalImage;
@property(retain, nonatomic) WKResolutionActionSheet *definitionSheet; // @synthesize definitionSheet;
@property(nonatomic) __weak id <WKPluginPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)durationAnimation;
@property(retain, nonatomic) NSTimer *durationTimer; // @synthesize durationTimer;
@property(nonatomic) __weak UIButton *episodeButton; // @synthesize episodeButton=_episodeButton;
- (void)episodeButtonClick:(id)arg1;
@property(retain, nonatomic) WKEpisodeViewController *episodeCtr; // @synthesize episodeCtr;
@property(retain, nonatomic) UIImage *episodeDisableImage; // @synthesize episodeDisableImage=_episodeDisableImage;
@property(retain, nonatomic) UIImage *episodeNormalImage; // @synthesize episodeNormalImage=_episodeNormalImage;
- (void)episodeViewDelegateWithIndex:(unsigned long long)arg1;
@property(nonatomic) __weak UIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
- (void)forwardBtnClicked:(id)arg1;
@property(retain, nonatomic) UIImage *forwardNormalImage; // @synthesize forwardNormalImage=_forwardNormalImage;
- (void)initProgressBar;
@property(nonatomic) _Bool isIgnoreHeartbeat; // @synthesize isIgnoreHeartbeat=_isIgnoreHeartbeat;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
- (void)nextBtnClicked:(id)arg1;
@property(retain, nonatomic) UIImage *nextNormalImage; // @synthesize nextNormalImage=_nextNormalImage;
- (void)onRecvVideoControlStop:(id)arg1;
- (void)onRecvVideoControlSync:(id)arg1;
@property(retain, nonatomic) UIImage *pauseNormalImage; // @synthesize pauseNormalImage=_pauseNormalImage;
@property(retain, nonatomic) WKPlayControlEpisodeModel *playControlEpisodeModel; // @synthesize playControlEpisodeModel=_playControlEpisodeModel;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) __weak UILabel *playTimeLabel; // @synthesize playTimeLabel=_playTimeLabel;
@property(nonatomic) __weak LeonProgressBar *progressBar; // @synthesize progressBar=_progressBar;
- (void)refreshPauseBtn;
- (void)registerNotifaction;
- (void)resetIgnoreHeartbeat;
- (void)resetPlayControlUIStatus;
- (void)seekToTime:(id)arg1 byDragRemain:(_Bool)arg2;
- (void)setDefintionButtonTitle:(unsigned long long)arg1;
- (void)setDeinitionAndEpisodeButtonShow;
- (void)setEpisodeData:(id)arg1;
- (void)setPlayerProgress:(int)arg1;
@property(retain, nonatomic) UIImage *startNormalImage; // @synthesize startNormalImage=_startNormalImage;
@property(nonatomic) __weak UIButton *startPauseBtn; // @synthesize startPauseBtn=_startPauseBtn;
@property(nonatomic) __weak UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(nonatomic) __weak UILabel *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
- (void)startPauseBtnClicked:(id)arg1;
- (void)syncPlayControlStatus:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

