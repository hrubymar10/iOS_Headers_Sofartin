/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate> {
    <PKPaymentCameraCaptureViewControllerDelegate> *_cameraCaptureDelegate;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    UIView *_cameraView;
    long long _context;
    bool _hideSetupLaterButton;
    PKPaymentCardManualEntryViewController *_manualEntryController;
    NSArray *_outputObjects;
    <PKPaymentSetupViewControllerDelegate> *_setupDelegate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool hideSetupLaterButton;
@property(assign,readonly) Class superclass;

- (void)_manualEntryButtonPressed:(id)arg1;
- (void)_pushManualEntryViewControllerAndRemoveSelf;
- (void)_setupLater:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)dealloc;
- (bool)hideSetupLaterButton;
- (id)init;
- (id)initWithCameraCaptureDelegate:(id)arg1;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (bool)isBuddyiPad;
- (void)loadView;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
