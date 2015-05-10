/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractNetworkArtworkDataSource : NSObject <MPArtworkDataSource, NSURLSessionDataDelegate> {
    NSURLSession *_URLSession;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSCache *_artworkRepresentationCache;
    NSMapTable *_catalogTaskMap;
}

@property(assign,retain) NSURLSession * URLSession;
@property(assign,readonly) NSURLSessionConfiguration * URLSessionConfiguration;
@property(assign,retain) NSObject<OS_dispatch_queue> * accessQueue;
@property(assign,retain) NSCache * artworkRepresentationCache;
@property(assign,retain) NSMapTable * catalogTaskMap;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLSession;
- (id)URLSessionConfiguration;
- (id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 immediateImageDecompressionAllowed:(bool)arg4;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(bool)arg2;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(id)arg2;
- (bool)_isRepresentationSize:(struct CGSize { double x1; double x2; })arg1 validForCatalog:(id)arg2;
- (void)_updateConfigurationForCellularDataRestriction:(id)arg1;
- (id)accessQueue;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (bool)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (id)artworkRepresentationCache;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)catalogTaskMap;
- (void)dealloc;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setArtworkRepresentationCache:(id)arg1;
- (void)setCatalogTaskMap:(id)arg1;
- (void)setURLSession:(id)arg1;
- (bool)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (bool)wantsBackgroundImageDecompression;

@end
