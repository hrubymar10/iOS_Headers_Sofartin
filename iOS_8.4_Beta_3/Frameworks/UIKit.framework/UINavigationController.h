/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationController : UIViewController <GKContentRefresh, GKURLHandling, UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate> {
    NSString *__backdropGroupName;
    bool __barAnimationWasCancelled;
    _UIAnimationCoordinator *__barInteractiveAnimationCoordinator;
    _UIBarPanGestureRecognizer *__barSwipeHideGesture;
    _UIBarTapGestureRecognizer *__barTapHideGesture;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    <UIViewControllerInteractiveTransitioning> *__interactionController;
    id __keyboardAppearedNotificationToken;
    NSUUID *__navbarAnimationId;
    NSUUID *__toolbarAnimationId;
    <UIViewControllerAnimatedTransitioning> *__transitionController;
    id __updateNavigationBarHandler;
    bool __usingBuiltinAnimator;
    UITapGestureRecognizer *_backGestureRecognizer;
    double _bottomInsetDelta;
    double _builtinTransitionGap;
    long long _builtinTransitionStyle;
    UIView *_containerView;
    double _customNavigationTransitionDuration;
    <UINavigationControllerDelegate> *_delegate;
    UIViewController *_disappearingViewController;
    _UINavigationControllerPalette *_freePalette;
    bool _hidesBarsOnSwipe;
    bool _hidesBarsOnTap;
    bool _hidesBarsWhenKeyboardAppears;
    bool _hidesBarsWhenVerticallyCompact;
    bool _interactiveTransition;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    struct { 
        unsigned int isAppearingAnimated : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isNavigationBarHidden : 1; 
        unsigned int isToolbarShown : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isTransitioning : 1; 
        unsigned int paletteTransitionPending : 1; 
        unsigned int lastOperation : 4; 
        unsigned int lastOperationAnimated : 1; 
        unsigned int deferredTransition : 8; 
        unsigned int didPreloadKeyboardAnimation : 1; 
        unsigned int didHideBottomBar : 1; 
        unsigned int didExplicitlyHideTabBar : 1; 
        unsigned int isChangingOrientationForPop : 1; 
        unsigned int pretendNavBarHidden : 1; 
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding : 1; 
        unsigned int searchBarHidNavBar : 1; 
        unsigned int useSystemPopoverBarAppearance : 1; 
        unsigned int isCustomTransition : 1; 
        unsigned int isBuiltinTransition : 1; 
        unsigned int resetDidHideOnCancel : 1; 
        unsigned int delegateWillShowViewController : 1; 
        unsigned int delegateDidShowViewController : 1; 
        unsigned int delegateTransitionController : 1; 
        unsigned int delegateTransitionControllerEx : 1; 
        unsigned int delegateInteractionController : 1; 
        unsigned int delegateInteractionControllerEx : 1; 
        unsigned int delegateShouldCrossFadeNavigationBar : 1; 
        unsigned int delegateShouldCrossFadeBottomBars : 1; 
        unsigned int delegateShouldUseBuiltinInteractionController : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int delegateLayoutTransitioningClass : 1; 
        unsigned int navigationBarHidesCompletelyOffscreen : 1; 
        unsigned int clipUnderlapWhileTransitioning : 1; 
        unsigned int isCrossfadingOutTabBar : 1; 
        unsigned int isCrossfadingInTabBar : 1; 
        unsigned int skipContentInsetCalculation : 1; 
        unsigned int neverInWindow : 1; 
        unsigned int useStandardStatusBarHeight : 1; 
        unsigned int allowUserInteractionDuringTransition : 1; 
        unsigned int enableBackButtonDuringTransition : 1; 
        unsigned int allowsGroupBlending : 1; 
        unsigned int allowNestedNavigationControllers : 1; 
        unsigned int nestedNavigationBarWasHidden : 1; 
        unsigned int nestedToolbarWasHidden : 1; 
        unsigned int isNested : 1; 
        unsigned int searchHidNavigationBar : 1; 
        unsigned int suppressMixedOrientationPop : 1; 
        unsigned int disappearingViewControllerIsBeingRemoved : 1; 
        unsigned int isWrappingDuringAdaptation : 1; 
    } _navigationControllerFlags;
    UIView *_navigationTransitionView;
    long long _savedNavBarStyleBeforeSheet;
    long long _savedToolBarStyleBeforeSheet;
    double _statusBarHeightForHideShow;
    UIToolbar *_toolbar;
    Class _toolbarClass;
    _UINavigationControllerPalette *_topPalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
}

@property (getter=_backdropGroupName, setter=_setBackdropGroupName:, nonatomic, retain) NSString *_backdropGroupName;
@property (setter=_setBarAnimationWasCancelled:, nonatomic) bool _barAnimationWasCancelled;
@property (setter=_setInteractiveAnimationCoordinator:, nonatomic, retain) _UIAnimationCoordinator *_barInteractiveAnimationCoordinator;
@property (setter=_setBarSwipeHideGesture:, nonatomic, retain) _UIBarPanGestureRecognizer *_barSwipeHideGesture;
@property (setter=_setBarTapHideGesture:, nonatomic, retain) _UIBarTapGestureRecognizer *_barTapHideGesture;
@property (setter=_setCachedInteractionController:, nonatomic, retain) _UINavigationInteractiveTransition *_cachedInteractionController;
@property (setter=_setCachedTransitionController:, nonatomic, retain) _UINavigationParallaxTransition *_cachedTransitionController;
@property (setter=_setInteractionController:, nonatomic, retain) <UIViewControllerInteractiveTransitioning> *_interactionController;
@property (setter=_setKeyboardAppearedNotificationToken:, nonatomic, retain) id _keyboardAppearedNotificationToken;
@property (setter=_setNavbarAnimationId:, nonatomic, retain) NSUUID *_navbarAnimationId;
@property (setter=_setToolbarAnimationId:, nonatomic, retain) NSUUID *_toolbarAnimationId;
@property (setter=_setToolbarClass:, nonatomic) Class _toolbarClass;
@property (setter=_setTransitionController:, nonatomic, retain) <UIViewControllerAnimatedTransitioning> *_transitionController;
@property (setter=_setUpdateNavigationBarHandler:, nonatomic, copy) id _updateNavigationBarHandler;
@property (getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:, nonatomic) bool _usingBuiltinAnimator;
@property (getter=_allowNestedNavigationControllers, setter=_setAllowNestedNavigationControllers:, nonatomic) bool allowNestedNavigationControllers;
@property (nonatomic) bool avoidMovingNavBarOffscreenBeforeUnhiding;
@property (nonatomic, readonly, retain) UIPanGestureRecognizer *barHideOnSwipeGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *barHideOnTapGestureRecognizer;
@property (nonatomic, readonly) UIViewController *bottomViewController;
@property (getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:, nonatomic) double builtinTransitionGap;
@property (getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:, nonatomic) long long builtinTransitionStyle;
@property (getter=_isCrossfadingInTabBar, setter=_setCrossfadingInTabBar:, nonatomic) bool crossfadingInTabBar;
@property (getter=_isCrossfadingOutTabBar, setter=_setCrossfadingOutTabBar:, nonatomic) bool crossfadingOutTabBar;
@property (nonatomic) double customNavigationTransitionDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UINavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain) UIViewController *detailViewController;
@property (getter=_didExplicitlyHideTabBar, setter=_setDidExplicitlyHideTabBar:, nonatomic) bool didHideTabBar;
@property (nonatomic, retain) UIViewController *disappearingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesBarsOnSwipe;
@property (nonatomic) bool hidesBarsOnTap;
@property (nonatomic) bool hidesBarsWhenKeyboardAppears;
@property (nonatomic) bool hidesBarsWhenVerticallyCompact;
@property (nonatomic, readonly) UIGestureRecognizer *interactivePopGestureRecognizer;
@property (getter=isInteractiveTransition, nonatomic) bool interactiveTransition;
@property bool isExpanded;
@property (getter=_isNestedNavigationController, setter=_setIsNestedNavigationController:, nonatomic) bool isNestedNavigationController;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (getter=isNavigationBarHidden, nonatomic) bool navigationBarHidden;
@property (nonatomic, readonly) UINavigationTransitionView *navigationTransitionView;
@property (nonatomic) bool needsDeferredTransition;
@property (nonatomic) bool pretendNavBarHidden;
@property (nonatomic, readonly) UIViewController *previousViewController;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (getter=isToolbarHidden, nonatomic) bool toolbarHidden;
@property (nonatomic, readonly, retain) UIViewController *topViewController;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, readonly, retain) UIViewController *visibleViewController;

+ (bool)_directlySetsContentOverlayInsetsForChildren;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (bool)doesOverrideSupportedInterfaceOrientations;

- (void)MPU_popToRootViewControllerAnimated:(bool)arg1;
- (void)MPU_popToViewController:(id)arg1 animated:(bool)arg2 popRequestSentCompletion:(id)arg3;
- (void)MPU_popToViewControllerBeforeViewController:(id)arg1 animated:(bool)arg2;
- (void)MPU_pushNowPlayingViewControllerOfClass:(Class)arg1 player:(id)arg2 animated:(bool)arg3;
- (void)MPU_pushViewController:(id)arg1 animated:(bool)arg2;
- (void)_MPUExtras_replaceViewController:(id)arg1 withViewController:(id)arg2 animated:(bool)arg3;
- (void)__ck_callDelegateBlocks;
- (void)__ck_enqueueCompletionBlock:(id)arg1;
- (id)__ck_popToRootViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (id)__ck_popToViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (id)__ck_popViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)__ck_pushViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)__viewWillLayoutSubviews;
- (id)_additionalViewControllersToCheckForUserActivity;
- (struct CGSize { double x1; double x2; })_adjustedContentSizeForPopover:(struct CGSize { double x1; double x2; })arg1;
- (bool)_allowNestedNavigationControllers;
- (bool)_allowsAutorotation;
- (bool)_animationParametersForHidingNavigationBar:(bool)arg1 lastOperation:(long long)arg2 edge:(unsigned long long*)arg3 duration:(double*)arg4;
- (id)_backdropBarGroupName;
- (id)_backdropGroupName;
- (bool)_barAnimationWasCancelled;
- (id)_barInteractiveAnimationCoordinator;
- (id)_barSwipeHideGesture;
- (id)_barTapHideGesture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForPalette:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)_builtinInteractionController;
- (id)_builtinTransitionController;
- (double)_builtinTransitionGap;
- (long long)_builtinTransitionStyle;
- (id)_cachedInteractionController;
- (id)_cachedTransitionController;
- (void)_cancelInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_clearLastOperation;
- (bool)_clipUnderlapWhileTransitioning;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (struct CGPoint { double x1; double x2; })_computeTopBarCenter:(id)arg1 hidden:(bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint { double x1; double x2; })arg4 offset:(double)arg5;
- (void)_configureBarSwipeGesture;
- (void)_configureBarTapGesture;
- (void)_configureBarsAutomaticActions;
- (void)_configureKeyboardBarHiding;
- (void)_configureToolbar;
- (void)_confirmBarAccessMethods;
- (id)_customInteractionController:(id)arg1;
- (double)_customNavigationTransitionDuration;
- (id)_customTransitionController:(bool)arg1;
- (id)_deepestUnambiguousResponder;
- (int)_deferredTransition;
- (void)_detachPalette:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (bool)_didExplicitlyHideTabBar;
- (void)_didGainChildScrollView:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (bool)_doesTopViewControllerSupportInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_executeNavigationHandler:(id)arg1 deferred:(bool)arg2;
- (id)_existingNavigationBar;
- (id)_existingToolbar;
- (id)_existingToolbarWithItems;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_expectedContentInsetDeltaForViewController:(id)arg1;
- (id)_findViewControllerToPopTo;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (void)_finishInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayingTopView:(bool)arg2 andBottomView:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPalette:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForWrapperViewForViewController:(id)arg1;
- (void)_gestureRecognizedInteractiveHide:(id)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkReplaceTopViewControllerWithViewController:(id)arg1 transition:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkSetViewControllers:(id)arg1 transition:(id)arg2;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (bool)_hasNestedNavigationController;
- (bool)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (void)_hideForKeyboardAppearance;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_interactionController;
- (bool)_isCrossfadingInTabBar;
- (bool)_isCrossfadingOutTabBar;
- (bool)_isInteractiveCustomNavigationTransition;
- (bool)_isNavigationBarEffectivelyVisible;
- (bool)_isNavigationBarVisible;
- (bool)_isNestedNavigationController;
- (bool)_isPerformingLayoutToLayoutTransition;
- (bool)_isPresentationContextByDefault;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (bool)_isTransitioning;
- (bool)_isUsingBuiltinAnimator;
- (id)_keyboardAnimationStyle;
- (id)_keyboardAppearedNotificationToken;
- (int)_keyboardDirectionForTransition:(long long)arg1;
- (id)_lastNavigationItems;
- (void)_layoutTopViewController;
- (void)_layoutTopViewControllerInSheet;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_layoutViewController:(id)arg1;
- (void)_makeBarHideGestureIfNecessary;
- (void)_makeBarSwipeGestureIfNecessary;
- (id)_moreListTitle;
- (id)_navbarAnimationId;
- (bool)_navbarIsAppearingInteractively;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (id)_navigationBarForNestedNavigationController;
- (id)_navigationBarHiddenByDefault:(bool)arg1;
- (id)_navigationItems;
- (long long)_navigationTransitionForUITransition:(int)arg1;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (id)_nthChildViewControllerFromTop:(unsigned long long)arg1;
- (id)_outermostNavigationController;
- (void)_performBackGesture:(id)arg1;
- (id)_pinningBarForPalette:(id)arg1;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(bool)arg1;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(bool)arg2;
- (long long)_positionForBar:(id)arg1;
- (void)_positionNavigationBarHidden:(bool)arg1;
- (void)_positionNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)_positionPaletteHidden:(bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionPaletteHidden:(bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)_positionToolbarHidden:(bool)arg1;
- (void)_positionToolbarHidden:(bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionToolbarHidden:(bool)arg1 edge:(unsigned long long)arg2 crossFade:(bool)arg3;
- (void)_positionTopBar:(id)arg1 hidden:(bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint { double x1; double x2; })arg4 offset:(double)arg5;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (void)_pu_setCurrentNavigationTransition:(id)arg1;
- (bool)_reallyWantsFullScreenLayout;
- (void)_releaseContainerViews;
- (void)_repositionPaletteWithNavigationBarHidden:(bool)arg1 duration:(double)arg2 shouldUpdateNavigationItems:(bool)arg3;
- (void)_resetBottomBarHiddenState;
- (id)_screenEdgePanGestureRecognizer;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (double)_scrollViewTopContentInsetForViewController:(id)arg1;
- (bool)_searchHidNavigationBar;
- (void)_sendNavigationBarToBack;
- (void)_setAllowNestedNavigationControllers:(bool)arg1;
- (void)_setBackdropGroupName:(id)arg1;
- (void)_setBarAnimationWasCancelled:(bool)arg1;
- (void)_setBarSwipeHideGesture:(id)arg1;
- (void)_setBarTapHideGesture:(id)arg1;
- (void)_setBarsHidden:(bool)arg1;
- (void)_setBarsHidden:(bool)arg1 allowAnimation:(bool)arg2;
- (void)_setBuiltinTransitionGap:(double)arg1;
- (void)_setBuiltinTransitionStyle:(long long)arg1;
- (void)_setCachedInteractionController:(id)arg1;
- (void)_setCachedTransitionController:(id)arg1;
- (void)_setClipUnderlapWhileTransitioning:(bool)arg1;
- (void)_setClipsToBounds:(bool)arg1;
- (void)_setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setCrossfadingInTabBar:(bool)arg1;
- (void)_setCrossfadingOutTabBar:(bool)arg1;
- (void)_setCustomTransition:(bool)arg1;
- (void)_setDidExplicitlyHideTabBar:(bool)arg1;
- (void)_setInteractionController:(id)arg1;
- (void)_setInteractiveAnimationCoordinator:(id)arg1;
- (void)_setIsNestedNavigationController:(bool)arg1;
- (void)_setIsWrappingDuringAdaptation:(bool)arg1;
- (void)_setKeyboardAppearedNotificationToken:(id)arg1;
- (void)_setKeyboardNotificationToken:(id)arg1;
- (void)_setNavbarAnimationId:(id)arg1;
- (void)_setNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidden:(bool)arg1 edgeIfNotNavigating:(unsigned long long)arg2 duration:(double)arg3;
- (void)_setNavigationBarHidesCompletelyOffscreen:(bool)arg1;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)_setSearchHidNavigationBar:(bool)arg1;
- (void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2;
- (void)_setToolbarAnimationId:(id)arg1;
- (void)_setToolbarClass:(Class)arg1;
- (void)_setToolbarHidden:(bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_setTransitionController:(id)arg1;
- (void)_setUpdateNavigationBarHandler:(id)arg1;
- (void)_setUseCurrentStatusBarHeight:(bool)arg1;
- (void)_setUseStandardStatusBarHeight:(bool)arg1;
- (void)_setUsingBuiltinAnimator:(bool)arg1;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(bool)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(bool)arg3 operation:(long long)arg4;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(bool)arg3;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(bool)arg3 operation:(long long)arg4;
- (void)_setVisualAltitudeForBar:(id)arg1;
- (bool)_shouldBottomBarBeHidden;
- (bool)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (bool)_shouldCrossFadeBottomBars;
- (bool)_shouldCrossFadeNavigationBar;
- (bool)_shouldHideBarsForTraits:(id)arg1;
- (bool)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (bool)_shouldNavigationBarInsetViewController:(id)arg1;
- (bool)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(bool*)arg2;
- (bool)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldPopFromLandscapeToPortraitOrientation;
- (bool)_shouldStatusBarInsetViewController:(id)arg1;
- (bool)_shouldSynthesizeSupportedOrientations;
- (bool)_shouldTabBar:(id)arg1 insetViewController:(id)arg2;
- (bool)_shouldTabBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(bool*)arg3;
- (bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(bool*)arg3;
- (bool)_shouldUseBuiltinInteractionController;
- (bool)_shouldUseOnePartRotation;
- (id)_snapshotView;
- (void)_startCustomTransition:(id)arg1;
- (void)_startDeferredTransitionIfNeeded;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (id)_startInteractiveBarTransition:(id)arg1;
- (void)_startInteractiveNavbarTransition;
- (void)_startInteractiveToolbarTransition;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(bool)arg2;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(bool)arg2;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(bool)arg2;
- (id)_toolbarAnimationId;
- (Class)_toolbarClass;
- (bool)_toolbarIsAnimatingInteractively;
- (double)_topBarHeight;
- (id)_topPalette;
- (id)_transitionAnimationContext;
- (bool)_transitionConflictsWithNavigationTransitions:(id)arg1;
- (id)_transitionController;
- (id)_transitionCoordinator;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_updateBottomBarHiddenState;
- (void)_updateChildContentMargins;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(double)arg3 isFinished:(bool)arg4 didComplete:(bool)arg5 completionSpeed:(double)arg6 completionCurve:(long long)arg7;
- (void)_updateInteractivePopGestureEnabledState;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_updateNavigationBarHandler;
- (void)_updatePaletteBackground;
- (void)_updatePaletteConstraints;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(bool)arg2;
- (bool)_useCrossFadeForGestureHiding;
- (bool)_useCurrentStatusBarHeight;
- (bool)_useStandardStatusBarHeight;
- (bool)_usesTransitionController;
- (id)_viewControllerForDisappearCallback;
- (bool)_viewControllerWasSelected;
- (id)_viewForContentInPopover;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (bool)_willPerformCustomNavigationTransitionForPop;
- (bool)_willPerformCustomNavigationTransitionForPush;
- (bool)allowUserInteractionDuringTransition;
- (void)attachPalette:(id)arg1 isPinned:(bool)arg2;
- (bool)avoidMovingNavBarOffscreenBeforeUnhiding;
- (id)barHideOnSwipeGestureRecognizer;
- (id)barHideOnTapGestureRecognizer;
- (bool)becomeFirstResponder;
- (id)bottomViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (bool)ckCanDismissWhenSuspending;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (bool)condensesBarsOnSwipe;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (double)customNavigationTransitionDuration;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)defaultPNGName;
- (id)delegate;
- (void)detachPalette:(id)arg1;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(bool)arg2;
- (id)detailViewController;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)disappearingViewController;
- (double)durationForTransition:(int)arg1;
- (bool)editing;
- (bool)enableBackButtonDuringTransition;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)existingPaletteForEdge:(unsigned long long)arg1;
- (id)firstViewController;
- (bool)hidesBarsOnSwipe;
- (bool)hidesBarsOnTap;
- (bool)hidesBarsWhenKeyboardAppears;
- (bool)hidesBarsWhenVerticallyCompact;
- (unsigned long long)indexOfViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)interactivePopGestureRecognizer;
- (void)invalidate;
- (bool)isAlreadyPoppingNavItem;
- (bool)isBuiltinTransition;
- (bool)isCustomTransition;
- (bool)isExpanded;
- (bool)isInteractiveTransition;
- (bool)isModalInPopover;
- (bool)isNavigationBarHidden;
- (bool)isShown;
- (bool)isToolbarHidden;
- (long long)lastOperation;
- (void)loadView;
- (void)makeModalViewControllerTopViewController;
- (id)mf_keyPathsMapForUICustomization;
- (long long)modalTransitionStyle;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (id)navigationBar;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (Class)navigationBarClass;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (id)navigationItem;
- (id)navigationTransitionView;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(long long)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(long long)arg2;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(long long)arg2;
- (bool)needsDeferredTransition;
- (id)paletteForEdge:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)popRecursivelyToRootController;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (void)popToSigninControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)popViewControllerWithAnimationTransition:(long long)arg1 duration:(double)arg2 curve:(long long)arg3;
- (id)popViewControllerWithTransition:(int)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusedItem;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (bool)pretendNavBarHidden;
- (id)previousViewController;
- (id)pu_currentInteractiveTransition;
- (id)pu_currentNavigationTransition;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)pu_navigationTransitionWillStart:(id)arg1;
- (void)pu_popToViewController:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (void)pu_popViewControllerAnimated:(bool)arg1 interactive:(bool)arg2;
- (void)pu_pushViewController:(id)arg1 withTransition:(id)arg2 animated:(bool)arg3 isInteractive:(bool)arg4;
- (void)purgeMemoryForReason:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(bool)arg3;
- (void)rc_changeTopNavigationItemPropertiesToPropertiesInNavigationItem:(id)arg1 animated:(bool)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (bool)searchBarHidNavBar;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setAllowUserInteractionDuringTransition:(bool)arg1;
- (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(bool)arg1;
- (void)setCondensesBarsOnSwipe:(bool)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { double x1; double x2; })arg1;
- (void)setCustomNavigationTransitionDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailViewController:(id)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEnableBackButtonDuringTransition:(bool)arg1;
- (void)setHidesBarsOnSwipe:(bool)arg1;
- (void)setHidesBarsOnTap:(bool)arg1;
- (void)setHidesBarsWhenKeyboardAppears:(bool)arg1;
- (void)setHidesBarsWhenVerticallyCompact:(bool)arg1;
- (void)setInteractiveTransition:(bool)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setNavigationBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setNeedsDeferredTransition;
- (void)setNeedsDeferredTransition:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPretendNavBarHidden:(bool)arg1;
- (void)setSearchBarHidNavBar:(bool)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarHidden:(bool)arg1;
- (void)setToolbarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)signInControllerInHierarchy;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)tabBarItem;
- (id)toolbar;
- (id)topViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)transcriptControllerIsVisible;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visibleViewController;
- (bool)wasLastOperationAnimated;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willShowViewController:(id)arg1 animated:(bool)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
