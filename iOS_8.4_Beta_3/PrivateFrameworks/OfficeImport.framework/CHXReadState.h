/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXReadState : NSObject {
    <CHAutoStyling> *mAutoStyling;
    CHDChart *mChart;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    bool mDefaultTextPropertiesHaveExplicitFontSize;
    EXOfficeArtState *mDrawingState;
    bool mIgnoreFormulas;
    EDResources *mResources;
}

@property (nonatomic) bool ignoreFormulas;

- (id)autoStyling;
- (id)chart;
- (id)chartPart;
- (id)currentChartType;
- (id)currentSeries;
- (void)dealloc;
- (id)defaultTextProperties;
- (id)drawingState;
- (id)exState;
- (bool)ignoreFormulas;
- (id)initWithDrawingState:(id)arg1;
- (void)popTitleTextProperties;
- (void)pushTitleTextProperties:(bool)arg1;
- (id)resources;
- (void)setChart:(id)arg1;
- (void)setChartPart:(id)arg1;
- (void)setCurrentChartType:(id)arg1;
- (void)setCurrentSeries:(id)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(bool)arg1;
- (void)setIgnoreFormulas:(bool)arg1;
- (void)setResources:(id)arg1;

@end
