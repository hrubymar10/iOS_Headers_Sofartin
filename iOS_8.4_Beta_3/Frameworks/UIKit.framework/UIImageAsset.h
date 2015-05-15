/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImageAsset : NSObject <NSSecureCoding> {
    struct { 
        unsigned int hasRegisteredImages : 1; 
        unsigned int supportsBlockGeneration : 1; 
    } _assetFlags;
    _UIAssetManager *_assetManager;
    NSString *_assetName;
    bool _cacheContents;
    id _creationBlock;
    UITraitCollection *_defaultTraitCollection;
}

@property (nonatomic, readonly) _UIAssetManager *_assetManager;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, copy) id creationBlock;

+ (id)_assetGeneratingImagesWithDrawingBlock:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_assetManager;
- (void)_clearResolvedImageResources;
- (id)_defaultTraitCollection;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)_mutableCatalog;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 cache:(bool)arg3;
- (id)_updateAssetFromBlockGenerationWithTraitCollection:(id)arg1 resolvedCatalogImage:(id)arg2;
- (id)assetName;
- (id)creationBlock;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)setAssetName:(id)arg1;
- (void)setCreationBlock:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;

@end
