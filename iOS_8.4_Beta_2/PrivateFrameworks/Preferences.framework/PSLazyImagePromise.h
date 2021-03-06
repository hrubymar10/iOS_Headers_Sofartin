/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLazyImagePromise : NSObject {
    UIImage *_image;
    NSBundle *_imageBundle;
    bool _imageLoaded;
    NSString *_imageName;
    NSString *_imagePath;
    id _loadBlock;
}

@property(assign,readonly) UIImage * image;
@property(getter=isImageLoaded,assign,readonly) bool imageLoaded;

+ (id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imagePromiseWithImagePath:(id)arg1;
+ (id)imagePromiseWithLoadBlock:(id)arg1;

- (void)dealloc;
- (id)image;
- (bool)isImageLoaded;
- (void)loadImage;

@end
