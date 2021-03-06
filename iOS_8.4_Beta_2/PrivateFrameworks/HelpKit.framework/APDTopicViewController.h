/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDTopicViewController : UIViewController <UIWebViewDelegate> {
    APDKVOManager *_KVOManager;
    UIActivityIndicatorView *_activityIndicatorView;
    APDDataManager *_dataManager;
    <APDTopicViewControllerDelegate> *_delegate;
    bool _displayAsPopover;
    UIImageView *_errorImageView;
    UILabel *_errorMessageLabel;
    UILabel *_errorTitleLabel;
    UIView *_errorView;
    bool _hasLoaded;
    bool _loading;
    long long _pendingWebViewDisplayIndex;
    bool _showWithManualInset;
    NSMutableArray *_topicHistory;
    NSMutableArray *_topicHistoryScrollMap;
    UIWebView *_topicWebView;
    long long _topicWebViewDisplayIndex;
    APDAsyncURLConnection *_topicWebViewURLConnection;
    bool _updateDataManagerWithCurrentTopic;
    bool _webViewLoaded;
    bool _webViewStartedLoading;
}

@property(assign,retain) APDKVOManager * KVOManager;
@property(assign,readwrite) UIActivityIndicatorView * activityIndicatorView;
@property(assign,retain) APDDataManager * dataManager;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <APDTopicViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool displayAsPopover;
@property(assign,readwrite) UIImageView * errorImageView;
@property(assign,readwrite) UILabel * errorMessageLabel;
@property(assign,readwrite) UILabel * errorTitleLabel;
@property(assign,retain) UIView * errorView;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool showWithManualInset;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) UIWebView * topicWebView;
@property(assign,readwrite) long long topicWebViewDisplayIndex;
@property(assign,readwrite) bool updateDataManagerWithCurrentTopic;

- (void).cxx_destruct;
- (id)KVOManager;
- (id)activityIndicatorView;
- (bool)canGoBack;
- (bool)canGoForward;
- (void)clearHistory;
- (id)dataManager;
- (void)dealloc;
- (id)delegate;
- (bool)displayAsPopover;
- (id)errorImageView;
- (id)errorMessageLabel;
- (id)errorTitleLabel;
- (id)errorView;
- (void)hideGradientBackground:(id)arg1;
- (void)highlightSearchTerms:(bool)arg1;
- (id)init;
- (void)initializeTopicHistoryScrollMapWithScrollPosition:(id)arg1;
- (void)loadTopic:(id)arg1;
- (void)loadTopic:(id)arg1 data:(id)arg2 useLocalResource:(bool)arg3;
- (id)navigationItemFromURLString:(id)arg1;
- (void)onConnectionChanged:(id)arg1;
- (id)onGoBack;
- (id)onGoForward;
- (void)recordScrollPositionForCurrentTopic;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setDataManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayAsPopover:(bool)arg1;
- (void)setErrorImageView:(id)arg1;
- (void)setErrorMessageLabel:(id)arg1;
- (void)setErrorTitleLabel:(id)arg1;
- (void)setErrorView:(id)arg1;
- (void)setKVOManager:(id)arg1;
- (void)setShowWithManualInset:(bool)arg1;
- (void)setTopicWebView:(id)arg1;
- (void)setTopicWebViewDisplayIndex:(long long)arg1;
- (void)setUpdateDataManagerWithCurrentTopic:(bool)arg1;
- (void)showErrorView:(bool)arg1 animated:(bool)arg2;
- (void)showWebViewIfNeeded;
- (bool)showWithManualInset;
- (void)stopLoading;
- (id)topicWebView;
- (long long)topicWebViewDisplayIndex;
- (bool)updateDataManagerWithCurrentTopic;
- (void)updateErrorMessageViewLayout;
- (void)updateTopicWebViewScrollPosition;
- (void)updateWebViewMaps;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
