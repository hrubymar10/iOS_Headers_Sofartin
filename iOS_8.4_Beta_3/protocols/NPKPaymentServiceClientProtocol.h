/* Generated by RuntimeBrowser.
 */

@protocol NPKPaymentServiceClientProtocol <NSObject>

@required

- (void)fieldDetected:(bool)arg1 cardEmulationEnabled:(bool)arg2;
- (void)paymentDeviceNoLongerBusy;
- (void)paymentNoLongerRestricted;
- (void)paymentRequestedWhileDeviceBusy;
- (void)paymentRequestedWhileRestricted;
- (void)paymentRequestedWithNoPaymentPasses;
- (void)paymentSessionDidBeginWithEndpoint:(NSXPCListenerEndpoint *)arg1 paymentCard:(NPKPaymentServiceCard *)arg2;
- (void)transactionCompletedForPaymentCard:(NPKPaymentServiceCard *)arg1;
- (void)transactionFailedForPaymentCard:(NPKPaymentServiceCard *)arg1;

@end
