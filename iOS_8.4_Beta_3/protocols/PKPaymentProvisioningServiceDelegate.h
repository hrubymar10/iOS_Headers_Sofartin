/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentProvisioningServiceDelegate <NSObject>

@required

- (void)shouldArchiveBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)shouldArchiveContext:(PKPaymentWebServiceContext *)arg1;

@optional

- (void)configurationDataWithCompletionHandler:(id)arg1;
- (void)deleteCardWithAID:(NSString *)arg1;
- (NSArray *)filterVerificationChannels:(NSArray *)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didRegisterWithRegionMap:(NSDictionary *)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(PKPaymentWebService *)arg1;
- (void)provisioningDataWithCompletionHandler:(id)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(NSString *)arg1 withCompletion:(id)arg2;
- (void)registrationDataWithAuthToken:(NSString *)arg1 completionHandler:(id)arg2;
- (void)setNewAuthRandomIfNecessary:(id)arg1;

@end
