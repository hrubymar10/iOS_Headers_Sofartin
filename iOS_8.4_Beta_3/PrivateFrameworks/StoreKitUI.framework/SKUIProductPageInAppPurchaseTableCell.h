/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSString *indexString;
@property (nonatomic, copy) NSString *priceString;
@property (nonatomic, copy) NSString *productName;

- (void).cxx_destruct;
- (id)colorScheme;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)indexString;
- (void)layoutSubviews;
- (id)priceString;
- (id)productName;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setIndexString:(id)arg1;
- (void)setPriceString:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
