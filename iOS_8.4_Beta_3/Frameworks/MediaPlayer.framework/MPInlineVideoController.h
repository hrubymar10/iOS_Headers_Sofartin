/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineVideoController : NSObject <MPSwipableViewDelegate, MPTransportControlsTarget, MPVideoControllerProtocol, MPVideoOverlayDelegate, MPVolumeControllerDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate> {
    bool _TVOutEnabled;
    bool _TVOutEnabledMaster;
    long long _activeOverlayUserEvents;
    UIView *_advertisementView;
    UIAlertView *_alertSheet;
    bool _allowsDetailScrubbing;
    bool _allowsWirelessPlayback;
    UIWindow *_alternateTracksWindow;
    bool _alwaysAllowHidingControlsOverlay;
    int _artworkImageStyle;
    bool _attemptAutoPlayWhenControlsHidden;
    long long _audioOverlayStyle;
    MPInlineAudioOverlay *_audioOverlayView;
    bool _automaticallyHandleTransportControls;
    unsigned long long _backgroundTaskId;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    bool _batteryMonitoringWasEnabled;
    bool _canAnimateControlsOverlay;
    bool _canShowControlsOverlay;
    UINavigationController *_chaptersContainerController;
    MPVideoContainerView *_containerView;
    bool _controlsOverlayVisible;
    id _delegate;
    unsigned long long _desiredParts;
    bool _disableAutoRotation;
    bool _disableControlsAutohide;
    unsigned long long _disabledParts;
    bool _displayPlaybackErrorAlerts;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPInlineVideoFullscreenViewController *_fullscreenViewController;
    bool _fullscreenViewSizeIsExternallyManaged;
    UIWindow *_fullscreenWindow;
    bool _hasShownFirstVideoFrame;
    MPWeakTimer *_idleTimer;
    bool _inCloneMirrorMode;
    bool _inlinePlaybackUsesTVOut;
    bool _isAnimatingOverlay;
    bool _isTransitioningFromFullscreen;
    bool _isTransitioningToFullscreen;
    MPAVItem *_item;
    unsigned long long _itemTypeOverride;
    UIActivityIndicatorView *_loadingIndicator;
    bool _navigationBarHidden;
    bool _needsTVWindowSetup;
    bool _needsTVWindowTeardown;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSString *_playbackErrorDescription;
    MPAVController *_player;
    UIImage *_posterImage;
    MPAudioVideoRoutingPopoverController *_routePopoverController;
    unsigned long long _scaleMode;
    unsigned long long _scaleModeOverride;
    bool _scheduledLoadingIndicator;
    bool _shouldDestroyVideoSnapshot;
    UIView *_subtitlesView;
    bool _swallowNextTapGesture;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPTVOutWindow *_tvOutWindow;
    bool _useHostedWindowWhenFullscreen;
    UIView *_videoBackgroundView;
    long long _videoOverlayStyle;
    MPVideoPlaybackOverlayView *_videoOverlayView;
    MPSwipableView *_view;
    NSSet *_viewsToFade;
    unsigned long long _visibleParts;
    MPVolumeController *_volumeController;
    bool _wantsOverlayVisibleWhenItemIsAvailable;
    bool _wasPlaying;
    UIWindow *_windowForDisablingAutorotation;
    UIWindow *_windowForFullscreenTransition;
}

@property (nonatomic) bool TVOutEnabled;
@property (nonatomic, readonly) UIView *advertisementView;
@property (nonatomic) bool allowsDetailScrubbing;
@property (nonatomic) bool allowsWirelessPlayback;
@property (nonatomic) bool alwaysAllowHidingControlsOverlay;
@property (nonatomic) int artworkImageStyle;
@property (nonatomic) bool attemptAutoPlayWhenControlsHidden;
@property (nonatomic) long long audioOverlayStyle;
@property (nonatomic) bool autoPlayWhenLikelyToKeepUp;
@property (nonatomic) bool automaticallyHandleTransportControls;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) UIColor *backstopColor;
@property (nonatomic) bool canAnimateControlsOverlay;
@property (nonatomic, readonly) bool canChangeScaleMode;
@property (nonatomic) bool canShowControlsOverlay;
@property (nonatomic) bool controlsOverlayVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) bool disableAutoRotation;
@property (nonatomic) bool disableControlsAutohide;
@property (nonatomic) unsigned long long disabledParts;
@property (nonatomic) bool displayPlaybackErrorAlerts;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (nonatomic, readonly) UIView *fullscreenView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIHostedWindow *hostedWindow;
@property (nonatomic, readonly) unsigned int hostedWindowContextID;
@property (nonatomic) bool inlinePlaybackUsesTVOut;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic) unsigned long long itemTypeOverride;
@property (nonatomic) bool navigationBarHidden;
@property (nonatomic) long long orientation;
@property (nonatomic, copy) NSString *playbackErrorDescription;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, retain) UIImage *posterImage;
@property (nonatomic) unsigned long long scaleMode;
@property (nonatomic, readonly) UIView *subtitlesView;
@property (readonly) Class superclass;
@property (nonatomic) long long videoOverlayStyle;
@property (nonatomic, readonly, retain) UIView<MPVideoOverlay> *videoOverlayView;
@property (nonatomic, readonly, retain) MPVideoView *videoView;
@property (nonatomic, readonly, retain) UIView *view;
@property (nonatomic, readonly) bool viewControllerWillRequestExit;
@property (nonatomic) unsigned long long visibleParts;

- (void).cxx_destruct;
- (bool)TVOutEnabled;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidFinishSuspensionSnapshot:(id)arg1;
- (void)_applicationResumedEventsOnly:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_bufferingStateChanged:(id)arg1;
- (bool)_canEnableAirPlayVideoRoutes;
- (void)_cancelOverlayIdleTimer;
- (void)_delayedShowLoadingIndicator;
- (void)_destroyAudioOverlayView;
- (void)_destroyVideoOverlayView;
- (void)_destroyVideoSnapshotView;
- (void)_doneWithChapters:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (unsigned long long)_effectiveItemType;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_enableAirPlayVideoRoutesIfNecessary;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_hideLoadingIndicator;
- (void)_hideOverlayAnimated:(bool)arg1;
- (void)_hideOverlayDidEnd;
- (bool)_isAnimatingFullscreenTransition;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_itemTypeAvailable:(id)arg1;
- (unsigned long long)_itemTypeWithActualTypePreference;
- (void)_overlayIdleTimerFired:(id)arg1;
- (bool)_overlayViewIsVisible;
- (void)_playbackError:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_postScaleModeDidChange;
- (void)_postViewControllerRequestsExitWithReason:(long long)arg1;
- (void)_registerForPlayerNotifications;
- (void)_resetOverlayIdleTimer;
- (void)_resetOverlayIdleTimer:(double)arg1;
- (void)_scaleModeDidChange:(id)arg1;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_setupSubviews;
- (void)_setupTVOutWindow;
- (bool)_shouldShowDestinationPlaceholder;
- (void)_showOverlayAnimated:(bool)arg1;
- (void)_showOverlayAnimated:(bool)arg1 quickHide:(bool)arg2;
- (void)_showOverlayDidEnd:(bool)arg1;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_showVideoSnapshotView;
- (void)_sizeDidChange:(id)arg1;
- (void)_tearDownTVOutWindow;
- (void)_timedImageMetadataAvailable:(id)arg1;
- (void)_transitionFromFullscreenAnimated:(bool)arg1;
- (void)_transitionFromFullscreenAnimated:(bool)arg1 fromDoneButton:(bool)arg2;
- (void)_transitionFromFullscreenDidEnd;
- (void)_transitionToFullscreenAnimated:(bool)arg1;
- (void)_transitionToFullscreenDidEnd;
- (void)_unregisterForPlayerNotifications;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_updateBackgroundViewConfiguration:(bool)arg1;
- (void)_updateBackgroundViewInformation;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateDoubleTapGestureRecognizer;
- (void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_updateTVOutEnabled;
- (bool)_useInlineControls;
- (void)_validityChanged:(id)arg1;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (id)advertisementView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (bool)allowsDetailScrubbing;
- (bool)allowsWirelessPlayback;
- (bool)alwaysAllowHidingControlsOverlay;
- (int)artworkImageStyle;
- (bool)attemptAutoPlayWhenControlsHidden;
- (long long)audioOverlayStyle;
- (bool)autoPlayWhenLikelyToKeepUp;
- (bool)automaticallyHandleTransportControls;
- (id)backgroundView;
- (id)backstopColor;
- (bool)canAnimateControlsOverlay;
- (bool)canChangeScaleMode;
- (bool)canHideOverlay:(bool)arg1;
- (bool)canShowControlsOverlay;
- (bool)canShowQTAudioOnlyUI;
- (void)clearWeakReferencesToObject:(id)arg1;
- (bool)controlsOverlayVisible;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (bool)disableAutoRotation;
- (bool)disableControlsAutohide;
- (unsigned long long)disabledParts;
- (bool)displayPlaybackErrorAlerts;
- (void)displayVideoView;
- (void)exitFullscreen;
- (void)fullscreenOverlayDidHide;
- (void)fullscreenOverlayDidShow;
- (void)fullscreenOverlayWillHideAnimated:(bool)arg1;
- (void)fullscreenOverlayWillShowAnimated:(bool)arg1;
- (id)fullscreenView;
- (id)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (id)init;
- (bool)inlinePlaybackUsesTVOut;
- (bool)isFullscreen;
- (id)item;
- (unsigned long long)itemTypeOverride;
- (bool)navigationBarHidden;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (long long)orientation;
- (void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(long long)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (id)playbackErrorDescription;
- (id)player;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)posterImage;
- (void)prepareToDisplayVideo;
- (unsigned long long)scaleMode;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(bool)arg1;
- (void)setArtworkImageStyle:(int)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(bool)arg1;
- (void)setAudioOverlayStyle:(long long)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
- (void)setAutomaticallyHandleTransportControls:(bool)arg1;
- (void)setBackstopColor:(id)arg1;
- (void)setCanAnimateControlsOverlay:(bool)arg1;
- (void)setCanShowControlsOverlay:(bool)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(bool)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisableAutoRotation:(bool)arg1;
- (void)setDisableControlsAutohide:(bool)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDisplayPlaybackErrorAlerts:(bool)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setInlinePlaybackUsesTVOut:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setItemTypeOverride:(unsigned long long)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)setOwnsStatusBar:(bool)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setScaleMode:(unsigned long long)arg1;
- (void)setScaleModeOverride:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setTVOutEnabled:(bool)arg1;
- (void)setUseHostedWindowWhenFullscreen:(bool)arg1;
- (void)setVideoOverlayStyle:(long long)arg1;
- (void)setVideoSnapshotEnabled:(bool)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showAlternateTracksController:(id)arg1;
- (id)subtitlesView;
- (void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (long long)videoOverlayStyle;
- (id)videoOverlayView;
- (id)videoView;
- (id)view;
- (bool)viewControllerWillRequestExit;
- (unsigned long long)visibleParts;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;

@end
