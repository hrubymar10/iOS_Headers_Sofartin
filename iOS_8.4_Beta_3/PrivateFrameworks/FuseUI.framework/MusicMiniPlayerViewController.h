/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMiniPlayerViewController : UIViewController <MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate, MusicClientContextConsuming> {
    MusicMiniPlayerBackgroundView *_backgroundView;
    MusicClientContext *_clientContext;
    MPAVItem *_currentItem;
    MusicPlaybackProgressScrubberController *_miniPlayerPlaybackProgressScrubberController;
    UIPanGestureRecognizer *_nowPlayingPresentationPanRecognizer;
    UIView<MusicPlaybackProgressScrubbing> *_playbackProgressView;
    MPAVController *_player;
    MPUTransportControlMediaRemoteController *_secondaryControlMediaRemoteController;
    MPUTransportControlsView *_secondaryTransportControlsView;
    MusicNowPlayingTitlesView *_titlesView;
    NSString *_titlesViewFirstLineText;
    NSString *_titlesViewSecondLineText;
    MPUTransportControlMediaRemoteController *_transportControlMediaRemoteController;
    MPUTransportControlsView *_transportControlsView;
}

@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIPanGestureRecognizer * nowPlayingPresentationPanRecognizer;
@property(assign,readonly) UIView<MusicPlaybackProgressScrubbing> * playbackProgressView;
@property(assign,retain) MPAVController * player;
@property(assign,readonly) MPUTransportControlsView * secondaryTransportControlsView;
@property(assign,readonly) Class superclass;
@property(assign,readonly) MusicNowPlayingTitlesView * titlesView;
@property(assign,readonly) MPUTransportControlsView * transportControlsView;

- (void).cxx_destruct;
- (void)_currentItemTitlesDidChangeNotification:(id)arg1;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (id)_imageForTransportButtonWithControlType:(long long)arg1;
- (void)_panRecognized:(id)arg1;
- (void)_playerContentsDidChangeNotification:(id)arg1;
- (void)_playerCurrentItemDidChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;
- (void)_registerForNotificationsForCurrentItem:(id)arg1;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (void)_reloadPlaybackProgressScrubberController;
- (void)_setCurrentItem:(id)arg1;
- (void)_showContextualActions:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_unregisterForNotificationsForCurrentItem:(id)arg1;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (void)_updateNowPlayingInfo;
- (void)_updateSupportedCommands;
- (void)_updateTitlesForCurrentItem;
- (id)clientContext;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlayer:(id)arg1;
- (id)nowPlayingPresentationPanRecognizer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playbackProgressView;
- (id)player;
- (id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1;
- (id)secondaryTransportControlsView;
- (void)setClientContext:(id)arg1;
- (void)setNowPlayingPresentationPanRecognizer:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)showUpNext:(id)arg1;
- (id)titlesView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlMediaRemoteController:(id)arg1 alternateKeyForMediaRemoteNowPlayingInfoKey:(id)arg2;
- (void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(id)arg3 shouldLaunchApplication:(bool)arg4;
- (id)transportControlsView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(long long)arg2 proposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)transportControlsView:(id)arg1 buttonForControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(long long)arg2;
- (void)transportControlsViewDidLayoutSubviews:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end