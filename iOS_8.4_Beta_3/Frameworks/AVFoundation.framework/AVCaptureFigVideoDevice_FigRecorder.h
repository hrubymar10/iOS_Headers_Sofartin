/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFigVideoDevice_FigRecorder : AVCaptureDevice_FigRecorder <MCProfileConnectionObserver> {
    AVCaptureDeviceFormat_FigRecorder *_activeFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMaxFrameDuration;
    bool _activeMaxFrameDurationSetByClient;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMinFrameDuration;
    bool _activeMinFrameDurationSetByClient;
    bool _adjustingExposure;
    bool _adjustingFocus;
    bool _adjustingWB;
    float _autoExposureBias;
    long long _autoFocusRangeRestriction;
    bool _automaticallyAdjustsImageControlMode;
    bool _automaticallyEnablesLowLightBoostWhenAvailable;
    float _contrast;
    struct OpaqueCMClock { } *_deviceClock;
    NSDictionary *_deviceProperties;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDuration;
    float _exposureGain;
    long long _exposureMode;
    struct CGPoint { 
        double x; 
        double y; 
    } _exposurePointOfInterest;
    bool _faceDetectionDrivenImageProcessingEnabled;
    bool _faceDetectionMetadataEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _faceRectangle;
    int _faceRectangleAngle;
    bool _flashActive;
    bool _flashAvailable;
    long long _flashMode;
    int _focusInFlightCount;
    long long _focusMode;
    struct CGPoint { 
        double x; 
        double y; 
    } _focusPointOfInterest;
    float _focusPosition;
    NSArray *_formats;
    bool _highDynamicRangeSceneDetectionEnabled;
    long long _imageControlMode;
    bool _isConnected;
    bool _lowLightBoostEnabled;
    bool _manualExposureSupportEnabled;
    bool _manualFocusSupportEnabled;
    long long _pendingImageControlMode;
    struct OpaqueFigRecorder { } *_recorderForTorchApps;
    float _saturation;
    bool _sceneIsHighDynamicRange;
    NSDictionary *_sensorProperties;
    bool _smoothAutoFocusEnabled;
    bool _subjectMonitoringEnabled;
    bool _torchActive;
    NSObject<OS_dispatch_source> *_torchAppsKillTimer;
    NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;
    bool _torchAvailable;
    float _torchLevel;
    long long _torchMode;
    long long _videoZoomDownscaleStageHint;
    bool _videoZoomDrawOverlay;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _videoZoomRampCounter;
    float _videoZoomRampTarget;
    long long _videoZoomUpscaleStageHint;
    long long _wbMode;
    AVWeakReference *_weakReference;
    float _whiteBalanceTemperature;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (bool)_cameraAccessIsEnabled;
+ (id)_devices;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (bool)HDRUsesPreBracketedFrameAsEV0;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)_applyPendingPropertiesToRecorder;
- (struct OpaqueFigRecorder { }*)_createFigRecorderForTorchApps;
- (id)_createTorchAppsKillTimer;
- (bool)_faceDetectionDebugMetadataReportingEnabled;
- (bool)_faceDetectionDrivenImageProcessingEnabled;
- (long long)_flashMode;
- (float)_floatValueForRecorderProperty:(struct __CFString { }*)arg1;
- (id)_numberForRecorderProperty:(struct __CFString { }*)arg1;
- (void)_restoreColorProperties;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(bool)arg2;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setAdjustingExposure:(bool)arg1;
- (void)_setAdjustingFocus:(bool)arg1;
- (void)_setAdjustingWhiteBalance:(bool)arg1;
- (bool)_setAutoExposureBias:(float)arg1;
- (void)_setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (bool)_setBoolValue:(bool)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (bool)_setContrast:(float)arg1;
- (bool)_setExposureWithMode:(long long)arg1 pointOfInterest:(id)arg2;
- (bool)_setFaceDetectionDebugMetadataReportingEnabled:(bool)arg1;
- (bool)_setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (void)_setFlashActive:(bool)arg1;
- (bool)_setFlashMode:(long long)arg1;
- (bool)_setFloatValue:(float)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (bool)_setFocusWithMode:(long long)arg1 pointOfInterest:(id)arg2;
- (void)_setHighDynamicRangeScene:(bool)arg1;
- (bool)_setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (bool)_setImageControlMode:(long long)arg1;
- (bool)_setNumber:(id)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (bool)_setSaturation:(float)arg1;
- (bool)_setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (void)_setTorchActive:(bool)arg1;
- (int)_setTorchMode:(long long)arg1 withLevel:(float)arg2;
- (bool)_setWhiteBalanceMode:(long long)arg1;
- (bool)_setWhiteBalanceTemperature:(float)arg1;
- (bool)_subjectAreaChangeMonitoringEnabled;
- (void)_teardownFigRecorderForTorchApps;
- (void)_teardownTorchAppsKillTimer;
- (long long)_torchMode;
- (void)_updateFlashAndTorchAvailability;
- (void)_updateImageControlMode;
- (long long)_whiteBalanceMode;
- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (float)autoExposureBias;
- (long long)autoFocusRangeRestriction;
- (bool)automaticallyAdjustsImageControlMode;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)cancelVideoZoomRamp;
- (float)contrast;
- (void)dealloc;
- (struct OpaqueCMClock { }*)deviceClock;
- (id)devicePropertiesDictionary;
- (bool)doesHandleNotification:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureGain;
- (long long)exposureMode;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (int)faceRectangleAngle;
- (void)finishPendingAdjustmentsKVO;
- (long long)flashMode;
- (long long)focusMode;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (float)focusPosition;
- (id)formats;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (bool)hasFlash;
- (bool)hasMediaType:(id)arg1;
- (bool)hasTorch;
- (long long)imageControlMode;
- (id)init;
- (id)initWithProperties:(id)arg1 sensorProperties:(id)arg2;
- (bool)isActiveVideoMaxFrameDurationSet;
- (bool)isActiveVideoMinFrameDurationSet;
- (bool)isAdjustingExposure;
- (bool)isAdjustingFocus;
- (bool)isAdjustingWhiteBalance;
- (bool)isAutoFocusRangeRestrictionSupported;
- (bool)isConnected;
- (bool)isExposureModeSupported:(long long)arg1;
- (bool)isExposurePointOfInterestSupported;
- (bool)isFaceDetectionDebugMetadataReportingEnabled;
- (bool)isFaceDetectionDrivenImageProcessingEnabled;
- (bool)isFaceDetectionDuringVideoPreviewSupported;
- (bool)isFaceDetectionSupported;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)isFlashModeSupported:(long long)arg1;
- (bool)isFocusModeSupported:(long long)arg1;
- (bool)isFocusPointOfInterestSupported;
- (bool)isHDRSupported;
- (bool)isHighDynamicRangeScene;
- (bool)isHighDynamicRangeSceneDetectionEnabled;
- (bool)isHighDynamicRangeSceneDetectionSupported;
- (bool)isImageControlModeSupported:(long long)arg1;
- (bool)isInUseByAnotherApplication;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isLowLightBoostEnabled;
- (bool)isLowLightBoostSupported;
- (bool)isMachineReadableCodeDetectionSupported;
- (bool)isManualExposureSupportEnabled;
- (bool)isManualFocusSupportEnabled;
- (bool)isRampingVideoZoom;
- (bool)isSISSupported;
- (bool)isSmoothAutoFocusEnabled;
- (bool)isSmoothAutoFocusSupported;
- (bool)isSubjectAreaChangeMonitoringEnabled;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (bool)isTorchModeSupported:(long long)arg1;
- (bool)isWhiteBalanceModeSupported:(long long)arg1;
- (id)localizedName;
- (id)modelID;
- (long long)position;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (float)saturation;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveInput:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAutoExposureBias:(float)arg1;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setContrast:(float)arg1;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setExposureGain:(float)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id)arg2;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(bool)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFocusPosition:(float)arg1;
- (void)setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (void)setImageControlMode:(long long)arg1;
- (void)setManualExposureSupportEnabled:(bool)arg1;
- (void)setManualFocusSupportEnabled:(bool)arg1;
- (void)setSaturation:(float)arg1;
- (void)setSmoothAutoFocusEnabled:(bool)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (void)setTorchMode:(long long)arg1;
- (bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setVideoZoomDownscaleStageHint:(long long)arg1;
- (void)setVideoZoomDrawOverlay:(bool)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (void)setVideoZoomUpscaleStageHint:(long long)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (bool)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (float)torchLevel;
- (long long)torchMode;
- (id)uniqueID;
- (long long)videoZoomDownscaleStageHint;
- (bool)videoZoomDrawOverlay;
- (double)videoZoomFactor;
- (float)videoZoomRampAcceleration;
- (long long)videoZoomUpscaleStageHint;
- (long long)whiteBalanceMode;
- (float)whiteBalanceTemperature;

@end
