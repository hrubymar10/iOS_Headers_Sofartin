/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductDescriptionTableViewCell : UITableViewCell <UITextViewDelegate> {
    <MusicProductDescriptionTableViewCellDelegate> *_delegate;
    struct { 
        unsigned int productDescriptionDidChange : 1; 
    } _delegateRespondsToSelector;
    UILabel *_descriptionHeaderLabel;
    UITextView *_placeholderTextView;
    MusicProductDescription *_productDescription;
    long long _productDescriptionMaximumLengthForTextInput;
    UITextView *_textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicProductDescriptionTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MusicProductDescription *productDescription;
@property (nonatomic) long long productDescriptionMaximumLengthForTextInput;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedTextWithProductDescriptionStoreEditorNotes:(id)arg1;
- (void)_handlePreferredContentSizeDidChangeNotification:(id)arg1;
- (struct { struct UIEdgeInsets { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; double x4; })_layoutMetricsWithinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 includingDescriptionHeader:(bool)arg2;
- (id)_newTextView;
- (void)_updatePlaceholderTextViewVisibility;
- (void)_updateTextViewEditability;
- (void)_updateTextViewWithProductDescription;
- (void)dealloc;
- (id)delegate;
- (void)didTransitionToState:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)productDescription;
- (long long)productDescriptionMaximumLengthForTextInput;
- (void)setDelegate:(id)arg1;
- (void)setProductDescription:(id)arg1;
- (void)setProductDescriptionMaximumLengthForTextInput:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forEditing:(bool)arg2;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
