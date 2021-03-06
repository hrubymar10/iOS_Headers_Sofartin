/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptGroupHeaderView : UIView {
    UIButton *_actionButton;
    _UIBackdropView *_backdropView;
    CKConversation *_conversation;
    UIView *_separator;
    MFComposeRecipientTextView *_textView;
}

@property(assign,retain) UIButton * actionButton;
@property(assign,retain) _UIBackdropView * backdropView;
@property(assign,retain) CKConversation * conversation;
@property(assign,retain) UIView * separator;
@property(assign,retain) MFComposeRecipientTextView * textView;

- (id)actionButton;
- (id)backdropView;
- (id)conversation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 conversation:(id)arg2;
- (void)layoutSubviews;
- (id)separator;
- (void)setActionButton:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;

@end
