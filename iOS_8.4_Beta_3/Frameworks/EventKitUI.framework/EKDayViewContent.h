/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, UIGestureRecognizerDelegate> {
    bool _allowsOccurrenceSelection;
    NSCalendar *_calendar;
    bool _darkensWeekends;
    NSMutableArray *_dayStarts;
    bool *_dayWasLaidOut;
    unsigned long long _daysToDisplay;
    <EKDayViewContentDelegate> *_delegate;
    EKEvent *_dimmedOccurrence;
    EKCalendarDate *_endDate;
    bool _eventsFillGrid;
    double _fixedDayWidth;
    EKDayViewContentGeometryDelegate *_geometryDelegate;
    EKDayGridView *_grid;
    bool _hasCustomOccurrenceMargin;
    bool _hasCustomOccurrencePadding;
    NSMutableArray *_itemsByDay;
    NSMutableArray *_itemsByDayByEndDate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _latestVisibleRect;
    bool _loadingOccurrences;
    int _occurrenceBackgroundStyle;
    UIColor *_occurrenceLocationColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _occurrenceMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _occurrencePadding;
    UIColor *_occurrenceTextBackgroundColor;
    UIColor *_occurrenceTimeColor;
    UIColor *_occurrenceTitleColor;
    bool _putSelectionOnTop;
    bool _reduceLayoutProcessingForAnimation;
    UIView *_saturdayDarkeningView;
    EKEvent *_selectedEvent;
    EKCalendarDate *_startDate;
    UIView *_sundayDarkeningView;
    bool _usesSmallText;
    double *_visiblePinnedStackHeightAbove;
    double *_visiblePinnedStackHeightBelow;
}

@property (nonatomic) bool allowsOccurrenceSelection;
@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic) bool darkensWeekends;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKDayViewContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *dimmedOccurrence;
@property (nonatomic, readonly) EKCalendarDate *endDate;
@property (nonatomic) bool eventsFillGrid;
@property (nonatomic, readonly) double firstEventSecond;
@property (nonatomic) double fixedDayWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) int occurrenceBackgroundStyle;
@property (nonatomic, retain) UIColor *occurrenceLocationColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } occurrenceMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } occurrencePadding;
@property (nonatomic, retain) UIColor *occurrenceTextBackgroundColor;
@property (nonatomic, retain) UIColor *occurrenceTimeColor;
@property (nonatomic, retain) UIColor *occurrenceTitleColor;
@property (nonatomic) bool reduceLayoutProcessingForAnimation;
@property (setter=selectEvent:, nonatomic, retain) EKEvent *selectedEvent;
@property (nonatomic) bool showsLeftBorder;
@property (nonatomic, copy) EKCalendarDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic) bool usesSmallText;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })RoundRectToScreenScaleForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)RoundToScreenScale:(double)arg1;
- (double)RoundToScreenScaleForFloat:(double)arg1;
- (void)_adjustViewsForPinning;
- (void)_computeDayStartsAndEnds;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_dayRangeForEvent:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_dayStarts;
- (double)_dayWidth;
- (bool)_doOffscreenOccurrences;
- (bool)_getBottomPinRegion:(double*)arg1 dayIndex:(unsigned long long*)arg2 forPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)_layoutDay:(unsigned long long)arg1;
- (void)_layoutDaysIfVisible;
- (void)_tapRecognized:(id)arg1;
- (bool)allowsOccurrenceSelection;
- (id)calendar;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (bool)containsEvent:(id)arg1;
- (bool)darkensWeekends;
- (double)dateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (id)dimmedOccurrence;
- (id)endDate;
- (bool)eventsFillGrid;
- (bool)eventsIntersectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)firstEventSecond;
- (double)fixedDayWidth;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)grid;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2 backgroundColor:(id)arg3 opaque:(bool)arg4 numberOfDaysToDisplay:(unsigned long long)arg5;
- (id)lastDisplayedSecond;
- (void)layoutSubviews;
- (int)occurrenceBackgroundStyle;
- (id)occurrenceLocationColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })occurrenceMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })occurrencePadding;
- (id)occurrenceTextBackgroundColor;
- (id)occurrenceTimeColor;
- (id)occurrenceTitleColor;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2;
- (id)occurrenceViews;
- (struct CGPoint { double x1; double x2; })pointForDate:(double)arg1;
- (void)rectBecameVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)reduceLayoutProcessingForAnimation;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAllowsOccurrenceSelection:(bool)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDarkensWeekends:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setEventsFillGrid:(bool)arg1;
- (void)setFixedDayWidth:(double)arg1;
- (void)setHoursToPadTop:(double)arg1;
- (void)setNeedsLayout;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setOccurrenceLocationColor:(id)arg1;
- (void)setOccurrenceMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOccurrencePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOccurrenceTextBackgroundColor:(id)arg1;
- (void)setOccurrenceTimeColor:(id)arg1;
- (void)setOccurrenceTitleColor:(id)arg1;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setReduceLayoutProcessingForAnimation:(bool)arg1;
- (void)setShowsLeftBorder:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateWithDateComponents:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (void)setViewsDimmed:(bool)arg1 forEvent:(id)arg2;
- (bool)showsLeftBorder;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)startDate;
- (id)timeZone;
- (bool)usesSmallText;

@end
