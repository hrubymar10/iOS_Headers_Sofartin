/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTDateLabel : UIView {
    NSDate *_date;
    UILabel *_dateLabel;
    bool _hideTimeDesignator;
    <MTDateLabelObserver> *_observer;
    double _paddingFromTimeToDesignator;
    long long _timeDesignatorBaselineAdjustment;
    UILabel *_timeDesignatorLabel;
    NSTimeZone *_timeZone;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool hasTimeDesignator;
@property (nonatomic) bool hideTimeDesignator;
@property (nonatomic) <MTDateLabelObserver> *observer;
@property (nonatomic) double paddingFromTimeToDesignator;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) long long timeDesignatorBaselineAdjustment;
@property (nonatomic, retain) UIFont *timeDesignatorFont;
@property (nonatomic, readonly) UILabel *timeDesignatorLabel;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void)_noteLayoutChange;
- (void)_updateDateString;
- (id)date;
- (id)dateLabel;
- (void)dealloc;
- (id)font;
- (bool)hasTimeDesignator;
- (bool)hideTimeDesignator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)observer;
- (double)paddingFromTimeToDesignator;
- (void)setDate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHideTimeDesignator:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setPaddingFromTimeToDesignator:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeDesignatorBaselineAdjustment:(long long)arg1;
- (void)setTimeDesignatorFont:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (long long)timeDesignatorBaselineAdjustment;
- (id)timeDesignatorFont;
- (id)timeDesignatorLabel;
- (id)timeZone;
- (id)viewForBaselineLayout;

@end
