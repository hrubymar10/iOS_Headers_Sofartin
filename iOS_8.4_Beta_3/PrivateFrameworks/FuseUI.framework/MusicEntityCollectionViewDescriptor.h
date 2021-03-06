/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityCollectionViewDescriptor : MusicEntityViewDescriptor {
    id _layoutMetricsBlock;
    double _sectionHeaderBottomContentInset;
    bool _shouldFlattenToSingleSectionInRegularWidthAndHeight;
    bool _shouldShowOnlyFirstRowOfContent;
    bool _showsSectionHeaders;
    double _verticalLockupMaximumWidth;
    struct { 
        double multiplier; 
        double constant; 
    } _verticalLockupWidthFromCollectionViewWidthLinearRelation;
    bool _wantsEdgeToEdgeLayout;
}

@property (nonatomic, copy) id layoutMetricsBlock;
@property (nonatomic) double sectionHeaderBottomContentInset;
@property (nonatomic) bool shouldFlattenToSingleSectionInRegularWidthAndHeight;
@property (nonatomic) bool shouldShowOnlyFirstRowOfContent;
@property (nonatomic) bool showsSectionHeaders;
@property (nonatomic) double verticalLockupMaximumWidth;
@property (nonatomic) struct { double x1; double x2; } verticalLockupWidthFromCollectionViewWidthLinearRelation;
@property (nonatomic) bool wantsEdgeToEdgeLayout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)layoutMetricsBlock;
- (id)layoutMetricsForTraitCollection:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (double)sectionHeaderBottomContentInset;
- (void)setLayoutMetricsBlock:(id)arg1;
- (void)setSectionHeaderBottomContentInset:(double)arg1;
- (void)setShouldFlattenToSingleSectionInRegularWidthAndHeight:(bool)arg1;
- (void)setShouldShowOnlyFirstRowOfContent:(bool)arg1;
- (void)setShowsSectionHeaders:(bool)arg1;
- (void)setVerticalLockupMaximumWidth:(double)arg1;
- (void)setVerticalLockupWidthFromCollectionViewWidthLinearRelation:(struct { double x1; double x2; })arg1;
- (void)setWantsEdgeToEdgeLayout:(bool)arg1;
- (bool)shouldFlattenToSingleSectionInRegularWidthAndHeight;
- (bool)shouldShowOnlyFirstRowOfContent;
- (bool)showsSectionHeaders;
- (double)verticalLockupMaximumWidth;
- (struct { double x1; double x2; })verticalLockupWidthFromCollectionViewWidthLinearRelation;
- (bool)wantsEdgeToEdgeLayout;

@end
