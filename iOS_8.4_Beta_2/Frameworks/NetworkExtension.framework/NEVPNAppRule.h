/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNAppRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString *_identifier;
    NSArray *_matchAccountIdentifiers;
    NSArray *_matchDomains;
    NSArray *_matchExecutables;
}

@property(assign,readonly) NSString * identifier;
@property(assign,copy) NSArray * matchAccountIdentifiers;
@property(assign,copy) NSArray * matchDomains;
@property(assign,copy) NSArray * matchExecutables;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)matchAccountIdentifiers;
- (id)matchDomains;
- (id)matchExecutables;
- (bool)overlapsWithRule:(id)arg1;
- (void)setMatchAccountIdentifiers:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setMatchExecutables:(id)arg1;

@end
