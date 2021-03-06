/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSCECalculationEngineRegistration, TSCHStyleSwapSupporting, TSDMixing, TSDReducableInfo, TSKCustomFormatContainingInfo, TSKModel, TSKSearchable, TSPCopying, TSSPresetSource, TSSStyleClient> {
    TSCHChartInfo *mChart;
    TSCHChunkManager *mChunkManager;
    TSPObject<TSCHMediatorProvider> *mMediatorPersistentObject;
}

@property(assign,readonly) TSCHChartInfo * chart;
@property(assign,readonly) TSCHChunkManager * chunkManager;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long multiDataSetIndex;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (bool)needsObjectUUID;
+ (id)presetKinds;

- (void)acceptVisitor:(id)arg1;
- (id)animationFilters;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuples:(id)arg1;
- (bool)aspectRatioLocked;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canSizeBeChangedIncrementally;
- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(id)arg1;
- (id)chart;
- (id)childInfos;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (id)chunkManager;
- (id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3;
- (id)componentRootObject;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (id)geometry;
- (bool)hasBackgroundLayerForPieChart;
- (bool)hasReferenceLines;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 chart:(id)arg2;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 legendFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartBodyFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 circumscribingFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 legendFrame:(id)arg5 stylePreset:(id)arg6 privateSeriesStyles:(id)arg7 chartNonStyle:(id)arg8 legendNonStyle:(id)arg9 valueAxisNonStyles:(id)arg10 categoryAxisNonStyles:(id)arg11 seriesNonStyles:(id)arg12 refLineNonStylesMap:(id)arg13 refLineStylesMap:(id)arg14;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 chartAreaFrame:(id)arg5 circumscribingFrame:(id)arg6 legendFrame:(id)arg7 stylePreset:(id)arg8 privateSeriesStyles:(id)arg9 chartNonStyle:(id)arg10 legendNonStyle:(id)arg11 valueAxisNonStyles:(id)arg12 categoryAxisNonStyles:(id)arg13 seriesNonStyles:(id)arg14 refLineNonStylesMap:(id)arg15 refLineStylesMap:(id)arg16;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 circumscribingFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isEquivalentForSerializationRoundTrip:(id)arg1;
- (bool)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (Class)layoutClass;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)multiDataSetIndex;
- (id)objectToArchiveInDependencyTracker;
- (id)p_copyFor3DAs2DWithContext:(id)arg1 chartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 legendFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)p_drawableGeometry;
- (void)p_setDrawableGeometry:(id)arg1 clearObjectPlaceholderFlag:(bool)arg2;
- (id)referencedStyles;
- (bool)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (Class)repClass;
- (void)replaceReferencedStylesUsingBlock:(id)arg1;
- (bool)reverseChunkingIsSupported;
- (void)saveToArchiver:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGeometry:(id)arg1 omitLegendResize:(bool)arg2;
- (void)setInsertionCenterPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPersistentMediator:(id)arg1;
- (bool)shouldAddMultiDataBuildWhenAddingToDocument;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (bool)supportsHyperlinks;
- (struct CGSize { double x1; double x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2;
- (void)tsaMoveToPosition:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBoundsForPositioning;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willModify;

@end
