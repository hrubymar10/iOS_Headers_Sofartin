/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardLayoutAlignmentView : UIView {
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *heightConstraint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } lastKnownKeyboardRect;
    NSLayoutConstraint *widthConstraint;
}

- (void)_addConstraints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_removeConstraints;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

@end