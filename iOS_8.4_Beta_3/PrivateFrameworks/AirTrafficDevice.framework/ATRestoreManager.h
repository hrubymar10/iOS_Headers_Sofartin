/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATRestoreAssetLinkDelegate, ATSessionObserver> {
    ATRestoreAssetLink *_applicationDataRestoreLink;
    ATAssetManager *_assetManager;
    bool _cancelled;
    NSObject<OS_dispatch_queue> *_queue;
    ATRestoreAssetLink *_restoreLink;
    ATSession *_restoreSession;
    ATStoreAssetLink *_storeLink;
    MSVXPCTransaction *_xpcTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_dataClasses;
- (void)_start;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (id)init;
- (void)restoreAssetLinkDidCancelRestore:(id)arg1;
- (bool)restoreSessionActive;
- (void)resume;
- (void)sessionDidFinish:(id)arg1;

@end
