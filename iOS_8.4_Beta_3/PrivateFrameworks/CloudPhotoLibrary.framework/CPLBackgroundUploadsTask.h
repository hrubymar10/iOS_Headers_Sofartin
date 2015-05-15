/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBackgroundUploadsTask : CPLEngineSyncTask {
    unsigned long long _failedUploadedResourcesCount;
    bool _hasBadErrors;
    bool _hasResetQueue;
    NSObject<OS_dispatch_queue> *_lock;
    bool _shouldStop;
    double _start;
    unsigned long long _successfullyUploadedResourcesCount;
    unsigned long long _total;
    NSMutableArray *_uploadTasks;
}

- (void).cxx_destruct;
- (void)_enqueueTasksLocked;
- (void)_finishTaskLocked;
- (void)_launchNecessaryUploadTasksWithTransaction:(id)arg1;
- (void)_uploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
