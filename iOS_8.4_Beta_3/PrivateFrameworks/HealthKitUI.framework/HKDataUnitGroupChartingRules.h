/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKDataUnitGroupChartingRules : NSObject {
    long long _defaultChartStyle;
    long long _defaultStyle;
    NSArray *_defaultYAxisChartBoundsRules;
    NSDictionary *_defaultYAxisChartBoundsRulesByUnit;
    NSMutableDictionary *_rulesByTimeScope;
    bool _shouldAllowDecimalPrecision;
    bool _shouldHideAverageLine;
    bool _shouldOverrideMinYValue;
    bool _shouldPadMinMaxValues;
    bool _shouldStartDayAtNoon;
}

@property(assign,readonly) long long defaultChartStyle;
@property(assign,retain) NSArray * defaultYAxisChartBoundsRules;
@property(assign,retain) NSDictionary * defaultYAxisChartBoundsRulesByUnit;
@property(assign,readwrite) bool shouldAllowDecimalPrecision;
@property(assign,readwrite) bool shouldHideAverageLine;
@property(assign,readwrite) bool shouldOverrideMinYValue;
@property(assign,readwrite) bool shouldPadMinMaxValues;
@property(assign,readwrite) bool shouldStartDayAtNoon;

- (void).cxx_destruct;
- (id)_ruleForKey:(id)arg1 timeScope:(long long)arg2;
- (void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(long long)arg3;
- (void)calculateAdjustedBoundsForMin:(double)arg1 max:(double)arg2 minOut:(double*)arg3 maxOut:(double*)arg4 decimalPrecision:(long long*)arg5 unit:(id)arg6;
- (double)chartPointLineWidthForTimeScope:(long long)arg1;
- (double)chartPointRadiusForTimeScope:(long long)arg1;
- (long long)chartStyleForTimeScope:(long long)arg1;
- (long long)defaultChartStyle;
- (id)defaultYAxisChartBoundsRules;
- (id)defaultYAxisChartBoundsRulesByUnit;
- (id)defaultYAxisChartBoundsRulesForUnit:(id)arg1;
- (id)initWithDefaultChartStyle:(long long)arg1;
- (id)intervalComponentsForTimeScope:(long long)arg1;
- (void)setChartPointLineWidth:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartPointRadius:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartStyle:(long long)arg1 forTimeScope:(long long)arg2;
- (void)setDefaultYAxisChartBoundsRules:(id)arg1;
- (void)setDefaultYAxisChartBoundsRulesByUnit:(id)arg1;
- (void)setIntervalComponents:(id)arg1 forTimeScope:(long long)arg2;
- (void)setShouldAllowDecimalPrecision:(bool)arg1;
- (void)setShouldHideAverageLine:(bool)arg1;
- (void)setShouldOverrideMinYValue:(bool)arg1;
- (void)setShouldPadMinMaxValues:(bool)arg1;
- (void)setShouldStartDayAtNoon:(bool)arg1;
- (bool)shouldAllowDecimalPrecision;
- (bool)shouldHideAverageLine;
- (bool)shouldOverrideMinYValue;
- (bool)shouldPadMinMaxValues;
- (bool)shouldStartDayAtNoon;

@end