/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLStatus : NSObject <CPLStatusDelegate> {
    CPLStatus *_cplStatus;
    <PLCPLStatusDelegate> *_delegate;
    bool _isCPLDataClassEnabled;
    bool _isCPLDataClassEnabledValid;
    unsigned long long _numberOfImagesToDownload;
    unsigned long long _numberOfImagesToUpload;
    unsigned long long _numberOfPulledAssets;
    unsigned long long _numberOfPushedAsset;
    unsigned long long _numberOfVideosToDownload;
    unsigned long long _numberOfVideosToUpload;
    NSProgress *_progress;
    id _progressSubscriber;
    double _syncProgress;
    unsigned long long _syncProgressState;
    unsigned long long _totalAssetsOnServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLCPLStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool diskIsLowOnSpace;
@property (nonatomic, readonly, retain) NSDate *exitDeleteTime;
@property (nonatomic, readonly) bool hasExitedCPL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnecting;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isExceedingQuota;
@property (nonatomic, readonly) bool isPreparing;
@property (nonatomic, readonly) bool isSyncing;
@property (nonatomic, readonly, retain) NSDate *lastSuccessfulSyncDate;
@property (nonatomic, readonly) unsigned long long numberOfImagesToDownload;
@property (nonatomic, readonly) unsigned long long numberOfImagesToUpload;
@property (nonatomic, readonly) unsigned long long numberOfPulledAssets;
@property (nonatomic, readonly) unsigned long long numberOfPushedAsset;
@property (nonatomic, readonly) unsigned long long numberOfVideosToDownload;
@property (nonatomic, readonly) unsigned long long numberOfVideosToUpload;
@property (setter=_setProgress:, nonatomic, retain) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double syncProgress;
@property (nonatomic, readonly) unsigned long long totalAssetsOnServer;

+ (void)_prepareQueue;
+ (void)_setPulledItemsCount:(unsigned long long)arg1;
+ (id)readPListWithFilename:(id)arg1;
+ (void)setDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;
+ (void)setPushedAssetCount:(unsigned long long)arg1;
+ (void)setUploadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;
+ (void)writeDict:(id)arg1 withFilename:(id)arg2;

- (void)_calculateNumberOfPulledAssets;
- (void)_calculateTotalAssetsOnServer;
- (bool)_loadDownloadCounts;
- (void)_loadPulledItemsCount;
- (bool)_loadUploadCounts;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_setProgress:(id)arg1;
- (void)_setSyncProgress:(double)arg1;
- (void)_setup;
- (void)_subscribeToProgress;
- (void)_teardown;
- (void)_unsubscribeFromProgress;
- (void)_updateSyncProgress;
- (void)accountStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)diskIsLowOnSpace;
- (unsigned long long)diskSpaceLevel;
- (id)exitDeleteTime;
- (bool)hasExitedCPL;
- (id)init;
- (bool)isConnecting;
- (bool)isEnabled;
- (bool)isExceedingQuota;
- (bool)isPreparing;
- (bool)isSyncing;
- (id)lastSuccessfulSyncDate;
- (unsigned long long)numberOfImagesToDownload;
- (unsigned long long)numberOfImagesToUpload;
- (unsigned long long)numberOfPulledAssets;
- (unsigned long long)numberOfPushedAsset;
- (unsigned long long)numberOfVideosToDownload;
- (unsigned long long)numberOfVideosToUpload;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setDelegate:(id)arg1;
- (void)statusDidChange:(id)arg1;
- (double)syncProgress;
- (unsigned long long)totalAssetsOnServer;

@end
