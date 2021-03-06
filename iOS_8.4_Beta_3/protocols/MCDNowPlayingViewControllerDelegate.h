/* Generated by RuntimeBrowser.
 */

@protocol MCDNowPlayingViewControllerDelegate <NSObject>

@optional

- (void)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (bool)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 tinted:(out bool*)arg4;
- (bool)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldEnableButton:(long long)arg2;
- (bool)nowPlayingViewControllerCanCreate:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanRepeat:(MCDNowPlayingViewController *)arg1;
- (bool)nowPlayingViewControllerCanShuffle:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerCreate:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(MCDNowPlayingViewController *)arg1;

@end
