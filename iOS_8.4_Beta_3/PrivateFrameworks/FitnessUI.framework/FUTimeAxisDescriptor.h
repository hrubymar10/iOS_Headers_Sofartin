/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUTimeAxisDescriptor : NSObject <FUAxisDescriptor> {
    FUDateAnchorRule *_anchorRule;
    double _axisDescriptorPadding;
    NSDateComponents *_axisSpacing;
    NSMutableArray *_cachedAxisLabelColors;
    NSArray *_cachedAxisLabels;
    NSArray *_cachedAxisSubLabels;
    NSMutableDictionary *_dayFormatters;
    bool _generateSubAxisDescriptorOnlyForNoonMidnight;
    bool _hideClippedLabels;
    UIColor *_highlightedLabelColor;
    UIColor *_highlightedSubLabelColor;
    NSMutableDictionary *_hourFormatters;
    unsigned long long _labelAlignment;
    UIFont *_labelFont;
    id _maxValue;
    id _minValue;
    NSMutableDictionary *_monthFormatters;
    UIColor *_selectedLabelColor;
    FUDateAnchorRule *_subAnchorRule;
    bool _subAxisCapitalize;
    double _subAxisDescriptorPadding;
    NSDateComponents *_subAxisSpacing;
    double _subAxisVerticalPadding;
    UIFont *_subLabelFont;
    unsigned long long _subTextStyle;
    unsigned long long _subTimeInterval;
    unsigned long long _textStyle;
    unsigned long long _timeInterval;
    UIColor *_unhighlightedLabelColor;
    UIColor *_unhighlightedSubLabelColor;
    NSMutableDictionary *_weekdayFormatters;
    NSMutableDictionary *_yearFormatters;
}

@property (nonatomic, retain) FUDateAnchorRule *anchorRule;
@property (nonatomic) double axisDescriptorPadding;
@property (nonatomic, retain) NSDateComponents *axisSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool generateSubAxisDescriptorOnlyForNoonMidnight;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideClippedLabels;
@property (nonatomic, retain) UIColor *highlightedLabelColor;
@property (nonatomic, retain) UIColor *highlightedSubLabelColor;
@property (nonatomic) unsigned long long labelAlignment;
@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic, retain) id maxValue;
@property (nonatomic, retain) id minValue;
@property (nonatomic, retain) UIColor *selectedLabelColor;
@property (nonatomic, retain) FUDateAnchorRule *subAnchorRule;
@property (nonatomic) bool subAxisCapitalize;
@property (nonatomic) double subAxisDescriptorPadding;
@property (nonatomic, retain) NSDateComponents *subAxisSpacing;
@property (nonatomic) double subAxisVerticalPadding;
@property (nonatomic, retain) UIFont *subLabelFont;
@property (nonatomic) unsigned long long subTextStyle;
@property (nonatomic) unsigned long long subTimeInterval;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) unsigned long long timeInterval;
@property (nonatomic, retain) UIColor *unhighlightedLabelColor;
@property (nonatomic, retain) UIColor *unhighlightedSubLabelColor;

+ (unsigned long long)_getSpacingInterval:(id)arg1;

- (void).cxx_destruct;
- (bool)_assertPropertiesValid;
- (void)_clearCache;
- (void)_generateAxisLabels;
- (void)_generateAxisSubLabels;
- (id)_getLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)_getStartDateFromTimeInterval:(unsigned long long)arg1;
- (id)_getSubLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (long long)_hourComponentFromDate:(id)arg1;
- (id)_labelAtIndex:(unsigned long long)arg1;
- (id)_newSubLabelFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3;
- (id)_stringFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3;
- (id)_subLabelAtIndex:(unsigned long long)arg1;
- (id)anchorRule;
- (double)axisDescriptorPadding;
- (id)axisLabels;
- (id)axisSpacing;
- (id)axisSubLabels;
- (id)dayFormatter:(unsigned long long)arg1;
- (Class)expectedDataType;
- (bool)generateSubAxisDescriptorOnlyForNoonMidnight;
- (bool)hideClippedLabels;
- (id)highlightedLabelColor;
- (id)highlightedSubLabelColor;
- (id)hourFormatter:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)labelAlignment;
- (id)labelFont;
- (id)maxValue;
- (id)minValue;
- (id)monthFormatter:(unsigned long long)arg1;
- (unsigned long long)numLabels;
- (unsigned long long)numSubLabels;
- (id)positionForLabelAtIndex:(unsigned long long)arg1;
- (id)positionForSubLabelAtIndex:(unsigned long long)arg1;
- (void)selectLabel:(bool)arg1 atIndex:(unsigned long long)arg2;
- (id)selectedLabelColor;
- (void)setAnchorRule:(id)arg1;
- (void)setAxisDescriptorPadding:(double)arg1;
- (void)setAxisSpacing:(id)arg1;
- (void)setGenerateSubAxisDescriptorOnlyForNoonMidnight:(bool)arg1;
- (void)setHideClippedLabels:(bool)arg1;
- (void)setHighlightedLabelColor:(id)arg1;
- (void)setHighlightedSubLabelColor:(id)arg1;
- (void)setLabelAlignment:(unsigned long long)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setSelectedLabelColor:(id)arg1;
- (void)setSubAnchorRule:(id)arg1;
- (void)setSubAxisCapitalize:(bool)arg1;
- (void)setSubAxisDescriptorPadding:(double)arg1;
- (void)setSubAxisSpacing:(id)arg1;
- (void)setSubAxisVerticalPadding:(double)arg1;
- (void)setSubLabelFont:(id)arg1;
- (void)setSubTextStyle:(unsigned long long)arg1;
- (void)setSubTimeInterval:(unsigned long long)arg1;
- (void)setTextStyle:(unsigned long long)arg1;
- (void)setTimeInterval:(unsigned long long)arg1;
- (void)setUnhighlightedLabelColor:(id)arg1;
- (void)setUnhighlightedSubLabelColor:(id)arg1;
- (id)subAnchorRule;
- (bool)subAxisCapitalize;
- (double)subAxisDescriptorPadding;
- (id)subAxisSpacing;
- (double)subAxisVerticalPadding;
- (id)subLabelFont;
- (unsigned long long)subTextStyle;
- (unsigned long long)subTimeInterval;
- (id)textForLabelAtIndex:(unsigned long long)arg1;
- (id)textForSubLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)textStyle;
- (unsigned long long)timeInterval;
- (id)unhighlightedLabelColor;
- (id)unhighlightedSubLabelColor;
- (id)weekdayFormatter:(unsigned long long)arg1;
- (id)yearFormatter:(unsigned long long)arg1;

@end
