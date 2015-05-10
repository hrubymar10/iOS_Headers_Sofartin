/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTDateFormatting : NSObject {
    NSString *_amString;
    NSDateFormatter *_dateOnlyFormatter;
    NSString *_pmString;
    bool _timeDesignatorAppearsBeforeTime;
    NSDateFormatter *_timeOnlyFormatter;
    bool _use24HourTime;
}

@property(assign,readonly) NSString * amString;
@property(assign,readonly) NSString * pmString;
@property(assign,readonly) bool timeDesignatorAppearsBeforeTime;
@property(assign,readonly) bool use24HourTime;

+ (void)load;
+ (id)sharedInstance;

- (void)_clearLocaleDependentState;
- (id)_dateOnlyFormatter;
- (void)_reloadLocaleInfo;
- (id)_timeOnlyFormatter;
- (id)amString;
- (void)dealloc;
- (id)init;
- (id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id*)arg3;
- (id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id*)arg2;
- (id)pmString;
- (bool)timeDesignatorAppearsBeforeTime;
- (id)timeDesignatorForDate:(id)arg1;
- (id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2;
- (bool)use24HourTime;

@end
