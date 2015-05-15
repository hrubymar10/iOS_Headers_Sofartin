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

@property(assign,copy) NSDate * date;
@property(assign,readonly) UILabel * dateLabel;
@property(assign,retain) UIFont * font;
@property(assign,readonly) bool hasTimeDesignator;
@property(assign,readwrite) bool hideTimeDesignator;
@property(assign,readwrite) <MTDateLabelObserver> * observer;
@property(assign,readwrite) double paddingFromTimeToDesignator;
@property(assign,retain) UIColor * textColor;
@property(assign,readwrite) long long timeDesignatorBaselineAdjustment;
@property(assign,retain) UIFont * timeDesignatorFont;
@property(assign,readonly) UILabel * timeDesignatorLabel;
@property(assign,retain) NSTimeZone * timeZone;

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
