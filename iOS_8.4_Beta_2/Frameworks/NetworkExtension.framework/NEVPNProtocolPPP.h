/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolPPP : NEVPNProtocol {
    NEDNSSettings *_DNSSettings;
    NEIPv4Settings *_IPv4Settings;
    NEIPv6Settings *_IPv6Settings;
    long long _authenticationMethod;
    bool _verboseLoggingEnabled;
}

@property(assign,copy) NEDNSSettings * DNSSettings;
@property(assign,copy) NEIPv4Settings * IPv4Settings;
@property(assign,copy) NEIPv6Settings * IPv6Settings;
@property(assign,readwrite) long long authenticationMethod;
@property(assign,readwrite) bool verboseLoggingEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSSettings;
- (id)IPv4Settings;
- (id)IPv6Settings;
- (long long)authenticationMethod;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)setAuthenticationMethod:(long long)arg1;
- (void)setDNSSettings:(id)arg1;
- (void)setIPv4Settings:(id)arg1;
- (void)setIPv6Settings:(id)arg1;
- (bool)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setVerboseLoggingEnabled:(bool)arg1;
- (bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (bool)verboseLoggingEnabled;

@end
