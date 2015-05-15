/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRemoveCloudLibraryTask : CPLEngineSyncEmergencyTask {
    <CPLEngineTransportRemoveLibraryTask> *_removeLibraryTask;
}

+ (bool)shouldCoalesceTasks;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (unsigned long long)priority;
- (bool)shouldStopSyncSession;

@end
