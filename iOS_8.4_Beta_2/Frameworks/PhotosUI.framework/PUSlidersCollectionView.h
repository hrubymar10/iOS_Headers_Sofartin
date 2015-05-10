/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlidersCollectionView : UICollectionView {
    double _rowHeight;
    long long _scrollDirection;
    PUSlidersCollectionViewLayout *_tableLikeLayout;
}

@property(assign,readwrite) double rowHeight;
@property(assign,readwrite) long long scrollDirection;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)rowHeight;
- (long long)scrollDirection;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRowHeight:(double)arg1;
- (void)setScrollDirection:(long long)arg1;

@end
