/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarItem : EKObject {
    int _actionsStateCachedValue;
    bool _haveCachedActionsState;
}

@property(assign,copy) NSURL * URL;
@property(assign,readonly) NSString * UUID;
@property(assign,copy) NSURL * action;
@property(assign,readonly) int actionsState;
@property(assign,copy) NSArray * alarms;
@property(assign,copy) NSArray * allAlarms;
@property(getter=isAllDay,assign,readwrite) bool allDay;
@property(assign,readonly) bool allowsAlarmModifications;
@property(assign,readonly) bool allowsAttendeeModifications;
@property(assign,readonly) bool allowsCalendarModifications;
@property(assign,readonly) bool allowsRecurrenceModifications;
@property(assign,readonly) NSArray * attachments;
@property(assign,readonly) NSArray * attendees;
@property(assign,retain) EKCalendar * calendar;
@property(assign,readonly) NSString * calendarItemExternalIdentifier;
@property(assign,readonly) NSString * calendarItemIdentifier;
@property(assign,readwrite) NSString * calendarScale;
@property(assign,readonly) NSDate * creationDate;
@property(getter=isDefaultAlarmRemoved,assign,readwrite) bool defaultAlarmRemoved;
@property(assign,copy) NSTimeZone * endTimeZone;
@property(assign,copy) NSString * externalID;
@property(assign,copy) NSString * externalModificationTag;
@property(assign,readonly) NSURL * externalURI;
@property(assign,readonly) bool hasAlarms;
@property(assign,readonly) bool hasAttendees;
@property(assign,readonly) bool hasNotes;
@property(assign,readonly) bool hasRecurrenceRules;
@property(assign,readonly) bool isEditable;
@property(assign,readonly) bool isExternallyOrganizedInvitation;
@property(assign,readonly) bool isFloating;
@property(assign,readonly) bool isOrganizedBySharedCalendarOwner;
@property(assign,readonly) bool isSelfOrganized;
@property(assign,readonly) bool isSelfOrganizedInvitation;
@property(assign,readonly) NSDate * lastModifiedDate;
@property(assign,copy) NSString * location;
@property(assign,copy) NSString * notes;
@property(assign,retain) EKOrganizer * organizer;
@property(assign,retain) EKCalendarItem * originalItem;
@property(assign,readwrite) long long priority;
@property(assign,copy) NSArray * recurrenceRules;
@property(assign,readonly) bool requiresDetach;
@property(assign,retain) EKAttendee * selfAttendee;
@property(assign,readonly) int selfParticipantStatus;
@property(assign,copy) NSString * sharedItemCreatedByDisplayName;
@property(assign,copy) NSString * sharedItemCreatedByEmailAddress;
@property(assign,copy) NSString * sharedItemCreatedByFirstName;
@property(assign,copy) NSString * sharedItemCreatedByLastName;
@property(assign,copy) NSDate * sharedItemCreatedDate;
@property(assign,copy) NSTimeZone * sharedItemCreatedTimeZone;
@property(assign,copy) NSString * sharedItemModifiedByDisplayName;
@property(assign,copy) NSString * sharedItemModifiedByEmailAddress;
@property(assign,copy) NSString * sharedItemModifiedByFirstName;
@property(assign,copy) NSString * sharedItemModifiedByLastName;
@property(assign,copy) NSDate * sharedItemModifiedDate;
@property(assign,copy) NSTimeZone * sharedItemModifiedTimeZone;
@property(assign,copy) EKStructuredLocation * startLocation;
@property(assign,copy) NSTimeZone * startTimeZone;
@property(assign,copy) EKStructuredLocation * structuredLocation;
@property(assign,copy) NSTimeZone * timeZone;
@property(assign,copy) NSString * title;

- (id)URL;
- (id)UUID;
- (id)_alarmsRelation;
- (id)_attachmentsRelation;
- (id)_attendeesRelation;
- (id)_locationRelation;
- (void)_moveToCalendarInternal:(id)arg1;
- (id)_organizerRelation;
- (id)_persistentItem;
- (id)_recurrencesRelation;
- (id)_selfAttendeeRelation;
- (id)_startLocationRelation;
- (id)action;
- (int)actionsState;
- (void)addAlarm:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)alarms;
- (id)allAlarms;
- (bool)allowsAlarmModifications;
- (bool)allowsAttendeeModifications;
- (bool)allowsCalendarModifications;
- (bool)allowsRecurrenceModifications;
- (id)attachments;
- (id)attendees;
- (id)calendar;
- (id)calendarItemExternalIdentifier;
- (id)calendarItemIdentifier;
- (id)calendarScale;
- (bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (id)creationDate;
- (id)description;
- (id)endTimeZone;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalURI;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (bool)hasAlarms;
- (bool)hasAttendees;
- (bool)hasNotes;
- (bool)hasRecurrenceRules;
- (bool)isAlarmAcknowledgedPropertyDirty;
- (bool)isAllDay;
- (bool)isDefaultAlarmRemoved;
- (bool)isEditable;
- (bool)isExternallyOrganizedInvitation;
- (bool)isFloating;
- (bool)isOrganizedBySharedCalendarOwner;
- (bool)isSelfOrganized;
- (bool)isSelfOrganizedInvitation;
- (id)lastModifiedDate;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)location;
- (void)moveToCalendar:(id)arg1;
- (id)notes;
- (id)organizer;
- (id)originalItem;
- (long long)priority;
- (bool)rebase;
- (id)recurrenceRules;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)removeAlarm:(id)arg1;
- (void)removeAllSnoozedAlarms;
- (void)removeAttendee:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (bool)requiresDetach;
- (id)selfAttendee;
- (int)selfParticipantStatus;
- (void)setAction:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setAllAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCalendarScale:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDefaultAlarmRemoved:(bool)arg1;
- (void)setEndTimeZone:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedDate:(id)arg1;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedDate:(id)arg1;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (void)setStartLocation:(id)arg1;
- (void)setStartTimeZone:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemCreatedByEmailAddress;
- (id)sharedItemCreatedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedDate;
- (id)sharedItemCreatedTimeZone;
- (id)sharedItemModifiedByDisplayName;
- (id)sharedItemModifiedByEmailAddress;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedDate;
- (id)sharedItemModifiedTimeZone;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startDateForRecurrence;
- (id)startLocation;
- (id)startTimeZone;
- (id)structuredLocation;
- (id)timeZone;
- (id)title;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (bool)validate:(id*)arg1;

@end
