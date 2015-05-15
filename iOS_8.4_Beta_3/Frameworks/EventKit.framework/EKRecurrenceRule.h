/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceRule : EKObject <NSCopying> {
    EKRecurrenceEnd *_cachedEnd;
    bool _usesEndDate;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) EKRecurrenceEnd *cachedEnd;
@property (nonatomic, readonly) NSDate *cachedEndDate;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) bool dirtyStateMayAffectExceptionDates;
@property (nonatomic, readonly) long long firstDayOfTheWeek;
@property (nonatomic, readonly) int frequency;
@property (readonly) struct { int x1; int x2; int x3; int x4; int x5; double x6; } gregorianUnits;
@property (nonatomic, readonly) long long interval;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, retain) EKCalendarItem *owner;
@property (nonatomic, copy) EKRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) NSArray *setPositions;
@property (nonatomic, readonly) bool shouldPinMonthDays;
@property (readonly) bool usesEndDate;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;

+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(bool)arg2 isFloating:(bool)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;
+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned long long)arg2 end:(id)arg3;

- (id)UUID;
- (id)_persistentRule;
- (id)cachedEnd;
- (id)cachedEndDate;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (void)dealloc;
- (id)description;
- (bool)dirtyStateMayAffectExceptionDates;
- (long long)firstDayOfTheWeek;
- (int)frequency;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (id)init;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(long long)arg2 end:(id)arg3;
- (long long)interval;
- (bool)isAnyDayRule;
- (bool)isWeekdayRule;
- (bool)isWeekendRule;
- (id)lazyLoadRelationForKey:(id)arg1;
- (bool)mayOccurAfterDate:(id)arg1;
- (id)monthsOfTheYear;
- (id)owner;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (id)recurrenceEnd;
- (void)reset;
- (void)setCachedEnd:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setFirstDayOfTheWeek:(unsigned long long)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (id)setPositions;
- (void)setRecurrenceEnd:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (bool)shouldPinMonthDays;
- (id)stringValueAsDateOnly:(bool)arg1 isFloating:(bool)arg2;
- (bool)usesEndDate;
- (id)weeksOfTheYear;

@end
