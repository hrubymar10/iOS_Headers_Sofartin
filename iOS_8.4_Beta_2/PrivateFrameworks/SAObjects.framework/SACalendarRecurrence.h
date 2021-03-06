/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) long long endCount;
@property(assign,copy) NSDate * endDate;
@property(assign,readwrite) int frequency;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long interval;
@property(assign,readonly) Class superclass;

+ (id)recurrence;
+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)endCount;
- (id)endDate;
- (int)frequency;
- (id)groupIdentifier;
- (long long)interval;
- (void)setEndCount:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(long long)arg1;

@end
