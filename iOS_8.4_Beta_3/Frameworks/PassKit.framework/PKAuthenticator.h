/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAuthenticator : NSObject <LAUIDelegate> {
    LAContext *_context;
    NSObject<OS_dispatch_queue> *_contextMutationQueue;
    <PKAuthenticatorDelegate> *_delegate;
    bool _fingerPresent;
    unsigned long long _presentationFlag;
}

@property(assign,readwrite) <PKAuthenticatorDelegate> * delegate;
@property(assign,readwrite) bool fingerPresent;

+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (void)preheatAuthenticator;
+ (id)viewServiceBundleID;

- (id)_compareAndSwapWithCompareContext:(id)arg1 replacementContext:(id)arg2;
- (id)_context;
- (bool)_contextMatchesContext:(id)arg1;
- (bool)_delegateSupportsPasscodeDismissal;
- (bool)_delegateSupportsPasscodePresentation;
- (bool)_delegateSupportsPassphraseDismissal;
- (bool)_delegateSupportsPassphrasePresentation;
- (id)_swapContext:(id)arg1;
- (void)cancelEvaluation;
- (void)dealloc;
- (id)delegate;
- (void)evaluatePolicy:(long long)arg1 completion:(id)arg2;
- (void)evaluateRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id)arg3;
- (void)fallbackToSystemPasscodeUI;
- (bool)fingerPresent;
- (void)handlePasscodeEvent:(long long)arg1 params:(id)arg2;
- (void)handlePassphraseEvent:(long long)arg1 params:(id)arg2;
- (void)handleTouchIDEvent:(long long)arg1 params:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFingerPresent:(bool)arg1;

@end
