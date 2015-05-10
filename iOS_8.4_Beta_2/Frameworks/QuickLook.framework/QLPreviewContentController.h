/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewContentController : UIViewController <QLPreviewContentControllerProtocol, QLPreviewItemInteractionDelegate> {
    QLAirPlayController *_airPlayController;
    UIColor *_backgroundColor;
    bool _blockRemoteImages;
    long long _currentPreviewItemIndex;
    UISegmentedControl *_customToolbarSegmentedArrowControl;
    <QLPreviewContentDataSource> *_dataSource;
    <QLPreviewContentDelegate> *_delegate;
    NSMutableSet *_gestureRecognizersForFullScreenDisplay;
    bool _isForeground;
    NSMutableSet *_loadingItems;
    NSString *_loadingTextForMissingFiles;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _navigationBarVerticalOffset;
    long long _numberOfPreviewItems;
    bool _overlayHidden;
    UIPageViewController *_pageViewController;
    int _previewMode;
    NSMutableDictionary *_previewViewControllerCache;
    NSMutableArray *_previewViewControllerCacheOrdering;
    NSMutableOrderedSet *_scheduledLoads;
    bool _swiping;
    UITapGestureRecognizer *_tapRecognizer;
    bool _transitioning;
    struct { 
        long long pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } contentFrame; 
    } clientContext;
}

@property(assign,copy) UIColor * backgroundColor;
@property(assign,readwrite) struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property(assign,readwrite) <QLPreviewContentDataSource> * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <QLPreviewContentDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) int previewMode;
@property(assign,readonly) Class superclass;

- (void)_activateAirPlayOnRemoteScreen:(id)arg1;
- (void)_cachePreviewViewController:(id)arg1;
- (id)_cachedPreviewControllerForPreviewItem:(id)arg1 withIndex:(long long)arg2;
- (void)_clearPreviewViewControllerCache;
- (id)_copyPreviewControllerForPreview:(id)arg1 withIndex:(long long)arg2;
- (void)_deactivateAirPlay;
- (void)_dequeueScheduledLoad;
- (void)_hideMenuController;
- (void)_leftSwipeRecognized:(id)arg1;
- (void)_longPressGestureRecognized:(id)arg1;
- (id)_previewControllerForPreviewItem:(id)arg1 createIfNeeded:(bool)arg2 withIndex:(long long)arg3;
- (id)_previewViewControllerForPreviewItemIndex:(unsigned long long)arg1;
- (void)_removeNonCachedPreviewViewControllers;
- (void)_rightSwipeRecognized:(id)arg1;
- (void)_scheduleAdjacentPreviewItems;
- (void)_schedulePreviewViewControllerIfNeeded:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_updateAirPlay;
- (void)_updateBackgroundWithDuration:(double)arg1;
- (void)_updateContentFrame;
- (void)_updateDisabledScrollingRect;
- (void)_updateScreenConfiguration;
- (id)backgroundColor;
- (void)becomeForeground;
- (void)beginScrubbing;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)checkCurrentPreviewItem;
- (struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)configureWithParameters:(id)arg1;
- (void)copy:(id)arg1;
- (id)currentPreviewItem;
- (long long)currentPreviewItemIndex;
- (id)currentPreviewViewController;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)endScrubbing;
- (void)enterBackground;
- (void)forceResignFirstResponder;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItemDidLoad:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer;
- (void)refreshCurrentPreviewItem;
- (void)refreshCurrentPreviewItem:(bool)arg1;
- (void)scrubToValue:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBlockRemoteImages:(bool)arg1;
- (void)setClientContext:(struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentPreviewItemIndex:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setNavigationBarVerticalOffset:(double)arg1;
- (void)setOverlayHidden:(bool)arg1 duration:(double)arg2;
- (void)setPreviewMode:(int)arg1;
- (void)setTransitioning:(bool)arg1 synchronizedWithBlock:(id)arg2;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (id)snapshotView;
- (void)stopLoadingCurrentPreviewItem;
- (void)togglePlayState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willChangeContentFrame;
- (void)willMoveToParentViewController:(id)arg1;

@end