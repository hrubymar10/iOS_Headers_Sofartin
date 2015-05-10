/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIObjectPickerButtonView : UIView {
    SiriUIKeyline *_bottomKeyline;
    UIButton *_button;
    bool _showsTopKeyline;
    SiriUIKeyline *_topKeyline;
}

@property(assign,readonly) UIButton * button;
@property(assign,readwrite) bool showsTopKeyline;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setShowsTopKeyline:(bool)arg1;
- (bool)showsTopKeyline;

@end
