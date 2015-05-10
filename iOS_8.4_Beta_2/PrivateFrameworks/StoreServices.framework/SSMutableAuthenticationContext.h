/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying, SSXPCCoding>

@property(assign,copy) NSDictionary * HTTPHeaders;
@property(assign,copy) NSString * accountName;
@property(getter=isAccountNameEditable,assign,readwrite) bool accountNameEditable;
@property(assign,readwrite) long long accountScope;
@property(assign,readwrite) bool allowsBioAuthentication;
@property(assign,readwrite) bool allowsBootstrapCellularData;
@property(assign,readwrite) bool allowsRetry;
@property(assign,readwrite) bool canCreateNewAccount;
@property(assign,readwrite) bool canSetActiveAccount;
@property(assign,copy) NSString * clientIdentifierHeader;
@property(assign,copy) NSString * debugDescription;
@property(getter=isDemoAccount,assign,readwrite) bool demoAccount;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool displaysOnLockScreen;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * initialPassword;
@property(assign,readwrite) bool persistsAcrossDeviceLock;
@property(assign,readwrite) bool persistsPasswordFallback;
@property(assign,copy) NSString * preferredITunesStoreClient;
@property(assign,readwrite) long long promptStyle;
@property(assign,copy) NSString * reasonDescription;
@property(assign,copy) NSDictionary * requestParameters;
@property(assign,retain) NSNumber * requiredUniqueIdentifier;
@property(assign,readwrite) bool shouldCreateNewSession;
@property(assign,readwrite) bool shouldFollowAccountButtons;
@property(assign,readwrite) bool shouldIgnoreProtocol;
@property(assign,readwrite) bool shouldSuppressDialogs;
@property(assign,copy) NSDictionary * signupRequestParameters;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) long long tokenType;
@property(assign,copy) NSArray * userAgentComponents;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountNameEditable:(bool)arg1;
- (void)setAccountScope:(long long)arg1;
- (void)setAllowsBioAuthentication:(bool)arg1;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setAllowsRetry:(bool)arg1;
- (void)setCanCreateNewAccount:(bool)arg1;
- (void)setCanSetActiveAccount:(bool)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setDemoAccount:(bool)arg1;
- (void)setDisplaysOnLockScreen:(bool)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setInitialPassword:(id)arg1;
- (void)setPersistsAcrossDeviceLock:(bool)arg1;
- (void)setPersistsPasswordFallback:(bool)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setPromptStyle:(long long)arg1;
- (void)setReasonDescription:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setShouldCreateNewSession:(bool)arg1;
- (void)setShouldFollowAccountButtons:(bool)arg1;
- (void)setShouldIgnoreProtocol:(bool)arg1;
- (void)setShouldSuppressDialogs:(bool)arg1;
- (void)setSignupRequestParameters:(id)arg1;
- (void)setTokenType:(long long)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValuesWithAccount:(id)arg1;

@end
