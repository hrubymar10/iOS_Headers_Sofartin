/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {
    AVCaptureDeviceInput *_audioInput;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    bool _canceled;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    long long _currentDevice;
    <CKVideoRecorderDelegate> *_delegate;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDeviceInput *_frontVideoInput;
    NSURL *_outputFileURL;
    bool _previousStatusBarHidden;
    AVCaptureDevice *_rearFacingCamera;
    AVCaptureDeviceInput *_rearVideoInput;
    AVCaptureSession *_session;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureMovieFileOutput *_videoOutput;
}

@property(assign,retain) AVCaptureDeviceInput * audioInput;
@property(assign,readwrite) long long cameraDevice;
@property(assign,readwrite) bool canceled;
@property(assign,retain) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CKVideoRecorderDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) AVCaptureDeviceInput * frontVideoInput;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSURL * outputFileURL;
@property(assign,retain) AVCaptureDeviceInput * rearVideoInput;
@property(assign,retain) AVCaptureSession * session;
@property(assign,retain) AVCaptureStillImageOutput * stillImageOutput;
@property(assign,readonly) Class superclass;
@property(assign,retain) AVCaptureMovieFileOutput * videoOutput;

- (id)_cameraWithPosition:(long long)arg1;
- (id)_configureFrontVideoInput;
- (id)_configureRearVideoInput;
- (id)audioDevice;
- (id)audioInput;
- (long long)cameraDevice;
- (void)cancel;
- (bool)canceled;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (id)captureVideoPreviewLayer;
- (void)dealloc;
- (id)delegate;
- (id)frontFacingCamera;
- (id)frontVideoInput;
- (id)init;
- (void)loadView;
- (id)outputFileURL;
- (id)rearFacingCamera;
- (id)rearVideoInput;
- (id)session;
- (void)setAudioInput:(id)arg1;
- (void)setCameraDevice:(long long)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCaptureVideoPreviewLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrontVideoInput:(id)arg1;
- (void)setOutputFileURL:(id)arg1;
- (void)setRearVideoInput:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStillImageOutput:(id)arg1;
- (void)setVideoOutput:(id)arg1;
- (void)setupCamera:(id)arg1;
- (bool)startVideoCapture;
- (id)stillImageOutput;
- (void)stopVideoCapture;
- (void)takePicture;
- (id)videoOutput;
- (void)viewWillAppear:(bool)arg1;

@end
