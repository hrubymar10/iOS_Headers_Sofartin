/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWebViewController : UIViewController {
    NSString *_URLString;
    UIBarButtonItem *_backBarButtonItem;
    bool _canGoBack;
    bool _canGoForward;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    <_UIWebViewControllerDelegate> *_delegate;
    float _estimatedProgress;
    UIBarButtonItem *_forwardBarButtonItem;
    bool _hasCalledBeginAppearanceTransition;
    bool _hasCalledEndAppearanceTransition;
    bool _loading;
    NSString *_pageTitle;
    _UIRemoteWebViewController *_remoteViewController;
    _UIQueueingServiceWebViewControllerProxy *_serviceProxy;
}

@property(assign,copy) NSString * URLString;
@property(assign,retain) UIBarButtonItem * backBarButtonItem;
@property(assign,readonly) bool canGoBack;
@property(assign,readonly) bool canGoForward;
@property(assign,readwrite) <_UIWebViewControllerDelegate> * delegate;
@property(assign,readonly) float estimatedProgress;
@property(assign,retain) UIBarButtonItem * forwardBarButtonItem;
@property(getter=isLoading,assign,readonly) bool loading;
@property(assign,copy) NSString * pageTitle;

- (id)URLString;
- (void)_addRemoteView;
- (void)_connectToService;
- (void)_decidePolicyForEncodedRequest:(id)arg1 inMainFrame:(bool)arg2 navigationType:(id)arg3 replyHandler:(id)arg4;
- (void)_dispatchDidDismissViewController;
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)arg1;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(bool)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (void)_setCanGoBack:(bool)arg1 canGoForward:(bool)arg2;
- (void)_setEstimatedProgress:(float)arg1;
- (void)_setLoading:(bool)arg1 error:(id)arg2;
- (void)_setTitle:(id)arg1;
- (void)_setURLString:(id)arg1;
- (void)_updateBarButtonItems;
- (void)_webContentSizeWithReplyHandler:(id)arg1;
- (id)backBarButtonItem;
- (bool)canGoBack;
- (bool)canGoForward;
- (void)configureWithSettings:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (float)estimatedProgress;
- (id)forwardBarButtonItem;
- (void)goBack;
- (void)goForward;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isLoading;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)loadView;
- (id)pageTitle;
- (void)queueingServiceProxy:(id)arg1 willQueueInvocation:(id)arg2;
- (void)reload;
- (void)setDelegate:(id)arg1;
- (void)setURLString:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)stopLoading;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
