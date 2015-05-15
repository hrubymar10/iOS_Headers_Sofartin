/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUMiniPlayerCoordinator : NSObject <MPPlaybackControlsDelegate, MPTransportControlsTarget, MPUMiniPlayerActionsViewControllerDelegate> {
    MPQueueFeeder *_feeder;
    _UINavigationControllerPalette *_miniPlayerPalette;
    UINavigationController *_navigationController;
    MPUMiniPlayerPlaybackControlsView *_playbackControlsView;
    MPAVController *_player;
    NSTimer *_skipInformationRevealTimer;
    UIViewController *_viewController;
}

@property (nonatomic, readonly) UINavigationController *_navigationController;
@property (nonatomic, readonly) MPUMiniPlayerPlaybackControlsView *_playbackControlsView;
@property (nonatomic, readonly) UIViewController *_viewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPAVController *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentProspectivePlaybackInformation;
- (void)_didSkipTrackNotification:(id)arg1;
- (void)_invalidateSkipInformationRevealTimer;
- (void)_itemDidChangeNotification:(id)arg1;
- (Class)_miniPlayerPlaybackControlsViewClass;
- (id)_navigationController;
- (id)_playbackControlsView;
- (void)_revealSkipInformationMomentarily;
- (void)_scheduleSkipInformationRevealTimer;
- (void)_setFeeder:(id)arg1;
- (void)_skipLimitDidChangeNotification:(id)arg1;
- (void)_updateMiniPlayerAttachment;
- (void)_updateMiniPlayerPaletteForNavigationController:(id)arg1;
- (id)_viewController;
- (bool)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(long long)arg2;
- (void)navigationController:(id)arg1 traitCollectionDidChange:(id)arg2;
- (id)player;
- (void)prospectivePlaybackInformationDidChangeForViewController:(id)arg1;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)willShowViewController:(id)arg1 inNavigationController:(id)arg2;

@end
