/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStackView : UIView {
    UIView *__backgroundView;
    NSPointerArray *__imageSizes;
    long long __numberOfViews;
    NSArray *__photoDecorationVariants;
    NSArray *__photoViews;
    UIImageView *_combinedPhotoDecorationImageView;
    bool _combinesPhotoDecorations;
    UIImage *_emptyPlaceholderImage;
    UIColor *_gridBackgroundColor;
    double _gridBackgroundCornerRadius;
    double _gridItemSpacing;
    double _gridMargin;
    bool _imageHidden;
    bool _needsDynamicLayout;
    long long _numberOfVisibleItems;
    PUPhotoDecoration *_photoDecoration;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _stackOffset;
    struct CGPoint { 
        double x; 
        double y; 
    } _stackPerspectiveFactor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _stackPerspectiveInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _stackPerspectiveOffset;
    struct CGSize { 
        double width; 
        double height; 
    } _stackSize;
    unsigned long long _style;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _transforms;
}

@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (nonatomic, readonly) NSPointerArray *_imageSizes;
@property (nonatomic, readonly) long long _numberOfViews;
@property (setter=_setPhotoDecorationVariants:, nonatomic, copy) NSArray *_photoDecorationVariants;
@property (nonatomic, readonly) NSArray *_photoViews;
@property (nonatomic) bool combinesPhotoDecorations;
@property (nonatomic, retain) UIImage *emptyPlaceholderImage;
@property (nonatomic, retain) UIColor *gridBackgroundColor;
@property (nonatomic) double gridBackgroundCornerRadius;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double gridMargin;
@property (nonatomic) long long numberOfVisibleItems;
@property (nonatomic, retain) PUPhotoDecoration *photoDecoration;
@property (nonatomic, readonly) NSArray *stackItemViews;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } stackPerspectiveFactor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } stackPerspectiveInsets;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackPerspectiveOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } stackSize;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeftCornerOfFrontStackItem;

+ (long long)maximumNumberOfVisibleImagesForStyle:(unsigned long long)arg1;
+ (long long)maximumNumberOfVisibleItemsForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_combinedPhotoDecorationsImage;
- (void)_getCenter:(struct CGPoint { double x1; double x2; }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forPhotoViewAtIndex:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getStackFrame;
- (id)_imageSizes;
- (long long)_numberOfViews;
- (id)_photoDecorationVariants;
- (id)_photoViews;
- (void)_rebuildDecorationVariants;
- (void)_setBackgroundView:(id)arg1;
- (void)_setNeedsDynamicLayout;
- (void)_setPhotoDecorationVariants:(id)arg1;
- (void)_updateBackgroundView;
- (void)_updateDynamicLayout;
- (void)_updateNumberOfViews;
- (void)_updatePhotoViews;
- (void)_updateSubviewsOrdering;
- (bool)combinesPhotoDecorations;
- (id)emptyPlaceholderImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfFrontStackItemRelativeToView:(id)arg1;
- (id)gridBackgroundColor;
- (double)gridBackgroundCornerRadius;
- (double)gridItemSpacing;
- (double)gridMargin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isImageHiddenForItemAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)newLayoutAttributesForItemAtIndex:(long long)arg1 relativeToView:(id)arg2;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 maxCount:(long long)arg2;
- (long long)numberOfVisibleItems;
- (id)photoDecoration;
- (void)prepareForReuse;
- (void)setAlpha:(double)arg1 forItemAtIndex:(long long)arg2;
- (void)setBadgeType:(long long)arg1 forItemAtIndex:(long long)arg2;
- (void)setBadgeType:(long long)arg1 videoDuration:(double)arg2 forItemAtIndex:(long long)arg3;
- (void)setCombinesPhotoDecorations:(bool)arg1;
- (void)setEmptyPlaceholderImage:(id)arg1;
- (void)setGridBackgroundColor:(id)arg1;
- (void)setGridBackgroundCornerRadius:(double)arg1;
- (void)setGridItemSpacing:(double)arg1;
- (void)setGridMargin:(double)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageHidden:(bool)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndex:(long long)arg2;
- (void)setNumberOfVisibleItems:(long long)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setStackOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackPerspectiveFactor:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStackPerspectiveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStackPerspectiveOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)stackItemViews;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct CGPoint { double x1; double x2; })stackPerspectiveFactor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (struct CGSize { double x1; double x2; })stackSize;
- (unsigned long long)style;
- (struct CGPoint { double x1; double x2; })topLeftCornerOfFrontStackItem;
- (bool)wouldCoverAllItemsInStackView:(id)arg1;

@end
