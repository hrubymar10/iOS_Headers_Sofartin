/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    double _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    double _totalHeight;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUITextBoxView *textBoxView;

- (void).cxx_destruct;
- (void)_initSKUIEditorialCellLayout;
- (id)_linkView;
- (id)_textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)textBoxView;

@end
