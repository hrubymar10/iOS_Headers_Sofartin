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

@property (retain) PLCPLDownloadContext *CPLDownloadContext;
@property bool CPLDownloadDegraded;
@property (retain) NSObject<OS_dispatch_group> *CPLDownloadWaitGroup;
@property (nonatomic, readonly) <_PLImageLoadingAsset> *asset;
@property (nonatomic, readonly) NSString *assetUUID;
@property (copy) id cancellationHandler;
@property (nonatomic, readonly) long long cloudSharedAssetPlaceholderKind;
@property (nonatomic, readonly) NSString *debugFilename;
@property (nonatomic, readonly) id domain;
@property (nonatomic, readonly) bool isCloudSharedAsset;
@property (nonatomic, readonly) bool isPartOfBurst;
@property (nonatomic, readonly) bool isVideo;
@property (retain) PHImageManagerRequest *nextRequest;
@property (nonatomic, readonly) NSString *pathForAdjustmentFile;
@property (nonatomic, readonly) int registrationRefCount;
@property (nonatomic, readonly) int requestID;
@property (retain) PLPreheatItem *transientPreheatlItem;

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
