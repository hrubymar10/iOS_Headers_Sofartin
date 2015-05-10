/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteDelegate, PKPassDeleteHandler, PKPassGroupViewDelegate, PKPaymentServiceDelegate> {
    NSMutableDictionary *_animatorsByGroupID;
    NSTimer *_autoscrollTimer;
    int _currentTestReps;
    <PKPassGroupStackViewDatasource> *_datasource;
    NSMutableDictionary *_groupViewsByGroupID;
    NSMutableDictionary *_groupViewsInFlightByGroupID;
    bool _hasSuspendedTransition;
    UIView *_headerContainerView;
    bool _inPassthroughHitTest;
    struct { 
        unsigned long long numberOfGroups; 
        unsigned long long separatorIndex; 
        double separationPadding; 
        unsigned int hasPaymentPasses : 1; 
        unsigned int hasPasses : 1; 
        unsigned int hasPaymentHeader : 1; 
        unsigned int hasPassHeader : 1; 
        unsigned int isDeleting : 1; 
        unsigned int isContinuingModalPresentation : 1; 
        unsigned int forceSubheaderUpdate : 1; 
    } _layoutState;
    unsigned long long _modalGroupIndex;
    PKGroup *_modallyPresentedGroup;
    PKPassGroupView *_modallyPresentedGroupView;
    long long _nextState;
    struct CGPoint { 
        double x; 
        double y; 
    } _panningVelocity;
    UIView *_passContainerView;
    PKPGSVHeaderContext *_passHeaderContext;
    NSMutableArray *_passPileViews;
    NSMutableArray *_passthroughViews;
    bool _paymentFooterSuppressed;
    PKPassPaymentFooterView *_paymentFooterView;
    PKPGSVHeaderContext *_paymentHeaderContext;
    PKPaymentService *_paymentService;
    long long _presentationState;
    unsigned long long _previousIndexOfReorderedGroup;
    long long _priorState;
    unsigned long long _reorderActionTag;
    NSMutableArray *_reorderActions;
    PKPassGroupView *_reorderedGroupView;
    struct CGPoint { 
        double x; 
        double y; 
    } _reorderedGroupViewPositionInFrame;
    struct { 
        unsigned int isReordering : 1; 
        unsigned int isReorderPeekCompensated : 1; 
        unsigned int hasScrolledUp : 1; 
        unsigned int hasScrolledDown : 1; 
    } _reorderingFlags;
    PKReusablePassViewQueue *_reusableCardViewQueue;
    long long _scrollingTestState;
    bool _showingFooter;
    UIView *_subheaderContainerView;
    long long _suspendedNextState;
    NSMutableArray *_suspendedTransitionCompletionHandlers;
    id _transitionCanceller;
    NSMutableArray *_transitionCompletionHandlers;
    unsigned int _userInteractionCounter;
}

@property(assign,readwrite) <PKPassGroupStackViewDatasource> * datasource;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PKPassGroupStackViewDelegate><UIScrollViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isPresentingPassViewFront;
@property(assign,readonly) bool isReordering;
@property(assign,readonly) PKPass * modalGroupFrontmostPass;
@property(assign,readwrite) unsigned long long modalGroupIndex;
@property(assign,readwrite) bool paymentFooterSuppressed;
@property(assign,readonly) double pileHeight;
@property(assign,readwrite) long long presentationState;
@property(assign,readonly) Class superclass;

- (void)_addDimmingToPileWithAnimation:(bool)arg1;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_addMotionEffectsToModalPile;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (void)_adjustPaymentFooterViewOpacityForYOffset:(double)arg1;
- (void)_adjustSeparationGroupAndPassViewsForReordering;
- (void)_animateGroupViewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 withAnchorView:(id)arg3 insertAbove:(bool)arg4;
- (void)_animateGroupViewToStackPresentation:(id)arg1 atIndex:(unsigned long long)arg2 indexes:(id)arg3;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_arrangeGroups;
- (id)_arrayOfStackedIndexes;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_autoscrollIfNecessary;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (bool)_canShowPaymentFooter;
- (void)_cancelSuspendedTransition;
- (void)_cancelTransition;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSize;
- (long long)_defaultContentModeForPresentationState:(long long)arg1 index:(unsigned long long)arg2;
- (void)_disableScrollingAndNormalizeContentOffset;
- (long long)_edgeStylesObscuredByTopCornersOfPassStyle:(long long)arg1;
- (long long)_edgeStylesObscuredByTopMiddleOfPassStyle:(long long)arg1;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_enumerateLoadedGroupViews:(id)arg1;
- (void)_executeCompletionHandlers:(id)arg1 cancelled:(bool)arg2;
- (void)_fanAndPageGroupView:(id)arg1 animated:(bool)arg2;
- (id)_firstHeaderContext;
- (long long)_footerStateForPassView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPaymentFooterView;
- (id)_frontmostPastViewForGroupIndex:(unsigned long long)arg1;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 reservePlaceForModalGroup:(bool)arg2;
- (id)_groupBeforeSeparatorGroup;
- (double)_groupCellHeight;
- (id)_groupViewAtIndex:(unsigned long long)arg1;
- (id)_groupViewAtIndexWhileEnsuringVisible:(unsigned long long)arg1 withContentMode:(long long)arg2;
- (id)_groupViewWithGroup:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (id)_headerContextForPassType:(unsigned long long)arg1;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint { double x1; double x2; })arg1 roundToClosestIndex:(bool)arg2;
- (unsigned long long)_indexOfGroupView:(id)arg1;
- (unsigned long long)_indexOfReorderedGroupView;
- (bool)_isGroupAtIndexInModalPile:(unsigned long long)arg1;
- (bool)_isIngestingPass;
- (bool)_isModalPresentationAllowed;
- (bool)_isModalPresentationAllowedForSingleGroup;
- (bool)_isTableModalPresentation;
- (unsigned long long)_lastIndex;
- (void)_layoutContentFromOffset:(struct CGPoint { double x1; double x2; })arg1 toOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; })_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_loadGroupViewAtIndex:(unsigned long long)arg1 forState:(long long)arg2 contentMode:(long long)arg3 cached:(bool*)arg4;
- (void)_loadModalGroupView;
- (unsigned long long)_maximumNumberOfVisiblePilePasses;
- (struct CGPoint { double x1; double x2; })_nativePositionForPositionInTable:(struct CGPoint { double x1; double x2; })arg1;
- (double)_nativeYForGroupInTableAtIndex:(unsigned long long)arg1;
- (void)_notifyDelegateOfStateChange:(bool)arg1;
- (double)_pileAscenderHeight;
- (double)_pileAscenderHeightForGroupViewInPile:(id)arg1;
- (double)_pileBaseHeight;
- (double)_pileSeparationHeight;
- (struct CGPoint { double x1; double x2; })_positionForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (void)_presentFlippedModalGroupView:(id)arg1 animated:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)_presentGroupStackViewWithAnimation:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)_presentModalGroupView:(id)arg1 animated:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_presentOffscreenAnimated:(bool)arg1 split:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)_presentPassIngestionAcceptanceWithAnimation:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)_presentPassIngestionWithAnimation:(bool)arg1 withCompletionHandler:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfEagerLoadedIndexes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfVisibleIndexes;
- (bool)_recomputeLayoutState;
- (void)_removeDimmingFromPileWithAnimation:(bool)arg1;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (void)_removeMotionEffectsFromModalPile;
- (void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)_resumeSuspendedTransition;
- (void)_reverseEnumerateLoadedGroupViews:(id)arg1;
- (double)_scaleForGroupView:(id)arg1 forState:(long long)arg2;
- (id)_separatorGroup;
- (void)_setModalGroupView:(id)arg1;
- (void)_setScrollEnabled:(bool)arg1;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(long long)arg2 reverse:(bool)arg3;
- (void)_showPaymentFooterView:(bool)arg1 forPassView:(id)arg2 animated:(bool)arg3 delay:(double)arg4 completion:(id)arg5;
- (id)_sortedAscendingGroupViewIndexes;
- (id)_sortedDescendingGroupViewIndexes;
- (unsigned long long)_startVisibleIndex;
- (void)_stopAutoscrollTimer;
- (void)_suspendTransition;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeHeaderHidden;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeStacking;
- (void)_tileGroupsForState:(long long)arg1 eager:(bool)arg2;
- (bool)_tileSentinelGroup:(id)arg1 forState:(long long)arg2 withAlreadyTiledGroupIDs:(id)arg3;
- (void)_transformCardGroupView:(id)arg1 toState:(long long)arg2 startTime:(double)arg3 animated:(bool)arg4;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForGroupView:(id)arg1 forState:(long long)arg2;
- (double)_transformedYForNativeYInTable:(double)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 index:(unsigned long long)arg3;
- (void)_transitionSuccessful:(bool)arg1;
- (void)_translateCardGroupView:(id)arg1 toState:(long long)arg2 startTime:(double)arg3 animated:(bool)arg4;
- (void)_updateContentSizeAndLayout:(bool)arg1;
- (void)_updateContentSizeAndLayout:(bool)arg1 forceUpdate:(bool)arg2;
- (void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 animated:(bool)arg2;
- (void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(bool)arg2;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (bool)_updateHeaderContext:(id*)arg1 toContext:(id)arg2 animated:(bool)arg3;
- (void)_updateHeaderState:(bool)arg1;
- (void)_updatePaymentFooterViewAnimated:(bool)arg1;
- (void)_updatePaymentFooterViewIfNecessaryAnimated:(bool)arg1 withBecomeVisibleDelay:(double)arg2;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_updateTransformForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (double)_xPositionForGroupView:(id)arg1 forState:(long long)arg2;
- (double)_yForGroupInModalPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInModalPileWithModalGroupY:(double)arg1;
- (double)_yForGroupInOffscreenPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInTableAtIndex:(unsigned long long)arg1;
- (double)_yForModallyPresentedGroup;
- (double)_yForModallyPresentedPaymentPassGroupView;
- (double)_yForSingleGroupView:(id)arg1;
- (double)_yPositionForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (void)beginFlipCardTest;
- (void)beginScrollCardListTest;
- (void)beginSelectCardTest;
- (id)datasource;
- (void)dealloc;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteSheet:(id)arg1 didComplete:(bool)arg2;
- (void)gotoBaseTestState;
- (bool)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupView:(id)arg1 didBeginShowingFontmostPassView:(id)arg2;
- (void)groupView:(id)arg1 didEndShowingFontmostPassView:(id)arg2;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (void)groupView:(id)arg1 panned:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)groupViewFrontPassDidFlip:(id)arg1 animated:(bool)arg2;
- (void)groupViewPanDidBegin:(id)arg1;
- (void)groupViewPanDidEnd:(id)arg1;
- (bool)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (bool)groupViewPassesGrowWhenFlipped:(id)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (bool)groupViewShouldAllowPanning:(id)arg1;
- (bool)groupViewShouldAllowPassFlip:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (id)headerForPassType:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPresentingPassViewFront;
- (bool)isReordering;
- (void)layoutContentForCurrentPresentationState:(bool)arg1;
- (void)layoutHeadersAnimated:(bool)arg1;
- (void)layoutSubviews;
- (id)modalGroupFrontmostPass;
- (unsigned long long)modalGroupIndex;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)noteDidEndScrollingForTesting;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (bool)paymentFooterSuppressed;
- (double)pileHeight;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (long long)presentationState;
- (void)reloadData;
- (void)reloadGroupViewAtIndex:(unsigned long long)arg1;
- (void)scrollDownTest;
- (void)scrollNext;
- (void)scrollUpTest;
- (void)setDatasource:(id)arg1;
- (void)setModalGroupIndex:(unsigned long long)arg1;
- (void)setPaymentFooterSuppressed:(bool)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setPresentationState:(long long)arg1 animated:(bool)arg2;
- (void)setPresentationState:(long long)arg1 animated:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)stageGroupInPresentationState:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)subheaderForPassType:(unsigned long long)arg1;
- (void)testFlipToBack;
- (void)testFlipToFront;
- (void)testGoModal;
- (void)testGroupSelection;
- (void)tilePassesEagerly:(bool)arg1;
- (void)updateHeaderAndSubheaderViewsIfNecessary;

@end