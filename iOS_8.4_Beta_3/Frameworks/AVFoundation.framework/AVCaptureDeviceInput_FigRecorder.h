/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInput_FigRecorder : AVCaptureInput_FigRecorder {
    AVCaptureDeviceInputInternal_FigRecorder *_internal;
}

@property (nonatomic, readonly) AVCaptureDevice_FigRecorder *device;

+ (id)deviceInputWithDevice:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (bool)_authorizedToUseDevice:(id)arg1;
- (void)_checkForFigCameraAccess;
- (int)_requestCameraRecordPermission;
- (void)_setDevice:(id)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (bool)isKindOfClass:(Class)arg1;
- (id)notReadyError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)ports;
- (void)setSession:(id)arg1;
- (void)willStartForSession:(id)arg1;

@end
