/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLLibraryManager : NSObject <CPLAbstractObject> {
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSURL *_cloudLibraryStateStorageURL;
    CPLConfiguration *_configuration;
    long long _configurationOnce;
    CPLChangeSession *_currentSession;
    <CPLLibraryManagerDelegate> *_delegate;
    NSString *_effectiveClientBundleIdentifier;
    NSString *_libraryIdentifier;
    NSString *_libraryVersion;
    unsigned long long _numberOfImagesToUpload;
    unsigned long long _numberOfOtherItemsToUpload;
    unsigned long long _numberOfVideosToUpload;
    CPLPlatformObject *_platformObject;
    NSObject<OS_dispatch_queue> *_queue;
    <CPLResourceProgressDelegate> *_resourceProgressDelegate;
    NSObject<OS_dispatch_queue> *_sessionLock;
    unsigned long long _sizeOfResourcesToUpload;
    bool _sizeOfResourcesToUploadIsSet;
    unsigned long long _state;
    unsigned long long _status;
    NSError *_statusError;
    long long _statusOnce;
    CPLStatus *_syncStatus;
    NSString *_userOverride;
}

@property (nonatomic, readonly, copy) NSURL *clientLibraryBaseURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryResourceStorageURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryStateStorageURL;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPLLibraryManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool diagnosticsEnabled;
@property (nonatomic, copy) NSString *effectiveClientBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *libraryIdentifier;
@property (nonatomic, readonly, copy) NSString *libraryVersion;
@property (nonatomic, readonly) unsigned long long numberOfImagesToUpload;
@property (nonatomic, readonly) unsigned long long numberOfOtherItemsToUpload;
@property (nonatomic, readonly) unsigned long long numberOfVideosToUpload;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic) <CPLResourceProgressDelegate> *resourceProgressDelegate;
@property (nonatomic, readonly) unsigned long long sizeOfResourcesToUpload;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSError *statusError;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLStatus *syncStatus;
@property (nonatomic, copy) NSString *userOverride;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (void)useCloudPhotoDaemonImplementation;

- (void).cxx_destruct;
- (void)_closeDeactivating:(bool)arg1 completionHandler:(id)arg2;
- (void)_configurationDidChange;
- (void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(bool)arg2 completionHandler:(id)arg3;
- (void)_setCurrentSession:(id)arg1;
- (void)_setLibraryVersion:(id)arg1;
- (void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 numberOfImages:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfOtherItems:(unsigned long long)arg4;
- (bool)_setStatus:(unsigned long long)arg1 andError:(id)arg2;
- (void)_statusDidChange;
- (void)addInfoToLog:(id)arg1;
- (id)addSubscriberUsingPublishingHandler:(id)arg1;
- (void)barrier;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(bool)arg3 completionHandler:(id)arg4;
- (void)beginDownloadForResource:(id)arg1 highPriority:(bool)arg2 completionHandler:(id)arg3;
- (void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (id)clientLibraryBaseURL;
- (void)closeWithCompletionHandler:(id)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(bool)arg2 completionHandler:(id)arg3;
- (id)cloudLibraryResourceStorageURL;
- (id)cloudLibraryStateStorageURL;
- (void)compactFileCacheWithCompletionHandler:(id)arg1;
- (id)configuration;
- (id)currentSession;
- (void)deactivateWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (id)description;
- (bool)diagnosticsEnabled;
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)discardCurrentSession;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(id)arg5;
- (id)effectiveClientBundleIdentifier;
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(id)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(id)arg2;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (id)initForManagement;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (id)libraryIdentifier;
- (id)libraryVersion;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (unsigned long long)numberOfImagesToUpload;
- (unsigned long long)numberOfOtherItemsToUpload;
- (unsigned long long)numberOfVideosToUpload;
- (void)openWithCompletionHandler:(id)arg1;
- (id)platformObject;
- (void)publishResource:(id)arg1 completionHandler:(id)arg2;
- (void)removeCloudLibraryWithCompletionHandler:(id)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)resetStatus;
- (id)resourceProgressDelegate;
- (void)setDelegate:(id)arg1;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setEffectiveClientBundleIdentifier:(id)arg1;
- (void)setResourceProgressDelegate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUserOverride:(id)arg1;
- (unsigned long long)sizeOfResourcesToUpload;
- (void)startSyncSession;
- (unsigned long long)state;
- (unsigned long long)status;
- (id)statusError;
- (id)syncStatus;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (id)userOverride;

@end
