/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAvalancheReviewController : UIViewController <PHAssetCollectionDataSource, PUAvalancheReviewCollectionViewLayoutDelegate, PUPhotosSharingTransitionViewController, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUTransitionViewAnimatorDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    PLAvalanche *__avalancheBeingReviewed;
    PHCachingImageManager *__cachingImageManager;
    UIBarButtonItem *__cancelBarButtonItem;
    UICollectionView *__collectionView;
    PUAvalancheReviewCollectionViewLayout *__collectionViewLayout;
    bool __completingReviewMode;
    <PLAssetContainer> *__currentAssetContainer;
    UIBarButtonItem *__doneBarButtonItem;
    NSIndexPath *__inFlightReferenceIndexPath;
    PLManagedAsset *__initialAsset;
    NSOrderedSet *__initialFavorites;
    PUReviewInstructionalView *__instructionalView;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    PUPhotoBrowserController *__presentingPhotoBrowserController;
    PUAvalancheReviewControllerSpec *__spec;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UICollectionViewLayout *__transitionLayout;
    bool __updatingContentOffsetFromScrubbing;
    PHFetchResult *_assetCollectionsFetchResult;
    <PLAssetContainerList> *_avalancheContainerList;
    <PUAvalancheReviewControllerDelegate> *_delegate;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    NSMutableDictionary *_resultsForAssetCollection;
}

@property(assign,readonly) PLAvalanche * _avalancheBeingReviewed;
@property(assign,readonly) PHCachingImageManager * _cachingImageManager;
@property(assign,readonly) UIBarButtonItem * _cancelBarButtonItem;
@property(assign,readonly) UICollectionView * _collectionView;
@property(assign,readonly) PUAvalancheReviewCollectionViewLayout * _collectionViewLayout;
@property(assign,readwrite) bool _completingReviewMode;
@property(assign,readonly) <PLAssetContainer> * _currentAssetContainer;
@property(assign,readonly) UIBarButtonItem * _doneBarButtonItem;
@property(assign,readonly) NSIndexPath * _inFlightReferenceIndexPath;
@property(assign,readonly) PLManagedAsset * _initialAsset;
@property(assign,readonly) NSOrderedSet * _initialFavorites;
@property(assign,readonly) PUReviewInstructionalView * _instructionalView;
@property(setter=_setPhotoZoomAnimator:,assign,retain) PUTransitionViewAnimator * _photoZoomAnimator;
@property(setter=_setPhotoZoomCell:,assign,retain) PUPhotosZoomingSharingGridCell * _photoZoomCell;
@property(setter=_setPhotoZoomPinchGestureRecognizer:,assign,retain) PUPhotoPinchGestureRecognizer * _photoZoomPinchGestureRecognizer;
@property(assign,readonly) PUPhotoBrowserController * _presentingPhotoBrowserController;
@property(assign,readonly) PUReviewScrubber * _reviewScrubber;
@property(assign,readonly) PUAvalancheReviewControllerSpec * _spec;
@property(assign,readonly) UITapGestureRecognizer * _tapGestureRecognizer;
@property(setter=_setTransitionLayout:,assign,retain) UICollectionViewLayout * _transitionLayout;
@property(assign,readonly) bool _updatingContentOffsetFromScrubbing;
@property(assign,readonly) PHFetchResult * assetCollectionsFetchResult;
@property(assign,readonly) <PLAssetContainerList> * avalancheContainerList;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PUAvalancheReviewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;
@property(assign,readonly) Class superclass;

+ (id)filteringContext;

- (void).cxx_destruct;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_avalancheBeingReviewed;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (id)_cachingImageManager;
- (id)_cancelBarButtonItem;
- (void)_cancelReviewMode;
- (void)_cancelReviewModeAction:(id)arg1;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (bool)_completingReviewMode;
- (void)_crossfadeToAssetAndDismiss:(id)arg1;
- (id)_currentAsset;
- (id)_currentAssetContainer;
- (void)_dismissReviewController;
- (id)_doneBarButtonItem;
- (void)_endZoomingForCell;
- (void)_finishReviewAndDeleteNonPicks:(bool)arg1;
- (void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2;
- (void)_getMainCollectionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 orientation:(long long)arg3;
- (void)_handleDoneButton:(id)arg1;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (id)_inFlightReferenceIndexPath;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { double x1; double x2; })arg2 excludingIndexPath:(id)arg3;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (id)_initialAsset;
- (id)_initialFavorites;
- (id)_instructionalView;
- (long long)_interfaceOrientationFromDeviceOrientation:(long long)arg1;
- (void)_pageToIndexPath:(id)arg1 animated:(bool)arg2;
- (id)_phAssetAtIndexPath:(id)arg1;
- (id)_photoZoomAnimator;
- (id)_photoZoomCell;
- (id)_photoZoomPinchGestureRecognizer;
- (id)_presentingPhotoBrowserController;
- (void)_promoteFavoriteAssetsAndDeleteNonPicks:(bool)arg1 withReviewCompletionHandler:(id)arg2;
- (void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_reloadAvalancheDataWithAsset:(id)arg1;
- (id)_reviewScrubber;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_setPhotoZoomAnimator:(id)arg1;
- (void)_setPhotoZoomCell:(id)arg1;
- (void)_setPhotoZoomPinchGestureRecognizer:(id)arg1;
- (void)_setTransitionLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_spec;
- (void)_startPreheatingAllAssets;
- (void)_stopPreheatingAllAssets;
- (id)_tapGestureRecognizer;
- (void)_toggleCurrentPickStatusAtIndexPath:(id)arg1;
- (id)_transitionLayout;
- (void)_updateBarItemsAnimated:(bool)arg1;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateCollectionViewLayoutInsets;
- (void)_updateEnabledNavigationBarItems;
- (void)_updateMainViewAnimated:(bool)arg1;
- (void)_updateNavigationItemTitle;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateReviewScrubberFromContentOffset;
- (bool)_updatingContentOffsetFromScrubbing;
- (id)assetCollectionsFetchResult;
- (void)assetContainerDidChange:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (bool)automaticallyAdjustsScrollViewInsets;
- (id)avalancheContainerList;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)embeddedActivityView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })embeddedActivityViewFrameWhenShowing:(bool)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSpec:(id)arg1 startingAtAsset:(id)arg2 inAvalanche:(id)arg3 currentAssetContainer:(id)arg4 fromPhotoBrowserController:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atIndexPath:(id)arg4;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (unsigned long long)numberOfPhotosInReviewScrubber:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)photosSharingTransitionContext;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;
- (void)reviewScrubberDidScrub:(id)arg1;
- (void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1;
- (int)reviewScrubberImageFormat;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(bool)arg2;
- (void)set_completingReviewMode:(bool)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)transitionCollectionView;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end