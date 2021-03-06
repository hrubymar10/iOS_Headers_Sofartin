/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVideoMessageRecordingViewController : UIViewController <CKJoystickControllerDelegate, CKVideoPreviewViewControllerDelegate, CKVideoRecorderDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UIImagePickerController *_cameraViewController;
    bool _canceled;
    NSError *_captureError;
    unsigned long long _enableCancel;
    id _mediaExportCompletionBlock;
    CKMediaObject *_mediaObjectForSending;
    UIWindow *_overlayWindow;
    UIView *_presentationView;
    bool _presented;
    CKVideoPreviewViewController *_previewViewController;
    bool _previewWarmedUp;
    bool _previewing;
    CKJoystickShutterButtonItem *_recordVideoButtonItem;
    bool _recording;
    CKJoystickButtonItem *_sendButtonItem;
    bool _sending;
    bool _showingVideo;
    UIButton *_swapCameraButton;
    CKRecordingElapsedTimeView *_timerView;
    UIView *_topBackgroundView;
    bool _triedToRecord;
    CKJoystickController *_videoJoystickController;
    <CKVideoMessageRecordingViewControllerDelegate> *_videoMessageDelegate;
}

@property(assign,retain) UIImagePickerController * cameraViewController;
@property(assign,readwrite) bool canceled;
@property(assign,retain) NSError * captureError;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) unsigned long long enableCancel;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id mediaExportCompletionBlock;
@property(assign,retain) CKMediaObject * mediaObjectForSending;
@property(assign,retain) CKVideoPreviewViewController * previewViewController;
@property(assign,readwrite) bool previewing;
@property(assign,retain) CKJoystickShutterButtonItem * recordVideoButtonItem;
@property(assign,readwrite) bool recording;
@property(assign,retain) CKJoystickButtonItem * sendButtonItem;
@property(assign,readwrite) bool sending;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIButton * swapCameraButton;
@property(assign,retain) CKRecordingElapsedTimeView * timerView;
@property(assign,retain) UIView * topBackgroundView;
@property(assign,readwrite) bool triedToRecord;
@property(assign,retain) CKJoystickController * videoJoystickController;
@property(assign,readwrite) <CKVideoMessageRecordingViewControllerDelegate> * videoMessageDelegate;

- (void)_animatePreviewIn;
- (void)_animateVideoIn;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cameraOrientationChanged:(id)arg1;
- (void)_cleanupCamera;
- (void)_previewWarmedUp:(id)arg1;
- (void)_setupPreviewView;
- (id)cameraViewController;
- (void)cancel;
- (bool)canceled;
- (id)captureError;
- (id)childViewControllerForStatusBarHidden;
- (void)ckVideoPreviewViewControllerFinishedPlaying:(id)arg1;
- (void)ckVideoPreviewViewControllerReady:(id)arg1;
- (void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorderRecordingCanceled:(id)arg1;
- (void)dealloc;
- (void)delayedRecord;
- (void)dismissWithCompletion:(id)arg1;
- (unsigned long long)enableCancel;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithPresentationView:(id)arg1;
- (void)joystickCancelAction:(id)arg1;
- (void)joystickCancelActionButtonDown:(id)arg1;
- (void)joystickControllerWillDismissJoystick:(id)arg1 animated:(bool)arg2;
- (void)joystickPlaybackButtonUpAction:(id)arg1;
- (void)joystickSendButtonUpAction:(id)arg1;
- (void)joystickShutterButtonDownAction:(id)arg1;
- (void)joystickShutterButtonTapAction:(id)arg1;
- (void)joystickShutterButtonUpAction:(id)arg1;
- (void)joystickTakePhoto:(id)arg1;
- (void)loadView;
- (id)mediaExportCompletionBlock;
- (id)mediaObjectForSending;
- (void)presentInitialPlaybackJoystick;
- (void)presentPlaybackJoystick:(bool)arg1;
- (void)presentRecordingJoystick;
- (void)presentVideoJoystick;
- (void)presentWithCompletion:(id)arg1;
- (id)previewViewController;
- (bool)previewing;
- (void)record;
- (id)recordVideoButtonItem;
- (bool)recording;
- (void)send;
- (id)sendButtonItem;
- (bool)sending;
- (void)setCameraViewController:(id)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCaptureError:(id)arg1;
- (void)setEnableCancel:(unsigned long long)arg1;
- (void)setMediaExportCompletionBlock:(id)arg1;
- (void)setMediaObjectForSending:(id)arg1;
- (void)setPreviewViewController:(id)arg1;
- (void)setPreviewing:(bool)arg1;
- (void)setRecordVideoButtonItem:(id)arg1;
- (void)setRecording:(bool)arg1;
- (void)setSendButtonItem:(id)arg1;
- (void)setSending:(bool)arg1;
- (void)setSwapCameraButton:(id)arg1;
- (void)setTimerView:(id)arg1;
- (void)setTopBackgroundView:(id)arg1;
- (void)setTriedToRecord:(bool)arg1;
- (void)setVideoJoystickController:(id)arg1;
- (void)setVideoMessageDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (void)stopRecordingWithCompletionBlock:(id)arg1;
- (void)swapCamera:(id)arg1;
- (id)swapCameraButton;
- (void)takePictureWithCompletionBlock:(id)arg1;
- (id)timerView;
- (id)topBackgroundView;
- (bool)triedToRecord;
- (id)videoJoystickController;
- (id)videoMessageDelegate;

@end
