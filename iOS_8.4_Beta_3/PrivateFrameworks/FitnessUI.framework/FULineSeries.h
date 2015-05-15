/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FULineSeries : FUChartSeries {
    NSArray *_barViews;
    FUGradientObject *_fillGradient;
    FUGradientView *_fillView;
    UIView *_highlightClipView;
    UIColor *_highlightIndicatorColor;
    struct CGGradient { } *_highlightIndicatorGradient;
    UIView *_highlightView;
    FUGradientView *_highlightedFillView;
    FUShapeView *_highlightedLineView;
    UIImageView *_leftHighlightIndicator;
    UIColor *_lineColor;
    FUShapeView *_lineView;
    double _lineWidth;
    NSArray *_plotPoints;
    UIColor *_pointColor;
    int _pointOccurrence;
    float _pointRadius;
    int _pointStyle;
    NSArray *_pointViews;
    double _previousLeftPointX;
    UIImageView *_rightHighlightIndicator;
    FUGradientObject *_selectedFillGradient;
    UIColor *_selectedLineColor;
    UIColor *_selectedPointColor;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _selectedPointRange;
    float _sineWaveSmoothingFactor;
    bool _snapToPoint;
    int _waveForm;
}

@property(assign,retain) NSArray * barViews;
@property(assign,retain) FUGradientObject * fillGradient;
@property(assign,retain) UIColor * highlightIndicatorColor;
@property(assign,readwrite) struct CGGradient { }* highlightIndicatorGradient;
@property(assign,retain) UIView * highlightView;
@property(assign,retain) UIColor * lineColor;
@property(assign,readwrite) double lineWidth;
@property(assign,retain) NSArray * plotPoints;
@property(assign,retain) UIColor * pointColor;
@property(assign,readwrite) int pointOccurrence;
@property(assign,readwrite) float pointRadius;
@property(assign,readwrite) int pointStyle;
@property(assign,retain) FUGradientObject * selectedFillGradient;
@property(assign,retain) UIColor * selectedLineColor;
@property(assign,retain) UIColor * selectedPointColor;
@property(assign,readwrite) float sineWaveSmoothingFactor;
@property(assign,readwrite) bool snapToPoint;
@property(assign,readwrite) int waveForm;

- (void).cxx_destruct;
- (void)_clipHighlightLayerWithPoints:(id)arg1;
- (id)_fillPathForData:(id)arg1;
- (id)_fillPathForData:(id)arg1 waveForm:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getClipRectFromPoints:(id)arg1;
- (id)_getPointValuesAtIndexes:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_getRangeFromSelectedPoints:(id)arg1;
- (id)_imageForGradient:(struct CGGradient { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)_layoutFillView:(id)arg1 withGradient:(id)arg2 path:(id)arg3;
- (void)_layoutFillViews;
- (void)_layoutLine;
- (void)_layoutPointViews;
- (id)_pathForData:(id)arg1;
- (id)_pathForData:(id)arg1 waveForm:(int)arg2;
- (id)_sawToothPathForData:(id)arg1;
- (void)_setHighlightGradient;
- (id)_sineWavePathForData:(id)arg1;
- (id)_squarePathForData:(id)arg1;
- (void)_updateHighlightIndicatorsWithPoints:(id)arg1 forIndexes:(id)arg2 selectionPoints:(id)arg3;
- (void)_updatePointViewsWithSelectedPointIndexes:(id)arg1;
- (id)barViews;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)fillGradient;
- (id)highlightIndicatorColor;
- (struct CGGradient { }*)highlightIndicatorGradient;
- (id)highlightView;
- (id)init;
- (void)layoutSubviews;
- (id)lineColor;
- (double)lineWidth;
- (id)plotPoints;
- (id)pointColor;
- (int)pointOccurrence;
- (float)pointRadius;
- (int)pointStyle;
- (id)selectedFillGradient;
- (id)selectedLineColor;
- (id)selectedPointColor;
- (void)selectedPointIndexesUpdated:(id)arg1 selectionPoints:(id)arg2;
- (void)setBarViews:(id)arg1;
- (void)setFillGradient:(id)arg1;
- (void)setHighlightIndicatorColor:(id)arg1;
- (void)setHighlightIndicatorGradient:(struct CGGradient { }*)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setPlotPoints:(id)arg1;
- (void)setPointColor:(id)arg1;
- (void)setPointOccurrence:(int)arg1;
- (void)setPointRadius:(float)arg1;
- (void)setPointStyle:(int)arg1;
- (void)setSelectedFillGradient:(id)arg1;
- (void)setSelectedLineColor:(id)arg1;
- (void)setSelectedPointColor:(id)arg1;
- (void)setSineWaveSmoothingFactor:(float)arg1;
- (void)setSnapToPoint:(bool)arg1;
- (void)setWaveForm:(int)arg1;
- (float)sineWaveSmoothingFactor;
- (bool)snapToPoint;
- (int)waveForm;

@end