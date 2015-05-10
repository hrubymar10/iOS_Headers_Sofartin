/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecipientTableViewCellTitleView : UIView <MFTinting> {
    NSAttributedString *_deselectedAttributedString;
    bool _highlighted;
    bool _shouldDim;
    UIColor *_tintColor;
    UILabel *_titleLabel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool highlighted;
@property(assign,readwrite) bool shouldDim;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UILabel * titleLabel;

+ (id)defaultStringAttributes;
+ (double)height;
+ (id)highlightedStringAttributes;
+ (id)regularStringAttributes;

- (void)dealloc;
- (bool)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShouldDim:(bool)arg1;
- (void)setTintColor:(id)arg1 animated:(bool)arg2;
- (bool)shouldDim;
- (id)tintColor;
- (id)titleLabel;

@end