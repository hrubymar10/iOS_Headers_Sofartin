/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUPurchaseAlbumView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _alignmentRectInsets;
    SKUIItemOfferButton *_itemOfferButton;
    long long _purchaseAlbumViewStyle;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property(assign,readonly) SKUIItemOfferButton * itemOfferButton;
@property(assign,readwrite) long long purchaseAlbumViewStyle;
@property(assign,copy) NSString * title;

- (void).cxx_destruct;
- (void)_updateForStyle:(long long)arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemOfferButton;
- (void)layoutSubviews;
- (long long)purchaseAlbumViewStyle;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPurchaseAlbumViewStyle:(long long)arg1;
- (void)setPurchaseAlbumViewStyle:(long long)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end