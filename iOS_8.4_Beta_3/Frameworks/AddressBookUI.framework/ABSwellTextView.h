/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABSwellTextView : UIView <UITextViewDelegate> {
    bool _allowsEditing;
    <ABSwellTextViewDelegate> *_delegate;
    struct { 
        unsigned int delegateImplementsShouldBeginEditing : 1; 
        unsigned int delegateImplementsShouldEndEditing : 1; 
        unsigned int delegateImplementsDidBeginEditing : 1; 
        unsigned int delegateImplementsDidEndEditing : 1; 
        unsigned int delegateImplementsDidChange : 1; 
    } _flags;
    double _maxHeight;
    UITextView *_textView;
}

@property(assign,readwrite) bool allowsEditing;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <ABSwellTextViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) UIFont * font;
@property(assign,readonly) unsigned long long hash;
@property(getter=isHighlighted,assign,readwrite) bool highlighted;
@property(assign,readwrite) UIColor * highlightedTextColor;
@property(assign,readwrite) double maxHeight;
@property(getter=isScrollEnabled,assign,readwrite) bool scrollEnabled;
@property(assign,retain) UIColor * shadowColor;
@property(assign,readwrite) struct CGSize { double x1; double x2; } shadowOffset;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) NSString * text;
@property(assign,readwrite) UIColor * textColor;

+ (double)lineHeightWithFont:(id)arg1;

- (void)_beginPinningInputViews;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_endPinningInputViews;
- (void)abUITextView:(id)arg1 contentSizeChanged:(struct CGSize { double x1; double x2; })arg2;
- (double)abUITextView:(id)arg1 heightForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)allowsEditing;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (void)dealloc;
- (id)delegate;
- (id)font;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFirstResponder;
- (bool)isHighlighted;
- (bool)isScrollEnabled;
- (double)maxHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection;
- (bool)resignFirstResponder;
- (void)setAllowsEditing:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setKeyboardSettings:(id)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textColor;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewTextDidChange:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end