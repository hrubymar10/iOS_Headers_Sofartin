/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfPageSectionConfiguration : NSObject {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    <SKUIShelfPageSectionConfigurationDataSource> *_dataSource;
    long long _lockupType;
    bool _needsShelfCollectionViewLayout;
    bool _needsShelfCollectionViewReload;
    SKUIStorePageSectionContext *_pageSectionContext;
    bool _rendersWithParallax;
    bool _rendersWithPerspective;
    long long _sectionIndex;
    UICollectionView *_shelfCollectionView;
    UIColor *_shelfCollectionViewBackgroundColor;
    <UICollectionViewDataSource> *_shelfCollectionViewDataSource;
    <UICollectionViewDelegate> *_shelfCollectionViewDelegate;
    SKUIShelfLayoutData *_shelfLayoutData;
    IKViewElementStyle *_shelfViewElementStyle;
    bool _topSection;
    bool _wantsZoomingShelfLayout;
    double _zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
    double _zoomingShelfLayoutInterItemSpacing;
    double _zoomingShelfLayoutItemWidth;
    double _zoomingShelfLayoutScaledItemWidth;
}

@property(assign,retain) SKUIViewElementLayoutContext * cellLayoutContext;
@property(assign,readwrite) <SKUIShelfPageSectionConfigurationDataSource> * dataSource;
@property(assign,readonly) UICollectionView * existingShelfCollectionView;
@property(assign,readwrite) bool needsShelfCollectionViewLayout;
@property(assign,readwrite) bool needsShelfCollectionViewReload;
@property(assign,readonly) unsigned long long numberOfIterations;
@property(assign,retain) SKUIStorePageSectionContext * pageSectionContext;
@property(assign,readwrite) bool rendersWithParallax;
@property(assign,readwrite) bool rendersWithPerspective;
@property(assign,readwrite) long long sectionIndex;
@property(assign,readonly) UICollectionView * shelfCollectionView;
@property(assign,retain) UIColor * shelfCollectionViewBackgroundColor;
@property(assign,readwrite) <UICollectionViewDataSource> * shelfCollectionViewDataSource;
@property(assign,readwrite) <UICollectionViewDelegate> * shelfCollectionViewDelegate;
@property(assign,readonly) SKUIShelfLayoutData * shelfLayoutData;
@property(assign,retain) IKViewElementStyle * shelfViewElementStyle;
@property(getter=isTopSection,assign,readwrite) bool topSection;
@property(assign,readonly) bool wantsZoomingShelfLayout;
@property(assign,readonly) double zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
@property(assign,readonly) double zoomingShelfLayoutInterItemSpacing;
@property(assign,readonly) double zoomingShelfLayoutItemWidth;
@property(assign,readonly) double zoomingShelfLayoutScaledItemWidth;

- (void).cxx_destruct;
- (Class)_cellClassForEffectiveShelfItemViewElement:(id)arg1;
- (double)_columnSpacingForShelfItemViewElements:(id)arg1;
- (id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
- (Class)_lockupCellClassWithLockup:(id)arg1;
- (double)_perspectiveHeightForContentSize:(double)arg1;
- (id)_reloadShelfLayoutDataWithNumberOfShelfItems:(long long)arg1;
- (id)_shelfItemViewElementAtIndex:(long long)arg1;
- (id)_styledShelfCollectionViewLayoutForExistingLayout:(id)arg1;
- (void)_updateShelfLayoutDataContentInset;
- (id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
- (id)backgroundColorForShelfViewElement:(id)arg1;
- (id)cellForShelfItemViewElement:(id)arg1 indexPath:(id)arg2;
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;
- (id)cellLayoutContext;
- (struct CGSize { double x1; double x2; })cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (id)dataSource;
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;
- (id)existingShelfCollectionView;
- (bool)isTopSection;
- (long long)lockupTypeForLockup:(id)arg1;
- (bool)needsShelfCollectionViewLayout;
- (bool)needsShelfCollectionViewReload;
- (id)normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1 numberOfShelfItems:(unsigned long long)arg2;
- (unsigned long long)numberOfCellsForNumberOfShelfItems:(unsigned long long)arg1;
- (unsigned long long)numberOfIterations;
- (long long)numberOfSectionCells;
- (id)pageSectionContext;
- (bool)prefetchResourcesForShelfItemViewElement:(id)arg1 reason:(long long)arg2;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadLockupTypeForShelfViewElement:(id)arg1;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(bool)arg3 numberOfShelfItems:(long long)arg4;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (void)requestCellLayoutForViewElement:(id)arg1 withColumnWidth:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forShelfViewElement:(id)arg2 withSectionIndex:(long long)arg3;
- (long long)sectionIndex;
- (void)setCellLayoutContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNeedsShelfCollectionViewLayout:(bool)arg1;
- (void)setNeedsShelfCollectionViewReload:(bool)arg1;
- (void)setPageSectionContext:(id)arg1;
- (void)setRendersWithParallax:(bool)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)setShelfCollectionViewBackgroundColor:(id)arg1;
- (void)setShelfCollectionViewDataSource:(id)arg1;
- (void)setShelfCollectionViewDelegate:(id)arg1;
- (void)setShelfViewElementStyle:(id)arg1;
- (void)setTopSection:(bool)arg1;
- (id)shelfCollectionView;
- (id)shelfCollectionViewBackgroundColor;
- (id)shelfCollectionViewDataSource;
- (id)shelfCollectionViewDelegate;
- (void)shelfItemsCollectionView:(id)arg1 willApplyLayoutAttributes:(id)arg2 forViewElement:(id)arg3 withItemIndex:(long long)arg4;
- (id)shelfLayoutData;
- (id)shelfViewElementStyle;
- (bool)supportsDuplicateShelfItems;
- (bool)wantsZoomingShelfLayout;
- (double)zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
- (double)zoomingShelfLayoutInterItemSpacing;
- (double)zoomingShelfLayoutItemWidth;
- (double)zoomingShelfLayoutScaledItemWidth;

@end
