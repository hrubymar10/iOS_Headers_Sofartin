/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarColorEditItem : EKCalendarEditItem {
    NSMutableArray *_cells;
    unsigned long long _checkedRow;
}

@property (nonatomic, readonly) NSMutableArray *cells;

- (void).cxx_destruct;
- (id)_cellForColor:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cells;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;

@end
