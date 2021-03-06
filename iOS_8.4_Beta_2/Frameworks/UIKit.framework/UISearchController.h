/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchController : UIViewController <NSCoding, UIViewControllerAnimatedTransitioning, UIViewControllerPresenting, UIViewControllerTransitioningDelegate, _UIScrollNotification> {
    long long __previousSearchBarPosition;
    double __resultsContentScrollViewPresentationOffset;
    bool __showResultsForEmptySearch;
    <UIViewControllerAnimatedTransitioning> *_animator;
    int _barPresentationStyle;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
    } _controllerFlags;
    <UISearchControllerDelegate> *_delegate;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    bool _dimsBackgroundDuringPresentation;
    bool _hidesNavigationBarDuringPresentation;
    UIView *_resultsControllerViewContainer;
    UISearchBar *_searchBar;
    UIViewController *_searchResultsController;
    <UISearchResultsUpdating> *_searchResultsUpdater;
    id _windowWillAnimateToken;
}

@property(assign,readonly) int _barPresentationStyle;
@property(assign,readwrite) long long _previousSearchBarPosition;
@property(assign,readwrite) double _resultsContentScrollViewPresentationOffset;
@property(assign,retain) UIView * _resultsControllerViewContainer;
@property(setter=_setShowResultsForEmptySearch:,assign,readwrite) bool _showResultsForEmptySearch;
@property(getter=isActive,assign,readwrite) bool active;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <UISearchControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool dimsBackgroundDuringPresentation;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool hidesNavigationBarDuringPresentation;
@property(assign,retain) UISearchBar * searchBar;
@property(assign,retain) UIViewController * searchResultsController;
@property(assign,readwrite) <UISearchResultsUpdating> * searchResultsUpdater;
@property(assign,readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void)_adjustSearchBarSizeForOrientation:(long long)arg1;
- (bool)_allowFormSheetStylePresentation;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(bool)arg2;
- (int)_barPresentationStyle;
- (void)_beginWatchingPresentingController;
- (void)_commonInit;
- (void)_connectSearchBar:(id)arg1;
- (id)_createAnimationCoordinator;
- (void)_didDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (void)_didScroll;
- (void)_dismissPresentation:(bool)arg1;
- (void)_endWatchingPresentingController;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_locatePresentingViewController;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (void)_performAutomaticPresentation;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (long long)_previousSearchBarPosition;
- (bool)_requiresCustomPresentationController;
- (void)_resizeResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (double)_resultsContentScrollViewPresentationOffset;
- (id)_resultsControllerViewContainer;
- (bool)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (bool)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (id)_searchPresentationController;
- (void)_setShowResultsForEmptySearch:(bool)arg1;
- (bool)_showResultsForEmptySearch;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (void)_watchScrollView:(id)arg1 forScrolling:(bool)arg2;
- (void)_willDismissSearchController;
- (void)_willPresentFromViewController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)dimsBackgroundDuringPresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidesNavigationBarDuringPresentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchResultsController:(id)arg1;
- (bool)isActive;
- (void)loadView;
- (id)searchBar;
- (id)searchResultsController;
- (id)searchResultsUpdater;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsBackgroundDuringPresentation:(bool)arg1;
- (void)setHidesNavigationBarDuringPresentation:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setSearchResultsUpdater:(id)arg1;
- (void)set_previousSearchBarPosition:(long long)arg1;
- (void)set_resultsContentScrollViewPresentationOffset:(double)arg1;
- (void)set_resultsControllerViewContainer:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
