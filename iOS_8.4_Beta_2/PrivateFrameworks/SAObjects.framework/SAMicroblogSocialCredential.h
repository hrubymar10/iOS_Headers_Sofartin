/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property(assign,copy) NSString * accessToken;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * personalizationPermission;
@property(assign,copy) NSString * socialNetwork;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * tokenSecret;

+ (id)socialCredential;
+ (id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)accessToken;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)personalizationPermission;
- (void)setAccessToken:(id)arg1;
- (void)setPersonalizationPermission:(id)arg1;
- (void)setSocialNetwork:(id)arg1;
- (void)setTokenSecret:(id)arg1;
- (id)socialNetwork;
- (id)tokenSecret;

@end
