/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStaticScrollBar : UIView {
    NSArray *_buttonConstraints;
    NSArray *_dividerConstraints;
    UIView *_dividerLine;
    UIButton *_downButton;
    NSInvocation *_invocation;
    bool _isOnLeftSide;
    bool _shouldInsetButtons;
    UIButton *_upButton;
}

@property (nonatomic) bool isOnLeftSide;
@property (nonatomic) bool shouldInsetButtons;

- (void)_updateButtonConstraints;
- (void)_updateDividerConstraints;
- (void)buttonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centeringBounds;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOnLeftSide;
- (void)setIsOnLeftSide:(bool)arg1;
- (void)setShouldInsetButtons:(bool)arg1;
- (void)setTarget:(id)arg1 forAction:(SEL)arg2;
- (bool)shouldInsetButtons;

@end
