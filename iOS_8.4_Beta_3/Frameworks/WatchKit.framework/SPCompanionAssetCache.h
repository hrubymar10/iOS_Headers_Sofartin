/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPCompanionAssetCache : NSObject {
    SPAssetCacheClientCache *_permanentCache;
    SPAssetCacheClientCache *_transientCache;
}

@property (nonatomic, retain) SPAssetCacheClientCache *permanentCache;
@property (nonatomic, retain) SPAssetCacheClientCache *transientCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addImageReferenceToTransientCache:(id)arg1 withName:(id)arg2;
- (bool)addImageToPermanentCache:(id)arg1 withName:(id)arg2;
- (void)addedAsset:(id)arg1;
- (id)cachedImages;
- (void)clearedCache:(id)arg1;
- (id)dataForImageWithName:(id)arg1;
- (void)deletedAsset:(id)arg1;
- (void)handleCacheMessage:(id)arg1;
- (bool)imageInPermanentCache:(id)arg1;
- (bool)imageInTransientCache:(id)arg1;
- (id)init;
- (id)keyFromImageData:(id)arg1;
- (id)permanentCache;
- (void)removeAllImagesFromPermanentCache;
- (void)removeImageFromPermanentCacheWithName:(id)arg1;
- (void)setPermanentCache:(id)arg1;
- (void)setTransientCache:(id)arg1;
- (void)syncCache:(id)arg1;
- (id)transientCache;

@end
