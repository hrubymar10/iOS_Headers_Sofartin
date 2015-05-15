/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenSimpleDateFormatter : NSObject <SBFLockScreenDateFormatter> {
    NSTimeZone *_timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void)dealloc;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsTimeNoAMPM:(id)arg1;
- (void)resetFormattersIfNecessary;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
