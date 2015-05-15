/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {
    double _bottomPinningProximity;
    EKCalendarDate *_endDate;
    unsigned long long _eventIndex;
    EKCalendarDate *_startDate;
    double _topPinningProximity;
    double _travelTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _unPinnedViewFrame;
    EKDayOccurrenceView *_view;
}

@property(assign,readwrite) double bottomPinningProximity;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSDate * end;
@property(assign,copy) EKCalendarDate * endDate;
@property(assign,readonly) double enoughHeightForOneLine;
@property(assign,readonly) EKEvent * event;
@property(assign,readonly) unsigned long long eventIndex;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool hideTravelTime;
@property(assign,readonly) NSDate * start;
@property(assign,copy) EKCalendarDate * startDate;
@property(assign,copy) EKCalendarDate * startDateIncludingTravelTime;
@property(assign,readonly) NSDate * startWithTravelTime;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) double topPinningProximity;
@property(assign,readwrite) double travelTime;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unPinnedViewFrame;
@property(assign,retain) EKDayOccurrenceView * view;
@property(assign,readonly) double viewMaxNaturalTextHeight;
@property(assign,readonly) bool visibleHeightLocked;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;

- (void).cxx_destruct;
- (double)bottomPinningProximity;
- (id)description;
- (id)end;
- (id)endDate;
- (double)enoughHeightForOneLine;
- (id)event;
- (unsigned long long)eventIndex;
- (bool)hideTravelTime;
- (id)initWithEventIndex:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (void)setBottomPinningProximity:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartDate:(id)arg1;
- (void)setTopPinningProximity:(double)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setView:(id)arg1;
- (void)setVisibleHeight:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stagedFrame;
- (id)start;
- (id)startDate;
- (id)startDateIncludingTravelTime;
- (id)startWithTravelTime;
- (double)topPinningProximity;
- (double)travelTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unPinnedViewFrame;
- (id)view;
- (double)viewMaxNaturalTextHeight;
- (bool)visibleHeightLocked;

@end