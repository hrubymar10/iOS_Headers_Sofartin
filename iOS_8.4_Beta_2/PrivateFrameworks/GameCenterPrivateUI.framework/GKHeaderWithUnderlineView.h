/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKHeaderWithUnderlineView : UICollectionReusableView {
    bool _didSetupConstraints;
    NSArray *_gutterConstraints;
    bool _isPinned;
    double _leadingMargin;
    NSMutableDictionary *_metrics;
    UIView *_pinnedBackdropView;
    UIImageView *_shadowView;
    double _trailingMargin;
    bool _underlineHasRightMargin;
    UIView *_underlineView;
}

@property(assign,readwrite) bool didSetupConstraints;
@property(assign,retain) NSArray * gutterConstraints;
@property(assign,readwrite) bool isPinned;
@property(assign,readwrite) double leadingMargin;
@property(assign,retain) NSMutableDictionary * metrics;
@property(assign,retain) UIView * pinnedBackdropView;
@property(assign,retain) UIImageView * shadowView;
@property(assign,readwrite) double trailingMargin;
@property(assign,readwrite) bool underlineHasRightMargin;
@property(assign,retain) UIView * underlineView;

+ (void)initialize;
+ (id)macMetrics;
+ (id)padMetrics;
+ (id)phoneMetrics;
+ (bool)requiresConstraintBasedLayout;

- (bool)allowsVibrancy;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (bool)didSetupConstraints;
- (bool)drawsUnderline;
- (void)establishConstraints;
- (id)gutterConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPinned;
- (double)leadingMargin;
- (id)metrics;
- (id)pinnedBackdropView;
- (void)pinningStateChangedTo:(bool)arg1;
- (void)setDidSetupConstraints:(bool)arg1;
- (void)setGutterConstraints:(id)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setMetrics:(id)arg1;
- (void)setPinnedBackdropView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTrailingMargin:(double)arg1;
- (void)setUnderlineHasRightMargin:(bool)arg1;
- (void)setUnderlineView:(id)arg1;
- (id)shadowView;
- (double)trailingMargin;
- (bool)underlineHasRightMargin;
- (id)underlineView;
- (void)updateConstraints;
- (void)updateGutterConstraints;

@end
