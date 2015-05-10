/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUIBrowserLoadingController : NSObject {
    NSURL *_URL;
    NSString *_URLString;
    NSURL *_backURL;
    UIWebBrowserView *_browserView;
    bool _canGoBack;
    bool _canGoForward;
    WebDataSource *_dataSourceWithError;
    <WebUIBrowserLoadingControllerDelegate> *_delegate;
    NSError *_errorThatCausedLoadToEnd;
    float _estimatedProgress;
    NSArray *_fallbackURLs;
    NSURL *_forwardURL;
    NSString *_lastSuccessfulURLString;
    bool _loadEndedWithError;
    bool _loadStartedDuringSimulatedClick;
    bool _loadStoppedFromAPI;
    bool _loading;
    long long _loadingState;
    unsigned int _pendingFrameLoadMessages;
    bool _securePageHasInsecureContent;
    bool _simulatingClick;
    NSString *_title;
    NSString *_userTypedAddress;
}

@property(assign,retain) NSURL * URL;
@property(assign,readonly) NSString * URLString;
@property(assign,retain) UIWebBrowserView * browserView;
@property(assign,readonly) bool canGoBack;
@property(assign,readonly) bool canGoForward;
@property(assign,readwrite) <WebUIBrowserLoadingControllerDelegate> * delegate;
@property(assign,readwrite) float estimatedProgress;
@property(getter=isLoading,assign,readonly) bool loading;
@property(assign,readwrite) long long loadingState;
@property(getter=isSecure,assign,readonly) bool secure;
@property(getter=isSimulatingClick,assign,readonly) bool simulatingClick;
@property(assign,copy) NSString * title;

- (void).cxx_destruct;
- (id)URL;
- (id)URLString;
- (bool)_URLMayStartLoad:(id)arg1;
- (void)_attemptTransitionToLoadingState:(long long)arg1;
- (id)_dataSourceURL;
- (void)_didNotLoadURL;
- (void)_forceStartLoading;
- (void)_forceStopLoadingFromDelegateWithError:(id)arg1;
- (id)_getDataSourceURL:(id)arg1;
- (void)_loadRequest:(id)arg1 userDriven:(bool)arg2;
- (void)_mightLoadURL:(id)arg1;
- (void)_performWebViewLoadSelector:(SEL)arg1 forceProgress:(bool)arg2;
- (void)_progressChanged:(id)arg1;
- (void)_setBackURL:(id)arg1;
- (void)_setFallbackURLs:(id)arg1;
- (void)_setForwardURL:(id)arg1;
- (void)_setLoading:(bool)arg1 withError:(bool)arg2;
- (void)_setLoading:(bool)arg1 withError:(bool)arg2 fromDelegate:(bool)arg3;
- (void)_setLoading:(bool)arg1 withError:(bool)arg2 fromDelegate:(bool)arg3 fromFragmentLoad:(bool)arg4;
- (void)_setLoading:(bool)arg1 withError:(bool)arg2 fromFragmentLoad:(bool)arg3;
- (void)_setLoadingFromDelegate:(bool)arg1 withError:(id)arg2 dataSource:(id)arg3;
- (void)_setSecurePageHasInsecureContent:(bool)arg1;
- (void)_setUserTypedAddress:(id)arg1;
- (void)_tryMultipleURLs:(id)arg1 forWebClip:(id)arg2;
- (void)_updateAfterHistoryChange;
- (void)_updateBackForward;
- (void)_updateURL;
- (void)_updateURLString;
- (void)beginSimulatedClickForURL:(id)arg1;
- (id)browserView;
- (bool)canGoBack;
- (bool)canGoForward;
- (void)dealloc;
- (id)delegate;
- (void)didDrawTiles;
- (float)estimatedProgress;
- (void)finishSimulatedClick;
- (void)goBack;
- (void)goForward;
- (id)initWithDelegate:(id)arg1;
- (bool)isLoading;
- (bool)isSecure;
- (bool)isSimulatingClick;
- (void)loadRequest:(id)arg1 userDriven:(bool)arg2;
- (void)loadStartedDuringSimulatedClickForURL:(id)arg1;
- (void)loadUserTypedAddress:(id)arg1;
- (void)loadWebClip:(id)arg1 userDriven:(bool)arg2;
- (long long)loadingState;
- (void)reload;
- (void)setBrowserView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedProgress:(float)arg1;
- (void)setLoadingState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)stopLoading;
- (id)title;
- (void)webThreadWebView:(id)arg1 didLayout:(unsigned long long)arg2;
- (void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;
- (void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didRunInsecureContent:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
- (void)webViewDidDisplayInsecureContent:(id)arg1;

@end