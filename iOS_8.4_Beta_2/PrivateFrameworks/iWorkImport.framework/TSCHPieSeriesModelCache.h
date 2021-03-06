/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieSeriesModelCache : NSObject {
    TSCHChartAxis *mAxis;
    TSCHChartInfo *mChartInfo;
    TSCHChartModel *mChartModel;
    TSCHChartSeries *mCurrentSeries;
    double mCurrentSeriesAngleSweep;
    double mCurrentSeriesAxisValue;
    unsigned long long mCurrentSeriesIndex;
    bool mCurrentSeriesNullData;
    double mCurrentSeriesPercentage;
    double mCurrentSeriesStartAngle;
    float mEffectiveLabelExplosion;
    float mEffectiveWedgeExplosion;
    double mEndAngle;
    bool mGroupedShadow;
    bool mIsSingleCircleSpecialCase;
    float mLabelExplosion;
    NSString *mLabelString;
    double mMidAngle;
    unsigned long long mNumberOfSeries;
    TSWPParagraphStyle *mParagraphStyle;
    TSDFill *mSeriesFill;
    double mSeriesOpacity;
    TSDShadow *mSeriesShadow;
    TSDStroke *mSeriesStroke;
    TSCHChartSeries *mSingleCircleSeriesElement;
    double mTotalValue;
    float mWedgeExplosion;
}

@property(assign,readonly) TSCHChartAxis * axis;
@property(assign,readonly) float effectiveLabelExplosion;
@property(assign,readonly) float effectiveWedgeExplosion;
@property(assign,readonly) double endAngle;
@property(assign,readonly) bool groupedShadow;
@property(assign,readonly) float labelExplosion;
@property(assign,readonly) NSString * labelString;
@property(assign,readonly) double midAngle;
@property(assign,readonly) bool nullData;
@property(assign,readonly) TSWPParagraphStyle * paragraphStyle;
@property(assign,readonly) double percentage;
@property(assign,readonly) TSCHChartSeries * series;
@property(assign,readonly) double seriesAxisValue;
@property(assign,readonly) TSDFill * seriesFill;
@property(assign,readonly) unsigned long long seriesIndex;
@property(assign,readonly) double seriesOpacity;
@property(assign,readonly) TSDShadow * seriesShadow;
@property(assign,readonly) TSDStroke * seriesStroke;
@property(assign,readonly) bool shouldRenderLabel;
@property(assign,readonly) double startAngle;
@property(assign,readonly) double totalValue;
@property(assign,readonly) float wedgeExplosion;

- (id)axis;
- (void)dealloc;
- (float)effectiveLabelExplosion;
- (float)effectiveWedgeExplosion;
- (double)endAngle;
- (bool)groupedShadow;
- (id)init;
- (id)initWithPrior:(id)arg1 orChartModel:(id)arg2 forSeries:(unsigned long long)arg3;
- (float)labelExplosion;
- (id)labelString;
- (double)midAngle;
- (bool)nullData;
- (id)paragraphStyle;
- (double)percentage;
- (id)series;
- (double)seriesAxisValue;
- (id)seriesFill;
- (unsigned long long)seriesIndex;
- (double)seriesOpacity;
- (id)seriesShadow;
- (id)seriesStroke;
- (bool)shouldRenderLabel;
- (double)startAngle;
- (double)totalValue;
- (float)wedgeExplosion;

@end
