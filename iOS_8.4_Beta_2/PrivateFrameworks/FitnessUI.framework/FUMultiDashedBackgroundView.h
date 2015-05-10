/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUMultiDashedBackgroundView : FUChartBackgroundView {
    bool _backgroundIsTransparent;
    UIView *_lastLineView;
    UIColor *_lineColor;
    double _lineSpacing;
    double _lineWidth;
    unsigned long long _numSubLines;
    UIColor *_subLineColor;
    double _subLineHeight;
}

@property(assign,readwrite) bool backgroundIsTransparent;
@property(assign,readwrite) double lineSpacing;
@property(assign,readwrite) double lineWidth;
@property(assign,readwrite) double subLineHeight;

- (void).cxx_destruct;
- (id)_linesPatternColor;
- (bool)backgroundIsTransparent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lineSpacing;
- (double)lineWidth;
- (void)setBackgroundIsTransparent:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setSubLineHeight:(double)arg1;
- (double)subLineHeight;

@end