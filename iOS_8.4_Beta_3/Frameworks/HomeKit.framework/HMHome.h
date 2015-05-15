/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHome : NSObject <HMMessageReceiver, NSSecureCoding> {
    NSArray *_actions;
    NSMutableArray *_currentAccessories;
    NSMutableArray *_currentActionSets;
    NSMutableArray *_currentActions;
    NSMutableArray *_currentRooms;
    NSMutableArray *_currentServiceGroups;
    NSMutableArray *_currentTriggers;
    NSMutableArray *_currentUsers;
    NSMutableArray *_currentZones;
    <HMHomeDelegate> *_delegate;
    HMRoom *_homeAsRoom;
    HMHomeManager *_homeManager;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    HMPendingRequests *_pendingRequests;
    bool _primary;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, retain) NSMutableArray *currentAccessories;
@property (nonatomic, retain) NSMutableArray *currentActionSets;
@property (nonatomic, retain) NSMutableArray *currentActions;
@property (nonatomic, retain) NSMutableArray *currentRooms;
@property (nonatomic, retain) NSMutableArray *currentServiceGroups;
@property (nonatomic, retain) NSMutableArray *currentTriggers;
@property (nonatomic, retain) NSMutableArray *currentUsers;
@property (nonatomic, retain) NSMutableArray *currentZones;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMHomeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMRoom *homeAsRoom;
@property (nonatomic) HMHomeManager *homeManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HMPendingRequests *pendingRequests;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic, readonly, copy) NSArray *rooms;
@property (nonatomic, readonly, copy) NSArray *serviceGroups;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *triggers;
@property (nonatomic, readonly, copy) NSArray *users;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly, copy) NSArray *zones;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addUser:(id)arg1 privilege:(unsigned long long)arg2 confirm:(bool)arg3 completionHandler:(id)arg4;
- (id)_createFailedAccessoriesListFromError:(id)arg1;
- (void)_handleBlockedStateNotification:(id)arg1;
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;
- (void)_handlePairedAccessoryErrorNotification:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_removeServices:(id)arg1;
- (void)_removeUser:(id)arg1 confirm:(bool)arg2 completionHandler:(id)arg3;
- (id)accessories;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSets;
- (id)actions;
- (void)addAccessory:(id)arg1 completionHandler:(id)arg2;
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)addActionSetWithName:(id)arg1 completionHandler:(id)arg2;
- (void)addRoomWithName:(id)arg1 completionHandler:(id)arg2;
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(id)arg2;
- (void)addTrigger:(id)arg1 completionHandler:(id)arg2;
- (void)addUserWithCompletionHandler:(id)arg1;
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)addZoneWithName:(id)arg1 completionHandler:(id)arg2;
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(id)arg3;
- (void)configure:(id)arg1 uuid:(id)arg2 primary:(bool)arg3 messageDispatcher:(id)arg4 pendingRequests:(id)arg5;
- (id)currentAccessories;
- (id)currentActionSets;
- (id)currentActions;
- (id)currentRooms;
- (id)currentServiceGroups;
- (id)currentTriggers;
- (id)currentUsers;
- (id)currentZones;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(id)arg2;
- (void)getPrivilegeForUser:(id)arg1 completionHandler:(id)arg2;
- (void)handleAccessoryAddedNotification:(id)arg1;
- (void)handleAccessoryRemovedNotification:(id)arg1;
- (void)handleActionSetAddedNotification:(id)arg1;
- (void)handleActionSetRemovedNotification:(id)arg1;
- (void)handleHomeRenamedNotification:(id)arg1;
- (void)handleRoomAddedNotification:(id)arg1;
- (void)handleRoomRemovedNotification:(id)arg1;
- (void)handleServiceGroupAddedNotification:(id)arg1;
- (void)handleServiceGroupRemovedNotification:(id)arg1;
- (void)handleTriggerAddedNotification:(id)arg1;
- (void)handleTriggerRemovedNotification:(id)arg1;
- (void)handleUserAddedNotification:(id)arg1;
- (void)handleUserRemovedNotification:(id)arg1;
- (void)handleZoneAddedNotification:(id)arg1;
- (void)handleZoneRemovedNotification:(id)arg1;
- (id)homeAsRoom;
- (id)homeManager;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (bool)isPrimary;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)migrateDelegatesToHome:(id)arg1 withCompletion:(id)arg2;
- (id)msgDispatcher;
- (id)name;
- (id)pendingRequests;
- (void)readCharacteristicValues:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(id)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(id)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(id)arg2;
- (void)removeServiceGroup:(id)arg1 completionHandler:(id)arg2;
- (void)removeServices:(id)arg1;
- (void)removeTrigger:(id)arg1 completionHandler:(id)arg2;
- (void)removeUser:(id)arg1 completionHandler:(id)arg2;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(id)arg2;
- (void)removeZone:(id)arg1 completionHandler:(id)arg2;
- (id)roomForEntireHome;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)serviceGroups;
- (id)servicesWithTypes:(id)arg1;
- (void)setCurrentAccessories:(id)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (void)setCurrentActions:(id)arg1;
- (void)setCurrentRooms:(id)arg1;
- (void)setCurrentServiceGroups:(id)arg1;
- (void)setCurrentTriggers:(id)arg1;
- (void)setCurrentUsers:(id)arg1;
- (void)setCurrentZones:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeAsRoom:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggers;
- (void)unblockAccessory:(id)arg1 completionHandler:(id)arg2;
- (void)unconfigureHome;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (id)users;
- (id)uuid;
- (id)workQueue;
- (void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(id)arg2;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zones;

@end
