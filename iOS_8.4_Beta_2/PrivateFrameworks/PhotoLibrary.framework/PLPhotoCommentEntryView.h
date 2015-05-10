/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate> {
    <PLPhotoCommentEntryViewDelegate> *_delegate;
    UILabel *_placeholderLabel;
    UIButton *_postButton;
    UITextView *_textView;
    UILabel *placeholderLabel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PLPhotoCommentEntryViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UILabel * placeholderLabel;
@property(assign,retain) UIButton * postButton;
@property(assign,readonly) Class superclass;
@property(assign,retain) UITextView * textView;

- (void)clearText;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (id)postButton;
- (double)preferredHeight;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (id)trimmedText;

@end