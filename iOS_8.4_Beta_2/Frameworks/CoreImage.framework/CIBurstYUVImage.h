/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstYUVImage : NSObject {
    char *Cbuffer;
    char *Ybuffer;
    int bytesPerRow;
    struct __CFData { } *dataPtr;
    int height;
    struct __IOSurface { } *ioSurf;
    struct __CVBuffer { } *pixelBuffer;
    int width;
}

@property(assign,readwrite) char * Cbuffer;
@property(assign,readwrite) char * Ybuffer;
@property(assign,readwrite) int bytesPerRow;
@property(assign,readwrite) int height;
@property(assign,readwrite) int width;

- (char *)Cbuffer;
- (char *)Ybuffer;
- (int)bytesPerRow;
- (void)convertRGBAToYUV420:(char *)arg1 rgbaBytesPerRow:(int)arg2;
- (void)dealloc;
- (int)height;
- (id)initWithCGImage:(struct CGImage { }*)arg1 maxDimension:(int)arg2;
- (id)initWithCIImage:(id)arg1 ctx:(id)arg2 maxDimension:(int)arg3;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 maxDimension:(int)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setBytesPerRow:(int)arg1;
- (void)setCbuffer:(char *)arg1;
- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (void)setYbuffer:(char *)arg1;
- (int)width;

@end
