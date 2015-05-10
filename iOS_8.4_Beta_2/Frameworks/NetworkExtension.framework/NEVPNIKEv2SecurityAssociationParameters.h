/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long _diffieHellmanGroup;
    long long _encryptionAlgorithm;
    long long _integrityAlgorithm;
    int _lifetimeMinutes;
}

@property(assign,readwrite) long long diffieHellmanGroup;
@property(assign,readwrite) long long encryptionAlgorithm;
@property(assign,readwrite) long long integrityAlgorithm;
@property(assign,readwrite) int lifetimeMinutes;

+ (bool)supportsSecureCoding;

- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (long long)diffieHellmanGroup;
- (void)encodeWithCoder:(id)arg1;
- (long long)encryptionAlgorithm;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)integrityAlgorithm;
- (int)lifetimeMinutes;
- (void)setDiffieHellmanGroup:(long long)arg1;
- (void)setEncryptionAlgorithm:(long long)arg1;
- (void)setIntegrityAlgorithm:(long long)arg1;
- (void)setLifetimeMinutes:(int)arg1;

@end
