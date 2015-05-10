/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUYearsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate> {
    NSMutableDictionary *_resultsForCollectionList;
    PHFetchResult *_yearsFetchResult;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_yearsFetchResult;
- (struct __CFString { }*)aggregateLevelKey;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (double)cellAspectRatioHint;
- (long long)cellFillMode;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (id)displayTitle;
- (id)imageDataForAsset:(id)arg1 itemContentScale:(double)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
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
- (void)willShowMagnifiedViewController:(id)arg1;

@end