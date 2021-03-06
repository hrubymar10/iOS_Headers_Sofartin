/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAOrCondition : AceObject <SASupportCondition>

@property(assign,copy) NSArray * conditions;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)orCondition;
+ (id)orConditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)conditions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setConditions:(id)arg1;

@end
