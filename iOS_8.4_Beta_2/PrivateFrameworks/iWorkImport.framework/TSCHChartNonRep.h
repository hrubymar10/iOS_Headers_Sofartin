/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering> {
    TSCHChartInfo *mChartInfo;
    TSCHChartLayout *mChartLayout;
    NSArray *mRenderers;
}

@property(assign,retain) TSCHChartInfo * chartInfo;
@property(assign,retain) TSCHChartLayout * chartLayout;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)chartInfo;
- (id)chartLayout;
- (void)clearRenderers;
- (id)commandController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectToLayerRelative:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)forceRenderBlankBackground;
- (id)geometry;
- (id)initWithChartInfo:(id)arg1;
- (bool)isDrawingIntoPDF;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerShadowFrame;
- (bool)renderElements;
- (bool)renderElementsShadowOnly;
- (bool)renderElementsWithoutShadows;
- (bool)renderGrid;
- (bool)renderLabels;
- (bool)renderReferenceLines;
- (id)renderSeriesIndexSet;
- (bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (id)renderers;
- (bool)requireSeparateLabelLayer;
- (void)setChartInfo:(id)arg1;
- (void)setChartLayout:(id)arg1;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (bool)shadowsEnabled;
- (bool)shouldShowLegendHighlight;
- (double)viewScale;

@end
