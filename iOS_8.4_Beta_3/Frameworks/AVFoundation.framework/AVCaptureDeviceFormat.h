/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal *_internal;
}

@property(assign,readonly) long long autoFocusSystem;
@property(assign,readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(assign,readonly) struct { int x1; int x2; } highResolutionStillImageDimensions;
@property(assign,readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property(assign,readonly) float maxISO;
@property(assign,readonly) NSString * mediaType;
@property(assign,readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property(assign,readonly) float minISO;
@property(getter=isVideoBinned,assign,readonly) bool videoBinned;
@property(assign,readonly) float videoFieldOfView;
@property(getter=isVideoHDRSupported,assign,readonly) bool videoHDRSupported;
@property(assign,readonly) double videoMaxZoomFactor;
@property(getter=isVideoStabilizationSupported,assign,readonly) bool videoStabilizationSupported;
@property(assign,readonly) NSArray * videoSupportedFrameRateRanges;
@property(assign,readonly) double videoZoomFactorUpscaleThreshold;

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 frameRateRanges:(id)arg2;
- (long long)autoFocusSystem;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDuration;
- (id)description;
- (id)figCaptureSourceFormat;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (struct { int x1; int x2; })highResolutionStillImageDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (bool)isDefaultActiveFormat;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (bool)isHighResPhotoFormat;
- (bool)isPhotoFormat;
- (bool)isSISSupported;
- (bool)isVideoBinned;
- (bool)isVideoHDRSupported;
- (bool)isVideoStabilizationModeSupported:(long long)arg1;
- (bool)isVideoStabilizationSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (id)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (bool)needsPhotoPreviewDPCC;
- (bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (struct { int x1; int x2; })previewDimensions;
- (int)rawBitDepth;
- (struct { int x1; int x2; })sensorDimensions;
- (int)supportedFormatsArrayIndex;
- (int)supportedStabilizationMethod;
- (bool)supportsDynamicCrop;
- (bool)supportsHighProfileH264;
- (bool)supportsHighResolutionStillImageOutput;
- (bool)supportsLowLightBoost;
- (float)videoFieldOfView;
- (double)videoMaxZoomFactor;
- (id)videoSupportedFrameRateRanges;
- (double)videoZoomFactorUpscaleThreshold;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (id)vtScalingMode;

@end
