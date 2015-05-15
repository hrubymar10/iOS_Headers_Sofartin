/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *name;

+ (id)abbreviationDictionary;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)calendarTimeZone;
+ (id)defaultTimeZone;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (void)setDefaultTimeZone:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(long long)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;

- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (unsigned long long)_cfTypeID;
- (id)abbreviation;
- (id)abbreviationForDate:(id)arg1;
- (id)cityName;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)description;
- (id)descriptionForDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (bool)isDaylightSavingTime;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeZone:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (bool)isNSTimeZone__;
- (bool)isUTC;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (long long)secondsFromGMT;
- (long long)secondsFromGMTForDate:(id)arg1;
- (void)setCityName:(id)arg1;

@end
