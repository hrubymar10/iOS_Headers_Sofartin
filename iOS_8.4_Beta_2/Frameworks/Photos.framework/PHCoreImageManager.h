/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCoreImageManager : NSObject {
    NSObject<OS_dispatch_queue> *_CPLDownloadFireAndForgetRequestQueue;
    NSObject<OS_dispatch_queue> *_CPLDownloadUpdateIsolationQueue;
    int _CPLDownloadUpdateNotifyToken;
    NSMutableSet *_cloudDomainsWithPurgeScheduled;
    NSMutableSet *_domainsWithPurgeScheduled;
    NSMapTable *_perDomainCloudPreheatItemMapTables;
    NSMapTable *_perDomainHighPriorityRequestWaitGroups;
    NSMapTable *_perDomainMissedPreheatItemMapTables;
    NSMapTable *_perDomainPreheatItemMapTables;
    NSObject<OS_dispatch_queue> *_preheatItemIsolationQueue;
    NSMapTable *_requestLookupTable;
    NSObject<OS_dispatch_queue> *_requestLookupTableIsolationQueue;
}

@property(assign,retain) NSObject<OS_dispatch_queue> * CPLDownloadFireAndForgetRequestQueue;
@property(assign,retain) NSObject<OS_dispatch_queue> * CPLDownloadUpdateIsolationQueue;
@property(assign,readwrite) int CPLDownloadUpdateNotifyToken;
@property(assign,retain) NSMutableSet * cloudDomainsWithPurgeScheduled;
@property(assign,retain) NSMutableSet * domainsWithPurgeScheduled;
@property(assign,retain) NSMapTable * perDomainCloudPreheatItemMapTables;
@property(assign,retain) NSMapTable * perDomainHighPriorityRequestWaitGroups;
@property(assign,retain) NSMapTable * perDomainMissedPreheatItemMapTables;
@property(assign,retain) NSMapTable * perDomainPreheatItemMapTables;
@property(assign,retain) NSObject<OS_dispatch_queue> * preheatItemIsolationQueue;
@property(assign,retain) NSMapTable * requestLookupTable;
@property(assign,retain) NSObject<OS_dispatch_queue> * requestLookupTableIsolationQueue;

+ (struct CGSize { double x1; double x2; })_aspectedSizeWithSize:(struct CGSize { double x1; double x2; })arg1 maxDimension:(double)arg2;
+ (int)_bestFormatWithSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(id)arg5 isTableFormat:(bool*)arg6 desiredImagePixelSize:(struct CGSize { double x1; double x2; }*)arg7;
+ (id)_debugFilenameForAsset:(id)arg1;
+ (id)_descriptionForDomain:(id)arg1;
+ (id)_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
+ (int)_fallbackLargestFormatForRequestVersion:(long long)arg1;
+ (int)_fastestDegradedFormatWithSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(id)arg5 isTableFormat:(bool*)arg6;
+ (bool)_formatIsLessThanFullscreen:(int)arg1;
+ (bool)_isRetina;
+ (struct CGImage { }*)_newResizedImageForImage:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 normalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentMode:(long long)arg4;
+ (int)_pickDegradedFormatWithSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(id)arg5 isTableFormat:(bool*)arg6;
+ (struct CGSize { double x1; double x2; })_sizeWithDimension:(double)arg1 aspectRatio:(double)arg2 preserveAspectRatio:(bool)arg3;
+ (int)_standardDegradedFormatWithSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(id)arg5 isTableFormat:(bool*)arg6;
+ (long long)_wantedCloudPlaceholderKindForImageFormat:(int)arg1;
+ (void)runBlockAsPrivilegedAsPhotosApp:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CPLDownloadFireAndForgetRequestQueue;
- (id)CPLDownloadUpdateIsolationQueue;
- (int)CPLDownloadUpdateNotifyToken;
- (bool)_asyncFetchCloudSharedAnySizeImageAsNon5551BytesIfNecessaryWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg5 sync:(bool)arg6 completionHandler:(id)arg7;
- (void)_asyncGenerateLiveRenderedImageWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 desiredImagePixelSize:(struct CGSize { double x1; double x2; })arg4 completionHandler:(id)arg5;
- (void)_cancelAndFlushPreheatItemsForAssets:(id)arg1 CPLPrefetching:(bool)arg2 domain:(id)arg3 operation:(long long)arg4 passingTestHandler:(id)arg5 didCancelHandler:(id)arg6;
- (void)_cancelAndFlushPreheatWithAsset:(id)arg1 format:(int)arg2 CPLPrefetching:(bool)arg3 domain:(id)arg4 operation:(long long)arg5 outPreheatItem:(id*)arg6 didCancelHandler:(id)arg7;
- (void)_cancelAndFlushPreheatWithAsset:(id)arg1 preheatItem:(id)arg2 domain:(id)arg3 operation:(long long)arg4 didCancelHandler:(id)arg5;
- (void)_cancelAsynchronousRequestWithID:(int)arg1;
- (void)_clearCPLDownloadWaitGroupForRequest:(id)arg1;
- (bool)_deleteMissedPreheatItemForAsset:(id)arg1 format:(int)arg2 domain:(id)arg3;
- (id)_fastFetchAdjustmentDataWithRequest:(id)arg1;
- (void)_fetchAdjustmentDataThruAssetsdAndCPLHandlerWithRequest:(id)arg1 networkAccessAllowed:(bool)arg2 trackCPLDownload:(bool)arg3 completionHandler:(id)arg4;
- (void)_fetchAnySizeImageAs5551BytesWithRequest:(id)arg1 format:(int)arg2 bestFormat:(int)arg3 sync:(bool)arg4 fireAndForgetCPLDownload:(bool)arg5 completionHandler:(id)arg6;
- (void)_fetchAnySizeImageAsNon5551BytesPossiblyThruAssetsdAndCPLWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 wantsProperties:(bool)arg5 networkAccessAllowed:(bool)arg6 networkAccessForced:(bool)arg7 trackCPLDownload:(bool)arg8 sync:(bool)arg9 completionHandler:(id)arg10;
- (void)_fetchAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg5 sync:(bool)arg6 fireAndForgetCPLDownload:(bool)arg7 completionHandler:(id)arg8;
- (void)_fetchPreheatableAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 preheatItem:(id)arg5 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg6 sync:(bool)arg7 fireAndForgetCPLDownload:(bool)arg8 completionHandler:(id)arg9;
- (void)_fireAndForgetCPLDownloadWithRequest:(id)arg1 format:(int)arg2;
- (id)_highPriorityRequestWaitGroupWithDomain:(id)arg1;
- (id)_originalPreheatlItemCreateTransientWithAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3 domain:(id)arg4;
- (id)_preheatItemCreateIfNeededWithAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4 CPLPrefetching:(bool)arg5 outDidExist:(bool*)arg6 domain:(id)arg7;
- (id)_preheatItemMapTableWithFormat:(int)arg1 CPLPrefetching:(bool)arg2 domain:(id)arg3 createIfNeeded:(bool)arg4;
- (id)_preheatItemSourceWithFormat:(int)arg1;
- (id)_preheatItemWithAsset:(id)arg1 format:(int)arg2 CPLPrefetching:(bool)arg3 domain:(id)arg4;
- (void)_processImageRequest:(id)arg1 sync:(bool)arg2;
- (bool)_recordMissedPreheatItemForAsset:(id)arg1 format:(int)arg2 domain:(id)arg3;
- (void)_registerRequest:(id)arg1;
- (id)_resizeUIImage:(id)arg1 withRequest:(id)arg2;
- (void)_schedulePurgeForCPLPrefetching:(bool)arg1 domain:(id)arg2 onMainQueue:(bool)arg3 didCancelHandler:(id)arg4;
- (id)_setupCPLDownloadWaitGroupForRequest:(id)arg1 withTimeout:(unsigned long long)arg2;
- (void)_unregisterRequest:(id)arg1;
- (void)_updateCPLDownloadStatesUponNotification;
- (id)cloudDomainsWithPurgeScheduled;
- (void)dealloc;
- (id)description;
- (id)domainsWithPurgeScheduled;
- (id)init;
- (id)perDomainCloudPreheatItemMapTables;
- (id)perDomainHighPriorityRequestWaitGroups;
- (id)perDomainMissedPreheatItemMapTables;
- (id)perDomainPreheatItemMapTables;
- (id)preheatItemIsolationQueue;
- (id)requestLookupTable;
- (id)requestLookupTableIsolationQueue;
- (void)setCPLDownloadFireAndForgetRequestQueue:(id)arg1;
- (void)setCPLDownloadUpdateIsolationQueue:(id)arg1;
- (void)setCPLDownloadUpdateNotifyToken:(int)arg1;
- (void)setCloudDomainsWithPurgeScheduled:(id)arg1;
- (void)setDomainsWithPurgeScheduled:(id)arg1;
- (void)setPerDomainCloudPreheatItemMapTables:(id)arg1;
- (void)setPerDomainHighPriorityRequestWaitGroups:(id)arg1;
- (void)setPerDomainMissedPreheatItemMapTables:(id)arg1;
- (void)setPerDomainPreheatItemMapTables:(id)arg1;
- (void)setPreheatItemIsolationQueue:(id)arg1;
- (void)setRequestLookupTable:(id)arg1;
- (void)setRequestLookupTableIsolationQueue:(id)arg1;

@end
