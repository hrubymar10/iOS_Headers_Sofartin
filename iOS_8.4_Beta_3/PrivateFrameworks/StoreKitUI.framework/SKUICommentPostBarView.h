/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICommentPostBarView : UIView <UITextFieldDelegate> {
    UILabel *_asLabel;
    UIButton *_asNameButton;
    NSString *_asText;
    NSString *_commenter;
    <SKUICommentDelegate> *_delegate;
    UIButton *_postButton;
    SKUICommentPostBarTextField *_postTextField;
}

@property(assign,copy) NSString * commenter;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUICommentDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_asLabel;
- (id)_asNameButton;
- (void)_changeCommenter:(id)arg1;
- (void)_post:(id)arg1;
- (void)_postComment;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)commenter;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)setAsText:(id)arg1;
- (void)setCommenter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setPostButtonText:(id)arg1;
- (void)setPostButtonVisible:(bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)tintColorDidChange;

@end
