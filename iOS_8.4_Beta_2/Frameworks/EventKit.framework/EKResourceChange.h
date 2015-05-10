/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property(assign,readonly) bool alerted;
@property(assign,retain) EKCalendar * calendar;
@property(assign,retain) EKCalendarItem * calendarItem;
@property(assign,readonly) unsigned int changeType;
@property(assign,copy) NSURL * changedByAddress;
@property(assign,copy) NSString * changedByDisplayName;
@property(assign,copy) NSString * changedByFirstName;
@property(assign,copy) NSString * changedByLastName;
@property(assign,readonly) NSNumber * createCount;
@property(assign,readonly) bool dateChanged;
@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) NSNumber * deleteCount;
@property(assign,readonly) NSString * deletedTitle;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool locationChanged;
@property(assign,readonly) unsigned int publicStatus;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool timeChanged;
@property(assign,copy) NSDate * timestamp;
@property(assign,readonly) bool titleChanged;
@property(assign,readonly) NSNumber * updateCount;

- (id)_calendarItemRelation;
- (id)_persistentResourceChange;
- (bool)alerted;
- (id)calendar;
- (id)calendarItem;
- (unsigned int)changeType;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (void)clearAlertedStatus;
- (id)createCount;
- (bool)dateChanged;
- (id)deleteCount;
- (id)deletedTitle;
- (id)emailAddress;
- (id)firstName;
- (id)lastName;
- (id)lazyLoadRelationForKey:(id)arg1;
- (bool)locationChanged;
- (id)name;
- (unsigned int)publicStatus;
- (bool)timeChanged;
- (id)timestamp;
- (bool)titleChanged;
- (id)updateCount;

@end