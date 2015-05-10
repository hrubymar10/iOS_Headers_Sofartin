/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIPerspectiveView, SKUIViewElementView> {
    SKUISizeValue *_artworkBoundingSize;
    NSHashTable *_artworkRelatedChildViewElementViews;
    <SKUIPerspectiveView> *_backgroundViewWithParallax;
    SKUIBackgroundImageWrapperForHorizontalLockup *_backgroundWrapper;
    SKUICardViewElement *_cardElement;
    bool _hasBottomAlignedItems;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUICardLayout *_layout;
    SKUIViewElement *_productImageElement;
    UIView *_programmedCardBackgroundView;
    NSMapTable *_viewElements;
}

@property(assign,copy) SKUISizeValue * artworkBoundingSize;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (double)_defaultWidthForLockupWithContext:(id)arg1;
+ (struct CGSize { double x1; double x2; })artworkBoundingSizeWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (double)_dividerHeight:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_performDefaultActionForViewElement:(id)arg1;
- (id)artworkBoundingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setArtworkBoundingSize:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
