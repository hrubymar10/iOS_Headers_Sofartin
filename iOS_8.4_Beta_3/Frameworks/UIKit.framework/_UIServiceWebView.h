/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIServiceWebView : UIWebView {
    _UIServiceWebViewController *_serviceWebViewController;
    bool _shouldDecidePolicyRemotely;
}

@property (nonatomic) _UIServiceWebViewController *serviceWebViewController;
@property (nonatomic) bool shouldDecidePolicyRemotely;

- (id)_makeAlertView;
- (void)_webView:(id)arg1 dismissViewControllerAnimated:(bool)arg2 completion:(id)arg3;
- (bool)_webView:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3 completion:(id)arg4;
- (id)serviceWebViewController;
- (void)setServiceWebViewController:(id)arg1;
- (void)setShouldDecidePolicyRemotely:(bool)arg1;
- (bool)shouldDecidePolicyRemotely;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;

@end
