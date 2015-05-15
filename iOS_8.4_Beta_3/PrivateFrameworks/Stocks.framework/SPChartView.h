/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SPChartView : UIView <StockGraphViewContainer> {
    StockChartData *_chartData;
    bool _compactGraph;
    StockChartDisplayMode *_currentDisplayMode;
    <SPChartViewDelegate> *_delegate;
    bool _glanceGraph;
    StockGraphView *_graph;
    ChartLabelInfoManager *_labelInfoManager;
    long long _selectedInterval;
    bool _showsHorizontalLines;
    Stock *_stock;
    NSMutableArray *_xAxisLabels;
    NSMutableArray *_yAxisLabels;
}

@property(assign,retain) StockChartData * chartData;
@property(assign,readwrite) bool compactGraph;
@property(assign,readonly) StockChartDisplayMode * currentDisplayMode;
@property(assign,readwrite) <SPChartViewDelegate> * delegate;
@property(assign,readwrite) bool glanceGraph;
@property(assign,readwrite) bool showsHorizontalLines;
@property(assign,retain) Stock * stock;

- (void).cxx_destruct;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_prepareXAxisLabelsForLabelInfoArray:(id)arg1;
- (void)_prepareYAxisLabelsAndPositions;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(bool)arg2;
- (void)_setHourLabels;
- (void)_setMonthAndYearLabels;
- (id)chartData;
- (void)clearData;
- (bool)compactGraph;
- (id)currentDisplayMode;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)glanceGraph;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })graphViewFrameForMode:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lineGraphBottomPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineGraphFrame;
- (void)setChartData:(id)arg1;
- (void)setCompactGraph:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGlanceGraph:(bool)arg1;
- (void)setShowsHorizontalLines:(bool)arg1;
- (void)setStock:(id)arg1;
- (void)setYAxisLabelCount:(unsigned long long)arg1;
- (bool)showsHorizontalLines;
- (id)stock;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (double)widestYLabelWidthForMode:(id)arg1;

@end
