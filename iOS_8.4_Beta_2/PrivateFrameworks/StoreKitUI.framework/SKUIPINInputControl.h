/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPINInputControl : UIControl <SKUIViewElementView, UIKeyInput> {
    UIColor *_boxBackgroundColor;
    UIColor *_boxBorderColor;
    UIFont *_font;
    long long _keyboardType;
    NSMutableArray *_labels;
    bool _needsLabelReload;
    long long _numberOfCharacters;
    bool _secureTextEntry;
    NSMutableString *_text;
    UIColor *_textColor;
    SKUIViewElement *_viewElement;
}

@property(assign,readwrite) long long autocapitalizationType;
@property(assign,readwrite) long long autocorrectionType;
@property(assign,copy) UIColor * boxBackgroundColor;
@property(assign,copy) UIColor * boxBorderColor;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool enablesReturnKeyAutomatically;
@property(assign,copy) UIFont * font;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long keyboardAppearance;
@property(assign,readwrite) long long keyboardType;
@property(assign,readwrite) long long numberOfCharacters;
@property(assign,readwrite) long long returnKeyType;
@property(getter=isSecureTextEntry,assign,readwrite) bool secureTextEntry;
@property(assign,readwrite) long long spellCheckingType;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * text;
@property(assign,copy) UIColor * textColor;

+ (double)_defaultBoxSizeForFont:(id)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_reloadLabelSubviews;
- (void)_sendValueChangeEvents;
- (void)_setNeedsReloadLayout;
- (long long)autocorrectionType;
- (bool)becomeFirstResponder;
- (id)boxBackgroundColor;
- (id)boxBorderColor;
- (bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (id)font;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardType;
- (void)layoutSubviews;
- (long long)numberOfCharacters;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (bool)resignFirstResponder;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setBoxBackgroundColor:(id)arg1;
- (void)setBoxBorderColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFont:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setKeyboardType:(long long)arg1;
- (void)setNumberOfCharacters:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSpellCheckingType:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)spellCheckingType;
- (id)text;
- (id)textColor;
- (void)tintColorDidChange;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
