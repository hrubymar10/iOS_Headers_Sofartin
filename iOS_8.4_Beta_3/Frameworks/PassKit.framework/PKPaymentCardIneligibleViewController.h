/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentCardIneligibleViewController : UIViewController <UIWebViewDelegate> {
    PKPaymentCredential *_credential;
    id _learnMorePresentationHandler;
    id _preflightCompletion;
    bool _preloadLearnMoreWebView;
    long long _setupContext;
    <PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    UIWebView *_webView;
}

@property (nonatomic, retain) PKPaymentCredential *credential;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id learnMorePresentationHandler;
@property bool preloadLearnMoreWebView;
@property (nonatomic) long long setupContext;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (id)_alertWithLearnMoreURL:(id)arg1 isPreloaded:(bool)arg2;
- (id)_learnMoreURLForEligibiltyStatus:(long long)arg1;
- (void)_webViewDidLoad:(bool)arg1 withError:(id)arg2;
- (id)credential;
- (void)dealloc;
- (void)handleDone:(id)arg1;
- (id)initWithCredential:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (id)learnMorePresentationHandler;
- (void)preflightWithCompletion:(id)arg1;
- (bool)preloadLearnMoreWebView;
- (void)setCredential:(id)arg1;
- (void)setLearnMorePresentationHandler:(id)arg1;
- (void)setPreloadLearnMoreWebView:(bool)arg1;
- (void)setSetupContext:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (long long)setupContext;
- (id)setupDelegate;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
