/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLCGPixelImageBuffer : BLPixelImageBuffer {
    struct CGContext { } *_bitmapContext;
    NSMutableData *_bitmapData;
    unsigned long long _rowBytes;
}

@property(assign,retain) NSMutableData * bitmapData;

- (void)accessPixelsByAddressInBlock:(id)arg1;
- (void)accessPixelsByContextInBlock:(id)arg1;
- (id)bitmapData;
- (id)ciImage;
- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;
- (void)readPixelsByAddressInBlock:(id)arg1;
- (void)renderCIImage:(id)arg1;
- (void)setBitmapData:(id)arg1;

@end
