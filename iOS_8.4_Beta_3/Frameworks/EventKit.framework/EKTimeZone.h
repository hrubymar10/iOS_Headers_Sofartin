/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTimeZone : NSObject <NSCopying> {
    void *_internal;
    long long _lastEnd;
    unsigned long long _lastIndex;
    long long _lastStart;
    NSString *_name;
    double _offset;
}

+ (id)timeZoneWithNSTimeZone:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;

- (id)NSTimeZone;
- (id)_abbreviationForIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForAbsoluteTime:(double)arg1;
- (id)abbreviation;
- (id)abbreviationForAbsoluteTime:(double)arg1;
- (id)abbreviationForDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (id)initWithOffset:(double)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;
- (double)secondsFromGMT;
- (double)secondsFromGMTForAbsoluteTime:(double)arg1;
- (double)secondsFromGMTForDate:(id)arg1;

@end