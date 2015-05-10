/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDNowPlayingViewController : UIViewController {
    UITapGestureRecognizer *_backPressRecognizer;
    <MCDNowPlayingViewControllerDataSource> *_dataSource;
    <MCDNowPlayingViewControllerDelegate> *_delegate;
    long long _heldAction;
    bool _highTouchMode;
    bool _isScrubbing;
    UITapGestureRecognizer *_knobPressRecognizer;
    UIColor *_navbarColor;
    bool _navbarHidesShadow;
    MCDNowPlayingView *_nowPlayingView;
    MCDPlayModeControlView *_playModeControlView;
    UIViewController *_playModeViewController;
    MCDTransportControlView *_transportControlView;
    UIViewController *_transportViewController;
}

@property(assign,readonly) UITapGestureRecognizer * backPressRecognizer;
@property(assign,readwrite) <MCDNowPlayingViewControllerDataSource> * dataSource;
@property(assign,readwrite) <MCDNowPlayingViewControllerDelegate> * delegate;
@property(assign,readonly) UITapGestureRecognizer * knobPressRecognizer;
@property(assign,readonly) MCDNowPlayingView * nowPlayingView;
@property(assign,readonly) MCDPlayModeControlView * playModeControlView;
@property(assign,readonly) MCDTransportControlView * transportControlView;

- (void).cxx_destruct;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_geniusButtonTouchUp:(id)arg1;
- (void)_initializeTransportControls;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_respondToHeldAction;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)_sendHeldAction;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_updatePlayModesState;
- (void)_updateRepeatStateWithType:(unsigned long long)arg1;
- (void)_updateShuffleStateWithType:(unsigned long long)arg1;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (id)backPressRecognizer;
- (id)dataSource;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)knobPressRecognizer;
- (void)loadView;
- (id)nowPlayingView;
- (id)playModeControlView;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)transportControlView;
- (void)updatePlayControls;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
