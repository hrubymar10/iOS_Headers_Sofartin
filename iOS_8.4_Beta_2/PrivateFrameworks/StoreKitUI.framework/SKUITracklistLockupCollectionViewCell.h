/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView> {
    NSMapTable *_buyButtonDescriptorToButton;
    SKUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViewsByIndex;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIGradientView *_offerConfirmationGradientView;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    long long _previewState;
    UIView *_separatorView;
    SKUITrackViewElement *_track;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_enumerateViewElementViewsUsingBlock:(id)arg1;
- (void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(double)arg2;
- (id)_previewColumnView;
- (id)_previewControlViewElement;
- (id)_previewMediaURL;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)dealloc;
- (void)hidePreviewProgressAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(bool)arg2;
- (void)togglePreviewPlaybackAnimated:(bool)arg1;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
