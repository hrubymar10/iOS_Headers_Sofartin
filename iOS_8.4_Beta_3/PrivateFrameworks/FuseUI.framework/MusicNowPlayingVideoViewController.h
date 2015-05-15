/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingVideoViewController : MPUNowPlayingVideoViewController <MPVideoOverlayDelegate> {
    MPVideoPlaybackOverlayView *_videoOverlayView;
    NSObject<OS_dispatch_source> *_videoOverlayViewIdleTimer;
    <MusicNowPlayingVideoViewControllerDelegate> *_videoViewControllerDelegate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) <MusicNowPlayingVideoViewControllerDelegate> * videoViewControllerDelegate;

- (void).cxx_destruct;
- (void)_cancelIdleTimer;
- (void)_startIdleTimer:(double)arg1;
- (void)_toggleOverlayVisibile;
- (void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(long long)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVideoViewControllerDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)videoOverlayView;
- (id)videoViewControllerDelegate;
- (void)viewDidLoad;

@end