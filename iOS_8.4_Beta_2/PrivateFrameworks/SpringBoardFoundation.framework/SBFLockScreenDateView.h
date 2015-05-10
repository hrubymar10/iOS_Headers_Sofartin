/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateView : UIView {
    UIColor *_customSubtitleColor;
    NSString *_customSubtitleText;
    NSDate *_date;
    double _dateAlpha;
    double _dateAlphaPercentage;
    UILabel *_dateLabel;
    double _dateStrength;
    <SBFLockScreenDateFormatter> *_formatter;
    _UILegibilityLabel *_legibilityDateLabel;
    _UILegibilitySettings *_legibilitySettings;
    _UILegibilityLabel *_legibilityTimeLabel;
    UIColor *_textColor;
    double _timeAlpha;
    UILabel *_timeLabel;
    double _timeStrength;
    bool _useLegibilityLabels;
}

@property(assign,retain) NSDate * date;
@property(assign,readwrite) double dateAlphaPercentage;
@property(getter=isDateHidden,assign,readwrite) bool dateHidden;
@property(assign,readwrite) double dateStrength;
@property(assign,retain) <SBFLockScreenDateFormatter> * formatter;
@property(assign,retain) _UILegibilitySettings * legibilitySettings;
@property(assign,retain) UIColor * textColor;
@property(assign,readwrite) double timeStrength;

+ (double)defaultHeight;

- (void)_addLabels;
- (id)_dateColor;
- (id)_dateFont;
- (id)_dateText;
- (double)_effectiveDateAlpha;
- (void)_layoutDateLabel;
- (void)_layoutTimeLabel;
- (void)_setDateAlpha:(double)arg1;
- (id)_timeFont;
- (void)_updateLabelAlpha;
- (void)_updateLabels;
- (void)_updateLegibilityLabelsWithUpdatedDateString:(bool)arg1;
- (void)_useLegibilityLabels:(bool)arg1;
- (id)date;
- (double)dateAlphaPercentage;
- (double)dateBaselineOffsetFromOrigin;
- (double)dateStrength;
- (void)dealloc;
- (id)formatter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDateHidden;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setContentAlpha:(double)arg1 withDateVisible:(bool)arg2;
- (void)setCustomSubtitleText:(id)arg1 withColor:(id)arg2;
- (void)setDate:(id)arg1;
- (void)setDateAlphaPercentage:(double)arg1;
- (void)setDateHidden:(bool)arg1;
- (void)setDateStrength:(double)arg1;
- (void)setFormatter:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeStrength:(double)arg1;
- (id)textColor;
- (double)timeBaselineOffsetFromOrigin;
- (double)timeStrength;
- (void)updateFormat;

@end
