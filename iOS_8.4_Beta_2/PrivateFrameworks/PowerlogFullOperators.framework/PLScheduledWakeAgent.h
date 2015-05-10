/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLScheduledWakeAgent : PLAgent {
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLSemaphore *_canSleepSemaphore;
}

@property(assign,retain) PLEntryNotificationOperatorComposition * canSleepNotification;
@property(assign,retain) PLSemaphore * canSleepSemaphore;

+ (id)accountingGroupDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)canSleepNotification;
- (id)canSleepSemaphore;
- (id)humanReadableScheduledWakeString:(id)arg1;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventForwardScheduledEvent;
- (void)setCanSleepNotification:(id)arg1;
- (void)setCanSleepSemaphore:(id)arg1;

@end