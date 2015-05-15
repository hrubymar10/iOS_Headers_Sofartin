/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTextBalloonView : CKColoredBalloonView {
    NSAttributedString *_attributedText;
    bool _centerTextWhenSkinny;
    CKBalloonTextView *_textView;
}

@property(assign,copy) NSAttributedString * attributedText;
@property(assign,readwrite) bool centerTextWhenSkinny;
@property(assign,retain) CKBalloonTextView * textView;

- (id)attributedText;
- (bool)centerTextWhenSkinny;
- (void)configureForMessagePart:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)setAttributedText:(id)arg1;
- (void)setCenterTextWhenSkinny:(bool)arg1;
- (void)setTextView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)textView;
- (double)textViewWidthForWidth:(double)arg1;

@end
