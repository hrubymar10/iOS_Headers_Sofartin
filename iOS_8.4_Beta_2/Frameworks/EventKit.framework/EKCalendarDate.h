/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
    double _dateAbs;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _dateGr;
    unsigned int _flags;
    EKTimeZone *_timeZone;
}

+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2;

- (double)absoluteTime;
- (id)calendarDateByAddingDays:(long long)arg1;
- (id)calendarDateByAddingGregorianUnits:(struct { int x1; int x2; int x3; int x4; int x5; double x6; })arg1;
- (id)calendarDateByAddingMonths:(long long)arg1;
- (id)calendarDateByAddingWeeks:(long long)arg1;
- (id)calendarDateByAddingYears:(long long)arg1;
- (id)calendarDateForDay;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(int)arg1;
- (id)calendarDateForMonth;
- (id)calendarDateForWeekWithWeekStart:(int)arg1;
- (id)calendarDateForWeekWithWeekStart:(int)arg1 daysSinceWeekStart:(long long*)arg2;
- (id)calendarDateForYear;
- (id)calendarDateInTimeZone:(id)arg1;
- (id)calendarDateWithDate:(id)arg1;
- (long long)compare:(id)arg1;
- (id)components;
- (id)componentsIncludingTime:(bool)arg1;
- (id)componentsWithoutTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (unsigned long long)day;
- (int)dayOfWeek;
- (unsigned long long)dayOfYear;
- (unsigned long long)daysInMonth;
- (unsigned long long)daysInYear;
- (void)dealloc;
- (id)description;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })differenceAsGregorianUnits:(id)arg1 flags:(unsigned long long)arg2;
- (long long)differenceInDays:(id)arg1;
- (long long)differenceInMonths:(id)arg1;
- (long long)differenceInYears:(id)arg1;
- (id)earlierDate:(id)arg1;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })gregorianDate;
- (unsigned long long)hour;
- (id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;
- (id)initWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 internalTimeZone:(id)arg2;
- (id)initWithGregorianDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)laterDate:(id)arg1;
- (unsigned long long)minute;
- (unsigned long long)month;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)second;
- (long long)secondsFromGMT;
- (id)timeZone;
- (unsigned long long)weekOfYear;
- (unsigned long long)weeksInYear;
- (unsigned long long)year;

@end
