/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * recipientsTo;
@property(assign,copy) NSString * subject;
@property(assign,readonly) Class superclass;

+ (id)emailPayload;
+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipientsTo;
- (void)setRecipientsTo:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;

@end
