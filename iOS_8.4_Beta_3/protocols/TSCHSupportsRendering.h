/* Generated by RuntimeBrowser.
 */

@protocol TSCHSupportsRendering <NSObject>

@required

- (TSCHChartLayout *)chartLayout;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)forceRenderBlankBackground;
- (TSDLayoutGeometry *)geometry;
- (bool)isDrawingIntoPDF;
- (bool)renderElements;
- (bool)renderElementsShadowOnly;
- (bool)renderElementsWithoutShadows;
- (bool)renderGrid;
- (bool)renderLabels;
- (bool)renderReferenceLines;
- (NSIndexSet *)renderSeriesIndexSet;
- (bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (NSIndexSet *)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (bool)requireSeparateLabelLayer;
- (bool)shadowsEnabled;
- (double)viewScale;

@end
