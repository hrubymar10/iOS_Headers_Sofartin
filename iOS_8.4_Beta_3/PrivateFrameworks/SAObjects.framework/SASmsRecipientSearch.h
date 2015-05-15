/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsRecipientSearch : SADomainCommand

@property (nonatomic, copy) NSArray *recipients;

+ (id)recipientSearch;
+ (id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipients;
- (bool)requiresResponse;
- (void)setRecipients:(id)arg1;

@end
