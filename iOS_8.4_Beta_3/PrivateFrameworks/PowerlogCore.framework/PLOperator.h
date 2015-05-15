/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLOperator : NSObject {
    NSMutableArray *_bufferedEntries;
    NSMutableDictionary *_filterDefinitions;
    NSMutableDictionary *_filterDeltaLastEntryIDs;
    NSMutableDictionary *_lastLogDateForEntryKey;
    NSMutableDictionary *_localCache;
    PLNSTimerOperatorComposition *_triggerBufferFlush;
}

@property (readonly) PLCoreAccountingGroup *accountingGroups;
@property (retain) NSMutableArray *bufferedEntries;
@property (readonly) NSString *className;
@property (retain) NSMutableDictionary *filterDefinitions;
@property (retain) NSMutableDictionary *filterDeltaLastEntryIDs;
@property (retain) NSMutableDictionary *lastLogDateForEntryKey;
@property (retain) NSMutableDictionary *localCache;
@property (readonly) PLCoreRail *rails;
@property (readonly) PLCoreStorage *storage;
@property (readonly) NSObject<OS_dispatch_queue> *storageQueue;
@property (retain) PLNSTimerOperatorComposition *triggerBufferFlush;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)accountingGroupDefinitions;
+ (id)className;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryKeyForType:(id)arg1 andName:(id)arg2;
+ (id)entryKeyForType:(id)arg1 andName:(id)arg2 isDynamic:(bool)arg3;
+ (id)entryKeys;
+ (bool)fullMode;
+ (bool)isDebugEnabled;
+ (bool)isDebugEnabledForKey:(id)arg1;
+ (bool)isEnabled;
+ (void)load;
+ (id)operator;
+ (id)railDefinitions;
+ (void)setDebugEnabled:(bool)arg1;
+ (void)setDebugEnabled:(bool)arg1 forKey:(id)arg2;
+ (void)setEnabled:(bool)arg1;

- (void).cxx_destruct;
- (id)accountingGroups;
- (id)bufferedEntries;
- (id)className;
- (void)dealloc;
- (bool)defaultBoolForKey:(id)arg1;
- (double)defaultDoubleForKey:(id)arg1;
- (long long)defaultLongForKey:(id)arg1;
- (id)defaultObjectForKey:(id)arg1;
- (void)enableBufferFlushTimer:(unsigned long long)arg1;
- (id)entryDefinitions;
- (id)entryKeys;
- (id)filterDefinitions;
- (id)filterDeltaLastEntryIDs;
- (void)flushBuffer;
- (id)init;
- (void)initOperatorDependancies;
- (bool)isDebugEnabled;
- (bool)isDebugEnabledForKey:(id)arg1;
- (id)lastLogDateForEntryKey;
- (id)localCache;
- (void)log;
- (void)logEntries:(id)arg1 withGroupID:(id)arg2;
- (void)logEntry:(id)arg1;
- (void)logFromCFCallback:(id)arg1;
- (void)logRequestNotification:(id)arg1;
- (void)maintainAggregateStorage;
- (void)postEntries:(id)arg1;
- (void)postEntries:(id)arg1 withGroupID:(id)arg2;
- (bool)postFilteredNotificationForEntry:(id)arg1 withFilteredDefition:(id)arg2 withNotificationName:(id)arg3;
- (id)rails;
- (void)setBufferedEntries:(id)arg1;
- (void)setDebugEnabled:(bool)arg1;
- (void)setDebugEnabled:(bool)arg1 forKey:(id)arg2;
- (void)setFilterDefinitions:(id)arg1;
- (void)setFilterDeltaLastEntryIDs:(id)arg1;
- (void)setLastLogDateForEntryKey:(id)arg1;
- (void)setLocalCache:(id)arg1;
- (void)setTriggerBufferFlush:(id)arg1;
- (void)setupFilterRequest:(id)arg1;
- (bool)shouldWriteEntry:(id)arg1 withDebug:(bool)arg2;
- (id)storage;
- (id)storageQueue;
- (void)subscribeNotificationsForEntries;
- (double)timeIntervalSinceLastLogForEntryKey:(id)arg1;
- (id)triggerBufferFlush;
- (id)trimmingConditionsForRolloverAtDate:(id)arg1;
- (void)updateEntry:(id)arg1;
- (id)workQueue;

@end
