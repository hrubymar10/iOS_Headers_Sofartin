/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureConnection_FigRecorder : NSObject {
    AVCaptureConnectionInternal_FigRecorder *_internal;
}

@property(getter=isActive,assign,readonly) bool active;
@property(assign,readonly) NSArray * audioChannels;
@property(assign,readwrite) bool automaticallyAdjustsVideoMirroring;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,readwrite) bool enablesVideoStabilizationWhenAvailable;
@property(assign,readonly) NSArray * inputPorts;
@property(assign,readonly) AVCaptureOutput_FigRecorder * output;
@property(getter=isVideoMaxFrameDurationSupported,assign,readonly) bool supportsVideoMaxFrameDuration;
@property(getter=isVideoMinFrameDurationSupported,assign,readonly) bool supportsVideoMinFrameDuration;
@property(getter=isVideoMirroringSupported,assign,readonly) bool supportsVideoMirroring;
@property(getter=isVideoOrientationSupported,assign,readonly) bool supportsVideoOrientation;
@property(getter=isVideoStabilizationSupported,assign,readonly) bool supportsVideoStabilization;
@property(assign,readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } videoMaxFrameDuration;
@property(assign,readonly) double videoMaxScaleAndCropFactor;
@property(assign,readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDuration;
@property(getter=isVideoMirrored,assign,readwrite) bool videoMirrored;
@property(assign,readwrite) long long videoOrientation;
@property(assign,readonly) AVCaptureVideoPreviewLayer_FigRecorder * videoPreviewLayer;
@property(assign,readwrite) double videoScaleAndCropFactor;
@property(getter=isVideoStabilizationEnabled,assign,readonly) bool videoStabilizationEnabled;

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;

- (void)_setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoMirrored:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMinFrameDuration;
- (long long)activeVideoStabilizationMode;
- (id)audioChannels;
- (bool)automaticallyAdjustsVideoMirroring;
- (void)dealloc;
- (id)description;
- (bool)enablesVideoStabilizationWhenAvailable;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (void)initCommonStorage;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)inputPorts;
- (void)invalidate;
- (bool)isActive;
- (bool)isEnabled;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isLive;
- (bool)isVideoMaxFrameDurationSet;
- (bool)isVideoMaxFrameDurationSupported;
- (bool)isVideoMinFrameDurationSet;
- (bool)isVideoMinFrameDurationSupported;
- (bool)isVideoMirrored;
- (bool)isVideoMirroringSupported;
- (bool)isVideoOrientationSupported;
- (bool)isVideoRetainedBufferCountHintSupported;
- (bool)isVideoStabilizationEnabled;
- (bool)isVideoStabilizationSupported;
- (id)mediaType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)output;
- (long long)preferredVideoStabilizationMode;
- (id)session;
- (void)setActive:(bool)arg1;
- (void)setAutomaticallyAdjustsVideoMirroring:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnablesVideoStabilizationWhenAvailable:(bool)arg1;
- (void)setPreferredVideoStabilizationMode:(long long)arg1;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (void)setVideoScaleAndCropFactor:(double)arg1;
- (id)sourceDevice;
- (bool)sourcesFromFrontFacingCamera;
- (void)updateAudioChannelsArray;
- (void)updateAudioLevelsArray;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (double)videoMaxScaleAndCropFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (long long)videoOrientation;
- (id)videoPreviewLayer;
- (int)videoRetainedBufferCountHint;
- (double)videoScaleAndCropFactor;

@end
