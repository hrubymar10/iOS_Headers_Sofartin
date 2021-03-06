/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationServiceNavigationController : UINavigationController {
    PKPaymentAuthorizationServiceViewController *_authorizationViewController;
    PKPaymentAuthorizationLayout *_layout;
    <UIViewControllerTransitioningDelegate> *_paymentTransitioningDelegate;
}

@property(assign,retain) PKPaymentAuthorizationServiceViewController * authorizationViewController;
@property(assign,retain) <UIViewControllerTransitioningDelegate> * paymentTransitioningDelegate;

- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (id)authorizationViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)paymentTransitioningDelegate;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setAuthorizationViewController:(id)arg1;
- (void)setPaymentTransitioningDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
