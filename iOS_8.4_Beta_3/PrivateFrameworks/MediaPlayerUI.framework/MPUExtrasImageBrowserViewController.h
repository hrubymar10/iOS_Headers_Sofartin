/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasImageBrowserViewController : UIViewController <MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant, UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    bool _allowsPinchingImageForInteractiveZoomingImageTransition;
    <MPUExtrasImageBrowserViewControllerDataSource> *_dataSource;
    <MPUExtrasImageBrowserViewControllerDelegate> *_delegate;
    UIPageViewController *_pageViewController;
    unsigned long long _visibleImageIndex;
    <MPUExtrasZoomingImageInteractiveTransitionSource> *_zoomingImageInteractiveTransitionSource;
}

@property (nonatomic) bool allowsPinchingImageForInteractiveZoomingImageTransition;
@property (nonatomic) <MPUExtrasImageBrowserViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUExtrasImageBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPageViewController *pageViewController;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibleImageIndex;
@property (nonatomic) <MPUExtrasZoomingImageInteractiveTransitionSource> *zoomingImageInteractiveTransitionSource;

- (void).cxx_destruct;
- (void)_addPageViewForController:(id)arg1 toView:(id)arg2;
- (id)_imageViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfImages;
- (void)_removePageViewController;
- (void)_updatePageViewController;
- (void)_updateTitle;
- (id)_visibleImageViewController;
- (bool)allowsPinchingImageForInteractiveZoomingImageTransition;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setAllowsPinchingImageForInteractiveZoomingImageTransition:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPageViewController:(id)arg1;
- (void)setVisibleImageIndex:(unsigned long long)arg1;
- (void)setZoomingImageInteractiveTransitionSource:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)visibleImageIndex;
- (id)zoomingImageInteractiveTransitionSource;

@end
