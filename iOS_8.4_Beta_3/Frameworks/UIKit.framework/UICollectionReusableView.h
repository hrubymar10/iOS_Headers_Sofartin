/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionReusableView : UIView {
    UICollectionView *_collectionView;
    UICollectionViewLayoutAttributes *_layoutAttributes;
    bool _preferredAttributesValid;
    struct { 
        unsigned int wasDequeued : 1; 
        unsigned int preferredAttributesValid : 1; 
        unsigned int generatingPreferredAttributes : 1; 
    } _reusableViewFlags;
    NSString *_reuseIdentifier;
    long long _updateAnimationCount;
}

@property (getter=_collectionView, setter=_setCollectionView:, nonatomic) UICollectionView *collectionView;
@property (getter=_isInUpdateAnimation, nonatomic, readonly) bool inUpdateAnimation;
@property (getter=_layoutAttributes, setter=_setLayoutAttributes:, nonatomic, copy) UICollectionViewLayoutAttributes *layoutAttributes;
@property (getter=_arePreferredAttributesValid, nonatomic) bool preferredAttributesValid;
@property (nonatomic, copy) NSString *reuseIdentifier;

+ (void)_gkAdjustConstraintMargins:(id)arg1 leading:(double)arg2 trailing:(double)arg3;
+ (void)_gkSetupSelectableThreeLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 middleLine:(id)arg5 lowerLine:(id)arg6 metricOverrides:(id)arg7;
+ (void)_gkSetupSelectableTwoLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;
+ (id)_gkSetupThreeLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 middleLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;
+ (id)_gkSetupTwoLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLabel:(id)arg3 lowerLabel:(id)arg4 leadingBetween:(double)arg5 fontTextStyle:(id)arg6 metricOverrides:(id)arg7;
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1;
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 withOverrides:(id)arg2;
+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;

- (void)_addUpdateAnimation;
- (bool)_arePreferredAttributesValid;
- (void)_clearUpdateAnimation;
- (id)_collectionView;
- (bool)_disableRasterizeInAnimations;
- (id)_gkNewStandardImageView;
- (id)_gkNewStandardInfoLabel;
- (id)_gkNewStandardTitleLabel;
- (void)_gkSetLeadingGuideConstraint:(id)arg1 trailingGuideConstraint:(id)arg2;
- (void)_invalidatePreferredAttributes;
- (bool)_isInUpdateAnimation;
- (id)_layoutAttributes;
- (void)_markAsDequeued;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setReuseIdentifier:(id)arg1;
- (bool)_wasDequeued;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)setPreferredAttributesValid:(bool)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
