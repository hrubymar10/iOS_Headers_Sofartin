/* Generated by RuntimeBrowser.
 */

@protocol UIInputViewAnimationHost <NSObject>

@required

- (void)setInputViewsHidden:(bool)arg1;
- (void)syncToExistingAnimations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningFrame;
- (UIView *)transitioningView;
- (void)updateToPlacement:(UIInputViewSetPlacement *)arg1 withNormalAnimationsAndNotifications:(bool)arg2;

@end
