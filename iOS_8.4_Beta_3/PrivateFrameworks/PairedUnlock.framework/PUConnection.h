/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUConnection : NSObject <PUUnlockClient> {
    NSXPCConnection *_connection;
    <PUConnectionDelegate> *_delegate;
    id _getRemoteDevicePasscodeStateHandler;
    id _remoteDeviceRemoveLockoutHandler;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)didDisableOnlyRemoteUnlock:(bool)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(bool)arg1 error:(id)arg2;
- (void)didGetRemoteDeviceHasPasscode:(bool)arg1 isLocked:(bool)arg2 isUnlockOnly:(bool)arg3 error:(id)arg4;
- (void)didPairForUnlock:(bool)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(bool)arg1 error:(id)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;
- (void)getRemoteDeviceState:(id)arg1;
- (id)init;
- (void)pairForUnlockWithPasscode:(id)arg1;
- (void)remoteDeviceDidCompletePasscodeAction:(bool)arg1 error:(id)arg2;
- (void)remoteDeviceDidRemoveLockout:(bool)arg1 error:(id)arg2;
- (void)remoteDeviceDidUnlock;
- (void)requestRemoteDevicePasscodeAction:(long long)arg1 type:(long long)arg2;
- (void)requestRemoteDeviceRemoveLockout:(id)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (void)setDelegate:(id)arg1;
- (void)unpairForUnlock;

@end
