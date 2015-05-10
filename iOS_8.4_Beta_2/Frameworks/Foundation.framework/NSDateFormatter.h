/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateFormatter : NSFormatter {
    NSMutableDictionary *_attributes;
    unsigned long long _counter;
    struct __CFDateFormatter { } *_formatter;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property(assign,copy) NSString * AMSymbol;
@property(assign,copy) NSString * PMSymbol;
@property(assign,copy) NSCalendar * calendar;
@property(assign,copy) NSString * dateFormat;
@property(assign,readwrite) unsigned long long dateStyle;
@property(assign,copy) NSDate * defaultDate;
@property(assign,readwrite) bool doesRelativeDateFormatting;
@property(assign,copy) NSArray * eraSymbols;
@property(assign,readwrite) unsigned long long formatterBehavior;
@property(assign,readwrite) long long formattingContext;
@property(assign,readwrite) bool generatesCalendarDates;
@property(assign,copy) NSDate * gregorianStartDate;
@property(getter=isLenient,assign,readwrite) bool lenient;
@property(assign,copy) NSLocale * locale;
@property(assign,copy) NSArray * longEraSymbols;
@property(assign,copy) NSArray * monthSymbols;
@property(assign,copy) NSArray * quarterSymbols;
@property(assign,copy) NSArray * shortMonthSymbols;
@property(assign,copy) NSArray * shortQuarterSymbols;
@property(assign,copy) NSArray * shortStandaloneMonthSymbols;
@property(assign,copy) NSArray * shortStandaloneQuarterSymbols;
@property(assign,copy) NSArray * shortStandaloneWeekdaySymbols;
@property(assign,copy) NSArray * shortWeekdaySymbols;
@property(assign,copy) NSArray * standaloneMonthSymbols;
@property(assign,copy) NSArray * standaloneQuarterSymbols;
@property(assign,copy) NSArray * standaloneWeekdaySymbols;
@property(assign,readwrite) unsigned long long timeStyle;
@property(assign,copy) NSTimeZone * timeZone;
@property(assign,copy) NSDate * twoDigitStartDate;
@property(assign,copy) NSArray * veryShortMonthSymbols;
@property(assign,copy) NSArray * veryShortStandaloneMonthSymbols;
@property(assign,copy) NSArray * veryShortStandaloneWeekdaySymbols;
@property(assign,copy) NSArray * veryShortWeekdaySymbols;
@property(assign,copy) NSArray * weekdaySymbols;

+ (id)CalSharedDateFormatter;
+ (id)FU_stringWithLongestStyleDate:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (id)FU_timeStringWithSpaceRemoved:(id)arg1 date:(id)arg2;
+ (bool)_dateStringFits:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (void)_localeDidChange:(id)arg1;
+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (unsigned long long)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (id)mf_formatDate:(id)arg1 shortStyle:(bool)arg2;
+ (id)monthYearStringFromDate:(id)arg1 calendar:(id)arg2;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;

- (id)AMSymbol;
- (id)PMSymbol;
- (void)_clearFormatter;
- (id)_dateFormat;
- (id)_getLocaleAlreadyLocked:(bool)arg1;
- (id)_locale_forOldMethods;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_reset;
- (void)_setDateFormat:(id)arg1;
- (void)_setDateFormat:(id)arg1 alreadyLocked:(bool)arg2;
- (void)_setIsLenient:(bool)arg1;
- (void)_setUsesCharacterDirection:(bool)arg1;
- (id)_timeZone_forOldMethods;
- (bool)_usesCharacterDirection;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormat;
- (id)dateFromString:(id)arg1;
- (unsigned long long)dateStyle;
- (void)dealloc;
- (id)defaultDate;
- (bool)doesRelativeDateFormatting;
- (void)encodeWithCoder:(id)arg1;
- (id)eraSymbols;
- (void)finalize;
- (unsigned long long)formatterBehavior;
- (long long)formattingContext;
- (bool)generatesCalendarDates;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)gregorianStartDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLenient;
- (id)locale;
- (id)longEraSymbols;
- (id)monthSymbols;
- (id)quarterSymbols;
- (void)setAMSymbol:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (void)setDefaultDate:(id)arg1;
- (void)setDoesRelativeDateFormatting:(bool)arg1;
- (void)setEraSymbols:(id)arg1;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setGeneratesCalendarDates:(bool)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLenient:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedDateFormatFromTemplate:(id)arg1;
- (void)setLongEraSymbols:(id)arg1;
- (void)setMonthSymbols:(id)arg1;
- (void)setPMSymbol:(id)arg1;
- (void)setQuarterSymbols:(id)arg1;
- (void)setShortMonthSymbols:(id)arg1;
- (void)setShortQuarterSymbols:(id)arg1;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setShortWeekdaySymbols:(id)arg1;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (void)setTimeStyle:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTwoDigitStartDate:(id)arg1;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (id)shortMonthSymbols;
- (id)shortQuarterSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneQuarterSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)shortWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneQuarterSymbols;
- (id)standaloneWeekdaySymbols;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)stringFromDate:(id)arg1 withRelativeToTimeZone:(id)arg2;
- (unsigned long long)timeStyle;
- (id)timeZone;
- (id)twoDigitStartDate;
- (id)veryShortMonthSymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)weekdaySymbols;

@end
