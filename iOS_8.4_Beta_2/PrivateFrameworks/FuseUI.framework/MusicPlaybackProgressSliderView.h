/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPlaybackProgressSliderView : UIView <MusicPlaybackProgressScrubberDelegate, MusicPlaybackProgressScrubbing> {
    bool _isTracking;
    NSObject<OS_dispatch_source> *_labelAdjustTimerSource;
    bool _needsUpdateTimeLabelText;
    MusicPlaybackProgressSlider *_playbackProgressSlider;
    struct CGSize { 
        double width; 
        double height; 
    } _previousKnownSize;
    <MusicPlaybackProgressScrubberDelegate> *_scrubberDelegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _textLabelEdgeInsets;
    UILabel *_timePlayedLabel;
    UILabel *_timeRemainingLabel;
}

@property(getter=isAlwaysLive,assign,readwrite) bool alwaysLive;
@property(assign,readonly) long long currentScrubSpeed;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) double effectiveCurrentTime;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) float rate;
@property(assign,readwrite) <MusicPlaybackProgressScrubberDelegate> * scrubberDelegate;
@property(getter=isScrubbingEnabled,assign,readwrite) bool scrubbingEnabled;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textLabelEdgeInsets;
@property(assign,readwrite) double totalDuration;

- (void).cxx_destruct;
- (void)_cancelTimeLabelUpdateTimer;
- (void)_reloadTimeLabelUpdateTimer;
- (void)_setNeedsUpdateTimeLabelText;
- (void)_setTracking:(bool)arg1;
- (bool)_updateTimeLabelsText;
- (void)cancelScrubbing;
- (long long)currentScrubSpeed;
- (void)dealloc;
- (double)effectiveCurrentTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAlwaysLive;
- (bool)isScrubbingEnabled;
- (void)layoutSubviews;
- (void)playbackProgressScrubber:(id)arg1 didChangeCurrentTime:(double)arg2;
- (void)playbackProgressScrubber:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)playbackProgressScrubberTrackingDidBegin:(id)arg1;
- (void)playbackProgressScrubberTrackingDidEnd:(id)arg1;
- (float)rate;
- (id)scrubberDelegate;
- (void)setAlwaysLive:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setRate:(float)arg1;
- (void)setScrubberDelegate:(id)arg1;
- (void)setScrubbingEnabled:(bool)arg1;
- (void)setTextLabelEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTotalDuration:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textLabelEdgeInsets;
- (double)totalDuration;

@end
