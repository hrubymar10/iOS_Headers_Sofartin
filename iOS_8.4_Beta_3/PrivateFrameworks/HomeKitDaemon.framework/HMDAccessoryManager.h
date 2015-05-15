/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryManager : NSObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate> {
    NSMutableArray *_accessoryServerBrowsers;
    NSMapTable *_addAccessoryCompletionHandlersForAccessoryServers;
    HAPAccessoryServerBrowserBTLE *_btleAccessoryServerBrowser;
    NSHashTable *_currentlyPairingAccessories;
    NSMapTable *_delegates;
    HAPAccessoryServerBrowserIP *_ipAccessoryServerBrowser;
    NSMutableSet *_pairedAccessories;
    NSMapTable *_pairingRetryTimersForAccessoryServers;
    NSObject<OS_dispatch_source> *_reachabilityTimerForBTLE;
    NSHashTable *_removeAccessoryInProgressForHMDAccessories;
    NSMapTable *_retrievalCompletionTuplesForAccessories;
    NSMutableSet *_unpairedAccessories;
    NSHashTable *_unpairedSecondaryHAPAccessories;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) NSMutableArray *accessoryServerBrowsers;
@property (nonatomic, retain) NSMapTable *addAccessoryCompletionHandlersForAccessoryServers;
@property (nonatomic, retain) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser;
@property (nonatomic, retain) NSHashTable *currentlyPairingAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser;
@property (nonatomic, retain) NSMutableSet *pairedAccessories;
@property (nonatomic, retain) NSMapTable *pairingRetryTimersForAccessoryServers;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE;
@property (nonatomic, retain) NSHashTable *removeAccessoryInProgressForHMDAccessories;
@property (nonatomic, retain) NSMapTable *retrievalCompletionTuplesForAccessories;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *unpairedAccessories;
@property (nonatomic, retain) NSHashTable *unpairedSecondaryHAPAccessories;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)_accessoryServerIsBlocked:(id)arg1;
- (void)_addUnpairedAccessoryForServer:(id)arg1;
- (id)_allAccessories;
- (id)_createNewlyPairedSecondaryAccessoriesWithIdentifier:(id)arg1;
- (void)_createPairedAccessoriesForUnpairedAccessory:(id)arg1 server:(id)arg2;
- (id)_dequeueAllRetrievalCompletionTuplesForAccessory:(id)arg1;
- (void)_disablePairedAccessoriesForServer:(id)arg1 error:(id)arg2;
- (void)_enqueueRetrievalCompletionTuple:(id)arg1 forAccessory:(id)arg2;
- (bool)_isRetrievalInProgressForAccessory:(id)arg1;
- (void)_notifyDelegatesOfNewAccessory:(id)arg1;
- (void)_notifyDelegatesOfPairedAccessories:(id)arg1 addedToBridgeAccessory:(id)arg2;
- (void)_notifyDelegatesOfPairedAccessories:(id)arg1 removedFromBridgeAccessory:(id)arg2;
- (void)_notifyDelegatesOfRemovedNewAccessory:(id)arg1;
- (void)_pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 completionHandler:(id)arg4;
- (id)_pairedAccessoriesForServer:(id)arg1;
- (id)_primaryAccessoryForServer:(id)arg1;
- (void)_promptForPairingPasswordForServer:(id)arg1;
- (void)_removeAccessoriesForPrimaryAccessory:(id)arg1 completionHandler:(id)arg2;
- (void)_removeAccessory:(id)arg1 completionHandler:(id)arg2;
- (void)_removeReachableAccessory:(id)arg1 completionHandler:(id)arg2;
- (void)_removeUnpairedAccessory:(id)arg1;
- (void)_retrieveHAPAccessoryForHMDAccessory:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)_sendPairingCompletionStatusForServer:(id)arg1 accessories:(id)arg2 error:(id)arg3;
- (void)_sendRemoveCompletionStatusForHMDAccessories:(id)arg1 withCompletion:(id)arg2 error:(id)arg3;
- (void)_setBTLEPowerChangeCompletionHandler;
- (void)_startDiscoveringAccessories;
- (void)_startDiscoveringPairedAccessories;
- (void)_stopDiscoveringAccessories;
- (id)_unpairedAccessoryForServer:(id)arg1;
- (void)_updatePairedAccessoriesForServer:(id)arg1;
- (void)_updatePairingRetryTimerForServer:(id)arg1 delay:(long long)arg2;
- (void)accessoryServer:(id)arg1 didDiscoverAccessoriesWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2;
- (void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(id)arg2;
- (void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
- (void)accessoryServer:(id)arg1 requestUserPermissionForUnauthenticatedAccessory:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (id)accessoryServerBrowsers;
- (void)accessoryServerDidUpdateHasPairings:(id)arg1;
- (id)accessoryWithUUID:(id)arg1;
- (id)addAccessoryCompletionHandlersForAccessoryServers;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addPairedAccessories:(id)arg1;
- (void)addPairingOnPrimaryAccessory:(id)arg1 forController:(id)arg2 publicKey:(id)arg3 withCompletionHandler:(id)arg4;
- (id)allPairedAccessories;
- (id)allUnpairedAccessories;
- (void)btleAccessoryReachabilityProbeTimer:(bool)arg1;
- (id)btleAccessoryServerBrowser;
- (id)currentlyPairingAccessories;
- (id)delegates;
- (id)initWithPairedAccessories:(id)arg1;
- (id)ipAccessoryServerBrowser;
- (void)pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 completionHandler:(id)arg4;
- (id)pairedAccessories;
- (id)pairingRetryTimersForAccessoryServers;
- (id)reachabilityTimerForBTLE;
- (void)removeAccessory:(id)arg1 completionHandler:(id)arg2;
- (id)removeAccessoryInProgressForHMDAccessories;
- (void)removeDelegate:(id)arg1;
- (void)removePairingOnPrimaryAccessory:(id)arg1 forController:(id)arg2 publicKey:(id)arg3 withCompletionHandler:(id)arg4;
- (void)resetConfiguration;
- (id)retrievalCompletionTuplesForAccessories;
- (void)retrieveHAPAccessoryForHMDAccessory:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)setAccessoryServerBrowsers:(id)arg1;
- (void)setAddAccessoryCompletionHandlersForAccessoryServers:(id)arg1;
- (void)setBtleAccessoryServerBrowser:(id)arg1;
- (void)setCurrentlyPairingAccessories:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setIpAccessoryServerBrowser:(id)arg1;
- (void)setPairedAccessories:(id)arg1;
- (void)setPairingRetryTimersForAccessoryServers:(id)arg1;
- (void)setReachabilityTimerForBTLE:(id)arg1;
- (void)setRemoveAccessoryInProgressForHMDAccessories:(id)arg1;
- (void)setRetrievalCompletionTuplesForAccessories:(id)arg1;
- (void)setUnpairedAccessories:(id)arg1;
- (void)setUnpairedSecondaryHAPAccessories:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startDiscoveringAccessories;
- (void)stopDiscoveringAccessories;
- (id)unpairedAccessories;
- (id)unpairedSecondaryHAPAccessories;
- (id)workQueue;

@end
