/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncEmergencyTask : CPLEngineSyncTask <NSCoding> {
    CPLEngineLibrary *_readwriteEngineLibrary;
    NSString *_taskIdentifier;
}

@property (retain) <CPLEngineSyncEmergencyTaskDelegate> *delegate;
@property (nonatomic, retain) CPLEngineLibrary *engineLibrary;
@property (nonatomic, readonly) unsigned long long priority;

+ (bool)shouldCoalesceTasks;
+ (id)taskIdentifier;
+ (id)taskWithEngineLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)engineLibrary;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)priority;
- (void)setEngineLibrary:(id)arg1;
- (bool)shouldDiscardOnError;
- (bool)shouldStopSyncSession;
- (id)taskIdentifier;

@end
