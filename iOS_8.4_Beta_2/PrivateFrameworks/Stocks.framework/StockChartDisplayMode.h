/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockChartDisplayMode : NSObject <NSCopying> {
    bool _HUDEnabled;
    UIColor *_axisLabelsColor;
    struct CGGradient { } *_backgroundGradient;
    UIColor *_backgroundLinesColor;
    struct CGSize { 
        double width; 
        double height; 
    } _chartSize;
    bool _graphOverlapsYAxisLabels;
    NSString *_hash;
    unsigned long long _horizontalGridlineCount;
    double _intervalRowHeight;
    UIColor *_lineColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _lineGraphInsets;
    double _lineWidth;
    long long _maxInterval;
    bool _showsPriceLabelForPreviousClose;
    double _showsTitle;
    bool _showsVolume;
    bool _usesDetailedAxisLabels;
    double _volumeHeight;
    UIColor *_xAxisKeylineColor;
    unsigned long long _yAxisLabelCount;
}

@property(assign,readwrite) bool HUDEnabled;
@property(assign,retain) UIColor * axisLabelsColor;
@property(assign,readwrite) struct CGGradient { }* backgroundGradient;
@property(assign,retain) UIColor * backgroundLinesColor;
@property(assign,readwrite) struct CGSize { double x1; double x2; } chartSize;
@property(assign,readwrite) bool graphOverlapsYAxisLabels;
@property(assign,readonly) double gutterHeight;
@property(assign,readwrite) unsigned long long horizontalGridlineCount;
@property(assign,readwrite) double intervalRowHeight;
@property(assign,retain) UIColor * lineColor;
@property(assign,readonly) double lineGraphBottomPadding;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } lineGraphInsets;
@property(assign,readwrite) double lineWidth;
@property(assign,readwrite) long long maxInterval;
@property(assign,readwrite) bool showsPriceLabelForPreviousClose;
@property(assign,readwrite) double showsTitle;
@property(assign,readwrite) bool showsVolume;
@property(assign,readwrite) bool usesDetailedAxisLabels;
@property(assign,readwrite) double volumeHeight;
@property(assign,retain) UIColor * xAxisKeylineColor;
@property(assign,readwrite) unsigned long long yAxisLabelCount;

+ (id)defaultDisplayMode;

- (void).cxx_destruct;
- (bool)HUDEnabled;
- (id)axisLabelsColor;
- (struct CGGradient { }*)backgroundGradient;
- (id)backgroundLinesColor;
- (struct CGSize { double x1; double x2; })chartSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)graphOverlapsYAxisLabels;
- (double)gutterHeight;
- (unsigned long long)hash;
- (unsigned long long)horizontalGridlineCount;
- (id)init;
- (double)intervalRowHeight;
- (bool)isEqual:(id)arg1;
- (id)lineColor;
- (double)lineGraphBottomPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })lineGraphInsets;
- (double)lineWidth;
- (long long)maxInterval;
- (void)setAxisLabelsColor:(id)arg1;
- (void)setBackgroundGradient:(struct CGGradient { }*)arg1;
- (void)setBackgroundLinesColor:(id)arg1;
- (void)setChartSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGraphOverlapsYAxisLabels:(bool)arg1;
- (void)setHUDEnabled:(bool)arg1;
- (void)setHorizontalGridlineCount:(unsigned long long)arg1;
- (void)setIntervalRowHeight:(double)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineGraphInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMaxInterval:(long long)arg1;
- (void)setShowsPriceLabelForPreviousClose:(bool)arg1;
- (void)setShowsTitle:(double)arg1;
- (void)setShowsVolume:(bool)arg1;
- (void)setUsesDetailedAxisLabels:(bool)arg1;
- (void)setVolumeHeight:(double)arg1;
- (void)setXAxisKeylineColor:(id)arg1;
- (void)setYAxisLabelCount:(unsigned long long)arg1;
- (bool)showsPriceLabelForPreviousClose;
- (double)showsTitle;
- (bool)showsVolume;
- (bool)usesDetailedAxisLabels;
- (double)volumeHeight;
- (id)xAxisKeylineColor;
- (unsigned long long)yAxisLabelCount;

@end