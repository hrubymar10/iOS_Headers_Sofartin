/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLDebugService : PLService {
    PLXPCListenerOperatorComposition *_aggregateTestListener;
    PLXPCResponderOperatorComposition *_aggregateTestResponder;
    PLEntryNotificationOperatorComposition *_assertionListener;
    PLEntryNotificationOperatorComposition *_assertionNewListener;
    PLEntryNotificationOperatorComposition *_assertionUpdateListener;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLSemaphore *_canSleepSemaphore;
    PLXPCListenerOperatorComposition *_schemaTestListener;
    PLEntryNotificationOperatorComposition *_sleepNotification;
    PLEntryNotificationOperatorComposition *_wakeNotification;
    PLXPCListenerOperatorComposition *_xpcListenerPLLog;
    PLXPCResponderOperatorComposition *_xpcResponderPLLog;
}

@property (retain) PLXPCListenerOperatorComposition *aggregateTestListener;
@property (retain) PLXPCResponderOperatorComposition *aggregateTestResponder;
@property (retain) PLEntryNotificationOperatorComposition *assertionListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionNewListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionUpdateListener;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) PLXPCListenerOperatorComposition *schemaTestListener;
@property (retain) PLEntryNotificationOperatorComposition *sleepNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;
@property (retain) PLXPCListenerOperatorComposition *xpcListenerPLLog;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderPLLog;

+ (id)entryAggregateDefinitionAggregateTest;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitionArrayTest;
+ (id)entryEventNoneDefinitionFastInsertTest;
+ (id)entryEventNoneDefinitionSleepNotificationTest;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)aggregateTestListener;
- (id)aggregateTestResponder;
- (id)assertionListener;
- (id)assertionNewListener;
- (id)assertionUpdateListener;
- (void)bombardRails;
- (id)canSleepNotification;
- (id)canSleepSemaphore;
- (id)init;
- (void)initOperatorDependancies;
- (void)printNullTestResultsForEntry:(id)arg1 withDescription:(id)arg2;
- (id)schemaTestListener;
- (void)setAggregateTestListener:(id)arg1;
- (void)setAggregateTestResponder:(id)arg1;
- (void)setAssertionListener:(id)arg1;
- (void)setAssertionNewListener:(id)arg1;
- (void)setAssertionUpdateListener:(id)arg1;
- (void)setCanSleepNotification:(id)arg1;
- (void)setCanSleepSemaphore:(id)arg1;
- (void)setSchemaTestListener:(id)arg1;
- (void)setSleepNotification:(id)arg1;
- (void)setWakeNotification:(id)arg1;
- (void)setXpcListenerPLLog:(id)arg1;
- (void)setXpcResponderPLLog:(id)arg1;
- (id)sleepNotification;
- (void)testAllEntryKeyRequests;
- (void)testArchive;
- (void)testArray;
- (void)testDailyTasks;
- (void)testEntryApplicationAgent;
- (void)testEntryDelete;
- (void)testEntryLogRequestedForEntryKey:(id)arg1;
- (void)testEntryQueries;
- (void)testEntrySleep;
- (void)testEntryWake;
- (void)testFastInserts;
- (void)testGenerateOTASubmission;
- (void)testQMI;
- (id)wakeNotification;
- (id)xpcListenerPLLog;
- (id)xpcResponderPLLog;

@end
