/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPv6Settings : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString *_address;
    long long _configMethod;
    int _prefixLength;
    NSString *_router;
}

@property(assign,copy) NSString * address;
@property(assign,readwrite) long long configMethod;
@property(assign,readwrite) int prefixLength;
@property(assign,copy) NSString * router;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (long long)configMethod;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)prefixLength;
- (id)router;
- (void)setAddress:(id)arg1;
- (void)setConfigMethod:(long long)arg1;
- (void)setPrefixLength:(int)arg1;
- (void)setRouter:(id)arg1;

@end
