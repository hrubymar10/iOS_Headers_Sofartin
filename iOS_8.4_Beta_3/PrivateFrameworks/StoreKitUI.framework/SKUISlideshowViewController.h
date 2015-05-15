/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISlideshowViewController : UIViewController <SKUISlideshowItemViewControllerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIViewControllerTransitioningDelegate> {
    SKUIClientContext *_clientContext;
    long long _currentIndex;
    <SKUISlideshowViewControllerDataSource> *_dataSource;
    <SKUISlideshowViewControllerDelegate> *_delegate;
    NSMutableDictionary *_itemViewControllersCache;
    bool _lockOverlayControlsVisible;
    bool _overlayVisibilityWillChangeWithDelay;
    bool _overlayVisible;
    UIPageViewController *_pageViewController;
    NSOperationQueue *_remoteLoadQueue;
    struct { 
        long long style; 
        bool hidden; 
    } _savedStatusBarState;
    bool _shouldCancelDelayedOverlayVisibilityChange;
}

@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,readwrite) long long currentIndex;
@property(assign,readwrite) <SKUISlideshowViewControllerDataSource> * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUISlideshowViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentViewTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_fadeOutOverlayAfterDelay:(unsigned long long)arg1;
- (id)_itemViewControllerForIndex:(long long)arg1;
- (void)_restoreStatusBarAppearanceState;
- (void)_saveStatusBarAppearanceState;
- (void)_setOverlayVisible:(bool)arg1 animated:(bool)arg2;
- (void)_toggleFadeOverlay;
- (void)_updateCurrentIndex;
- (void)_updateTitleWithIndex:(long long)arg1;
- (id)animatorForDismissedController:(id)arg1;
- (id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)clientContext;
- (long long)currentIndex;
- (id)currentItemViewController;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)reloadData;
- (void)setClientContext:(id)arg1;
- (void)setCurrentIndex:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1;
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
