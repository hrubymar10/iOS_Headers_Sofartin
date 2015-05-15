/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUFocusedTouchGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegatePrivate> {
    UIView *_focusedView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _touchAllowance;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) UIView * focusedView;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchAllowance;

- (void).cxx_destruct;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)focusedView;
- (id)initWithFocusedView:(id)arg1 touchAllowance:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setTouchAllowance:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchAllowance;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
