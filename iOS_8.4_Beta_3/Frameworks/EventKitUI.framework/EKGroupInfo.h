/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKGroupInfo : NSObject {
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    bool _selected;
    bool _showSelectAllButton;
    EKSource *_source;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    NSString *_typeTitle;
}

@property (nonatomic, readonly, retain) NSArray *calendarInfos;
@property (nonatomic, readonly, copy) NSSet *calendarSet;
@property (nonatomic, readonly) bool isSubscribed;
@property (nonatomic, readonly) unsigned long long numCalendars;
@property (nonatomic, readonly) unsigned long long numSelectableCalendars;
@property (nonatomic, readonly) unsigned long long numSelectedCalendars;
@property (nonatomic) bool selected;
@property (nonatomic, readonly, copy) NSSet *selectedCalendarSet;
@property (nonatomic, readonly) bool showAddCalendarButton;
@property (nonatomic, readonly) bool showCalendarNameIfSolitary;
@property (nonatomic) bool showSelectAllButton;
@property (nonatomic, readonly) int sortOrder;
@property (nonatomic, retain) EKSource *source;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *typeTitle;

- (void).cxx_destruct;
- (id)calendarAtIndex:(unsigned long long)arg1;
- (id)calendarInfos;
- (id)calendarSet;
- (id)copyCalendars;
- (id)description;
- (id)init;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (void)insertDeclinedEventsItem;
- (bool)isSubscribed;
- (unsigned long long)numCalendars;
- (unsigned long long)numSelectableCalendars;
- (unsigned long long)numSelectedCalendars;
- (void)removeCalendar:(id)arg1;
- (void)selectAll;
- (void)selectNone;
- (bool)selected;
- (id)selectedCalendarSet;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (void)setSelected:(bool)arg1;
- (void)setShowSelectAllButton:(bool)arg1;
- (void)setSource:(id)arg1;
- (bool)showAddCalendarButton;
- (bool)showCalendarNameIfSolitary;
- (bool)showSelectAllButton;
- (int)sortOrder;
- (id)source;
- (id)title;
- (id)titleForBeginningOfSentence:(bool)arg1;
- (id)typeTitle;

@end
