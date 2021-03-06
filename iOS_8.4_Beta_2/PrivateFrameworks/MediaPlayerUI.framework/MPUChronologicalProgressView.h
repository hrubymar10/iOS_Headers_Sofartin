/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUChronologicalProgressView : UIView <MPDetailScrubControllerDelegate, MPUContentSizeCategoryChanging> {
    bool _alwaysLive;
    double _currentTime;
    UILabel *_currentTimeLabel;
    <MPUChronologicalProgressViewDelegate> *_delegate;
    MPUNowPlayingIndicatorView *_indicatorView;
    NSString *_lastCurrentTimeString;
    double _lastDisplayedDuration;
    NSString *_lastRemainingTimeString;
    UILabel *_remainingTimeLabel;
    MPDetailScrubController *_scrubController;
    bool _scrubbingEnabled;
    bool _showIsPlaying;
    bool _showTimeLabels;
    UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding> *_slider;
    long long _style;
    long long _substyle;
    double _totalDuration;
}

@property(getter=isAlwaysLive,assign,readwrite) bool alwaysLive;
@property(assign,readwrite) double currentTime;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MPUChronologicalProgressViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool scrubbingEnabled;
@property(assign,readwrite) bool showIsPlaying;
@property(assign,readwrite) bool showTimeLabels;
@property(assign,readonly) long long style;
@property(assign,readwrite) long long substyle;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) double totalDuration;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackRect;

- (void).cxx_destruct;
- (id)_createIndicatorViewWithStyle:(long long)arg1;
- (id)_createTimeLabelWithStyle:(long long)arg1;
- (void)_internalSetCurrentTime:(double)arg1;
- (float)_sliderNormalizedValueForTime:(double)arg1;
- (id)_stringForTime:(double)arg1 isTimeRemaining:(bool)arg2;
- (id)_thumbImage;
- (id)_timeLabelFont;
- (id)_trackImage;
- (void)_updateTimeLabels;
- (double)currentTime;
- (id)delegate;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidBeginScrubbing:(id)arg1;
- (void)detailScrubControllerDidEndScrubbing:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isAlwaysLive;
- (void)layoutSubviews;
- (bool)scrubbingEnabled;
- (void)setAlwaysLive:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScrubbingEnabled:(bool)arg1;
- (void)setShowIsPlaying:(bool)arg1;
- (void)setShowTimeLabels:(bool)arg1;
- (void)setSubstyle:(long long)arg1;
- (void)setTotalDuration:(double)arg1;
- (bool)showIsPlaying;
- (bool)showTimeLabels;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (long long)substyle;
- (double)totalDuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRect;
- (void)updateTextForContentSizeCategory:(id)arg1;

@end
