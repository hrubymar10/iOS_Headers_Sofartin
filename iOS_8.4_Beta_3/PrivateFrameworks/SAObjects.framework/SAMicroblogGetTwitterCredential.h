/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property(assign,copy) NSString * consumerKey;
@property(assign,copy) NSString * consumerSecret;

+ (id)getTwitterCredential;
+ (id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)consumerKey;
- (id)consumerSecret;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setConsumerKey:(id)arg1;
- (void)setConsumerSecret:(id)arg1;

@end