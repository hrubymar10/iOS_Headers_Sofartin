/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKImage : NSObject <NSSecureCoding> {
    struct PKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _capInsets;
    NSData *_imageData;
    struct CGImage { } *_imageRef;
    long long _orientation;
    NSObject<OS_dispatch_queue> *_queue;
    double _scale;
    bool _shouldStretch;
    bool _shouldTile;
}

@property(assign,readonly) struct PKEdgeInsets { double x1; double x2; double x3; double x4; } capInsets;
@property(assign,readonly) NSData * imageData;
@property(assign,readonly) struct CGImage { }* imageRef;
@property(assign,readonly) long long orientation;
@property(assign,readonly) double scale;
@property(assign,readonly) struct CGSize { double x1; double x2; } size;
@property(assign,readonly) bool stretches;
@property(assign,readonly) bool tiles;

+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double*)arg3;
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double*)arg3 preferredScreenScale:(double)arg4 suffix:(id)arg5;
+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
+ (id)passesImageNamed:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)_isTiledWhenStretchedToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_queue_createImageRefIfNecessary;
- (id)blurredImageWithRadius:(unsigned long long)arg1 constraints:(id)arg2;
- (struct PKEdgeInsets { double x1; double x2; double x3; double x4; })capInsets;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })downscaleSizeMatchingScale:(double)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withBlendMode:(int)arg3 alpha:(double)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)imageHash;
- (struct CGImage { }*)imageRef;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (long long)orientation;
- (void)preheatBitmapData;
- (id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)resizableImageByTilingCenterPixel;
- (id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)resizedImageToCover:(struct CGSize { double x1; double x2; })arg1;
- (id)resizedImageWithConstraints:(id)arg1;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;
- (bool)stretches;
- (bool)tiles;

@end
