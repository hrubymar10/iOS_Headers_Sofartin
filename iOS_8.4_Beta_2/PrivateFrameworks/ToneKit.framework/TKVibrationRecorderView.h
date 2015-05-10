/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate> {
    bool _animatingProgress;
    UIToolbar *_controlsToolbar;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    double _currentVibrationComponentDidStartTimestamp;
    double _currentVibrationProgressDidStartTimestamp;
    <TKVibrationRecorderViewDelegate> *_delegate;
    UILabel *_instructionsLabel;
    int _leftButtonIdentifier;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    TKVibrationRecorderProgressView *_progressView;
    bool _replayModeEnabled;
    int _rightButtonIdentifier;
    <TKVibrationRecorderStyleProvider> *_styleProvider;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    double _vibrationPatternMaximumDuration;
    bool _waitingForEndOfCurrentVibrationComponent;
}

@property(getter=_isAnimatingProgress,setter=_setAnimatingProgress:,assign,readwrite) bool _animatingProgress;
@property(setter=_setControlsToolbar:,assign,retain) UIToolbar * _controlsToolbar;
@property(setter=_setControlsToolbarTopConstraint:,assign,retain) NSLayoutConstraint * _controlsToolbarTopConstraint;
@property(setter=_setCurrentVibrationComponentDidStartTimestamp:,assign,readwrite) double _currentVibrationComponentDidStartTimestamp;
@property(setter=_setCurrentVibrationProgressDidStartTimestamp:,assign,readwrite) double _currentVibrationProgressDidStartTimestamp;
@property(setter=_setInstructionsLabel:,assign,retain) UILabel * _instructionsLabel;
@property(setter=_setLeftButtonIdentifier:,assign,readwrite) int _leftButtonIdentifier;
@property(setter=_setProgressToolbarBottomConstraint:,assign,retain) NSLayoutConstraint * _progressToolbarBottomConstraint;
@property(setter=_setProgressView:,assign,retain) TKVibrationRecorderProgressView * _progressView;
@property(getter=_isReplayModeEnabled,setter=_setReplayModeEnabled:,assign,readwrite) bool _replayModeEnabled;
@property(setter=_setRightButtonIdentifier:,assign,readwrite) int _rightButtonIdentifier;
@property(setter=_setStyleProvider:,assign,retain) <TKVibrationRecorderStyleProvider> * _styleProvider;
@property(setter=_setTouchSurface:,assign,retain) TKVibrationRecorderTouchSurface * _touchSurface;
@property(setter=_setTouchSurfaceTopConstraint:,assign,retain) NSLayoutConstraint * _touchSurfaceTopConstraint;
@property(setter=_setVibrationPatternMaximumDuration:,assign,readwrite) double _vibrationPatternMaximumDuration;
@property(getter=_isWaitingForEndOfCurrentVibrationComponent,setter=_setWaitingForEndOfCurrentVibrationComponent:,assign,readwrite) bool _waitingForEndOfCurrentVibrationComponent;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <TKVibrationRecorderViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)_controlsToolbar;
- (id)_controlsToolbarTopConstraint;
- (double)_currentVibrationComponentDidStartTimestamp;
- (double)_currentVibrationProgressDidStartTimestamp;
- (void)_enterWaitingModeWithAnimation:(bool)arg1 enablePlayButton:(bool)arg2;
- (void)_exitWaitingModeWithAnimation:(bool)arg1;
- (void)_handleLeftButtonTapped:(id)arg1;
- (void)_handleRightButtonTapped:(id)arg1;
- (id)_instructionsLabel;
- (bool)_isAnimatingProgress;
- (bool)_isReplayModeEnabled;
- (bool)_isWaitingForEndOfCurrentVibrationComponent;
- (int)_leftButtonIdentifier;
- (id)_progressToolbarBottomConstraint;
- (id)_progressView;
- (int)_rightButtonIdentifier;
- (void)_setAnimatingProgress:(bool)arg1;
- (void)_setControlsToolbar:(id)arg1;
- (void)_setControlsToolbarTopConstraint:(id)arg1;
- (void)_setCurrentVibrationComponentDidStartTimestamp:(double)arg1;
- (void)_setCurrentVibrationProgressDidStartTimestamp:(double)arg1;
- (void)_setInstructionsLabel:(id)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1 enabled:(bool)arg2 rightButtonIdentifier:(int)arg3 enabled:(bool)arg4 animated:(bool)arg5;
- (void)_setProgressToolbarBottomConstraint:(id)arg1;
- (void)_setProgressView:(id)arg1;
- (void)_setReplayModeEnabled:(bool)arg1;
- (void)_setRightButtonIdentifier:(int)arg1;
- (void)_setStyleProvider:(id)arg1;
- (void)_setTouchSurface:(id)arg1;
- (void)_setTouchSurfaceTopConstraint:(id)arg1;
- (void)_setVibrationPatternMaximumDuration:(double)arg1;
- (void)_setWaitingForEndOfCurrentVibrationComponent:(bool)arg1;
- (id)_styleProvider;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1;
- (id)_touchSurface;
- (id)_touchSurfaceTopConstraint;
- (void)_updateProgress:(id)arg1;
- (double)_vibrationPatternMaximumDuration;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)exitRecordingModeWithPlayButtonEnabled:(bool)arg1;
- (void)exitReplayMode;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)navigationController:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)setDelegate:(id)arg1;
- (void)startAnimatingProgress;
- (void)stopAnimatingProgress;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;
- (void)wasAddedToNavigationController:(id)arg1;

@end