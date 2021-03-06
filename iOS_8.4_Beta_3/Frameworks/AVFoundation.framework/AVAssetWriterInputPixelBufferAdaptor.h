/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject {
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;

+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
+ (id)keyPathsForValuesAffectingPixelBufferPool;

- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)assetWriterInput;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)sourcePixelBufferAttributes;

@end
