/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {
    <PKPaymentAuthorizationViewControllerDelegate> *_delegate;
    PKPaymentAuthorizationController *_paymentController;
    <PKPaymentAuthorizationViewControllerPrivateDelegate> *_privateDelegate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PKPaymentAuthorizationViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) PKPaymentAuthorizationController * paymentController;
@property(assign,readwrite) <PKPaymentAuthorizationViewControllerPrivateDelegate> * privateDelegate;
@property(assign,readonly) Class superclass;

+ (bool)canMakePayments;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1;

- (void)_addDeactivationReason:(id)arg1;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_removeDeactivationReason:(id)arg1;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)dealloc;
- (id)delegate;
- (id)initWithPaymentRequest:(id)arg1;
- (long long)modalPresentationStyle;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(id)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingAddress:(void*)arg2 completion:(id)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(id)arg3;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationControllerWillAuthorizePayment:(id)arg1;
- (id)paymentController;
- (id)privateDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPaymentController:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(bool)arg1;

@end
