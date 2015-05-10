/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLXPCService : PLService {
    NSArray *_clientIDs;
    NSDictionary *_clientNames;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    NSDictionary *_permissionCache;
    NSMutableDictionary *_registeredListeners;
    NSMutableDictionary *_registeredResponders;
    PLNSNotificationOperatorComposition *_registrationNotification;
    PLNSTimerOperatorComposition *_resetPermissionsForClientsTimer;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property(assign,retain) NSArray * clientIDs;
@property(assign,retain) NSDictionary * clientNames;
@property(assign,retain) PLNSNotificationOperatorComposition * dailyTaskNotification;
@property(assign,retain) NSDictionary * permissionCache;
@property(assign,retain) NSMutableDictionary * registeredListeners;
@property(assign,retain) NSMutableDictionary * registeredResponders;
@property(assign,retain) PLNSNotificationOperatorComposition * registrationNotification;
@property(assign,retain) PLNSTimerOperatorComposition * resetPermissionsForClientsTimer;
@property(assign,retain) NSObject<OS_xpc_object> * xpcConnection;

+ (id)defaults;
+ (id)entryAggregateDefinitionXPCEvent;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionClientLogging;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)clientIDs;
- (id)clientNames;
- (id)dailyTaskNotification;
- (void)dailyTasks;
- (void)handlePeer:(id)arg1 forEvent:(id)arg2;
- (void)handlePeerListenerEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (void)handlePeerResponderEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6;
- (void)handlePeerShouldLogEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5;
- (id)init;
- (void)initOperatorDependancies;
- (void)logMessage:(id)arg1 withPayload:(id)arg2;
- (id)permissionCache;
- (short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withProcessName:(id)arg4;
- (id)registeredListeners;
- (id)registeredOperatorFromDictionary:(id)arg1 forMessage:(id)arg2;
- (id)registeredResponders;
- (id)registrationNotification;
- (void)resetPermissionsForClients;
- (id)resetPermissionsForClientsTimer;
- (void)respondToEvent:(id)arg1 withResponse:(id)arg2;
- (void)setClientIDs:(id)arg1;
- (void)setClientNames:(id)arg1;
- (void)setDailyTaskNotification:(id)arg1;
- (void)setPermissionCache:(id)arg1;
- (void)setRegisteredListeners:(id)arg1;
- (void)setRegisteredResponders:(id)arg1;
- (void)setRegistrationNotification:(id)arg1;
- (void)setResetPermissionsForClientsTimer:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
