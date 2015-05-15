/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImageBuffer : NSObject {
    CIContext *_ciContext;
    int _colorManagement;
    struct CGColorSpace { } *_colorSpace;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property(assign,readonly) struct CGSize { double x1; double x2; } size;

- (id)ciImage;
- (void)dealloc;
- (id)image;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2 ciContext:(id)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)readPixelsByAddressInBlock:(id)arg1;
- (void)renderCIImage:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
