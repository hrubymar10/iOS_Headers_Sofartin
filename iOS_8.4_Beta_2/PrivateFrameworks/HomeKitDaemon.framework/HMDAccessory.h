/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessory : NSObject <HAPAccessoryDelegate, HMMessageReceiver, NSSecureCoding> {
    HMDAccessoryManager *_accessoryManager;
    bool _blocked;
    HMDAccessory *_bridge;
    NSString *_configurationAppIdentifier;
    NSMutableArray *_discoveredServices;
    HAPAccessory *_hapAccessory;
    HMDHome *_home;
    NSString *_identifier;
    NSMutableSet *_identifiersForBridgedAccessories;
    long long _linkType;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    bool _paired;
    NSObject<OS_dispatch_source> *_pairingRetryTimer;
    NSString *_pairingUsername;
    bool _primary;
    NSString *_providedName;
    NSData *_publicKey;
    bool _reachable;
    bool _remoteAccessEnabled;
    HMDRoom *_room;
    bool _unblockPending;
    NSString *_uniqueIdentifier;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,readwrite) HMDAccessoryManager * accessoryManager;
@property(getter=isBlocked,assign,readwrite) bool blocked;
@property(assign,readwrite) HMDAccessory * bridge;
@property(assign,retain) NSString * configurationAppIdentifier;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSMutableArray * discoveredServices;
@property(assign,retain) HAPAccessory * hapAccessory;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) HMDHome * home;
@property(assign,retain) NSString * identifier;
@property(assign,retain) NSMutableSet * identifiersForBridgedAccessories;
@property(assign,readonly) long long linkType;
@property(assign,readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(assign,readonly) NSUUID * messageTargetUUID;
@property(assign,retain) HMMessageDispatcher * msgDispatcher;
@property(getter=getName,assign,copy) NSString * name;
@property(getter=isPaired,assign,readwrite) bool paired;
@property(assign,retain) NSObject<OS_dispatch_source> * pairingRetryTimer;
@property(assign,retain) NSString * pairingUsername;
@property(getter=isPrimary,assign,readwrite) bool primary;
@property(assign,retain) NSString * providedName;
@property(assign,retain) NSData * publicKey;
@property(getter=isReachable,assign,readwrite) bool reachable;
@property(getter=isRemoteAccessEnabled,assign,readwrite) bool remoteAccessEnabled;
@property(assign,retain) HMDRoom * room;
@property(assign,readonly) NSString * serverIdentifier;
@property(assign,copy) NSArray * services;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool supportsGroupedRequests;
@property(assign,readwrite) bool unblockPending;
@property(assign,retain) NSString * uniqueIdentifier;
@property(assign,readonly) NSUUID * uuid;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

+ (id)serviceFilterSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enableNotificationForCharacteristic:(id)arg1 message:(id)arg2;
- (void)_handleCharacteristicEnableNotification:(id)arg1;
- (void)_handleCharacteristicRead:(id)arg1;
- (void)_handleCharacteristicWrite:(id)arg1;
- (void)_handleIdentify:(id)arg1;
- (void)_handlePrepareCharacteristicRead:(id)arg1;
- (void)_handlePrepareCharacteristicWrite:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_handleRenameService:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateAuthorizationData:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (bool)_isPaired;
- (bool)_isReachable;
- (void)_notifyCharacteristicNotificationChanges:(id)arg1 message:(id)arg2;
- (void)_notifyConnectivityChangedWithReachabilityState:(bool)arg1 remoteAccessChanged:(bool)arg2;
- (id)_populateServices:(id*)arg1;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)_readValueForCharacteristic:(id)arg1 messageIdentifier:(id)arg2 responseHandler:(id)arg3;
- (void)_registerForMessages;
- (void)_remoteAccessEnabled:(bool)arg1;
- (void)_resetCharacteristicNotifications;
- (void)_sendBlockedNotification:(bool)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(id)arg4;
- (void)_setHAPAccessory:(id)arg1;
- (void)_setPaired:(bool)arg1;
- (void)_setReachable:(bool)arg1;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4 queue:(id)arg5 completionHandler:(id)arg6;
- (void)accessoryDidBecomeReachable:(id)arg1;
- (void)accessoryDidBecomeUnreachable:(id)arg1;
- (id)accessoryManager;
- (void)addBridgedAccessory:(id)arg1;
- (void)blockWithError:(id)arg1;
- (id)bridge;
- (id)configurationAppIdentifier;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryManager:(id)arg3;
- (void)configureWithAccessory:(id)arg1 forRemoval:(bool)arg2;
- (void)configureWithAccessory:(id)arg1 forRemoval:(bool)arg2 queue:(id)arg3 completion:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)descriptionNonBlocking;
- (void)didEncounterError:(id)arg1;
- (id)discoveredServices;
- (void)encodeWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2;
- (id)findService:(id)arg1;
- (id)getConfiguredName;
- (id)getName;
- (id)hapAccessory;
- (id)hapCharacteristicWriteTuples:(id)arg1 hmdResponseTuples:(id*)arg2 mapping:(id*)arg3;
- (unsigned long long)hash;
- (id)hmdCharacteristicFromHapCharacteristic:(id)arg1;
- (id)hmdCharacteristicResponses:(id)arg1 mapping:(id)arg2 overallError:(id)arg3;
- (id)home;
- (id)identifier;
- (id)identifiersForBridgedAccessories;
- (id)initWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isBlocked;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (bool)isPrimary;
- (bool)isReachable;
- (bool)isRemoteAccessEnabled;
- (long long)linkType;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)notifyValue:(id)arg1 error:(id)arg2 identifier:(id)arg3 forCharacteristic:(id)arg4 completionHandler:(id)arg5;
- (id)pairingRetryTimer;
- (id)pairingUsername;
- (id)providedName;
- (id)publicKey;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)registerForIdentifyWithMessageDispatcher:(id)arg1;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)remoteAccessEnabled:(bool)arg1;
- (void)removeBridgedAccessory:(id)arg1;
- (id)room;
- (void)savePublicKeyToKeychain;
- (id)serverIdentifier;
- (id)services;
- (void)setAccessoryManager:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setBridge:(id)arg1;
- (void)setConfigurationAppIdentifier:(id)arg1;
- (void)setDiscoveredServices:(id)arg1;
- (void)setHapAccessory:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifiersForBridgedAccessories:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setPairingRetryTimer:(id)arg1;
- (void)setPairingUsername:(id)arg1;
- (void)setPairingUsername:(id)arg1 publicKey:(id)arg2;
- (void)setPrimary:(bool)arg1;
- (void)setProvidedName:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setRemoteAccessEnabled:(bool)arg1;
- (void)setRoom:(id)arg1;
- (void)setUnblockPending:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)supportsGroupedRequests;
- (bool)unblockPending;
- (void)unblockWithIdentifier:(id)arg1 withCompletion:(id)arg2;
- (id)uniqueIdentifier;
- (void)updateReachability:(bool)arg1;
- (void)updateRoom:(id)arg1;
- (id)uuid;
- (id)workQueue;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;

@end
