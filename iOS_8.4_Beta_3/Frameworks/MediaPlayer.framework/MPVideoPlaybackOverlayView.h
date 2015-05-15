/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoPlaybackOverlayView : UIView <MPDetailSliderDelegate, MPVideoOverlay, UIPopoverPresentationControllerDelegate> {
    bool _allowsExitFromFullscreen;
    UIButton *_audioAndSubtitlesButton;
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;
    bool _automaticallyHandleTransportControls;
    _UIBackdropView *_bottomBarBackdropView;
    UIView *_bottomBarBottomLayoutGuide;
    NSLayoutConstraint *_bottomBarHeightConstraint;
    UIView *_bottomBarItemsGuide;
    UIView *_bottomBarTopLayoutGuide;
    NSArray *_bottomItems;
    NSArray *_bottomItemsConstraints;
    NSLayoutConstraint *_bottomItemsRightConstraint;
    <MPVideoOverlayDelegate> *_delegate;
    UIButton *_doneButton;
    MPKnockoutButton *_fullscreenButton;
    bool _ignoreTouchUp;
    MPAVItem *_item;
    MPKnockoutButton *_leftButton;
    UIActivityIndicatorView *_loadingIndicator;
    UILabel *_loadingLabel;
    MPKnockoutButton *_playPauseButton;
    MPAVController *_player;
    MPKnockoutButton *_rightButton;
    UIButton *_scaleButton;
    UILabel *_scrubInstructions1;
    UILabel *_scrubInstructions2;
    MPDetailSlider *_scrubber;
    int _seekDirection;
    bool _shouldResumePlayback;
    UIStatusBar *_statusBar;
    long long _style;
    bool _ticking;
    _UIBackdropView *_topBarBackdropView;
    NSLayoutConstraint *_topBarBottomConstraint;
    UIView *_topBarItemsGuide;
    UIView *_topBarLayoutGuide;
    NSArray *_topItems;
    NSArray *_topItemsConstraints;
    NSLayoutConstraint *_topItemsTrailingConstraint;
    MPVolumeSlider *_volumeSlider;
    NSLayoutConstraint *_volumeSliderRightConstraint;
    NSLayoutConstraint *_volumeSliderWidthConstraint;
    bool allowsWirelessPlayback;
    unsigned long long desiredParts;
    unsigned long long disabledParts;
    bool navigationBarHidden;
    <MPVideoControllerProtocol> *videoViewController;
    unsigned long long visibleParts;
}

@property(assign,readwrite) bool allowsDetailScrubbing;
@property(assign,readwrite) bool allowsExitFromFullscreen;
@property(assign,readwrite) bool allowsScrubbing;
@property(assign,readwrite) bool allowsWirelessPlayback;
@property(assign,readwrite) bool automaticallyHandleTransportControls;
@property(assign,readonly) double bottomBarHeight;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MPVideoOverlayDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) unsigned long long desiredParts;
@property(assign,readwrite) unsigned long long disabledParts;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MPAVItem * item;
@property(assign,retain) UINavigationBar * navigationBar;
@property(assign,readwrite) bool navigationBarHidden;
@property(assign,retain) MPAVController * player;
@property(assign,readwrite) long long style;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) <MPVideoControllerProtocol> * videoViewController;
@property(assign,readwrite) unsigned long long visibleParts;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_buttonInteractionCanceled:(id)arg1;
- (void)_buttonInteractionEnded:(id)arg1;
- (void)_configureAuxiliaryButtons:(bool)arg1;
- (void)_configureTransportControls;
- (void)_doneButtonTapped:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_handleDismissAudioAndSubtitlesController;
- (void)_hideScrubInstructions;
- (id)_imageNamed:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (void)_notifyDelegateOfUserEvent:(long long)arg1;
- (void)_notifyDelegateOfUserEventBegin:(long long)arg1;
- (void)_notifyDelegateOfUserEventCancel:(long long)arg1;
- (void)_notifyDelegateOfUserEventEnd:(long long)arg1;
- (void)_observeControl:(id)arg1;
- (void)_playPauseButtonTapped:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_registerForItemNotifications:(id)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(bool)arg3;
- (void)_showScrubInstructions;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_startSeeking;
- (void)_tick:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_updateLoadingIndicator;
- (void)_updateScaleButton;
- (void)_updateVolumeSlider;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (bool)allowsDetailScrubbing;
- (bool)allowsExitFromFullscreen;
- (bool)allowsScrubbing;
- (bool)allowsWirelessPlayback;
- (bool)automaticallyHandleTransportControls;
- (double)bottomBarHeight;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToWindow;
- (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)item;
- (void)layoutSubviews;
- (id)navigationBar;
- (bool)navigationBarHidden;
- (id)player;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)removeFromSuperview;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setAllowsExitFromFullscreen:(bool)arg1;
- (void)setAllowsScrubbing:(bool)arg1;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAutomaticallyHandleTransportControls:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 animateAlongside:(id)arg3 completionBlock:(id)arg4;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completionBlock:(id)arg3;
- (void)setItem:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (long long)style;
- (void)updateConstraints;
- (bool)updateTimeBasedValues;
- (id)videoViewController;
- (unsigned long long)visibleParts;

@end