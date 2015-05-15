/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURedeyeToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate> {
    bool _failureAnimationIsInProgress;
    PUPhotoEditOverlayBadge *_failureLabel;
    NSArray *_failureLabelConstraints;
    PUPhotoEditOverlayBadge *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    bool _isModelChangeLocal;
    NSMutableArray *_knownCorrections;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) PURedeyeToolControllerSpec * spec;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateFailureAppearance;
- (void)_animateInstructionAppearance;
- (void)_correctRedEyeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleRedeyeButton:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_loadCorrectionsFromModelAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_locationInCroppedImage:(struct CGPoint { double x1; double x2; })arg1 YCoordinateIsFlipped:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_locationInOriginalImage:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_removeCorrectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint { double x1; double x2; })arg1 YCoordinateIsFlipped:(bool)arg2 isFailure:(bool)arg3;
- (void)dealloc;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (void)flashAutoRedEyeCorrections;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)localizedName;
- (void)photoEditModelDidChange;
- (unsigned long long)preferredRenderMode;
- (id)selectedToolbarIcon;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (bool)wantsSecondaryToolbarVisible;
- (bool)wantsZoomAndPanEnabled;

@end