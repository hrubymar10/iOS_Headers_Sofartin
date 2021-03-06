/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasShowcaseTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasNavigationAnimationControllerProvider, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant> {
    MPUExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;
    unsigned long long _autohighlightIndex;
    NSArray *_bannerButtonElements;
    NSArray *_carouselLockupElements;
    MPUExtrasCarouselViewController *_carouselViewController;
    MPUExtrasImageBrowserViewController *_imageBrowserViewController;
    NSDictionary *_overriddenFullscreenImages;
    bool _supportsOneupMode;
}

@property(assign,retain) MPUExtrasZoomingImageTransitionController * activeZoomingImageInteractiveTransitionController;
@property(assign,readwrite) unsigned long long autohighlightIndex;
@property(assign,retain) NSArray * bannerButtonElements;
@property(assign,retain) NSArray * carouselLockupElements;
@property(assign,retain) MPUExtrasCarouselViewController * carouselViewController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MPUExtrasImageBrowserViewController * imageBrowserViewController;
@property(assign,readonly) unsigned long long indexOfVisibleItem;
@property(assign,retain) NSDictionary * overriddenFullscreenImages;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool supportsOneupMode;
@property(assign,readonly) IKShowcaseTemplate * templateElement;

- (void).cxx_destruct;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(id)arg3;
- (id)_mainChildViewController;
- (void)_prepareLayout;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1;
- (id)activeZoomingImageInteractiveTransitionController;
- (id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (unsigned long long)autohighlightIndex;
- (id)bannerButtonElements;
- (id)carouselLockupElements;
- (unsigned long long)carouselSize;
- (id)carouselViewController;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize { double x1; double x2; })arg4;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (id)imageBrowserViewController;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (unsigned long long)indexOfVisibleItem;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;
- (unsigned long long)numberOfItemsInCarouselViewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overriddenFullscreenImages;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setActiveZoomingImageInteractiveTransitionController:(id)arg1;
- (void)setAutohighlightIndex:(unsigned long long)arg1;
- (void)setBannerButtonElements:(id)arg1;
- (void)setCarouselLockupElements:(id)arg1;
- (void)setCarouselViewController:(id)arg1;
- (void)setImageBrowserViewController:(id)arg1;
- (void)setOverriddenFullscreenImages:(id)arg1;
- (void)setSupportsOneupMode:(bool)arg1;
- (bool)showsPlaceholder;
- (bool)supportsOneupMode;
- (id)templateElement;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
