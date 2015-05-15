/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineLibrary : NSObject <CPLAbstractObject> {
    NSHashTable *_attachedObjects;
    NSURL *_clientLibraryBaseURL;
    bool _closed;
    NSURL *_cloudLibraryResourceStorageURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSArray *_components;
    CPLConfiguration *_configuration;
    NSString *_libraryIdentifier;
    NSError *_openingError;
    CPLPlatformObject *_platformObject;
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineScheduler *_scheduler;
    CPLStatistics *_statistics;
    CPLStatus *_status;
    CPLEngineStore *_store;
    CPLEngineSyncManager *_syncManager;
    CPLEngineSystemMonitor *_systemMonitor;
    unsigned long long _totalAssetCount;
    bool _totalAssetCountHasBeenCalculated;
    CPLEngineTransport *_transport;
}

@property (nonatomic, readonly, copy) NSURL *clientLibraryBaseURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryResourceStorageURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryStateStorageURL;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *exitDeleteTime;
@property (nonatomic) bool hasChangesToProcess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iCloudLibraryExists;
@property (nonatomic) bool iCloudLibraryHasBeenWiped;
@property (nonatomic) bool isExceedingQuota;
@property (nonatomic, readonly, copy) NSString *libraryIdentifier;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) CPLEngineScheduler *scheduler;
@property (nonatomic, readonly) CPLStatistics *statistics;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLEngineSyncManager *syncManager;
@property (nonatomic, readonly) CPLEngineSystemMonitor *systemMonitor;
@property (nonatomic, readonly) CPLEngineTransport *transport;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (void)_closeNextComponent:(id)arg1 deactivate:(bool)arg2 lastError:(id)arg3 completionHandler:(id)arg4;
- (void)_openNextComponent:(id)arg1 completionHandler:(id)arg2;
- (void)_performBlockWithLibrary:(bool)arg1 enumerateAttachedObjects:(id)arg2;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg1;
- (void)attachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (id)clientLibraryBaseURL;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id)arg2;
- (id)cloudLibraryResourceStorageURL;
- (id)cloudLibraryStateStorageURL;
- (id)componentName;
- (id)configuration;
- (id)description;
- (void)detachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (id)exitDeleteTime;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (bool)hasChangesToProcess;
- (bool)iCloudLibraryExists;
- (bool)iCloudLibraryHasBeenWiped;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (bool)isExceedingQuota;
- (id)libraryIdentifier;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 numberOfImages:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfOtherItems:(unsigned long long)arg4;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;
- (id)platformObject;
- (void)reportLibraryCorrupted;
- (void)reportUnsuccessfulSync;
- (id)scheduler;
- (void)setExitDeleteTime:(id)arg1;
- (void)setHasChangesToProcess:(bool)arg1;
- (void)setICloudLibraryExists:(bool)arg1;
- (void)setICloudLibraryHasBeenWiped:(bool)arg1;
- (void)setIsExceedingQuota:(bool)arg1;
- (void)startSyncSession;
- (id)statistics;
- (id)store;
- (id)syncManager;
- (id)systemMonitor;
- (unsigned long long)totalAssetCountOnServer;
- (id)transport;
- (void)updateAssetCountsFromServer:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;

@end
