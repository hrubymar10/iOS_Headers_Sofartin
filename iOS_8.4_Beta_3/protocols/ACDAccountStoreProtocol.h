/* Generated by RuntimeBrowser.
 */

@protocol ACDAccountStoreProtocol <NSObject>

@required

- (void)accessKeysForAccountType:(ACAccountType *)arg1 handler:(id)arg2;
- (void)accountExistsWithDescription:(NSString *)arg1 completion:(id)arg2;
- (void)accountIdentifiersEnabledForDataclass:(NSString *)arg1 handler:(id)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(NSArray *)arg1 withAccountTypeIdentifiers:(NSArray *)arg2 completion:(id)arg3;
- (void)accountIdentifiersEnabledToSyncDataclass:(NSString *)arg1 handler:(id)arg2;
- (void)accountTypeWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)accountTypesWithHandler:(id)arg1;
- (void)accountWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)accountsWithAccountType:(ACAccountType *)arg1 handler:(id)arg2;
- (void)accountsWithAccountTypeIdentifiers:(NSArray *)arg1 preloadedProperties:(NSArray *)arg2 completion:(id)arg3;
- (void)accountsWithHandler:(id)arg1;
- (void)addClientToken:(NSString *)arg1 forAccountIdentifier:(NSString *)arg2 completion:(id)arg3;
- (void)appPermissionsForAccountType:(ACAccountType *)arg1 withHandler:(id)arg2;
- (void)canSaveAccount:(ACAccount *)arg1 completion:(id)arg2;
- (void)childAccountsForAccountWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)childAccountsWithAccountTypeIdentifier:(NSString *)arg1 parentAccountIdentifier:(NSString *)arg2 handler:(id)arg3;
- (void)clearAllPermissionsGrantedForAccountType:(ACAccountType *)arg1 withHandler:(id)arg2;
- (void)clearGrantedPermissionsForAccountType:(ACAccountType *)arg1 withHandler:(id)arg2;
- (void)clientTokenForAccountIdentifier:(NSString *)arg1 completion:(id)arg2;
- (void)credentialForAccount:(ACAccount *)arg1 serviceID:(NSString *)arg2 handler:(id)arg3;
- (void)credentialForAccountWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)dataclassActionsForAccountDeletion:(ACAccount *)arg1 completion:(id)arg2;
- (void)dataclassActionsForAccountSave:(ACAccount *)arg1 completion:(id)arg2;
- (void)dataclassesWithHandler:(id)arg1;
- (void)displayAccountTypeForAccountWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)grantedPermissionsForAccountType:(ACAccountType *)arg1 withHandler:(id)arg2;
- (void)handleURL:(NSURL *)arg1;
- (void)insertAccountType:(ACAccountType *)arg1 withHandler:(id)arg2;
- (void)isPerformingDataclassActionsForAccount:(ACAccount *)arg1 completion:(id)arg2;
- (void)isPushSupportedForAccount:(ACAccount *)arg1 completion:(id)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(NSString *)arg1 completion:(id)arg2;
- (void)kerberosAccountsForDomainFromURL:(NSURL *)arg1 completion:(id)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(ACAccount *)arg1 withChangeType:(NSString *)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(ACAccount *)arg1 withChangeType:(NSString *)arg2 completion:(id)arg3;
- (void)openAuthenticationURL:(NSURL *)arg1 forAccount:(ACAccount *)arg2 shouldConfirm:(bool)arg3 completion:(id)arg4;
- (void)openAuthenticationURLForAccount:(ACAccount *)arg1 withDelegateClassName:(NSString *)arg2 fromBundleAtPath:(NSString *)arg3 shouldConfirm:(bool)arg4 completion:(id)arg5;
- (void)parentAccountForAccountWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)permissionForAccountType:(ACAccountType *)arg1 withHandler:(id)arg2;
- (void)provisionedDataclassesForAccountWithIdentifier:(NSString *)arg1 handler:(id)arg2;
- (void)removeAccount:(ACAccount *)arg1 withDataclassActions:(NSDictionary *)arg2 completion:(id)arg3;
- (void)removeAccountType:(ACAccountType *)arg1 withHandler:(id)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id)arg1;
- (void)renewCredentialsForAccount:(ACAccount *)arg1 options:(NSDictionary *)arg2 completion:(id)arg3;
- (void)requestAccessForAccountTypeWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 withHandler:(id)arg3;
- (void)saveAccount:(ACAccount *)arg1 toPairedDeviceWithOptions:(NSDictionary *)arg2 completion:(id)arg3;
- (void)saveAccount:(ACAccount *)arg1 verify:(bool)arg2 dataclassActions:(NSDictionary *)arg3 completion:(id)arg4;
- (void)saveAccount:(ACAccount *)arg1 withHandler:(id)arg2;
- (void)setClientBundleID:(NSString *)arg1 withHandler:(id)arg2;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPermissionGranted:(NSNumber *)arg1 forBundleID:(NSString *)arg2 onAccountType:(ACAccountType *)arg3 withHandler:(id)arg4;
- (void)supportedDataclassesForAccountType:(ACAccountType *)arg1 handler:(id)arg2;
- (void)syncableDataclassesForAccountType:(ACAccountType *)arg1 handler:(id)arg2;
- (void)tetheredSyncSourceTypeForDataclass:(NSString *)arg1 completion:(id)arg2;
- (void)typeIdentifierForDomain:(NSString *)arg1 withHandler:(id)arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(NSString *)arg1 withHandler:(id)arg2;
- (void)verifyCredentialsForAccount:(ACAccount *)arg1 options:(NSDictionary *)arg2 completion:(id)arg3;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(NSArray *)arg1 completion:(id)arg2;

@end
