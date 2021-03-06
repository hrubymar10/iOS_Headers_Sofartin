/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDService : NSObject <IMSystemMonitorListener> {
    NSDictionary *_accountDefaults;
    bool _blockPrefWriting;
    NSBundle *_bundle;
    NSDictionary *_cachedServiceDefaults;
    NSDictionary *_cachedSetupServiceDefaults;
    NSString *_internalName;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProperties;
    Class _sessionClass;
}

@property(assign,readonly) Class accountClass;
@property(assign,retain) NSBundle * bundle;
@property(assign,retain) NSDictionary * defaultAccountSettings;
@property(assign,readonly) bool disallowDeactivation;
@property(assign,retain) NSString * internalName;
@property(assign,readonly) bool isIDSBased;
@property(assign,readonly) bool serviceChatsIgnoreLoginStatus;
@property(assign,retain) NSDictionary * serviceDefaults;
@property(assign,retain) NSDictionary * serviceDefaultsForSetup;
@property(assign,retain) NSString * serviceDomain;
@property(assign,readonly) bool serviceIgnoresNetworkConnectivity;
@property(assign,readonly) bool serviceNeedsLogin;
@property(assign,readonly) bool serviceNeedsPassword;
@property(assign,retain) NSDictionary * serviceProperties;
@property(assign,readonly) long long serviceProtocolVersion;
@property(assign,readonly) bool serviceRequiresHost;
@property(assign,readonly) bool serviceRequiresSingleAccount;
@property(assign,readonly) bool serviceShouldBeAlwaysLoggedIn;
@property(assign,readonly) bool serviceSupportsPresence;
@property(assign,readonly) bool serviceSupportsRegistration;
@property(assign,readonly) bool serviceWantsNullHostReachability;
@property(assign,readonly) Class sessionClass;
@property(assign,readonly) bool shouldCreateActiveAccounts;
@property(assign,readonly) bool shouldForceAccountsActive;
@property(assign,readonly) bool shouldForceAccountsConnected;
@property(assign,readonly) bool supportsDatabase;

- (id)_copyServicePropertiesFromIMServiceBundle:(id)arg1;
- (id)_defaultDefaults;
- (id)_oldServiceDomain;
- (void)_reallyUnloadServiceBundle;
- (id)_serviceDefaultsForDomain:(id)arg1;
- (id)_serviceDomain;
- (void)accountAdded:(id)arg1;
- (Class)accountClass;
- (void)accountRemoved:(id)arg1;
- (id)bundle;
- (bool)clearOneTimeImportAccounts;
- (void)dealloc;
- (id)defaultAccountSettings;
- (void)delayedSaveSettings;
- (id)description;
- (void)disableAccount:(id)arg1;
- (bool)disallowDeactivation;
- (void)enableAccount:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)internalName;
- (bool)isIDSBased;
- (void)loadServiceBundle;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;
- (id)oldInternalName;
- (void)purgeMemoryCaches;
- (void)saveSettings;
- (bool)serviceChatsIgnoreLoginStatus;
- (id)serviceDefaults;
- (id)serviceDefaultsForSetup;
- (id)serviceDomain;
- (bool)serviceIgnoresNetworkConnectivity;
- (bool)serviceNeedsLogin;
- (bool)serviceNeedsPassword;
- (id)serviceProperties;
- (long long)serviceProtocolVersion;
- (bool)serviceRequiresHost;
- (bool)serviceRequiresSingleAccount;
- (bool)serviceShouldBeAlwaysLoggedIn;
- (bool)serviceSupportsPresence;
- (bool)serviceSupportsRegistration;
- (bool)serviceWantsNullHostReachability;
- (Class)sessionClass;
- (bool)shouldCreateActiveAccounts;
- (bool)shouldForceAccountsActive;
- (bool)shouldForceAccountsConnected;
- (bool)supportsDatabase;
- (void)synchronizeServiceDefaults;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidStartBackup;
- (void)unloadServiceBundle;

@end
