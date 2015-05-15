/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {
    NSMutableDictionary *_accountToDevices;
    NSHashTable *_handlers;
    bool _hidingDisconnect;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    bool _postedSetupComplete;
    NSProtocolChecker *_protocol;
    bool _setupComplete;
    NSMutableDictionary *_topicToAccountDictionaries;
    NSMutableDictionary *_topicToEnabledAccounts;
}

@property(setter=_setHidingDisconnect:,assign,readwrite) bool _hidingDisconnect;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool hasPostedSetupComplete;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isSetupComplete;
@property(assign,readonly) Class superclass;

- (void)_callHandlersAsyncWithBlock:(id)arg1;
- (void)_callHandlersWithBlock:(id)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(id)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(id)arg1 cleanup:(id)arg2;
- (void)_deferredSetupOnIvarQueue:(id)arg1;
- (bool)_hidingDisconnect;
- (void)_noteDisconnected;
- (void)_removeAccountOnIvarQueue:(id)arg1;
- (void)_setHidingDisconnect:(bool)arg1;
- (void)account:(id)arg1 accountInfoChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)accountAdded:(id)arg1;
- (id)accountDictionariesForService:(id)arg1;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidUpdateState:(long long)arg1;
- (void)dealloc;
- (id)dependentDevicesForAccount:(id)arg1;
- (void)device:(id)arg1 nsuuidChanged:(id)arg2;
- (id)enabledAccountsForService:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (bool)hasPostedSetupComplete;
- (id)init;
- (bool)isSetupComplete;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)removeHandler:(id)arg1;
- (void)setupComplete:(bool)arg1 info:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
