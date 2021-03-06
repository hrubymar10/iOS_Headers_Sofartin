/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {
    UIButton *_button;
    UIButton *_externalButton;
}

- (id)_createButton;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressAndHoldButton:(id)arg1;
- (void)_pressButton:(id)arg1;
- (void)_triggerButtonWithAction:(long long)arg1;
- (long long)buttonType;
- (void)dealloc;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)updateContentsAndWidth;
- (bool)usesAdvancedActions;

@end
