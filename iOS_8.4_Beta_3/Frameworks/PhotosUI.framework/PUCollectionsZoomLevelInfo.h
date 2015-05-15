/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {
    PHFetchResult *_collectionsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_collectionsFetchResult;
- (struct __CFString { }*)aggregateLevelKey;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (id)displayTitle;
- (long long)imageDeliveryMode;
- (int)imageFormat;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (long long)maxRowsPerSection;
- (void)modelDidChange:(id)arg1;
- (id)momentsInCollectionList:(id)arg1;
- (id)newCollectionViewLayout;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (id)renderedStripsElementKind;
- (id)sectionHeaderElementKind;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (bool)supportsIncrementalChangeNotifications;
- (void)updateLayoutMetricsForWidth:(double)arg1;

@end
