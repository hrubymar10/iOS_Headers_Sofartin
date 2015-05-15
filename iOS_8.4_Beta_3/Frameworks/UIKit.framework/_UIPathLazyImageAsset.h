/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPathLazyImageAsset : UIImageAsset {
    bool _haveCGCacheImages;
    NSArray *_imagePaths;
    bool _imagesHaveBeenLoaded;
}

@property (nonatomic) bool haveCGCacheImages;
@property (nonatomic, copy) NSArray *imagePaths;

- (void)_clearResolvedImageResources;
- (void)dealloc;
- (bool)haveCGCacheImages;
- (id)imagePaths;
- (id)imageWithTraitCollection:(id)arg1;
- (void)setHaveCGCacheImages:(bool)arg1;
- (void)setImagePaths:(id)arg1;

@end
