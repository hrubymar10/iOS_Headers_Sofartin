/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetImageGenerator : NSObject {
    AVAssetImageGeneratorInternal *_priv;
}

@property(assign,copy) NSString * apertureMode;
@property(assign,readwrite) bool appliesPreferredTrackTransform;
@property(assign,readonly) AVAsset * asset;
@property(assign,readonly) <AVVideoCompositing> * customVideoCompositor;
@property(assign,readwrite) struct CGSize { double x1; double x2; } maximumSize;
@property(assign,readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceAfter;
@property(assign,readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } requestedTimeToleranceBefore;
@property(assign,copy) AVVideoComposition * videoComposition;

+ (id)assetImageGeneratorWithAsset:(id)arg1;

- (id)_NSErrorForError:(int)arg1;
- (struct CGImage { }*)_copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingAssetReader:(id)arg2 error:(id*)arg3;
- (struct __CFDictionary { }*)_createPixelBufferAttributesWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_didGenerateCGImage:(id)arg1;
- (bool)_ensureFigAssetImageGeneratorReturningError:(id*)arg1;
- (void)_failedToGenerateCGImage:(id)arg1;
- (id)_makeAutoreleasedAssetReader;
- (id)_optionsDictionary;
- (id)_requestWithRequestID:(id)arg1;
- (struct CGSize { double x1; double x2; })_scaledSizeForRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_serverDied;
- (id)apertureMode;
- (bool)appliesPreferredTrackTransform;
- (id)asset;
- (void)cancelAllCGImageGeneration;
- (struct CGImage { }*)copyCGImageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 error:(id*)arg3;
- (id)customVideoCompositor;
- (void)dealloc;
- (void)finalize;
- (void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(id)arg2;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceAfter;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestedTimeToleranceBefore;
- (void)setApertureMode:(id)arg1;
- (void)setAppliesPreferredTrackTransform:(bool)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequestedTimeToleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRequestedTimeToleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;

@end
