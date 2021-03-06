/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostViewControllerDelegate, _HKAuthorizationPresentationController> {
    bool _didPresent;
    HKHealthPrivacyHostViewController *_hostViewController;
    _UIAsyncInvocation *_requestCancellationInvocation;
    UIWindow *_savedKeyWindow;
    UIWindow *_window;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool didPresent;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) HKHealthPrivacyHostViewController * hostViewController;
@property(assign,retain) _UIAsyncInvocation * requestCancellationInvocation;
@property(assign,retain) UIWindow * savedKeyWindow;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIWindow * window;

- (void).cxx_destruct;
- (void)_didFinishDismissing;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (void)_presentRemoteViewController:(id)arg1;
- (void)_presentWithSessionIdentifier:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (bool)didPresent;
- (void)healthPrivacyHostViewController:(id)arg1 didFinishWithError:(id)arg2;
- (id)hostViewController;
- (void)presentWithSessionIdentifier:(id)arg1 completion:(id)arg2;
- (id)requestCancellationInvocation;
- (id)savedKeyWindow;
- (void)setDidPresent:(bool)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRequestCancellationInvocation:(id)arg1;
- (void)setSavedKeyWindow:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
