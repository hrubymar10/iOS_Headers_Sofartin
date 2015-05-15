/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingPresentationController : UIPresentationController <MusicNowPlayingAtmosphericStatusBarDelegate> {
    UIView *_nowPlayingClippingView;
    MusicNowPlayingAtmosphericStatusBar *_nowPlayingStatusBar;
    bool _wantsAtmosphericStatusBar;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIView * nowPlayingClippingView;
@property(assign,retain) MusicNowPlayingAtmosphericStatusBar * nowPlayingStatusBar;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool wantsAtmosphericStatusBar;

- (void).cxx_destruct;
- (void)_attachStatusBar;
- (void)_restoreStatusBar;
- (bool)_shouldChangeStatusBarViewController;
- (void)_updateStatusBar;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (id)nowPlayingClippingView;
- (id)nowPlayingStatusBar;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)setNowPlayingClippingView:(id)arg1;
- (void)setNowPlayingStatusBar:(id)arg1;
- (void)setWantsAtmosphericStatusBar:(bool)arg1;
- (bool)shouldRemovePresentersView;
- (void)statusBar:(id)arg1 styleDidChange:(long long)arg2;
- (bool)wantsAtmosphericStatusBar;

@end
