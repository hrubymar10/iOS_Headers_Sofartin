/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAccount : NSObject {
    _IDSAccount *_internal;
}

@property(assign,retain) NSDictionary * accountInfo;
@property(assign,readonly) int accountType;
@property(assign,retain) NSArray * aliasStrings;
@property(assign,retain) NSArray * aliases;
@property(assign,readonly) bool canSend;
@property(assign,readonly) NSDate * dateRegistered;
@property(assign,retain) NSArray * devices;
@property(assign,retain) NSString * displayName;
@property(assign,readonly) bool isActive;
@property(assign,retain) NSString * loginID;
@property(assign,retain) NSArray * nearbyDevices;
@property(assign,readonly) NSDate * nextRegistrationDate;
@property(assign,retain) NSString * primaryServiceName;
@property(assign,readonly) NSString * profileID;
@property(assign,retain) NSDictionary * profileInfo;
@property(assign,readonly) NSData * pushToken;
@property(assign,readonly) NSString * regionBasePhoneNumber;
@property(assign,readonly) NSString * regionID;
@property(assign,readonly) NSDictionary * regionServerContext;
@property(assign,readonly) NSArray * registeredURIs;
@property(assign,readonly) NSData * registrationCertificate;
@property(assign,readonly) int registrationStatus;
@property(assign,retain) NSString * serviceName;
@property(assign,retain) NSString * uniqueID;
@property(assign,retain) NSArray * vettedAliases;

- (void)_callNearbyDevicesChanged;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)_internal;
- (bool)_isEnabled;
- (void)_reregisterAndReidentify:(bool)arg1;
- (void)_setIsEnabled:(bool)arg1;
- (id)accountInfo;
- (int)accountType;
- (void)addAliases:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (id)aliasStrings;
- (id)aliases;
- (void)authenticateAccount;
- (bool)canSend;
- (id)dateRegistered;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)description;
- (id)devices;
- (id)displayName;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (bool)isActive;
- (id)loginID;
- (id)nearbyDevices;
- (id)nextRegistrationDate;
- (void)passwordUpdated;
- (id)primaryServiceName;
- (id)profileID;
- (id)profileInfo;
- (id)pushToken;
- (id)regionBasePhoneNumber;
- (id)regionID;
- (id)regionServerContext;
- (void)registerAccount;
- (id)registeredURIs;
- (id)registrationCertificate;
- (int)registrationStatus;
- (void)removeAliases:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (id)serviceName;
- (void)setAccountInfo:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setLoginID:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)uniqueID;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateAliases:(id)arg1;
- (void)validateProfile;
- (id)vettedAliases;

@end
