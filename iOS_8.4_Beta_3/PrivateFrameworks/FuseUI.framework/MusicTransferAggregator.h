/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTransferAggregator : NSObject <SSDownloadManagerObserver> {
    SSDownloadManager *_downloadManager;
    NSMutableArray *_downloads;
    NSString *_localizedStatusString;
    NSNumberFormatter *_numberFormatter;
    NSHashTable *_observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedStatusString;
@property (nonatomic, readonly) long long numberOfCancelableDownloads;
@property (nonatomic, readonly) long long numberOfDownloads;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float transferProgress;

- (void).cxx_destruct;
- (id)_downloadKinds;
- (void)_enumerateObserversUsingBlock:(id)arg1;
- (id)_localizedStatusWithDownloadCount:(long long)arg1;
- (id)_numberFormatter;
- (void)_reloadWithDownloads:(id)arg1 forced:(bool)arg2;
- (id)_updateMutableArray:(id)arg1 withChangedObjects:(id)arg2 validationBlock:(id)arg3;
- (void)_updateWithChangedDownloads:(id)arg1;
- (void)addTransferObserver:(id)arg1;
- (bool)canCancelDownloadWithIndex:(long long)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadWithIndex:(long long)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (id)downloads;
- (id)init;
- (id)localizedStatusString;
- (long long)numberOfCancelableDownloads;
- (long long)numberOfDownloads;
- (void)pauseDownloadWithIndex:(long long)arg1;
- (void)performStatusButtonActionForDownloadWithIndex:(long long)arg1;
- (void)removeTransferObserver:(id)arg1;
- (void)resumeDownloadWithIndex:(long long)arg1;
- (float)transferProgress;

@end
