/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate> {
    bool __hasAccurateCounts;
    bool __isCountingAssetTypes;
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    struct NSObject { Class x1; } *_album;
    PHAssetCollection *_assetCollection;
}

@property (setter=_setHasAccurateCounts:, nonatomic) bool _hasAccurateCounts;
@property (setter=_setCountingAssetTypes:, nonatomic) bool _isCountingAssetTypes;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *assetCollectionAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_countAssetTypesIfNeeded;
- (id)_globalHeaderTitle;
- (bool)_hasAccurateCounts;
- (bool)_isCountingAssetTypes;
- (void)_setCountingAssetTypes:(bool)arg1;
- (void)_setHasAccurateCounts:(bool)arg1;
- (struct NSObject { Class x1; }*)album;
- (id)assetCollection;
- (id)assetCollectionAssets;
- (bool)canBeginStackCollapseTransition;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForPreheating;
- (id)filterPredicateForAlbum:(struct NSObject { Class x1; }*)arg1;
- (double)globalHeaderHeight;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (id)initWithSpec:(id)arg1;
- (bool)isTrashBinViewController;
- (id)localizedTitleForAssets:(id)arg1;
- (id)newGridLayout;
- (bool)prepareForDismissingForced:(bool)arg1;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1 existingFetchResults:(id)arg2;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setupScrubber;
- (void)updateTitle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsGlobalFooter;

@end
