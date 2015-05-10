/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * linkedAnswers;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;

+ (id)linkedAnswerGroup;
+ (id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkedAnswers;
- (void)setLinkedAnswers:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
