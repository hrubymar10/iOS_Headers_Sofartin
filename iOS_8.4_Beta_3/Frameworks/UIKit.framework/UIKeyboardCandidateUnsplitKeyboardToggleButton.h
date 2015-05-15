/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {
    UIImage *_backgroundHighlighted;
    UIImage *_backgroundNormal;
    bool _drawsBackground;
    bool _drawsPocketShadow;
    UIKeyboardCandidatePocketShadow *_pocketShadow;
}

@property (nonatomic) bool drawsBackground;
@property (nonatomic) bool drawsPocketShadow;

- (void)dealloc;
- (bool)drawsBackground;
- (bool)drawsPocketShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setDrawsPocketShadow:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (id)toggleButtonBackgroundImageWithHighlight:(bool)arg1;
- (void)updateBackgroundImages;

@end
