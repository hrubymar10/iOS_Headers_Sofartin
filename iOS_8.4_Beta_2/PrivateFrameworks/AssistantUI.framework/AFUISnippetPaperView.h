/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISnippetPaperView : UIView {
    <AFUISnippetPaperViewDelegate> *_delegate;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _gradientValues;
    bool _hasBeveledEdge;
    UIImage *_paperImage;
    UIImageView *_paperImageView;
    bool _usesGradient;
    bool _usingProvidedPaper;
}

@property(assign,readwrite) bool hasBeveledEdge;
@property(assign,retain) UIColor * paperColor;
@property(assign,retain) UIImage * paperImage;
@property(assign,readwrite) double paperImageAlpha;
@property(assign,readwrite) bool usesGradient;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; double x4; double x5; })_uiGradientValueForValue:(struct { float x1; float x2; float x3; float x4; })arg1;
- (id)color;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasBeveledEdge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)paperColor;
- (id)paperImage;
- (double)paperImageAlpha;
- (void)setColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGradientEndColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)setGradientStartColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)setGradientValues:(const struct { float x1; float x2; float x3; float x4; }*)arg1;
- (void)setHasBeveledEdge:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setPaperColor:(id)arg1;
- (void)setPaperImage:(id)arg1;
- (void)setPaperImageAlpha:(double)arg1;
- (void)setUsesGradient:(bool)arg1;
- (bool)usesGradient;

@end
