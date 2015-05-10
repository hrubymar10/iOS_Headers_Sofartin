/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogSetMicroblogCredential : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,retain) SAMicroblogSocialCredential * socialCredential;
@property(assign,readonly) Class superclass;

+ (id)setMicroblogCredential;
+ (id)setMicroblogCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSocialCredential:(id)arg1;
- (id)socialCredential;

@end
