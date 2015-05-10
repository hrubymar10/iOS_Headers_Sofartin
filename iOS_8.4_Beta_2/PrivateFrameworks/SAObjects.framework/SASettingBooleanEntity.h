/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingBooleanEntity : SASettingEntity

@property(assign,copy) NSNumber * previousValue;
@property(assign,readwrite) bool value;

+ (id)booleanEntity;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntityWithValue:(bool)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithValue:(bool)arg1;
- (id)previousValue;
- (void)setPreviousValue:(id)arg1;
- (void)setValue:(bool)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (bool)value;

@end
