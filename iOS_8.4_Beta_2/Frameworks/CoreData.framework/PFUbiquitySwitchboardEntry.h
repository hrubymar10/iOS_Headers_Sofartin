/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboardEntry : NSObject {
    unsigned long long _activeStoreCount;
    int _finishLock;
    bool _finishedInitializingForStore;
    bool _finishedSetupForStore;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    PFUbiquityFilePresenter *_fp;
    bool _hasScheduledFinishBlock;
    PFUbiquityFilePresenter *_localFP;
    NSString *_localPeerID;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    PFUbiquityContainerMonitor *_monitor;
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSMutableDictionary *_registeredCoordinators;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(assign,readwrite) unsigned long long activeStoreCount;
@property(assign,readonly) PFUbiquityFilePresenter * filePresenter;
@property(assign,readonly) PFUbiquitySetupAssistant * finishingSetupAssistant;
@property(assign,readonly) PFUbiquityFilePresenter * localFilePresenter;
@property(assign,readonly) NSString * localPeerID;
@property(assign,readonly) PFUbiquityLocation * localRootLocation;
@property(assign,retain) PFUbiquitySwitchboardEntryMetadata * metadata;
@property(assign,readonly) PFUbiquityContainerMonitor * monitor;
@property(assign,readonly) NSString * storeName;
@property(assign,retain) PFUbiquityLocation * ubiquityRootLocation;

- (unsigned long long)activeStoreCount;
- (void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(id)arg2;
- (void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(id)arg2;
- (id)cacheWrapperForStoreName:(id)arg1;
- (void)containerIdentifierChanged:(id)arg1;
- (void)containerStateChanged:(id)arg1;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)entryWillBeRemovedFromSwitchboard;
- (void)executeBlockOnPrivateQueue:(id)arg1;
- (id)filePresenter;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (bool)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(bool)arg3 error:(id*)arg4 finishBlock:(id)arg5;
- (id)finishingSetupAssistant;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalRootLocation:(id)arg4;
- (id)localFilePresenter;
- (id)localPeerID;
- (id)localRootLocation;
- (id)metaForStoreName:(id)arg1;
- (id)metadata;
- (id)monitor;
- (void)monitorStateChanged:(id)arg1;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (void)setActiveStoreCount:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setupFinished;
- (id)storeName;
- (void)synchronouslyExecuteBlockOnPrivateQueue:(id)arg1;
- (id)ubiquityRootLocation;
- (void)unregisterPersistentStore:(id)arg1;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;

@end
