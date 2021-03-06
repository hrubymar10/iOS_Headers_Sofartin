/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDatePickerWeekMonthDayView : UIView {
    UILabel *_dateLabel;
    struct { 
        unsigned int weekdayLast : 1; 
    } _datePickerWeekMonthDayViewFlags;
    NSString *_formattedDateString;
    bool _isModern;
    UILabel *_weekdayLabel;
    double _weekdayWidth;
}

@property(assign,readonly) UILabel * dateLabel;
@property(assign,copy) NSString * formattedDateString;
@property(assign,readwrite) bool isModern;
@property(assign,readonly) UILabel * weekdayLabel;
@property(assign,readwrite) bool weekdayLast;
@property(assign,readwrite) double weekdayWidth;

- (bool)_canBeReusedInPickerView;
- (id)dateLabel;
- (void)dealloc;
- (id)formattedDateString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isModern;
- (void)layoutSubviews;
- (void)setFormattedDateString:(id)arg1;
- (void)setIsModern:(bool)arg1;
- (void)setWeekdayLast:(bool)arg1;
- (void)setWeekdayWidth:(double)arg1;
- (id)weekdayLabel;
- (bool)weekdayLast;
- (double)weekdayWidth;

@end
