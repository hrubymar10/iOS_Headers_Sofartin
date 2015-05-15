/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISwooshView : UIView {
    UIView *_borderView;
    UICollectionView *_collectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _collectionViewInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    UIButton *_seeAllButton;
    bool _showsChevronForTitle;
    SKUILinkButton *_titleButton;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property(assign,readonly) UIControl * chevronTitleControl;
@property(assign,retain) UICollectionView * collectionView;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionViewInsets;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(assign,readonly) UIControl * seeAllControl;
@property(assign,copy) NSString * seeAllTitle;
@property(assign,readwrite) bool showsChevronForTitle;
@property(assign,copy) NSString * title;
@property(assign,copy) UIColor * titleColor;

- (void).cxx_destruct;
- (id)_seeAllArrowImage;
- (id)chevronTitleControl;
- (id)collectionView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)seeAllColorForControlState:(unsigned long long)arg1;
- (id)seeAllControl;
- (id)seeAllTitle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeeAllColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setSeeAllTitle:(id)arg1;
- (void)setShowsChevronForTitle:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (bool)showsChevronForTitle;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleColor;

@end
