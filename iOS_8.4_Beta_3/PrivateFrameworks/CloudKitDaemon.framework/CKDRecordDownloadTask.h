/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordDownloadTask : NSObject {
    NSMutableArray *_assetsToDownload;
    NSError *_error;
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_packageIndexSets;
    CKDProgressTracker *_progressTracker;
    CKRecord *_record;
}

@property(assign,retain) NSMutableArray * assetsToDownload;
@property(assign,retain) NSError * error;
@property(assign,retain) NSObject<OS_dispatch_group> * group;
@property(assign,retain) NSMutableArray * packageIndexSets;
@property(assign,retain) CKDProgressTracker * progressTracker;
@property(assign,retain) CKRecord * record;

- (void).cxx_destruct;
- (id)assetsToDownload;
- (void)didCompleteTaskWithError:(id)arg1;
- (void)didDownloadAsset:(id)arg1 error:(id)arg2;
- (id)error;
- (id)group;
- (id)initWithRecord:(id)arg1 trackProgress:(bool)arg2 assetsToDownload:(id)arg3 packageIndexSets:(id)arg4;
- (id)packageIndexSets;
- (id)progressTracker;
- (id)record;
- (void)setAssetsToDownload:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setPackageIndexSets:(id)arg1;
- (void)setProgressTracker:(id)arg1;
- (void)setRecord:(id)arg1;

@end
