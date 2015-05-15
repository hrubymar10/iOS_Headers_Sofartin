/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingSliderValueCell : PSTableCell {
    UIView *_leftView;
    NSNumberFormatter *_numberFormatter;
    UISlider *_slider;
    double _sliderMargin;
    UILabel *_valueLabel;
    double _valueWidth;
}

- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)dealloc;
- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setValue:(id)arg1;
- (void)sliderValueDidChange:(id)arg1;
- (void)updateValue;
- (id)value;
- (void)willMoveToSuperview:(id)arg1;

@end