/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarResourceChangeNotification : EKCalendarNotification {
    bool _allDay;
    NSString *_calendarName;
    unsigned int _changeType;
    NSNumber *_createCount;
    bool _dateChanged;
    NSNumber *_deleteCount;
    NSDate *_endDate;
    NSString *_eventID;
    NSString *_location;
    bool _locationChanged;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    bool _timeChanged;
    bool _titleChanged;
    NSNumber *_updateCount;
}

@property (nonatomic) bool allDay;
@property (nonatomic, retain) NSString *calendarName;
@property (nonatomic) unsigned int changeType;
@property (nonatomic, retain) NSNumber *createCount;
@property (nonatomic) bool dateChanged;
@property (nonatomic, retain) NSNumber *deleteCount;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSString *eventID;
@property (nonatomic, retain) NSString *location;
@property (nonatomic) bool locationChanged;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDate *startDateForNextOccurrence;
@property (nonatomic) bool timeChanged;
@property (nonatomic) bool titleChanged;
@property (nonatomic, retain) NSNumber *updateCount;

- (bool)allDay;
- (id)calendarName;
- (unsigned int)changeType;
- (id)createCount;
- (bool)dateChanged;
- (void)dealloc;
- (id)deleteCount;
- (id)endDate;
- (id)eventID;
- (id)initWithType:(long long)arg1;
- (id)location;
- (bool)locationChanged;
- (bool)needsAlert;
- (id)resourceChangeFromEventStore:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setCalendarName:(id)arg1;
- (void)setChangeType:(unsigned int)arg1;
- (void)setCreateCount:(id)arg1;
- (void)setDateChanged:(bool)arg1;
- (void)setDeleteCount:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationChanged:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setTimeChanged:(bool)arg1;
- (void)setTitleChanged:(bool)arg1;
- (void)setUpdateCount:(id)arg1;
- (id)startDate;
- (id)startDateForNextOccurrence;
- (bool)timeChanged;
- (bool)titleChanged;
- (id)updateCount;

@end
