/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableExpandableHeaderView : UIControl {
    UILabel *_actionLabel;
    UIView *_bottomBorderView;
    SKUIColorScheme *_colorScheme;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property(assign,copy) NSString * actionString;
@property(assign,copy) UIColor * bottomBorderColor;
@property(assign,retain) SKUIColorScheme * colorScheme;
@property(assign,copy) NSString * title;
@property(assign,copy) UIColor * topBorderColor;

- (void).cxx_destruct;
- (id)actionString;
- (id)bottomBorderColor;
- (id)colorScheme;
- (void)layoutSubviews;
- (void)setActionString:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBottomBorderColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopBorderColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)topBorderColor;

@end
