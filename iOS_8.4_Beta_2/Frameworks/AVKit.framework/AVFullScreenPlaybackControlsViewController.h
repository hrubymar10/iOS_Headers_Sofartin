/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVFullScreenPlaybackControlsViewController : AVPlaybackControlsViewController <MPVolumeControllerDelegate> {
    NSTimer *_beginScanningBackwardTimer;
    NSTimer *_beginScanningForwardTimer;
    NSLayoutConstraint *_bottomControlsContainerViewHeightLayoutConstraint;
    unsigned int _bottomControlsSingleRowLayoutPossible;
    unsigned int _controlsVisibilityHasBeenManagedBefore;
    UIButton *_doneButton;
    UILabel *_elapsedTimeLabel;
    NSString *_elapsedTimeLabelText;
    UIButton *_fullScreenButton;
    UIButton *_gotoEndOfSeekableRangesButton;
    unsigned int _gotoEndOfSeekableRangesButtonEnabled;
    unsigned int _isScanningBackward;
    unsigned int _isScanningForward;
    NSMutableArray *_layoutConstraints;
    UILabel *_liveStreamingLabel;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UIView *_lowerControlsCenterSubContainerView;
    UIView *_lowerControlsLeftSubContainerView;
    UIView *_lowerControlsRightSubContainerView;
    UIButton *_mediaSelectionButton;
    UIButton *_playPauseButton;
    unsigned int _playPauseButtonEnabled;
    unsigned int _playing;
    UILabel *_remainingTimeLabel;
    NSString *_remainingTimeLabelText;
    UIButton *_scaleButton;
    long long _scaleButtonType;
    UIButton *_scanBackwardButton;
    unsigned int _scanBackwardButtonEnabled;
    UIButton *_scanForwardButton;
    unsigned int _scanForwardButtonEnabled;
    UILabel *_scrubInstructionsSubtitleLabel;
    UILabel *_scrubInstructionsTitleLabel;
    AVScrubber *_scrubber;
    unsigned int _scrubberEnabled;
    NSArray *_scrubberLoadedTimeRanges;
    float _scrubberMaximumValue;
    float _scrubberMinimumValue;
    float _scrubberValue;
    unsigned int _showsDoneButton;
    unsigned int _showsExitFullScreenButton;
    unsigned int _showsLoadingIndicator;
    unsigned int _showsMediaSelectionButton;
    unsigned int _showsScaleButton;
    unsigned int _showsScrubInstructions;
    unsigned int _showsStreamingControls;
    unsigned int _showsVolumeSlider;
    UIButton *_skipBackwardThirtySecondsButton;
    unsigned int _skipBackwardThirtySecondsButtonEnabled;
    NSLayoutConstraint *_topControlsContainerViewHeightLayoutConstraint;
    UIView *_upperControlsSubContainerView;
    unsigned int _userDidTapScanButton;
    MPVolumeController *_volumeController;
    MPVolumeSlider *_volumeSlider;
    float _volumeSliderValue;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fireBeginScanningBackwardTimer:(id)arg1;
- (void)_fireBeginScanningForwardTimer:(id)arg1;
- (void)_gotoEndOfSeekableRangesButtonTouchDown:(id)arg1;
- (void)_gotoEndOfSeekableRangesButtonTouchUpInside:(id)arg1;
- (void)_gotoEndOfSeekableRangesButtonTouchUpOutside:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_manageControlsVisibility;
- (void)_scanBackwardButtonTouchDown:(id)arg1;
- (void)_scanBackwardButtonTouchUpInside:(id)arg1;
- (void)_scanBackwardButtonTouchUpOutside:(id)arg1;
- (void)_scanForwardButtonTouchDown:(id)arg1;
- (void)_scanForwardButtonTouchUpInside:(id)arg1;
- (void)_scanForwardButtonTouchUpOutside:(id)arg1;
- (void)_scrubberBeginTracking:(id)arg1;
- (void)_scrubberEndTracking:(id)arg1;
- (void)_showScrubInstructions;
- (void)_skipBackwardThirtySecondsButtonTouchDown:(id)arg1;
- (void)_skipBackwardThirtySecondsButtonTouchUpInside:(id)arg1;
- (void)_skipBackwardThirtySecondsButtonTouchUpOutside:(id)arg1;
- (void)_updateScaleButton;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isGotoEndOfSeekableRangesButtonEnabled;
- (bool)isPlayPauseButtonEnabled;
- (bool)isPlaying;
- (bool)isScanBackwardButtonEnabled;
- (bool)isScanForwardButtonEnabled;
- (bool)isScrubberEnabled;
- (bool)isSkipBackwardThirtySecondsButtonEnabled;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)prefersStatusBarHidden;
- (long long)scaleButtonType;
- (id)scrubberLoadedTimeRanges;
- (double)scrubberWidth;
- (void)setGotoEndOfSeekableRangesButtonEnabled:(bool)arg1;
- (void)setPlayPauseButtonEnabled:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setScaleButtonType:(long long)arg1;
- (void)setScanBackwardButtonEnabled:(bool)arg1;
- (void)setScanForwardButtonEnabled:(bool)arg1;
- (void)setScrubberEnabled:(bool)arg1;
- (void)setScrubberLoadedTimeRanges:(id)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsExitFullScreenButton:(bool)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setShowsMediaSelectionButton:(bool)arg1;
- (void)setShowsScaleButton:(bool)arg1;
- (void)setShowsStreamingControls:(bool)arg1;
- (void)setShowsVolumeSlider:(bool)arg1;
- (void)setSkipBackwardThirtySecondsButtonEnabled:(bool)arg1;
- (bool)showsDoneButton;
- (bool)showsExitFullScreenButton;
- (bool)showsLoadingIndicator;
- (bool)showsMediaSelectionButton;
- (bool)showsScaleButton;
- (bool)showsStreamingControls;
- (bool)showsVolumeSlider;
- (void)updateElapsedTimeLabel:(id)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)updateScrubberValue:(float)arg1;
- (void)updateViewConstraints;
- (void)viewWillLayoutSubviews;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;

@end