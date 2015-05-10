/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVResolvedCaptureOptions : NSObject {
    NSMutableDictionary *baseCaptureOptions;
    bool captureSessionPresetChanging;
    NSString *faceDetectionMode;
    bool faceDetectionNotificationsEnabled;
    bool hasStillImageOutput;
    NSMutableDictionary *optionsOverrides;
    struct __CFDictionary { } *outputSettingsOverrides;
    bool resetsVideoZoomFactorToDefaultValue;
    NSMutableDictionary *resolvedCaptureOptions;
    NSMutableDictionary *resolvedVideoCompressionProperties;
    AVCaptureDeviceFormat_FigRecorder *resolvedVideoDeviceFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } resolvedVideoMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } resolvedVideoMinFrameDuration;
    bool resolvesFrameRatesUsingDefaultValues;
    NSString *sessionPreset;
    bool usePreviewSizedCaptureBuffers;
    bool useStabilizationIfAvailable;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoConnectionMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoConnectionMinFrameDuration;
}

@property(assign,readwrite) bool hasStillImageOutput;
@property(assign,readwrite) bool resetsVideoZoomFactorToDefaultValue;
@property(assign,readwrite) bool resolvesFrameRatesUsingDefaultValues;
@property(assign,readonly) NSString * sessionPreset;

+ (void)initialize;
+ (id)resolvedCaptureOptionsWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2;

- (void)addFaceDetectionMode:(id)arg1 forConnection:(id)arg2;
- (void)addMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forConnection:(id)arg2;
- (void)addMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forConnection:(id)arg2;
- (void)addOutputSettings:(id)arg1 forConnection:(id)arg2;
- (void)applyInputPriorityOverridesToCaptureOptions:(id)arg1 forCamera:(id)arg2;
- (id)baseCaptureOptions;
- (id)cameraForCaptureOptions:(id)arg1;
- (void)dealloc;
- (id)deviceFormatForCamera:(id)arg1 captureOptions:(id)arg2;
- (void)enableFaceDetectionNotificationsForConnection:(id)arg1;
- (bool)hasHeightOverrideInResolvedOptions:(id)arg1;
- (bool)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (bool)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (bool)hasStillImageOutput;
- (bool)hasWidthOverrideInResolvedOptions:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2;
- (int)rankForFaceDetectionMode:(id)arg1;
- (bool)resetsVideoZoomFactorToDefaultValue;
- (void)resolveFrameRatesToCaptureOptions:(id)arg1 withCamera:(id)arg2 activeFormat:(id)arg3;
- (void)resolveOutputSettingsToCaptureOptions:(id)arg1 resolvedScalingMode:(id*)arg2;
- (id)resolvedCaptureOptionsDictionary;
- (id)resolvedVideoCompressionProperties;
- (id)resolvedVideoDeviceFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })resolvedVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })resolvedVideoMinFrameDuration;
- (id)resolvedVideoSettingsForAssetWriter;
- (id)resolvedVideoSettingsForMovieFileOutput;
- (id)resolvedVideoSettingsWithScalingAllowed:(bool)arg1;
- (bool)resolvesFrameRatesUsingDefaultValues;
- (id)sessionPreset;
- (void)setBestCaptureResolutionForAVScalingMode:(id)arg1 captureOptions:(id)arg2;
- (void)setBestPreviewResolutionForCaptureOptions:(id)arg1;
- (void)setHasStillImageOutput:(bool)arg1;
- (void)setResetsVideoZoomFactorToDefaultValue:(bool)arg1;
- (void)setResolvesFrameRatesUsingDefaultValues:(bool)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)usePreviewSizedCaptureBuffersForConnection:(id)arg1;
- (void)useStabilizationIfAvailableForConnection:(id)arg1;

@end