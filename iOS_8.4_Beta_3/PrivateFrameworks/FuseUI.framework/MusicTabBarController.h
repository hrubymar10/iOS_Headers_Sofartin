/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTabBarController : SKUIScrollingTabBarController {
    MusicMiniPlayerViewController *_miniPlayerViewController;
    bool _miniPlayerVisible;
    bool _nowPlayingPresenting;
    MusicNowPlayingViewController *_nowPlayingViewController;
    MPAVController *_player;
}

@property(assign,readonly) MusicMiniPlayerViewController * miniPlayerViewController;
@property(getter=isMiniPlayerVisible,assign,readwrite) bool miniPlayerVisible;
@property(getter=isNowPlayingPresenting,assign,readwrite) bool nowPlayingPresenting;
@property(assign,readonly) MusicNowPlayingViewController * nowPlayingViewController;
@property(assign,retain) MPAVController * player;

- (void).cxx_destruct;
- (void)_playerContentsChangedNotification:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_updateMiniPlayerVisiblity;
- (void)dealloc;
- (void)dismissMiniPlayerViewController;
- (bool)isMiniPlayerVisible;
- (bool)isNowPlayingPresenting;
- (id)miniPlayerViewController;
- (id)nowPlayingViewController;
- (id)player;
- (void)presentMiniPlayerViewController;
- (void)presentNowPlayingViewController;
- (void)presentNowPlayingViewControllerWithCompletion:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setMiniPlayerVisible:(bool)arg1;
- (void)setNowPlayingPresenting:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)viewDidLoad;

@end
