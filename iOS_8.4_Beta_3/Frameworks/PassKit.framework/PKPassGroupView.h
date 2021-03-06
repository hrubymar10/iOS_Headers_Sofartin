/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassGroupView : UIView <PKGroupDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WLCardViewDelegate> {
    bool _canPan;
    <PKPassGroupViewDelegate> *_delegate;
    double _dimmerValue;
    UIView *_dimmerView;
    unsigned long long _displayIndex;
    PKPassView *_frontmostPassView;
    PKGroup *_group;
    UIInterpolatingMotionEffect *_horizontalMotionEffect;
    double _horizontalMotionRelativeValue;
    UIScrollView *_horizontalScrollView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPageControl *_pageControl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PKReusablePassViewQueue *_passViewQueue;
    NSMutableDictionary *_passViewsByUniqueID;
    long long _presentationState;
    bool _showPageControl;
    UIInterpolatingMotionEffect *_verticalMotionEffect;
    double _verticalMotionRelativeValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKPassGroupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayIndex;
@property (nonatomic) PKPassView *frontmostPassView;
@property (nonatomic, retain) PKGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalMotionRelativeValue;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } offsetForFrontmostPassWhileStacked;
@property (nonatomic, readonly) UIPageControl *pageControl;
@property (nonatomic) PKReusablePassViewQueue *passViewQueue;
@property (nonatomic) long long presentationState;
@property (readonly) Class superclass;
@property (nonatomic) double verticalMotionRelativeValue;

- (void)_addPanAndLongPressGestureRecognizers;
- (struct CGSize { double x1; double x2; })_contentSize;
- (long long)_defaultContentModeForIndex:(unsigned long long)arg1;
- (void)_enumerateCardViewsByStackOrderWithBlock:(id)arg1;
- (void)_evictUnusedViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fanningFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (id)_loadCardViewForIndex:(unsigned long long)arg1 contentMode:(long long)arg2;
- (id)_loadCardViewForUniqueID:(id)arg1;
- (void)_loadNeededViews;
- (void)_pageControlChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pagingFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfVisibleIndexes;
- (void)_removePanAndLongPressGestureRecognizers;
- (void)_setupPageControl;
- (void)_setupViewsForFanningWithAnimation:(bool)arg1 resizeCards:(bool)arg2;
- (void)_setupViewsForPagingWithAnimation:(bool)arg1 resizeCards:(bool)arg2;
- (void)_setupViewsForPileWithAnimation:(bool)arg1 resizeCards:(bool)arg2;
- (void)_setupViewsForStackingWithAnimation:(bool)arg1 resizeCards:(bool)arg2;
- (void)_showFrontmostPassOnly:(bool)arg1;
- (id)_stackIndexesFromVisibleIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_tilePagesEagerly:(bool)arg1;
- (id)_uniqueIDsOfVisibleCards;
- (void)_updatePageControl;
- (void)applyDefaultModeForPasses;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)displayIndex;
- (void)flipPassViewForPass:(id)arg1 animated:(bool)arg2 fromLeft:(bool)arg3;
- (id)frontmostPassView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)group;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)groupID;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)horizontalMotionRelativeValue;
- (id)initWithGroup:(id)arg1 delegate:(id)arg2 contentMode:(long long)arg3;
- (struct UIOffset { double x1; double x2; })offsetForFrontmostPassWhileStacked;
- (id)pageControl;
- (bool)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (bool)passViewBackGrowsCentered:(id)arg1;
- (void)passViewDidFlip:(id)arg1 animated:(bool)arg2;
- (id)passViewQueue;
- (bool)passViewShouldFlip:(id)arg1;
- (void)passViewTapped:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (long long)presentationState;
- (void)removeFromSuperview;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setDimmer:(double)arg1 animated:(bool)arg2;
- (void)setFrontmostPassView:(id)arg1;
- (void)setFrontmostPassViewFromPassIndex:(long long)arg1;
- (void)setGroup:(id)arg1;
- (void)setHorizontalMotionEnabled:(bool)arg1;
- (void)setHorizontalMotionRelativeValue:(double)arg1;
- (void)setPassViewQueue:(id)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setPresentationState:(long long)arg1 animated:(bool)arg2;
- (void)setPresentationState:(long long)arg1 animated:(bool)arg2 resizePasses:(bool)arg3;
- (void)setShowPageControlWithAnimation:(bool)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)setVerticalMotionEnabled:(bool)arg1;
- (void)setVerticalMotionRelativeValue:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (double)verticalMotionRelativeValue;

@end
