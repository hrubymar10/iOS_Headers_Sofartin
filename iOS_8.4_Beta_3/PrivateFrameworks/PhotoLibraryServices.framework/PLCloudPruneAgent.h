/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPruneAgent : PLCloudScenarioProducer {
    NSObject<OS_dispatch_queue> *_agentQueue;
    long long _lastPruneRequest;
    PLPhotoLibrary *_localLibrary;
    PLCloudPhotoLibraryManager *_remoteLibrary;
    struct { 
        int retries; 
        int state; 
    } _walkStatus;
}

@property (retain) PLPhotoLibrary *localLibrary;
@property (retain) PLCloudPhotoLibraryManager *remoteLibrary;

- (void)_beginPruningResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned long long)arg3 then:(id)arg4;
- (void)activate;
- (void)appInForeground:(id)arg1;
- (unsigned long long)batchSize;
- (void)beginPruningResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 then:(id)arg3;
- (void)cacheDeleteRequestReceived:(id)arg1;
- (void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned long long)arg2 startingAtOffset:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (void)emergencyPrune;
- (id)init;
- (id)localLibrary;
- (void)pruneOlderMediums;
- (void)pruneOlderOriginals;
- (void)pruneResources;
- (void)pruneResources:(id)arg1 withCompletionHandler:(id)arg2;
- (void)pruneResourcesOfType:(unsigned long long)arg1 createdBeforeDate:(id)arg2 then:(id)arg3;
- (void)pruneResourcesOfType:(unsigned long long)arg1 then:(id)arg2;
- (bool)pruningEnabled;
- (id)remoteLibrary;
- (void)resetWalkStatus;
- (void)setLocalLibrary:(id)arg1;
- (void)setRemoteLibrary:(id)arg1;
- (void)settingsChanged:(id)arg1;
- (bool)spaceAvailable:(long long*)arg1 totalSpace:(long long*)arg2;
- (void)standardPruningKick:(id)arg1;
- (void)systemStarted:(id)arg1;
- (int)typeToIndex:(unsigned long long)arg1;

@end
