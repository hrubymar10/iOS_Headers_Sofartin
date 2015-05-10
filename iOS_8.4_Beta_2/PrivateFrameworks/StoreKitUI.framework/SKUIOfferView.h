/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOfferView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIViewElementView> {
    unsigned long long _alignment;
    NSMapTable *_buttonElements;
    NSMapTable *_buyButtonDescriptorToButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    <SKUIOfferViewDelegate> *_delegate;
    bool _isShowingConfirmation;
    long long _metadataPosition;
    NSMutableArray *_metadataViews;
    NSMapTable *_notices;
    NSMutableArray *_offerButtonViews;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUIOfferViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long metadataPosition;
@property(getter=isShowingConfirmation,assign,readonly) bool showingConfirmation;
@property(assign,readonly) Class superclass;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_positionNoticeForItemOfferButton:(id)arg1;
- (void)_sendWillAnimate;
- (bool)_shouldHideNoticesWithBuyButtonDescriptor:(id)arg1 context:(id)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingConfirmation;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (long long)metadataPosition;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setMetadataPosition:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end