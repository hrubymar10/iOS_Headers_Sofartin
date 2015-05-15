/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLThreeRingView : UIView {
    NLArcView *_briskArcView;
    NLArcView *_calorieArcView;
    UIImageView *_fadedView;
    double _interspacing;
    double _lineThickness;
    double _outerDiameter;
    NLArcView *_sedentaryArcView;
}

@property(assign,retain) NLArcView * briskArcView;
@property(assign,retain) NLArcView * calorieArcView;
@property(assign,retain) UIImageView * fadedView;
@property(assign,readwrite) double interspacing;
@property(assign,readwrite) double lineThickness;
@property(assign,readwrite) double outerDiameter;
@property(assign,retain) NLArcView * sedentaryArcView;

- (void).cxx_destruct;
- (id)_generateArcWithNesting:(int)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (id)_generateBriskArc;
- (id)_generateCalorieArc;
- (id)_generateSedentaryArc;
- (id)briskArcView;
- (id)calorieArcView;
- (id)fadedRingImageForDiameter:(double)arg1 interspacing:(double)arg2 thickness:(double)arg3;
- (id)fadedView;
- (id)image;
- (id)initWithDiameter:(double)arg1 interspacing:(double)arg2 thickness:(double)arg3 delegate:(id)arg4;
- (double)interspacing;
- (double)lineThickness;
- (double)outerDiameter;
- (id)sedentaryArcView;
- (void)setBriskArcView:(id)arg1;
- (void)setBriskPercentage:(double)arg1 animated:(bool)arg2;
- (void)setCalorieArcView:(id)arg1;
- (void)setCalorieExpectedPercentage:(double)arg1;
- (void)setCaloriePercentage:(double)arg1 animated:(bool)arg2;
- (void)setFaded:(bool)arg1;
- (void)setFadedView:(id)arg1;
- (void)setInterspacing:(double)arg1;
- (void)setLineThickness:(double)arg1;
- (void)setOuterDiameter:(double)arg1;
- (void)setRingsCalorieAlpha:(double)arg1 briskAlpha:(double)arg2 sedentaryAlpha:(double)arg3;
- (void)setSedentaryArcView:(id)arg1;
- (void)setSedentaryPercentage:(double)arg1 animated:(bool)arg2;
- (void)setShowExpectedDot:(bool)arg1;

@end
