/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateValue : NSObject <NSCoding> {
    long long _day;
    long long _month;
    long long _year;
}

@property(assign,readonly) long long day;
@property(assign,readonly) long long month;
@property(assign,readonly) long long year;

+ (id)dateFromICSString:(id)arg1;
+ (id)dateFromICSUTF8String:(const char *)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (long long)compare:(id)arg1;
- (id)components;
- (int)dateType;
- (long long)day;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icsString;
- (id)initWithCoder:(id)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)month;
- (long long)year;

@end
