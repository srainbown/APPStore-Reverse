//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UIButton, UILabel, UIScrollView, WKVideoDetailModel;

@interface WKEpisodeTableViewCell : UITableViewCell
{
    unsigned long long _currentTag;
    WKVideoDetailModel *_videoDetailModel;
    id <WKEpisodeTableViewCellDelegate> _delegate;
    UILabel *_episodeLabel;
    UIButton *_allEpisodeButton;
    UIScrollView *_episodeScrollView;
    UILabel *_allEpisodeLbl;
    NSMutableArray *_episodeBtnArr;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *allEpisodeButton; // @synthesize allEpisodeButton=_allEpisodeButton;
- (void)allEpisodeButtonClicked:(id)arg1;
@property(nonatomic) __weak UILabel *allEpisodeLbl; // @synthesize allEpisodeLbl=_allEpisodeLbl;
- (void)awakeFromNib;
- (void)buildEpisodeButtons:(id)arg1;
@property(nonatomic) __weak id <WKEpisodeTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *episodeBtnArr; // @synthesize episodeBtnArr=_episodeBtnArr;
- (void)episodeButtonClicked:(id)arg1;
@property(nonatomic) __weak UILabel *episodeLabel; // @synthesize episodeLabel=_episodeLabel;
@property(nonatomic) __weak UIScrollView *episodeScrollView; // @synthesize episodeScrollView=_episodeScrollView;
- (void)scrollToVisibleSelectedIndex:(long long)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateButtonState;

@end

