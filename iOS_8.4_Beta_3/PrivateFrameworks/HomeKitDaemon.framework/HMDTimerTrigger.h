/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTimerTrigger : HMDTrigger {
    NSDate *_currentFireDate;
    NSDate *_fireDate;
    NSTimeZone *_fireDateTimeZone;
    NSDateComponents *_fireRepeatInterval;
    NSTimer *_timer;
    NSString *_timerID;
}

@property(assign,retain) NSDate * currentFireDate;
@property(assign,copy) NSDate * fireDate;
@property(assign,copy) NSTimeZone * fireDateTimeZone;
@property(assign,copy) NSDateComponents * fireRepeatInterval;
@property(assign,retain) NSTimer * timer;
@property(assign,retain) NSString * timerID;

+ (bool)supportsSecureCoding;
+ (id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2;

- (void).cxx_destruct;
- (id)_activate:(bool)arg1;
- (void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1;
- (id)_nextFireDate;
- (void)_registerForMessages;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)_stopTimer;
- (void)_timerTriggered;
- (void)completeConfiguration;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (id)currentFireDate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (id)fireDateTimeZone;
- (id)fireRepeatInterval;
- (id)getCalendar;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4;
- (void)invalidate;
- (void)nsTimerTriggered:(id)arg1;
- (void)setCurrentFireDate:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireDateTimeZone:(id)arg1;
- (void)setFireRepeatInterval:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerID:(id)arg1;
- (id)timer;
- (id)timerID;
- (void)timerTriggered;
- (id)validateRecurrence:(id)arg1;

@end
