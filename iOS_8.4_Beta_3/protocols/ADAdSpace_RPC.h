/* Generated by RuntimeBrowser.
 */

@protocol ADAdSpace_RPC

@required

- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(ADAdImpressionPublicAttributes *)arg1;
- (void)_remote_close;
- (void)_remote_creativeDidFailWithError:(NSError *)arg1;
- (void)_remote_creativeWillLoad;
- (void)_remote_dismissPortraitOnlyViewController;
- (void)_remote_dismissViewController;
- (void)_remote_openURL:(NSURL *)arg1;
- (void)_remote_pauseBannerMedia;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_requestViewControllerWithClassName:(NSString *)arg1 forAdSpaceControllerWithIdentifier:(NSString *)arg2;
- (void)_remote_resumeBannerMedia;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned long long)arg1;

@end