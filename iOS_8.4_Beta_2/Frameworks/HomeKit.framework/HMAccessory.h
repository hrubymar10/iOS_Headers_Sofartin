/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessory : NSObject <HMMessageReceiver, NSSecureCoding> {
    bool _blocked;
    bool _bridgedAccessory;
    <HMAccessoryDelegate> *_delegate;
    HMHome *_home;
    NSArray *_identifiersForBridgedAccessories;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    bool _paired;
    bool _reachable;
    HMRoom *_room;
    NSArray *_services;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(getter=isBlocked,assign,readwrite) bool blocked;
@property(getter=isBridged,assign,readonly) bool bridged;
@property(assign,readwrite) bool bridgedAccessory;
@property(getter=isConfigured,assign,readonly) bool configured;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <HMAccessoryDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) HMHome * home;
@property(assign,copy) NSUUID * identifier;
@property(assign,copy) NSArray * identifiersForBridgedAccessories;
@property(assign,readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(assign,readonly) NSUUID * messageTargetUUID;
@property(assign,retain) HMMessageDispatcher * msgDispatcher;
@property(assign,copy) NSString * name;
@property(assign,readwrite) bool paired;
@property(getter=isReachable,assign,readwrite) bool reachable;
@property(assign,readwrite) HMRoom * room;
@property(assign,copy) NSArray * services;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSUUID * uuid;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;
- (void)_handleCharacteristicValueUpdated:(id)arg1;
- (void)_handleCharacteristicsUpdated:(id)arg1;
- (void)_handleConnectivityChanged:(id)arg1;
- (void)_handleRenamed:(id)arg1;
- (void)_handleServiceRenamed:(id)arg1;
- (void)_handleServiceTypeAssociated:(id)arg1;
- (void)_handleServicesUpdated:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (void)_registerNotificationHandlers;
- (bool)bridgedAccessory;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (void)configureMessageDispatcher:(id)arg1;
- (void)copyFrom:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)enableNotification:(bool)arg1 forCharacteristic:(id)arg2 completionHandler:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findService:(id)arg1;
- (void)handleMultipleCharacteristicsUpdated:(id)arg1;
- (id)home;
- (id)identifier;
- (id)identifiersForBridgedAccessories;
- (void)identifyWithCompletionHandler:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBlocked;
- (bool)isBridged;
- (bool)isConfigured;
- (bool)isReachable;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)migrateDelegateToAccessory:(id)arg1 withCompletion:(id)arg2;
- (id)msgDispatcher;
- (id)name;
- (bool)paired;
- (void)readValueForCharacteristic:(id)arg1 completionHandler:(id)arg2;
- (id)room;
- (id)services;
- (void)setBlocked:(bool)arg1;
- (void)setBridgedAccessory:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifiersForBridgedAccessories:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotifyValue:(bool)arg1 forCharacteristic:(id)arg2;
- (void)setPaired:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (void)setRoom:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)unconfigure;
- (void)updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(id)arg3;
- (void)updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(id)arg4;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (void)updateName:(id)arg1 forService:(id)arg2 completionHandler:(id)arg3;
- (void)updateRoom:(id)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)workQueue;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(id)arg3;

@end
