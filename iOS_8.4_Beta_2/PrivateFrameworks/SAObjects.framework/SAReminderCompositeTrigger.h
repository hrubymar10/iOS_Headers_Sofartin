/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property(assign,retain) SAReminderDateTimeTrigger * dateTimeTrigger;
@property(assign,retain) SAReminderLocationTrigger * locationTrigger;

+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)dateTimeTrigger;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locationTrigger;
- (void)setDateTimeTrigger:(id)arg1;
- (void)setLocationTrigger:(id)arg1;

@end