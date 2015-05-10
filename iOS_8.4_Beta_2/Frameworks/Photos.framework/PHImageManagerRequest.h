/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageManagerRequest : NSObject {
    PLCPLDownloadContext *_CPLDownloadContext;
    bool _CPLDownloadDegraded;
    NSObject<OS_dispatch_group> *_CPLDownloadWaitGroup;
    <_PLImageLoadingAsset> *_asset;
    NSString *_assetUUID;
    id _cancellationHandler;
    bool _cancelled;
    long long _cloudSharedAssetPlaceholderKind;
    NSString *_debugFilename;
    id _domain;
    bool _isCloudSharedAsset;
    bool _isPartOfBurst;
    PHImageManagerRequest *_nextRequest;
    long long _originalImageOrientation;
    NSString *_pathForAdjustmentFile;
    int _registrationRefCount;
    int _requestID;
    PLPreheatItem *_transientPreheatlItem;
}

@property(assign,retain) PLCPLDownloadContext * CPLDownloadContext;
@property(assign,readwrite) bool CPLDownloadDegraded;
@property(assign,retain) NSObject<OS_dispatch_group> * CPLDownloadWaitGroup;
@property(assign,readonly) <_PLImageLoadingAsset> * asset;
@property(assign,readonly) NSString * assetUUID;
@property(assign,copy) id cancellationHandler;
@property(assign,readonly) long long cloudSharedAssetPlaceholderKind;
@property(assign,readonly) NSString * debugFilename;
@property(assign,readonly) id domain;
@property(assign,readonly) bool isCloudSharedAsset;
@property(assign,readonly) bool isPartOfBurst;
@property(assign,readonly) bool isVideo;
@property(assign,retain) PHImageManagerRequest * nextRequest;
@property(assign,readonly) NSString * pathForAdjustmentFile;
@property(assign,readonly) int registrationRefCount;
@property(assign,readonly) int requestID;
@property(assign,retain) PLPreheatItem * transientPreheatlItem;

- (void).cxx_destruct;
- (id)CPLDownloadContext;
- (bool)CPLDownloadDegraded;
- (id)CPLDownloadWaitGroup;
- (id)asset;
- (id)assetUUID;
- (bool)atomicDecrementRegistrationRefCountIfOne;
- (bool)atomicIncrementRegistrationRefCountIfZero;
- (id)cancellationHandler;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (long long)cloudSharedAssetPlaceholderKind;
- (id)debugFilename;
- (int)decrementRegistrationRefCount;
- (id)domain;
- (int)incrementRegistrationRefCount;
- (id)init;
- (id)initRequestWithAsset:(id)arg1 domain:(id)arg2;
- (bool)isCancelled;
- (bool)isCloudSharedAsset;
- (bool)isPartOfBurst;
- (bool)isVideo;
- (id)nextRequest;
- (long long)originalImageOrientation;
- (id)pathForAdjustmentFile;
- (int)registrationRefCount;
- (int)requestID;
- (void)setCPLDownloadContext:(id)arg1;
- (void)setCPLDownloadDegraded:(bool)arg1;
- (void)setCPLDownloadWaitGroup:(id)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setNextRequest:(id)arg1;
- (void)setTransientPreheatlItem:(id)arg1;
- (id)transientPreheatlItem;

@end
