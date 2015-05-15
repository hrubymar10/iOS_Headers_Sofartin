/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>

@property(assign,retain) SAAlarmObject * alarmToCreate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmToCreate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAlarmToCreate:(id)arg1;

@end