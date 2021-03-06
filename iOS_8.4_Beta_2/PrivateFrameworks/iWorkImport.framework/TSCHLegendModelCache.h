/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendModelCache : NSObject {
    unsigned long long mCellCount;
    NSArray *mCells;
    double mEffectiveStrokeWidth;
    id mFill;
    double mHorizontalCellSpacing;
    struct CGSize { 
        double width; 
        double height; 
    } mLargestCellSize;
    TSCHLegendViewCache *mLastLegendViewCache;
    double mLastLegendWidth;
    bool mLegendOn;
    TSCHLegendCellMetrics *mMetrics;
    double mOpacity;
    TSWPParagraphStyle *mParagraphStyle;
    bool mReverseSingleColumnLegendOrder;
    TSDShadow *mShadow;
    TSDStroke *mStroke;
    double mSymbolGap;
    double mVerticalCellSpacing;
}

@property(assign,readonly) unsigned long long cellCount;
@property(assign,readonly) NSArray * cells;
@property(assign,readonly) double effectiveStrokeWidth;
@property(assign,readonly) id fill;
@property(assign,readonly) double horizontalCellSpacing;
@property(assign,readonly) struct CGSize { double x1; double x2; } largestCellSize;
@property(assign,readonly) bool legendOn;
@property(assign,readonly) double opacity;
@property(assign,readonly) TSWPParagraphStyle * paragraphStyle;
@property(assign,readonly) bool reverseSingleColumnLegendOrder;
@property(assign,readonly) TSDShadow * shadow;
@property(assign,readonly) TSDStroke * stroke;
@property(assign,readonly) double symbolGap;
@property(assign,readonly) double verticalCellSpacing;

- (unsigned long long)cellCount;
- (id)cellForSeriesIndex:(unsigned long long)arg1 cellType:(int)arg2;
- (id)cells;
- (void)dealloc;
- (double)effectiveStrokeWidth;
- (id)fill;
- (double)horizontalCellSpacing;
- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;
- (struct CGSize { double x1; double x2; })largestCellSize;
- (bool)legendOn;
- (double)opacity;
- (id)paragraphStyle;
- (bool)reverseSingleColumnLegendOrder;
- (id)shadow;
- (id)stroke;
- (double)symbolGap;
- (double)verticalCellSpacing;
- (id)viewCacheForWidth:(double)arg1;

@end
