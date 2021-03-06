/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConstraintDefinition : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSArray * supportedValues;
@property(assign,copy) NSString * type;

+ (id)constraintDefinition;
+ (id)constraintDefinitionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSupportedValues:(id)arg1;
- (void)setType:(id)arg1;
- (id)supportedValues;
- (id)type;

@end
