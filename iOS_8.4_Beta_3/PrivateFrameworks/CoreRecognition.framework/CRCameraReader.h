/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReader : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    UIActivityIndicatorView *_activityIndicator;
    CRAlignmentLayer *_alignmentLayer;
    CRBoxLayer *_boxLayer;
    NSTimer *_boxLayerHideTimer;
    <CRCameraReaderDelegate> *_callbackDelegate;
    NSString *_cameraMode;
    long long _cameraPosition;
    NSPointerArray *_captureBuffer;
    unsigned long long _captureCount;
    bool _captureMode;
    NSMutableDictionary *_cardNumberCounts;
    NSMutableDictionary *_cardholderCounts;
    bool _codeInverted;
    NSDate *_codePresented;
    double _configDemoSpeed;
    bool _configExperimentalMode;
    bool _configPresentCentered;
    bool _configUseFastScanning;
    bool _configUseJPEGForColor;
    bool _continousMode;
    NSMutableArray *_dateCutRects;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    DiagnosticHUDLayer *_diagnosticHUDLayer;
    bool _didSendEndOrCancel;
    bool _didSendFindBox;
    NSMutableDictionary *_expirationDateCounts;
    long long _exposureMode;
    long long _focusMode;
    NSString *_foundCode;
    bool _foundNumberEmbossed;
    bool _foundNumberFixedSapphire;
    bool _foundNumberFixedSlate;
    bool _foundNumberFlatISO;
    bool _foundNumberFreeform;
    bool _foundNumberPortrait;
    bool _foundNumberTextDetector;
    NSArray *_foundPoints;
    bool _hidePlacementText;
    unsigned long long _imagesToCapture;
    struct opaqueCMSampleBuffer { } *_lastBuffer;
    NSDate *_lastFieldFoundDate;
    NSDate *_lastFoundNumberDate;
    NSDate *_lastSendFindBox;
    NSMutableArray *_nameCutRects;
    NSArray *_outputObjectTypes;
    NSMutableDictionary *_pinnedFoundInfo;
    NSDate *_pointsFound;
    struct OpaqueVTPixelTransferSession { } *_previewScaleSession;
    bool _previousIdleState;
    NSObject<OS_dispatch_semaphore> *_processingImage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    CRCaptureSessionManager *_sessionManager;
    NSDate *_sessionStarted;
    double _sessionTimeout;
    bool _showDiagnosticHUD;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _torchMode;
    long long _whiteBalanceMode;
}

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (retain) CRAlignmentLayer *alignmentLayer;
@property (retain) CRBoxLayer *boxLayer;
@property (retain) NSTimer *boxLayerHideTimer;
@property <CRCameraReaderDelegate> *callbackDelegate;
@property (copy) NSString *cameraMode;
@property long long cameraPosition;
@property (retain) NSPointerArray *captureBuffer;
@property unsigned long long captureCount;
@property (getter=isCaptureMode) bool captureMode;
@property (retain) NSMutableDictionary *cardNumberCounts;
@property (retain) NSMutableDictionary *cardholderCounts;
@property bool codeInverted;
@property (retain) NSDate *codePresented;
@property double configDemoSpeed;
@property bool configExperimentalMode;
@property bool configPresentCentered;
@property bool configUseFastScanning;
@property bool configUseJPEGForColor;
@property bool continousMode;
@property (readonly) long long currentCameraIdentifier;
@property (retain) NSMutableArray *dateCutRects;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (retain) DiagnosticHUDLayer *diagnosticHUDLayer;
@property bool didSendEndOrCancel;
@property bool didSendFindBox;
@property (retain) NSMutableDictionary *expirationDateCounts;
@property long long exposureMode;
@property long long focusMode;
@property (retain) NSString *foundCode;
@property bool foundNumberEmbossed;
@property bool foundNumberFixedSapphire;
@property bool foundNumberFixedSlate;
@property bool foundNumberFlatISO;
@property bool foundNumberFreeform;
@property bool foundNumberPortrait;
@property bool foundNumberTextDetector;
@property (retain) NSArray *foundPoints;
@property (readonly) unsigned long long hash;
@property bool hidePlacementText;
@property unsigned long long imagesToCapture;
@property struct opaqueCMSampleBuffer { }*lastBuffer;
@property (retain) NSDate *lastFieldFoundDate;
@property (retain) NSDate *lastFoundNumberDate;
@property (retain) NSDate *lastSendFindBox;
@property (retain) NSMutableArray *nameCutRects;
@property (copy) NSArray *outputObjectTypes;
@property (retain) NSMutableDictionary *pinnedFoundInfo;
@property (retain) NSDate *pointsFound;
@property struct OpaqueVTPixelTransferSession { }*previewScaleSession;
@property bool previousIdleState;
@property (retain) NSObject<OS_dispatch_semaphore> *processingImage;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) CRCaptureSessionManager *sessionManager;
@property (retain) NSDate *sessionStarted;
@property double sessionTimeout;
@property bool showDiagnosticHUD;
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapGestureRecognizer;
@property long long torchMode;
@property long long whiteBalanceMode;

+ (id)extractCardImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 withCardBuffer:(struct __CVBuffer { }*)arg3 pixelFocalLength:(id)arg4;
+ (id)extractCardImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 withCardBuffer:(struct __CVBuffer { }*)arg3 withPoints:(id)arg4 pixelFocalLength:(id)arg5;
+ (id)findCCExpDateInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
+ (id)findCCNameInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
+ (id)findCCNumberInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 useCombinedEngine:(bool)arg2;
+ (id)findCCObjects:(id)arg1 InImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(bool)arg5;
+ (id)findCCObjects:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 numberRects:(id)arg3 nameRects:(id)arg4 dateRects:(id)arg5 isDetectedRect:(bool)arg6 useFlatEngine:(bool)arg7;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)findObjects:(id)arg1 inCorrectedImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
+ (id)findObjects:(id)arg1 inCorrectedImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(bool)arg5;
+ (id)findObjects:(id)arg1 inImage:(id)arg2 properties:(id)arg3;
+ (id)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 withFixedCut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 withFixedCut:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 nameRects:(id)arg4 dateRects:(id)arg5 useFlatEngine:(bool)arg6;
+ (void)loadFonts;
+ (unsigned long long)supportedCameraCount;
+ (id)targetRectsForImage:(struct __CVBuffer { }*)arg1;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)alignmentLayer;
- (void)animatePresentCode;
- (id)boxLayer;
- (id)boxLayerHideTimer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boxLayerPresentationFrame;
- (id)callbackDelegate;
- (id)cameraMode;
- (long long)cameraPosition;
- (void)cancel;
- (id)captureBuffer;
- (unsigned long long)captureCount;
- (void)captureImage;
- (void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)cardNumberCounts;
- (id)cardholderCounts;
- (bool)codeInverted;
- (id)codePresented;
- (double)configDemoSpeed;
- (bool)configExperimentalMode;
- (bool)configPresentCentered;
- (bool)configUseFastScanning;
- (bool)configUseJPEGForColor;
- (bool)continousMode;
- (long long)currentCameraIdentifier;
- (id)dateCutRects;
- (void)dealloc;
- (id)delegateQueue;
- (id)diagnosticHUDLayer;
- (void)didReceiveMemoryWarning;
- (bool)didSendEndOrCancel;
- (bool)didSendFindBox;
- (id)expirationDateCounts;
- (long long)exposureMode;
- (void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)findObjects:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2 attachments:(id)arg3;
- (void)flashScreenAndPlayCaptureSound;
- (long long)focusMode;
- (id)foundCode;
- (bool)foundNumberEmbossed;
- (bool)foundNumberFixedSapphire;
- (bool)foundNumberFixedSlate;
- (bool)foundNumberFlatISO;
- (bool)foundNumberFreeform;
- (bool)foundNumberPortrait;
- (bool)foundNumberTextDetector;
- (id)foundPoints;
- (id)generateStringFromDate:(id)arg1;
- (void)handleTapFrom:(id)arg1;
- (void)hideBoxLayer;
- (bool)hidePlacementText;
- (unsigned long long)imagesToCapture;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCaptureMode;
- (struct opaqueCMSampleBuffer { }*)lastBuffer;
- (id)lastFieldFoundDate;
- (id)lastFoundNumberDate;
- (id)lastSendFindBox;
- (void)loadView;
- (id)nameCutRects;
- (void)orientationDidChange:(id)arg1;
- (id)outputObjectTypes;
- (void)pauseBoxLayerHideTimer;
- (id)pinnedFoundInfo;
- (id)pointsFound;
- (struct OpaqueVTPixelTransferSession { }*)previewScaleSession;
- (bool)previousIdleState;
- (void)primeBoxLayerHideTimer;
- (id)processingImage;
- (id)processingQueue;
- (void)removeLayerTree;
- (void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3;
- (void)sendDidCancel;
- (void)sendDidDisplayMessageStyle:(long long)arg1;
- (void)sendDidEndAnimation;
- (void)sendDidEndWithError:(id)arg1;
- (void)sendDidEndWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (void)sendDidEndWithInfo:(id)arg1;
- (void)sendDidFindTarget:(id)arg1;
- (void)sendDidRecognizeNewObjects:(id)arg1;
- (id)sessionManager;
- (id)sessionStarted;
- (double)sessionTimeout;
- (void)setActivityIndicator:(id)arg1;
- (void)setAlignmentLayer:(id)arg1;
- (void)setBoxLayer:(id)arg1;
- (void)setBoxLayerHideTimer:(id)arg1;
- (void)setCallbackDelegate:(id)arg1;
- (void)setCameraMode:(id)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCaptureBuffer:(id)arg1;
- (void)setCaptureCount:(unsigned long long)arg1;
- (void)setCaptureMode:(bool)arg1;
- (void)setCardNumberCounts:(id)arg1;
- (void)setCardholderCounts:(id)arg1;
- (void)setCodeInverted:(bool)arg1;
- (void)setCodePresented:(id)arg1;
- (void)setConfigDemoSpeed:(double)arg1;
- (void)setConfigExperimentalMode:(bool)arg1;
- (void)setConfigPresentCentered:(bool)arg1;
- (void)setConfigUseFastScanning:(bool)arg1;
- (void)setConfigUseJPEGForColor:(bool)arg1;
- (void)setContinousMode:(bool)arg1;
- (void)setDateCutRects:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiagnosticHUDLayer:(id)arg1;
- (void)setDidSendEndOrCancel:(bool)arg1;
- (void)setDidSendFindBox:(bool)arg1;
- (void)setExpirationDateCounts:(id)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setFoundCode:(id)arg1;
- (void)setFoundNumberEmbossed:(bool)arg1;
- (void)setFoundNumberFixedSapphire:(bool)arg1;
- (void)setFoundNumberFixedSlate:(bool)arg1;
- (void)setFoundNumberFlatISO:(bool)arg1;
- (void)setFoundNumberFreeform:(bool)arg1;
- (void)setFoundNumberPortrait:(bool)arg1;
- (void)setFoundNumberTextDetector:(bool)arg1;
- (void)setFoundPoints:(id)arg1;
- (void)setHidePlacementText:(bool)arg1;
- (void)setImagesToCapture:(unsigned long long)arg1;
- (void)setLastBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setLastFieldFoundDate:(id)arg1;
- (void)setLastFoundNumberDate:(id)arg1;
- (void)setLastSendFindBox:(id)arg1;
- (void)setNameCutRects:(id)arg1;
- (void)setOutputObjectTypes:(id)arg1;
- (void)setPinnedFoundInfo:(id)arg1;
- (void)setPointsFound:(id)arg1;
- (void)setPreviewScaleSession:(struct OpaqueVTPixelTransferSession { }*)arg1;
- (void)setPreviousIdleState:(bool)arg1;
- (void)setProcessingImage:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)setSessionStarted:(id)arg1;
- (void)setSessionTimeout:(double)arg1;
- (void)setShowDiagnosticHUD:(bool)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTorchMode:(long long)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (bool)showDiagnosticHUD;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(long long)arg3 duration:(double)arg4;
- (void)start;
- (void)startSession;
- (void)stopSession;
- (void)switchToCamera:(long long)arg1;
- (id)tapGestureRecognizer;
- (void)toggleCamera;
- (long long)torchMode;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (long long)whiteBalanceMode;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
