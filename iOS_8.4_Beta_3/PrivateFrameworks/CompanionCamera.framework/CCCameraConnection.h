/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
 */

@interface CCCameraConnection : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    <CCCameraConnectionDelegate> *_delegate;
    CCCameraConnectionInternal *_internal;
    id _orientationChangeObserver;
    NSString *_previewEndpoint;
    FigCameraViewfinder *_remoteViewfinder;
    FigCameraViewfinderSession *_remoteViewfinderSession;
    bool _remoteViewfinderSessionActive;
    NSXPCConnection *_xpc;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CCCameraConnectionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (int)_currentOrientation;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
- (void)close;
- (void)closePreview;
- (void)countdownCanceled;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isOpen;
- (bool)isPreviewConnected;
- (void)modeSelected:(unsigned long long)arg1;
- (void)open;
- (void)openPreview;
- (void)photoTaken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)switchedMirroringMode:(bool)arg1;
- (void)switchedOrientation:(long long)arg1;
- (void)takePhotoWithCountdown:(unsigned long long)arg1;
- (oneway void)xpc_beginVideo;
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_endVideo;
- (oneway void)xpc_fetchCurrentOrientationAndMirroring:(id)arg1;
- (oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(bool)arg2 completion:(id)arg3;
- (oneway void)xpc_setFocusPoint:(id)arg1;
- (oneway void)xpc_setPreviewEndpoint:(id)arg1;

@end