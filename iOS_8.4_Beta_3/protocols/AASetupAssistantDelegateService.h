/* Generated by RuntimeBrowser.
 */

@protocol AASetupAssistantDelegateService

@required

- (NSDictionary *)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(NSDictionary *)arg1 handler:(id)arg2;
- (NSString *)delegateServiceIdentifier;

@optional

- (bool)canAutoSetupMailAccount:(NSString *)arg1;
- (void)completeEnablingCloudServicesWithHandler:(id)arg1;
- (bool)needSetupForMailAccount:(NSString *)arg1;
- (void)setBackupEnabled:(bool)arg1 handler:(id)arg2;
- (void)setCloudServicesEnabled:(bool)arg1 handler:(id)arg2;
- (void)setDeviceLocatorEnabled:(bool)arg1;
- (void)setupMailAccount:(NSString *)arg1 password:(NSString *)arg2 handler:(id)arg3;
- (void)setupOperationFailed;
- (void)verifyAccountWithAppleID:(NSString *)arg1 handler:(id)arg2;

@end
