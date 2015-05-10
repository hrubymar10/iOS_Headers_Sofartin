/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherCondition : AceObject <SAAceSerializable>

@property(assign,copy) NSString * conditionCode;
@property(assign,readwrite) long long conditionCodeIndex;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)condition;
+ (id)conditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)conditionCode;
- (long long)conditionCodeIndex;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setConditionCode:(id)arg1;
- (void)setConditionCodeIndex:(long long)arg1;

@end
