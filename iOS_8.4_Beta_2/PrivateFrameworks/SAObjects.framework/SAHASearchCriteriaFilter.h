/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHASearchCriteriaFilter : SAHAFilter

@property(assign,copy) NSString * attribute;
@property(assign,copy) NSString * entityType;
@property(assign,copy) NSString * groupName;
@property(assign,copy) NSString * homeName;
@property(assign,copy) NSString * roomName;
@property(assign,copy) NSString * sceneName;
@property(assign,copy) NSString * serviceName;
@property(assign,copy) NSString * serviceType;
@property(assign,copy) NSString * zoneName;

+ (id)searchCriteriaFilter;
+ (id)searchCriteriaFilterWithDictionary:(id)arg1 context:(id)arg2;

- (id)attribute;
- (id)encodedClassName;
- (id)entityType;
- (id)groupIdentifier;
- (id)groupName;
- (id)homeName;
- (id)roomName;
- (id)sceneName;
- (id)serviceName;
- (id)serviceType;
- (void)setAttribute:(id)arg1;
- (void)setEntityType:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHomeName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSceneName:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)zoneName;

@end
