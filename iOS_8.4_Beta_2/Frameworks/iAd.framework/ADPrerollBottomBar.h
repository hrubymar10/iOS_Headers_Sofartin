/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollBottomBar : UIView {
    double _accumulatedViewingTime;
    ADPrerollButton *_actionButton;
    <ADPrerollBottomBarDelegate> *_delegate;
    bool _isFullscreen;
    double _lastViewingStartTime;
    bool _layoutForExpandedSize;
    UIImage *_pauseImage;
    UIImage *_playImage;
    ADPrerollButton *_playPauseButton;
    UILabel *_shortSkipLabel;
    NSTimer *_skipAccumulationTimer;
    ADPrerollButton *_skipButton;
    bool _skipButtonCountingDown;
    double _skipDuration;
    UILabel *_skipLabel;
    ADVolumeSlider *_volumeSlider;
}

@property(assign,readwrite) double accumulatedViewingTime;
@property(assign,retain) ADPrerollButton * actionButton;
@property(assign,readwrite) <ADPrerollBottomBarDelegate> * delegate;
@property(assign,readwrite) bool isFullscreen;
@property(assign,readwrite) double lastViewingStartTime;
@property(assign,readwrite) bool layoutForExpandedSize;
@property(assign,retain) UIImage * pauseImage;
@property(assign,retain) UIImage * playImage;
@property(assign,retain) ADPrerollButton * playPauseButton;
@property(assign,retain) UILabel * shortSkipLabel;
@property(assign,retain) NSTimer * skipAccumulationTimer;
@property(assign,retain) ADPrerollButton * skipButton;
@property(assign,readwrite) bool skipButtonCountingDown;
@property(assign,readwrite) double skipDuration;
@property(assign,retain) UILabel * skipLabel;
@property(assign,retain) ADVolumeSlider * volumeSlider;

- (void)_accumulateViewingTime;
- (void)_actionButtonTapped:(id)arg1;
- (void)_pauseButtonTapped:(id)arg1;
- (void)_pauseCountdown;
- (void)_playButtonTapped:(id)arg1;
- (void)_resumeCountdown;
- (void)_skipButtonTapped:(id)arg1;
- (void)_updateSkipLabel;
- (double)accumulatedViewingTime;
- (id)actionButton;
- (void)beginCountdownWithDuration:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (void)displayAsPaused:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFullscreen;
- (double)lastViewingStartTime;
- (bool)layoutForExpandedSize;
- (void)layoutSubviews;
- (id)pauseImage;
- (id)playImage;
- (id)playPauseButton;
- (void)setAccumulatedViewingTime:(double)arg1;
- (void)setActionButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFullscreen:(bool)arg1;
- (void)setLastViewingStartTime:(double)arg1;
- (void)setLayoutForExpandedSize:(bool)arg1;
- (void)setPauseImage:(id)arg1;
- (void)setPlayImage:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setShortSkipLabel:(id)arg1;
- (void)setSkipAccumulationTimer:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setSkipButtonCountingDown:(bool)arg1;
- (void)setSkipDuration:(double)arg1;
- (void)setSkipLabel:(id)arg1;
- (void)setVolumeSlider:(id)arg1;
- (id)shortSkipLabel;
- (id)skipAccumulationTimer;
- (id)skipButton;
- (bool)skipButtonCountingDown;
- (double)skipDuration;
- (id)skipLabel;
- (id)volumeSlider;

@end
