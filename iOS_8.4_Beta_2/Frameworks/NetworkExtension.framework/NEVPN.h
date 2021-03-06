/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPN : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool _enabled;
    bool _onDemandEnabled;
    NSArray *_onDemandRules;
    NEVPNProtocol *_protocol;
}

@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(getter=isOnDemandEnabled,assign,readwrite) bool onDemandEnabled;
@property(assign,copy) NSArray * onDemandRules;
@property(assign,copy) NEVPNProtocol * protocol;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyProfileDictionaryWithCertificateUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isOnDemandEnabled;
- (id)onDemandRules;
- (id)protocol;
- (void)setEnabled:(bool)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
