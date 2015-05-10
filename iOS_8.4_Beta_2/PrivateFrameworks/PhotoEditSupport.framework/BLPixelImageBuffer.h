/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPixelImageBuffer : BLImageBuffer

+ (id)bufferWithImage:(id)arg1 colorManagement:(int)arg2;
+ (id)bufferWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;

- (void)accessPixelsByAddressInBlock:(id)arg1;
- (void)accessPixelsByContextInBlock:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)image;

@end
