/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {
    bool _backfills;
    UICollectionView *_collectionView;
    struct CGSize { 
        double width; 
        double height; 
    } _headerSize;
    double _horizontalPadding;
    long long _numberOfColumns;
    long long _numberOfRows;
    double _verticalPadding;
}

@property(assign,readwrite) bool backfills;
@property(assign,readwrite) double horizontalPadding;
@property(assign,readwrite) double verticalPadding;

- (void).cxx_destruct;
- (bool)backfills;
- (double)horizontalPadding;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (void)setBackfills:(bool)arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setVerticalPadding:(double)arg1;
- (double)verticalPadding;

@end