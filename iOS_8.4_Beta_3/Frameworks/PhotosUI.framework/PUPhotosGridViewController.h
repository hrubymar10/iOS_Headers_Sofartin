/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridViewController : UICollectionViewController <PHAssetCollectionDataSource, PLDismissableViewController, PLNavigableAssetContainerViewController, PUCollectionViewReorderDelegate, PUPhotosDataSourceChangeObserver, PUScrollViewSpeedometerDelegate, PUSearchViewControllerDelegate, PUSessionInfoObserver, PUStackedAlbumControllerTransition, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, _UISettingsKeyObserver> {
    PUActivityViewController *__activityViewController;
    UICollectionViewLayout *__albumListTransitionLayout;
    PUAlbumPickerViewController *__albumPickerViewController;
    NSSet *__assetsWaitingForDeleteChange;
    long long __batchPreheatingCount;
    PHCachingImageManager *__cachingImageManager;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    PLDeletePhotosActionController *__deleteActionController;
    UIView *__emptyPlaceholderView;
    bool __hasEditSessionReorderedItems;
    UIAlertController *__hideAssetConfirmationAlert;
    long long __maximumNumberOfRowsToPreheat;
    PUPhotosGridViewController *__modalSearchResultsViewController;
    PUSearchViewController *__modalSearchViewController;
    unsigned long long __previousCollectionsCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } __previousPrefetchRect;
    struct CGPoint { 
        double x; 
        double y; 
    } __previousPreheatContentOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } __previousPreheatRect;
    PUPopoverController *__puPopoverController;
    PUPhotoBrowserController *__pushedPhotoBrowserController;
    UIAlertController *__removeActionSheet;
    UIPopoverPresentationController *__shareAssetsPopoverController;
    PUPhotosSinglePickerViewController *__sharingPhotosPickerViewController;
    UIBarButtonItem *_addToolbarButton;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    unsigned long long _allowedActions;
    UIView *_alternateContentView;
    bool _alwaysHideTabBar;
    UIBarButtonItem *_cancelButtonItem;
    double _collectionViewLayoutReferenceWidth;
    bool _contentViewInSyncWithModel;
    UIBarButtonItem *_customDoneButtonItem;
    bool _deletesDuplicatesWhenNecessary;
    bool _didScrollToInitialPosition;
    PUPhotosGridViewControllerSpec *_gridSpec;
    bool _initiallyScrolledToBottom;
    bool _isDisplayingSearchResults;
    bool _isMenuIndexPathExact;
    double _lastTransitionWidth;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UICollectionViewLayout<PUGridLayoutProtocol> *_mainGridLayout;
    NSIndexPath *_menuIndexPath;
    id _onViewDidAppearCompletion;
    id _onViewDidLayoutSubviewsBlock;
    PUSearchViewController *_passdownSearchViewController;
    PUPhotoPinchGestureRecognizer *_photoOrStackPinchGestureRecognizer;
    PUPhotoSelectionManager *_photoSelectionManager;
    PUPhotosDataSource *_photosDataSource;
    id _ppt_nextDeleteFinishedBlock;
    NSMutableDictionary *_progressInfosByCachedIndexPath;
    NSMutableDictionary *_progressInfosByIdentifier;
    UIBarButtonItem *_removeToolbarButton;
    UIBarButtonItem *_restoreToolbarButton;
    PUSearchButtonItem *_searchButton;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UINavigationButton *_selectionButton;
    PUSessionInfo *_sessionInfo;
    UIBarButtonItem *_shareToolbarButton;
    bool _showsCustomDoneButtonItemOnLeft;
    UIBarButtonItem *_slideshowButton;
    UIBarButtonItem *_slideshowButtonSpacer;
    unsigned long long _suppressesColorSettingsCount;
    PHAsset *_visibleReferenceAssetBeforeChange;
    PHAssetCollection *_visibleReferenceAssetContainerBeforeChange;
    NSIndexPath *_visibleReferenceAssetIndexPathBeforeChange;
    double _visibleReferenceAssetRelativeYBeforeChange;
    NSIndexSet *_visibleSectionsBeforeChange;
}

@property(setter=_setActivityViewController:,assign,retain) PUActivityViewController * _activityViewController;
@property(setter=setAlbumListTransitionLayout:,assign,retain) UICollectionViewLayout * _albumListTransitionLayout;
@property(setter=_setAlbumPickerViewController:,assign,retain) PUAlbumPickerViewController * _albumPickerViewController;
@property(setter=_setAssetsWaitingForDeleteChange:,assign,retain) NSSet * _assetsWaitingForDeleteChange;
@property(setter=_setBatchPreheatingCount:,assign,readwrite) long long _batchPreheatingCount;
@property(assign,readonly) PHCachingImageManager * _cachingImageManager;
@property(setter=_setCollectionViewSpeedometer:,assign,retain) PUScrollViewSpeedometer * _collectionViewSpeedometer;
@property(setter=_setDeleteActionController:,assign,retain) PLDeletePhotosActionController * _deleteActionController;
@property(setter=_setEmptyPlaceholderView:,assign,retain) UIView * _emptyPlaceholderView;
@property(setter=_setHasEditSessionReorderedItems:,assign,readwrite) bool _hasEditSessionReorderedItems;
@property(setter=_setHideAssetConfirmationAlert:,assign,readwrite) UIAlertController * _hideAssetConfirmationAlert;
@property(setter=_setMaximumNumberOfRowsToPreheat:,assign,readwrite) long long _maximumNumberOfRowsToPreheat;
@property(setter=_setModalSearchResultsViewController:,assign,retain) PUPhotosGridViewController * _modalSearchResultsViewController;
@property(setter=_setModalSearchViewController:,assign,retain) PUSearchViewController * _modalSearchViewController;
@property(setter=_setPreviousCollectionsCount:,assign,readwrite) unsigned long long _previousCollectionsCount;
@property(setter=_setPreviousPrefetchRect:,assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previousPrefetchRect;
@property(setter=_setPreviousPreheatContentOffset:,assign,readwrite) struct CGPoint { double x1; double x2; } _previousPreheatContentOffset;
@property(setter=_setPreviousPreheatRect:,assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previousPreheatRect;
@property(setter=_puSetPopoverController:,assign,retain) PUPopoverController * _puPopoverController;
@property(setter=_setPushedPhotoBrowserController:,assign,retain) PUPhotoBrowserController * _pushedPhotoBrowserController;
@property(setter=_setRemoveActionSheet:,assign,readwrite) UIAlertController * _removeActionSheet;
@property(setter=_setShareAssetsPopoverController:,assign,readwrite) UIPopoverPresentationController * _shareAssetsPopoverController;
@property(setter=_setSharingPhotosPickerViewController:,assign,retain) PUPhotosSinglePickerViewController * _sharingPhotosPickerViewController;
@property(assign,retain) PUAlbumListTransitionContext * albumListTransitionContext;
@property(assign,readwrite) unsigned long long allowedActions;
@property(assign,readwrite) bool alwaysHideTabBar;
@property(assign,readonly) PHFetchResult * assetCollectionsFetchResult;
@property(assign,readonly) PHFetchResult * collectionListFetchResult;
@property(setter=_setCollectionViewLayoutReferenceWidth:,assign,readwrite) double collectionViewLayoutReferenceWidth;
@property(assign,retain) UIBarButtonItem * customDoneButtonItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) bool deletesDuplicatesWhenNecessary;
@property(assign,copy) NSString * description;
@property(assign,retain) PUPhotosGridViewControllerSpec * gridSpec;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool initiallyScrolledToBottom;
@property(setter=setDisplayingSearchResults:,assign,readwrite) bool isDisplayingSearchResults;
@property(assign,retain) UICollectionViewLayout<PUGridLayoutProtocol> * mainGridLayout;
@property(assign,copy) id onViewDidAppearCompletion;
@property(assign,retain) PUSearchViewController * passdownSearchViewController;
@property(setter=_setPhotoOrStackPinchGestureRecognizer:,assign,retain) PUPhotoPinchGestureRecognizer * photoOrStackPinchGestureRecognizer;
@property(setter=_setPhotoSelectionManager:,assign,retain) PUPhotoSelectionManager * photoSelectionManager;
@property(assign,retain) PUPhotosDataSource * photosDataSource;
@property(setter=ppt_setNextDeleteFinishedBlock:,assign,copy) id ppt_nextDeleteFinishedBlock;
@property(assign,retain) PUSessionInfo * sessionInfo;
@property(assign,readwrite) bool showsCustomDoneButtonItemOnLeft;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeSearchButtonItem;
- (id)_activityViewController;
- (void)_adaptSearchViewController:(id)arg1 toTraitCollection:(id)arg2 animated:(bool)arg3;
- (void)_addButtonPressed:(id)arg1;
- (id)_albumListTransitionLayout;
- (id)_albumPickerViewController;
- (id)_allAssetsInCollections;
- (bool)_allowsActions:(unsigned long long)arg1;
- (bool)_areAllAssetsSelected;
- (id)_assetsAllowingDelete:(bool)arg1 orRemove:(bool)arg2 fromAssets:(id)arg3;
- (id)_assetsAllowingEditOperation:(long long)arg1 fromAssets:(id)arg2;
- (id)_assetsWaitingForDeleteChange;
- (id)_avalancheStackImageForAsset:(id)arg1 partialStack:(bool)arg2;
- (id)_barButtonSpacerWithWidth:(double)arg1;
- (long long)_batchPreheatingCount;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (id)_bestReferenceItemIndexPathWithTopBias:(bool)arg1;
- (id)_cachingImageManager;
- (bool)_canAddContent;
- (bool)_canAllContainersPerformEditOperation:(long long)arg1;
- (bool)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (bool)_canRemoveContent;
- (bool)_canShareAsset:(id)arg1;
- (bool)_canShareContent;
- (id)_cancelButtonItem;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_clearAutomaticContentOffsetSnapshot;
- (bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { double x1; double x2; })arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (id)_collectionViewSpeedometer;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(bool)arg2;
- (void)_configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 thumbnailIsPlaceholder:(bool)arg3 assetMayHaveChanged:(bool)arg4;
- (id)_deleteActionController;
- (long long)_deleteActionForBarButtonItem:(id)arg1;
- (void)_didDismissSearchViewController;
- (void)_dismissSearchViewControllerAnimated:(bool)arg1;
- (id)_emptyPlaceholderView;
- (void)_getFirstAsset:(id*)arg1 collection:(id*)arg2;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleHideMenuItem:(id)arg1;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (void)_handleSelectionButton:(id)arg1;
- (bool)_hasAtLeastOneContainer;
- (bool)_hasEditSessionReorderedItems;
- (id)_hideAssetConfirmationAlert;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (void)_invalidateAllAssetIndexes;
- (void)_invalidateAllProgressInfoIndexPaths;
- (bool)_isAddPlaceholderAtIndexPath:(id)arg1;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(bool*)arg2;
- (long long)_maximumNumberOfRowsToPreheat;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (id)_modalSearchResultsViewController;
- (id)_modalSearchViewController;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (id)_newEditActionItemsWithWideSpacing:(bool)arg1;
- (void)_performAutomaticContentOffsetAdjustment;
- (id)_pickerBannerView;
- (void)_prepareForAutomaticContentOffsetAdjustment;
- (void)_presentSearchViewController:(id)arg1 forTraitCollection:(id)arg2 animated:(bool)arg3 completion:(id)arg4;
- (unsigned long long)_previousCollectionsCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previousPrefetchRect;
- (struct CGPoint { double x1; double x2; })_previousPreheatContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previousPreheatRect;
- (id)_puPopoverController;
- (void)_puSetPopoverController:(id)arg1;
- (id)_pushedPhotoBrowserController;
- (id)_referenceBarButtonItemForDeleteAction:(long long)arg1;
- (id)_removeActionSheet;
- (void)_removeButtonPressed:(id)arg1;
- (void)_removeSelectedAssetsWithCompletion:(id)arg1;
- (void)_searchButtonPressed:(id)arg1;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (id)_selectSessionDoneBarButtonItem;
- (id)_selectionButton;
- (void)_sender:(id)arg1 shareAssets:(id)arg2 aggregateKey:(struct __CFString { }*)arg3 completion:(id)arg4;
- (void)_setActivityViewController:(id)arg1;
- (void)_setAlbumPickerViewController:(id)arg1;
- (void)_setAssetsWaitingForDeleteChange:(id)arg1;
- (void)_setBatchPreheatingCount:(long long)arg1;
- (void)_setCollectionViewLayoutReferenceWidth:(double)arg1;
- (void)_setCollectionViewSpeedometer:(id)arg1;
- (void)_setDeleteActionController:(id)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setHasEditSessionReorderedItems:(bool)arg1;
- (void)_setHideAssetConfirmationAlert:(id)arg1;
- (void)_setMaximumNumberOfRowsToPreheat:(long long)arg1;
- (void)_setModalSearchResultsViewController:(id)arg1;
- (void)_setModalSearchViewController:(id)arg1;
- (void)_setPhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_setPhotoSelectionManager:(id)arg1;
- (void)_setPreviousCollectionsCount:(unsigned long long)arg1;
- (void)_setPreviousPrefetchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPreviousPreheatContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPushedPhotoBrowserController:(id)arg1;
- (void)_setRemoveActionSheet:(id)arg1;
- (void)_setShareAssetsPopoverController:(id)arg1;
- (void)_setSharingPhotosPickerViewController:(id)arg1;
- (id)_shareAssetsPopoverController;
- (void)_shareButtonPressed:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (id)_sharingPhotosPickerViewController;
- (void)_slideshowButtonPressed:(id)arg1;
- (void)_startSlideshowWithSettings:(id)arg1;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_updateBackButtonTitle;
- (void)_updateCollectionViewMultipleSelection;
- (void)_updateGlobalHeaderVisibility;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)_updateNavigationBannerAnimated:(bool)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(bool)arg2;
- (void)_updatePhotoSelectionManager;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateSearchButtonTextForActiveSearchField:(bool)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_updateToolbarContentsAnimated:(bool)arg1;
- (bool)_updateTransitionWidthOnAppearance;
- (void)_willDismissSearchViewControllerAnimated:(bool)arg1;
- (void)activityViewController:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (id)albumListTransitionContext;
- (bool)allowSlideshowButton;
- (unsigned long long)allowedActions;
- (id)alternateContentView;
- (bool)alwaysHideTabBar;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (void)beginBatchPreheating;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)beginSuppressingColorSettingsUpdate;
- (id)bestReferenceItemIndexPath;
- (bool)canAddToOtherAlbumContent;
- (bool)canBecomeFirstResponder;
- (bool)canBeginStackCollapseTransition;
- (bool)canDeleteContent;
- (bool)canDisplayEditButton;
- (bool)canNavigateToPhotoInteractively:(bool)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (id)collectionListFetchResult;
- (bool)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionViewLayoutReferenceWidth;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(bool)arg3;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (struct CGPoint { double x1; double x2; })contentOffsetForPreheating;
- (id)contentScrollView;
- (struct CGSize { double x1; double x2; })contentSizeForPreheating;
- (void)copy:(id)arg1;
- (id)customDoneButtonItem;
- (void)dealloc;
- (bool)deletesDuplicatesWhenNecessary;
- (void)didReceiveMemoryWarning;
- (void)didSelectAddPlaceholderInSection:(long long)arg1;
- (void)endBatchPreheating;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (double)globalHeaderHeight;
- (id)gridLayout;
- (id)gridSpec;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (bool)hasScrollableContent;
- (long long)imageDeliveryMode;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(bool*)arg2;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize { double x1; double x2; }*)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (bool)initiallyScrolledToBottom;
- (void)installGestureRecognizers;
- (bool)isAnyAssetSelected;
- (bool)isContentViewInSyncWithModel;
- (bool)isCurrentCollectionViewDataSource;
- (bool)isDisplayingSearchResults;
- (bool)isEmpty;
- (bool)isPreheatingEnabled;
- (bool)isTrashBinViewController;
- (id)itemIndexPathAtPoint:(struct CGPoint { double x1; double x2; })arg1 outClosestMatch:(id*)arg2;
- (void)loadView;
- (id)localizedSelectionTitle;
- (id)localizedTitleForAssets:(id)arg1;
- (id)longPressGestureRecognizer;
- (id)mainGridLayout;
- (void)navigateToBottomAnimated:(bool)arg1;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(bool)arg3;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(bool)arg3;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (id)newToolbarItems;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)onViewDidAppearCompletion;
- (id)passdownSearchViewController;
- (void)paste:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
- (id)photoOrStackPinchGestureRecognizer;
- (id)photoSelectionManager;
- (id)photosDataSource;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceWillChange:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)ppt_nextDeleteFinishedBlock;
- (void)ppt_setNextDeleteFinishedBlock:(id)arg1;
- (void)preheatAssets;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (id)pu_debugRows;
- (bool)pu_handleSecondTabTap;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)resetPreheating;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (id)searchButtonItem;
- (void)searchViewController:(id)arg1 adaptToTraitCollection:(id)arg2;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject { Class x1; }*)arg3 withTitle:(id)arg4 completion:(id)arg5;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(bool)arg3;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(bool)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)selectedAssets;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 withCompletion:(id)arg3;
- (void)sender:(id)arg1 shareSelectedAssetsWithAggregateKey:(struct __CFString { }*)arg2 completion:(id)arg3;
- (id)sessionInfo;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(bool)arg2;
- (void)setAllowedActions:(unsigned long long)arg1;
- (void)setAlternateContentView:(id)arg1;
- (void)setAlwaysHideTabBar:(bool)arg1;
- (void)setContentViewInSyncWithModel:(bool)arg1;
- (void)setCustomDoneButtonItem:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(bool)arg1;
- (void)setDisplayingSearchResults:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setGridSpec:(id)arg1;
- (void)setInitiallyScrolledToBottom:(bool)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setMainGridLayout:(id)arg1;
- (void)setOnViewDidAppearCompletion:(id)arg1;
- (void)setPassdownSearchViewController:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setSelected:(bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(bool)arg4;
- (void)setSessionInfo:(id)arg1;
- (void)setShowsCustomDoneButtonItemOnLeft:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldPerformAutomaticContentOffsetAdjustment;
- (bool)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (bool)shouldShowMenu;
- (bool)shouldShowTabBar;
- (bool)shouldShowToolbar;
- (bool)showsCustomDoneButtonItemOnLeft;
- (struct CGPoint { double x1; double x2; })stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)uninstallGestureRecognizers;
- (void)updateEmptyPlaceholderViewAnimated:(bool)arg1;
- (void)updateGlobalFooter;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateInterfaceForModelReloadAnimated:(bool)arg1;
- (void)updateLayoutMetrics;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)updatePeripheralInterfaceAnimated:(bool)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2;
- (bool)updateSpec;
- (void)updateTitle;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsAddContentInToolbar;
- (bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1;
- (bool)wantsGlobalFooter;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (bool)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 contentMode:(long long*)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(bool)arg2 forPhotoToken:(id)arg3;
- (bool)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(id)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;

@end