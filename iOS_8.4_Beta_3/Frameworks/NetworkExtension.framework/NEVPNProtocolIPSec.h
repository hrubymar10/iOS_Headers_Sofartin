/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolIPSec : NEVPNProtocol {
    NEDNSSettings *_DNSSettings;
    long long _authenticationMethod;
    NSArray *_legacyExchangeMode;
    NSArray *_legacyProposals;
    NSString *_localIdentifier;
    NSString *_remoteIdentifier;
    NEKeychainItem *_sharedSecretKeychainItem;
    NSData *_sharedSecretReference;
    bool _useExtendedAuthentication;
}

@property(assign,copy) NEDNSSettings * DNSSettings;
@property(assign,readwrite) long long authenticationMethod;
@property(assign,copy) NSArray * legacyExchangeMode;
@property(assign,copy) NSArray * legacyProposals;
@property(assign,copy) NSString * localIdentifier;
@property(assign,copy) NSString * remoteIdentifier;
@property(assign,copy) NEKeychainItem * sharedSecretKeychainItem;
@property(assign,copy) NSData * sharedSecretReference;
@property(assign,readwrite) bool useExtendedAuthentication;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSSettings;
- (long long)authenticationMethod;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)legacyExchangeMode;
- (id)legacyProposals;
- (id)localIdentifier;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (id)remoteIdentifier;
- (void)removeKeychainItemsInDomain:(long long)arg1;
- (void)setAuthenticationMethod:(long long)arg1;
- (void)setDNSSettings:(id)arg1;
- (void)setLegacyExchangeMode:(id)arg1;
- (void)setLegacyProposals:(id)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setRemoteIdentifier:(id)arg1;
- (bool)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setSharedSecretKeychainItem:(id)arg1;
- (void)setSharedSecretReference:(id)arg1;
- (void)setUseExtendedAuthentication:(bool)arg1;
- (id)sharedSecretKeychainItem;
- (id)sharedSecretReference;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (bool)useExtendedAuthentication;

@end
