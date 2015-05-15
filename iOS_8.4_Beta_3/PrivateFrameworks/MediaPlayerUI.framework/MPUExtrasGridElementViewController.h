/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasGridElementViewController : MPUExtrasViewElementViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView *_collectionView;
    MPUExtrasGridViewControllerStyle *_extraLargeStyle;
    _MPUExtrasShelfCollectionViewLayout *_flowLayout;
    _MPUExtrasGridHeaderView *_headerView;
    NSArray *_headerViewConstraints;
    MPUExtrasGridViewControllerStyle *_largeStyle;
    MPUExtrasGridViewControllerStyle *_mediumStyle;
    bool _shelfStyle;
    MPUExtrasGridViewControllerStyle *_smallStyle;
    UIView *_titleRule;
    NSArray *_titleRuleConstraints;
    MPUExtrasGridViewControllerStyle *_wideStyle;
}

@property(assign,readonly) UICollectionView * collectionView;
@property(assign,readonly) MPUExtrasGridViewControllerStyle * currentStyle;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) MPUExtrasGridViewControllerStyle * extraLargeStyle;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MPUExtrasGridViewControllerStyle * largeStyle;
@property(assign,retain) MPUExtrasGridViewControllerStyle * mediumStyle;
@property(getter=isShelfStyle,assign,readwrite) bool shelfStyle;
@property(assign,retain) MPUExtrasGridViewControllerStyle * smallStyle;
@property(assign,readonly) Class superclass;
@property(assign,readonly) IKGridElement * viewElement;
@property(assign,retain) MPUExtrasGridViewControllerStyle * wideStyle;

+ (id)_defaultCellStyle;
+ (id)_fontAttributes;
+ (id)extraLargeDetailStyle;
+ (id)extraLargeGalleryStyle;
+ (id)extraLargeStackGridStyle;
+ (id)keyPathsForValuesAffectingContentScrollView;
+ (id)largeDetailStyle;
+ (id)largeGalleryStyle;
+ (id)largeStackGridStyle;
+ (id)mediumDetailStyle;
+ (id)mediumGalleryStyle;
+ (id)mediumStackGridStyle;
+ (id)smallDetailStyle;
+ (id)smallGalleryStyle;
+ (id)smallStackGridStyle;
+ (id)wideDetailStyle;
+ (id)wideGalleryStyle;
+ (id)wideStackGridStyle;

- (void).cxx_destruct;
- (double)_cellSpacingForSection:(id)arg1;
- (id)_cellStyleForSection:(id)arg1;
- (void)_dynamicTypeDidChange;
- (bool)_hasDescriptionText;
- (id)_lockupForIndexPath:(id)arg1;
- (id)_narrowStyle;
- (void)_prepareLayout;
- (id)_sectionElementForIndex:(unsigned long long)arg1;
- (bool)_sectionIndexIsDescriptionSection:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionInsetsForSection:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)contentScrollView;
- (id)currentStyle;
- (void)dealloc;
- (id)extraLargeStyle;
- (id)initWithViewElement:(id)arg1;
- (bool)isShelfStyle;
- (id)largeStyle;
- (void)loadView;
- (id)mediumStyle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredLayoutAttribute;
- (id)preferredLayoutGuide;
- (void)setExtraLargeStyle:(id)arg1;
- (void)setLargeStyle:(id)arg1;
- (void)setMediumStyle:(id)arg1;
- (void)setShelfStyle:(bool)arg1;
- (void)setSmallStyle:(id)arg1;
- (void)setViewElement:(id)arg1;
- (void)setWideStyle:(id)arg1;
- (id)smallStyle;
- (void)viewWillAppear:(bool)arg1;
- (id)wideStyle;

@end