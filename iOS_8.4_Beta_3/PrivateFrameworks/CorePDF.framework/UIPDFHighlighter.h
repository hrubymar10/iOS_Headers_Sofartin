/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlighter : NSObject {
    struct CGColor { } *_borderColor;
    double _enlargeFactor;
    NSMutableArray *_highLightLayers;
    struct CGColor { } *_highlightColor;
    struct CGPDFPage { } *_page;
    double _pdfToViewScale;
    struct CGColor { } *_whiteColor;
    double inset;
}

@property (nonatomic) double inset;

- (void)addAnimation:(id)arg1;
- (void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(bool)arg3;
- (void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned long long)arg2 to:(id)arg3 animated:(bool)arg4;
- (void)addRectPath:(struct CGPath { }*)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg4 upright:(bool)arg5;
- (void)clear;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (double)inset;
- (void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg3 upright:(bool)arg4;
- (void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg3 upright:(bool)arg4;
- (void)setInset:(double)arg1;
- (void)setNeedsDisplay;
- (void)unhide;

@end
