/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {
    bool _allDay;
    bool _attendeeReplyChanged;
    NSArray *_attendees;
    bool _dateChanged;
    NSDate *_endDate;
    bool _hasRecurrenceRules;
    NSString *_location;
    bool _locationChanged;
    int _participationStatus;
    NSDate *_participationStatusModifiedDate;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    int _status;
    bool _timeChanged;
}

@property(getter=isAllDay,assign,readwrite) bool allDay;
@property(assign,readwrite) bool attendeeReplyChanged;
@property(assign,retain) NSArray * attendees;
@property(assign,readwrite) bool dateChanged;
@property(assign,retain) NSDate * endDate;
@property(assign,readwrite) bool hasRecurrenceRules;
@property(assign,retain) NSString * location;
@property(assign,readwrite) bool locationChanged;
@property(assign,readwrite) int participationStatus;
@property(assign,retain) NSDate * participationStatusModifiedDate;
@property(assign,retain) NSDate * startDate;
@property(assign,retain) NSDate * startDateForNextOccurrence;
@property(assign,readwrite) int status;
@property(assign,readwrite) bool timeChanged;

- (bool)attendeeReplyChanged;
- (id)attendees;
- (bool)dateChanged;
- (void)dealloc;
- (id)endDate;
- (id)eventFromEventStore:(id)arg1;
- (bool)hasRecurrenceRules;
- (id)initWithEvent:(id)arg1;
- (bool)isAllDay;
- (id)location;
- (bool)locationChanged;
- (int)participationStatus;
- (id)participationStatusModifiedDate;
- (void)setAllDay:(bool)arg1;
- (void)setAttendeeReplyChanged:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setDateChanged:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setHasRecurrenceRules:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationChanged:(bool)arg1;
- (void)setParticipationStatus:(int)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimeChanged:(bool)arg1;
- (id)startDate;
- (id)startDateForNextOccurrence;
- (int)status;
- (bool)timeChanged;

@end
