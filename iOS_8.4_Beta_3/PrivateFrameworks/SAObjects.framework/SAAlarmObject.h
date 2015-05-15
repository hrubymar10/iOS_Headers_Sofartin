/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmObject : SADomainObject

@property(assign,copy) NSNumber * enabled;
@property(assign,copy) NSArray * frequency;
@property(assign,copy) NSNumber * hour;
@property(assign,copy) NSString * label;
@property(assign,copy) NSNumber * minute;
@property(assign,copy) NSNumber * relativeOffsetMinutes;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)enabled;
- (id)encodedClassName;
- (id)frequency;
- (id)groupIdentifier;
- (id)hour;
- (id)label;
- (id)minute;
- (id)relativeOffsetMinutes;
- (void)setEnabled:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinute:(id)arg1;
- (void)setRelativeOffsetMinutes:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
