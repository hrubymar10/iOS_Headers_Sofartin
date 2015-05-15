/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATStoreAssetLink : NSObject <ATAssetLink, SSDownloadHandlerDelegate, SSDownloadManagerObserver> {
    NSMutableDictionary *_assetsByStoreID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    <ATAssetLinkDelegate> *_delegate;
    SSDownloadManager *_downloadManager;
    NSMapTable *_downloadsByAsset;
    bool _open;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <ATAssetLinkDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=isOpen,assign,readonly) bool open;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetForDownload:(id)arg1;
- (id)_assetTypeForStoreKind:(id)arg1;
- (id)_dataClassForStoreKind:(id)arg1;
- (id)_downloadForAsset:(id)arg1 error:(id*)arg2;
- (void)_enqueueAssets:(id)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(bool)arg3;
- (id)_storeKindForAssetType:(id)arg1;
- (id)callbackQueue;
- (bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)downloadManager;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)enqueueAssets:(id)arg1 force:(bool)arg2;
- (id)init;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (bool)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned long long)priority;
- (void)setCallbackQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end