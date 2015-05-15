/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling, UIGestureRecognizerDelegate> {
    id __clearPreventRotationHook;
    id __didChangeBoundsBlock;
    UIViewController *__preservedDetailController;
    UIBarButtonItem *_barButtonItem;
    NSString *_buttonTitle;
    UISnapshotView *_collapsingDetailSnapshotView;
    UISnapshotView *_collapsingMasterSnapshotView;
    NSArray *_cornerImageViews;
    float _cornerRadius;
    id _delegate;
    UIBarButtonItem *_displayModeButtonItem;
    NSString *_displayModeButtonItemTitle;
    long long _effectiveTargetDisplayMode;
    float _gutterWidth;
    UIPopoverController *_hiddenPopoverController;
    long long _lastPresentedOrientation;
    UIView *_masterBackgroundView;
    double _masterColumnWidth;
    double _maximumPrimaryColumnWidth;
    double _minimumPrimaryColumnWidth;
    long long _pendingDisplayModeChangeCount;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    UIResponder *_postTransitionResponder;
    long long _preferredDisplayMode;
    double _preferredPrimaryColumnWidthFraction;
    bool _presentsInFadingPopover;
    bool _presentsWithGesture;
    bool _resizeForKeyboard;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _rotatingFromMasterViewFrame;
    long long _rotatingFromOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _rotatingToMasterViewFrame;
    UIView *_rotationSnapshotView;
    unsigned long long _slideTransitionCount;
    struct { 
        unsigned int validDelegateHiddenMasterOrientations : 5; 
        unsigned int delegateHiddenMasterOrientations : 5; 
        unsigned int delegateImplementsShouldHide : 1; 
        unsigned int hidden : 3; 
        unsigned int delegateHandlesTogglingMaster : 1; 
        unsigned int delegateProvidesBackgroundView : 1; 
        unsigned int delegateWantsUnSlideCallback : 1; 
        unsigned int masterOnSlide : 1; 
        unsigned int delegateWantsWillShowCallback : 1; 
        unsigned int delegateWantsWillHideCallback : 1; 
        unsigned int delegateWantsWillPresentCallback : 1; 
        unsigned int delegateWantsNavigationRequests : 1; 
        unsigned int resizesDetailOnSlide : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int disableDetailFrameChanges : 1; 
        unsigned int delegateWantsShowViewController : 1; 
        unsigned int delegateWantsPrivateShowViewController : 1; 
        unsigned int delegateWantsShowDetailViewController : 1; 
        unsigned int delegateWantsPrivateShowDetailViewController : 1; 
        unsigned int delegateWantsCollapseSecondaryViewController : 1; 
        unsigned int delegateWantsPrivateCollapseSecondaryViewController : 1; 
        unsigned int delegateWantsSeparateSecondaryViewController : 1; 
        unsigned int delegateWantsPrivateSeparateSecondaryViewController : 1; 
        unsigned int delegateWantsPrimaryViewControllerForCollapse : 1; 
        unsigned int delegateWantsPrivatePrimaryViewControllerForCollapse : 1; 
        unsigned int delegateWantsPrimaryViewControllerForExpanding : 1; 
        unsigned int delegateWantsPrivatePrimaryViewControllerForExpanding : 1; 
        unsigned int collapsedState : 2; 
        unsigned int primaryHidingState : 2; 
        unsigned int primaryHidingStateForCurrentOrientation : 2; 
        unsigned int delegateWantsWillChangeToDisplayMode : 1; 
        unsigned int delegateWantsTargetDisplayModeForAction : 1; 
        unsigned int pendingPresentMasterViewController : 1; 
        unsigned int pendingUpdateTargetDisplayMode : 1; 
        unsigned int collapsingClockwise : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponder : 1; 
    } _splitViewControllerFlags;
    UIView *_underBarSeparatorView;
    bool _useChangingBoundsLayout;
}

@property (setter=_setClearPreventRotationHook:, nonatomic, copy) id _clearPreventRotationHook;
@property (getter=_didChangeBoundsBlock, setter=_setDidChangeBoundsBlock:, nonatomic, copy) id _didChangeBoundsBlock;
@property (setter=_setDisplayModeButtonItemTitle:, nonatomic, copy) NSString *_displayModeButtonItemTitle;
@property (setter=_setPresentsInFadingPopover:, nonatomic) bool _presentsInFadingPopover;
@property (setter=_setPreservedDetailController:, nonatomic, retain) UIViewController *_preservedDetailController;
@property (setter=_setResizesDetailOnSlide:, nonatomic) bool _resizesDetailOnSlide;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidesMasterViewInLandscape;
@property (nonatomic) bool hidesMasterViewInPortrait;
@property (nonatomic) float masterColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) bool presentsWithGesture;
@property (nonatomic, readonly) double primaryColumnWidth;
@property (nonatomic) bool resizeForKeyboard;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewControllers;

+ (double)_defaultGutterWidthInView:(id)arg1;
+ (bool)_forcePresentsInSlidingPopover;
+ (bool)_forcePresentsWithGesture;
+ (bool)_optsOutOfPopoverControllerHierarchyCheck;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (bool)doesOverrideSupportedInterfaceOrientations;

- (void)__viewWillLayoutSubviews;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (void)_cacheEffectiveTargetDisplayMode;
- (void)_calculateDelegateHiddenMasterOrientations;
- (bool)_canDisplayHostedMaster;
- (bool)_canSlideMaster;
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(bool)arg2;
- (id)_childContainingSender:(id)arg1;
- (id)_clearPreventRotationHook;
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;
- (void)_commonInit;
- (double)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (id)_defaultDisplayModes;
- (long long)_defaultTargetDisplayMode;
- (bool)_delegateUsesLegacySlideSPI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailViewFrameWithPopoverControllerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_didChangeBoundsBlock;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didTransitionTraitCollection;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_dismissMasterViewController:(bool)arg1;
- (id)_displayModeButtonItemTitle;
- (void)_displayModeDidChange;
- (void)_displayModeWillChangeTo:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (bool)_effectivePresentsWithGesture;
- (long long)_effectivePrimaryHidingState;
- (long long)_effectiveTargetDisplayMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (bool)_hasMasterViewController;
- (void)_invalidateHidesMasterViewInOrientation:(long long)arg1;
- (void)_invokeDidChangeBoundsBlock;
- (bool)_isBasicallyHorizontallyCompact;
- (bool)_isCollapsed;
- (bool)_isHidesMasterInLandscapeValid;
- (bool)_isHidesMasterInPortraitValid;
- (bool)_isLandscape;
- (bool)_isMasterPopoverVisible;
- (bool)_isMasterViewShown;
- (bool)_isRotating;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (void)_loadNewSubviews:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_masterViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_masterViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(bool)arg2;
- (void)_popoverController:(id)arg1 willAnimateToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(bool)arg2;
- (void)_prepareForCompactLayout;
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)arg1;
- (void)_presentMasterViewController:(bool)arg1;
- (bool)_presentsInFadingPopover;
- (id)_preservedDetailController;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (long long)_primaryHidingState;
- (long long)_primaryHidingStateForCurrentOrientation;
- (id)_primaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (void)_removeCollapsingSnapshotViews;
- (void)_removeRoundedCorners;
- (bool)_resizesDetailOnSlide;
- (id)_secondaryViewControllerForCollapsing;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;
- (void)_setClearPreventRotationHook:(id)arg1;
- (void)_setCollapsedState:(long long)arg1;
- (void)_setDidChangeBoundsBlock:(id)arg1;
- (void)_setDisplayModeButtonItemTitle:(id)arg1;
- (void)_setMasterOverrideTraitCollectionActive:(bool)arg1;
- (void)_setPresentsInFadingPopover:(bool)arg1;
- (void)_setPreservedDetailController:(id)arg1;
- (void)_setPrimaryHidingState:(long long)arg1;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;
- (void)_setResizesDetailOnSlide:(bool)arg1;
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;
- (void)_setupRoundedCorners;
- (void)_setupUnderBarSeparatorView;
- (bool)_shouldModifyDisplayModeWhenRotating;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldPreventAutorotation;
- (bool)_shouldSynthesizeSupportedOrientations;
- (void)_showMasterViewAnimated:(bool)arg1;
- (void)_slideIn:(bool)arg1 viewController:(id)arg2 animated:(bool)arg3 totalDuration:(double)arg4 completion:(id)arg5;
- (void)_transitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateMasterViewControllerFrame;
- (void)_updateTargetDisplayMode;
- (void)_viewControllerHiding:(id)arg1;
- (void)_willTransitionToWindowSize:(struct CGSize { double x1; double x2; })arg1 oldWidthClass:(long long)arg2 newWidthClass:(long long)arg3;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (long long)displayMode;
- (id)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)gutterWidth;
- (bool)hidesMasterViewDuringRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (bool)hidesMasterViewInLandscape;
- (bool)hidesMasterViewInPortrait;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCollapsed;
- (float)leftColumnWidth;
- (void)loadSubviews;
- (void)loadView;
- (float)masterColumnWidth;
- (id)masterViewController;
- (double)maximumPrimaryColumnWidth;
- (double)minimumPrimaryColumnWidth;
- (void)popoverWillAppear:(id)arg1;
- (long long)preferredDisplayMode;
- (long long)preferredInterfaceOrientationForPresentation;
- (float)preferredLeftColumnWidth;
- (double)preferredPrimaryColumnWidthFraction;
- (bool)presentsWithGesture;
- (double)primaryColumnWidth;
- (void)purgeMemoryForReason:(int)arg1;
- (bool)resizeForKeyboard;
- (bool)revealsMasterViewDuringRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(bool)arg1;
- (void)setMasterColumnWidth:(float)arg1;
- (void)setMaximumPrimaryColumnWidth:(double)arg1;
- (void)setMinimumPrimaryColumnWidth:(double)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setPreferredLeftColumnWidth:(float)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
- (void)setPresentsWithGesture:(bool)arg1;
- (void)setResizeForKeyboard:(bool)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)snapshotAllViews;
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (void)snapshotMasterView;
- (unsigned long long)supportedInterfaceOrientations:(id)arg1;
- (void)toggleMasterVisible:(id)arg1;
- (void)unloadViewForced:(bool)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
