/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>

@property (nonatomic, copy) NSMutableArray *categoryAxisStyles;
@property (nonatomic, retain) TSCHChartStyle *chartStyle;
@property (nonatomic, retain) TSCHLegendStyle *legendStyle;
@property (nonatomic, copy) NSMutableArray *paragraphStyles;
@property (nonatomic, copy) NSMutableDictionary *referenceLineStyles;
@property (nonatomic, retain) TSCHReferenceLineStyle *referenceLineThemeStyle;
@property (nonatomic, copy) NSMutableArray *seriesPrivateStyles;
@property (nonatomic, copy) NSMutableArray *seriesThemeStyles;
@property (nonatomic, copy) NSMutableArray *valueAxisStyles;

- (id)allStyles;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(bool)arg2;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)legendStyle;
- (bool)otherStateIsEquivalent:(id)arg1;
- (bool)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(bool)arg2;
- (bool)paragraphStyleIndexesAreValid;
- (id)paragraphStyles;
- (id)referenceLineStyles;
- (id)referenceLineThemeStyle;
- (void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2;
- (id)semanticTagToStyleMap;
- (id)semanticUsagesToParagraphStyleMap;
- (id)seriesPrivateStyles;
- (id)seriesThemeStyles;
- (void)setCategoryAxisStyles:(id)arg1;
- (void)setChartStyle:(id)arg1;
- (void)setLegendStyle:(id)arg1;
- (void)setParagraphStyles:(id)arg1;
- (void)setReferenceLineStyles:(id)arg1;
- (void)setReferenceLineThemeStyle:(id)arg1;
- (void)setSeriesPrivateStyles:(id)arg1;
- (void)setSeriesThemeStyles:(id)arg1;
- (void)setStyle:(id)arg1 withSemanticTag:(id)arg2;
- (void)setValueAxisStyles:(id)arg1;
- (id)stateByExpandingForSeriesCount:(unsigned long long)arg1 andReferenceLineCount:(unsigned long long)arg2;
- (id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)arg1;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)arg1;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)usesOfParagraphStyleProperties;
- (id)valueAxisStyles;

@end
