/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEOnDemandRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSArray *_DNSSearchDomainMatch;
    NSArray *_DNSServerAddressMatch;
    NSArray *_SSIDMatch;
    long long _action;
    long long _interfaceTypeMatch;
    NSURL *_probeURL;
}

@property(assign,copy) NSArray * DNSSearchDomainMatch;
@property(assign,copy) NSArray * DNSServerAddressMatch;
@property(assign,copy) NSArray * SSIDMatch;
@property(assign,readonly) long long action;
@property(assign,readwrite) long long interfaceTypeMatch;
@property(assign,copy) NSURL * probeURL;

+ (id)createOnDemandRulesFromLegacyDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSSearchDomainMatch;
- (id)DNSServerAddressMatch;
- (id)SSIDMatch;
- (long long)action;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithAction:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interfaceTypeMatch;
- (id)probeURL;
- (void)setDNSSearchDomainMatch:(id)arg1;
- (void)setDNSServerAddressMatch:(id)arg1;
- (void)setInterfaceTypeMatch:(long long)arg1;
- (void)setProbeURL:(id)arg1;
- (void)setSSIDMatch:(id)arg1;

@end
