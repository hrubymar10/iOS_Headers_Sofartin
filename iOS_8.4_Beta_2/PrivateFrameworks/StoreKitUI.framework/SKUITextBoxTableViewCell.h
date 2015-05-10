/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextBoxTableViewCell : SKUITableViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _textBoxInsets;
    SKUITextBoxView *_textBoxView;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textBoxInsets;
@property(assign,readonly) SKUITextBoxView * textBoxView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextBoxInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textBoxInsets;
- (id)textBoxView;

@end
