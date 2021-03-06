/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUConfirmButton : UIButton {
    bool _attemptsToUseMaximumSize;
    UIImageView *_confirmBackgroundImageView;
    UILabel *_confirmLabel;
    UIImageView *_defaultBackgroundImageView;
    UILabel *_defaultLabel;
    <RUConfirmButtonDelegate> *_delegate;
    RUFocusedTouchGestureRecognizer *_focusedTouchGestureRecognizer;
    NSMutableDictionary *_fontByControlState;
    NSMutableDictionary *_shadowOffsetByControlState;
    bool _showingConfirmation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _touchAllowance;
}

@property (nonatomic) bool attemptsToUseMaximumSize;
@property (nonatomic, readonly) UILabel *confirmLabel;
@property (nonatomic) Class confirmLabelClass;
@property (nonatomic, readonly) UILabel *defaultLabel;
@property (nonatomic) Class defaultLabelClass;
@property (nonatomic) <RUConfirmButtonDelegate> *delegate;
@property (getter=isShowingConfirmation, nonatomic) bool showingConfirmation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchAllowance;

+ (id)confirmButton;

- (void).cxx_destruct;
- (void)_animatedSetShowingConfirmation:(bool)arg1;
- (void)_gestureRecognizerChangedStateAction:(id)arg1;
- (id)_objectForState:(unsigned long long)arg1 inDictionary:(id)arg2;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forControlState:(unsigned long long)arg2;
- (void)_styleLabel:(id)arg1 forState:(unsigned long long)arg2;
- (void)_touchUpInsideAction:(id)arg1;
- (bool)attemptsToUseMaximumSize;
- (id)confirmLabel;
- (Class)confirmLabelClass;
- (void)dealloc;
- (id)defaultLabel;
- (Class)defaultLabelClass;
- (id)delegate;
- (id)fontForState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingConfirmation;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAttemptsToUseMaximumSize:(bool)arg1;
- (void)setConfirmLabelClass:(Class)arg1;
- (void)setDefaultLabelClass:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1 forState:(unsigned long long)arg2;
- (void)setShowingConfirmation:(bool)arg1;
- (void)setShowingConfirmation:(bool)arg1 animationDuration:(double)arg2 animationDelay:(double)arg3 animationOptions:(unsigned long long)arg4 animationCompletionHandler:(id)arg5;
- (void)setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1 forState:(unsigned long long)arg2;
- (void)setTouchAllowance:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forControlState:(unsigned long long)arg2;
- (unsigned long long)state;
- (struct CGSize { double x1; double x2; })titleShadowOffsetForState:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchAllowance;

@end
