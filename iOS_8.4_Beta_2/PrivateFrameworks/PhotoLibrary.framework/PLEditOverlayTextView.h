/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLEditOverlayTextView : UIView {
    UIView *__backgroundView;
    UILabel *__textLabel;
}

@property(assign,readonly) UIView * _backgroundView;
@property(assign,readonly) UILabel * _textLabel;
@property(assign,copy) NSString * text;

- (id)_backgroundView;
- (void)_commonPLEditOverlayTextViewInitialization;
- (id)_textLabel;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
