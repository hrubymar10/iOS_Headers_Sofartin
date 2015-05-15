/* Generated by RuntimeBrowser.
 */

@protocol CKDAccountInfoProvider <NSObject>

@required

- (bool)accountWantsPushRegistration;
- (NSBundle *)applicationBundle;
- (NSURL *)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (NSString *)bundleID;
- (bool)canAccessAccount;
- (NSString *)cloudKitAuthToken;
- (CKDServerConfiguration *)config;
- (CKContainerID *)containerID;
- (NSString *)containerScopedUserID;
- (NSString *)deviceName;
- (NSString *)dsid;
- (NSArray *)enabledKeyboards;
- (void)fetchConfigurationUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)fetchDeviceIDUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)fetchPublicURLUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 serverType:(long long)arg3 completionHandler:(id)arg4;
- (NSString *)hardwareID;
- (NSString *)iCloudAuthToken;
- (bool)isAnonymousAccount;
- (bool)isUnitTestingAccount;
- (NSString *)languageCode;
- (CKDMescalSession *)mescalSession;
- (NSString *)regionCode;
- (void)renewAuthTokenWithCompletionHandler:(id)arg1;
- (void)renewMescalSessionForRequest:(CKDURLRequest *)arg1 withCompletionHandler:(id)arg2;
- (void)resetMescalSession;
- (NSString *)serverPreferredPushEnvironment;
- (bool)shouldFailAllTasks;
- (NSString *)trafficContainerIdentifier;

@optional

- (NSDictionary *)additionalHeaderValues;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;

@end
