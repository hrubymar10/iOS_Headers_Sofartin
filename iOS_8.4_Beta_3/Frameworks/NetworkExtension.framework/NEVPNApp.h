/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNApp : NEVPN {
    NSArray *_appRules;
}

@property (copy) NSArray *appRules;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appRules;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (id)copyAppRuleIDs;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)removeAppRuleByID:(id)arg1;
- (void)setAppRules:(id)arg1;

@end
