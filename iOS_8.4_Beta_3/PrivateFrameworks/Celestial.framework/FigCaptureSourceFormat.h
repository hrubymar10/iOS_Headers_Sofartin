/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {
    struct opaqueCMFormatDescription { } *_formatDescription;
    NSDictionary *_formatDictionary;
    bool _isMultiStreamFormat;
}

@property(assign,readonly) NSArray * AVCaptureSessionPresets;
@property(assign,readonly) float aeMaxGain;
@property(assign,readonly) int autoFocusSystem;
@property(assign,readonly) bool capturesStillsFromVideoStream;
@property(assign,copy) NSString * debugDescription;
@property(getter=isDefaultActiveFormat,assign,readonly) bool defaultActiveFormat;
@property(assign,copy) NSString * description;
@property(getter=isExperimental,assign,readonly) bool experimental;
@property(assign,readonly) struct opaqueCMFormatDescription { }* formatDescription;
@property(assign,readonly) int frontEndScalerCompanionIndex;
@property(assign,readonly) bool hasFrontEndScalerCompanionIndex;
@property(assign,readonly) bool hasSensorHDRCompanionIndex;
@property(assign,readonly) unsigned long long hash;
@property(getter=isHDRSupported,assign,readonly) bool hdrSupported;
@property(getter=isHighProfileH264Supported,assign,readonly) bool highProfileH264Supported;
@property(getter=isHighResPhotoFormat,assign,readonly) bool highResPhotoFormat;
@property(assign,readonly) struct { int x1; int x2; } highResStillImageDimensions;
@property(getter=isHighResStillImageSupported,assign,readonly) bool highResStillImageSupported;
@property(assign,readonly) bool ispChromaNoiseReduction;
@property(assign,readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property(assign,readonly) float maxISO;
@property(assign,readonly) int maxIntegrationTimeOverride;
@property(assign,readonly) unsigned int mediaType;
@property(assign,readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property(assign,readonly) float minISO;
@property(getter=isMultiStreamFormat,assign,readonly) bool multiStreamFormat;
@property(assign,readonly) bool needsPreviewDPCC;
@property(getter=isPhotoFormat,assign,readonly) bool photoFormat;
@property(assign,readonly) bool prefersSensorHDREnabled;
@property(assign,readonly) struct { int x1; int x2; } sensorCropDimensions;
@property(assign,readonly) struct { int x1; int x2; } sensorDimensions;
@property(assign,readonly) int sensorHDRCompanionIndex;
@property(assign,readonly) struct { int x1; int x2; } sourceCropAspectRatio;
@property(getter=isStillImageStabilizationSupported,assign,readonly) bool stillImageStabilizationSupported;
@property(assign,readonly) Class superclass;
@property(assign,readonly) int temporalNoiseReductionMode;
@property(getter=isVideoBinned,assign,readonly) bool videoBinned;
@property(assign,readonly) float videoDefaultMaxFrameRate;
@property(assign,readonly) float videoDefaultMinFrameRate;
@property(assign,readonly) struct { int x1; int x2; } videoDimensions;
@property(assign,readonly) float videoFieldOfView;
@property(assign,readonly) unsigned int videoFormat;
@property(assign,readonly) int videoFormatIndex;
@property(getter=isVideoLowLightBinningSwitchSupported,assign,readonly) bool videoLowLightBinningSwitchSupported;
@property(assign,readonly) float videoMaxSupportedFrameRate;
@property(assign,readonly) float videoMaxZoomFactor;
@property(assign,readonly) float videoMinSupportedFrameRate;
@property(assign,readonly) int videoRawBitDepth;
@property(assign,readonly) float videoScaleFactor;
@property(assign,readonly) int videoStabilizationTypeOverrideForStandard;
@property(getter=isVideoZoomDynamicSensorCropSupported,assign,readonly) bool videoZoomDynamicSensorCropSupported;
@property(assign,readonly) float videoZoomFactorUpscaleThreshold;
@property(getter=isVideoZoomSupported,assign,readonly) bool videoZoomSupported;

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (struct { int x1; int x2; })_maxUseableSensorDimensions;
- (struct { int x1; int x2; })_outputDimensions;
- (struct { int x1; int x2; })_visibleSensorDimensionsIncludingCinematic:(bool)arg1;
- (float)aeMaxGain;
- (int)autoFocusSystem;
- (bool)capturesStillsFromVideoStream;
- (id)copyWithNewVideoPixelFormat:(unsigned int)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (int)frontEndScalerCompanionIndex;
- (bool)hasFrontEndScalerCompanionIndex;
- (bool)hasSensorHDRCompanionIndex;
- (struct { int x1; int x2; })highResStillImageDimensions;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isDefaultActiveFormat;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (bool)isHDRSupported;
- (bool)isHighProfileH264Supported;
- (bool)isHighResPhotoFormat;
- (bool)isHighResStillImageSupported;
- (bool)isMultiStreamFormat;
- (bool)isPhotoFormat;
- (bool)isStillImageStabilizationSupported;
- (bool)isVideoBinned;
- (bool)isVideoLowLightBinningSwitchSupported;
- (bool)isVideoStabilizationModeSupported:(int)arg1;
- (bool)isVideoZoomDynamicSensorCropSupported;
- (bool)isVideoZoomSupported;
- (bool)ispChromaNoiseReduction;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (int)maxIntegrationTimeOverride;
- (unsigned int)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (bool)needsPreviewDPCC;
- (bool)prefersSensorHDREnabled;
- (struct { int x1; int x2; })sensorCropDimensions;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorHDRCompanionIndex;
- (struct { int x1; int x2; })sourceCropAspectRatio;
- (int)temporalNoiseReductionMode;
- (float)videoDefaultMaxFrameRate;
- (float)videoDefaultMinFrameRate;
- (struct { int x1; int x2; })videoDimensions;
- (float)videoFieldOfView;
- (unsigned int)videoFormat;
- (int)videoFormatIndex;
- (float)videoMaxSupportedFrameRate;
- (float)videoMaxZoomFactor;
- (float)videoMinSupportedFrameRate;
- (int)videoRawBitDepth;
- (float)videoScaleFactor;
- (int)videoStabilizationTypeOverrideForStandard;
- (float)videoZoomFactorUpscaleThreshold;

@end
