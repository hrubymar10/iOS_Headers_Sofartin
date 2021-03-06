/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConstraintSupport : AceObject <SAAceSerializable>

@property(assign,retain) <SASupportCondition> * condition;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * property;
@property(assign,readonly) Class superclass;

+ (id)constraintSupport;
+ (id)constraintSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)condition;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)property;
- (void)setCondition:(id)arg1;
- (void)setProperty:(id)arg1;

@end
