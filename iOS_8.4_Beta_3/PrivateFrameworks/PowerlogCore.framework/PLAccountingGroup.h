/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLAccountingGroup : PLOperator <PLQLAccountingGroupProtocol> {
    NSString *_accountingGroupName;
    short _accountingGroupType;
    bool _closeAllAccountingEventsAtBoot;
    bool _eventCacheOn;
    NSArray *_eventCacheResults;
    struct _PLTimeIntervalRange { 
        double location; 
        double length; 
    } _eventCacheTimeRange;
}

@property (readonly, retain) NSString *accountingGroupName;
@property (readonly) short accountingGroupType;
@property bool closeAllAccountingEventsAtBoot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool eventCacheOn;
@property (retain) NSArray *eventCacheResults;
@property struct _PLTimeIntervalRange { double x1; double x2; } eventCacheTimeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)accountingGroupFromAGName:(id)arg1;
+ (id)entryEventNoneDefinitionAccountingGroup;
+ (id)entryEventNoneDefinitions;
+ (id)getAccountingGroupEntryKey;

- (void).cxx_destruct;
- (id)accountingGroupName;
- (short)accountingGroupType;
- (void)addAccountingEvent:(id)arg1 withStartDate:(id)arg2 withStopDate:(id)arg3 withWeight:(double)arg4;
- (void)addEventToEvents:(id)arg1 withIdentifier:(id)arg2 withStartDate:(id)arg3 withStopDate:(id)arg4 withWeight:(double)arg5;
- (void)batchAddAccountingEvents:(id)arg1;
- (void)cacheEventsForTimeInterval:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (void)clearEventCache;
- (bool)closeAllAccountingEventsAtBoot;
- (void)closeAllOpenEventAtTime:(id)arg1 withForceClose:(bool)arg2;
- (void)closeLastOpenEventAtTime:(id)arg1;
- (bool)eventCacheOn;
- (id)eventCacheResults;
- (struct _PLTimeIntervalRange { double x1; double x2; })eventCacheTimeRange;
- (id)getEventsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)getLastOpenSnapshot;
- (id)getLastOpenSnapshotForIdentifier:(id)arg1 forEntryKey:(id)arg2;
- (id)getLastSnapshot;
- (void)initOperatorDependancies;
- (id)initWithName:(id)arg1 withAccountingGroupType:(short)arg2 withCloseAllAccountingEventsAtBoot:(bool)arg3;
- (void)logEventCacheStats:(id)arg1;
- (double)safeTimeForAccounting;
- (void)setCloseAllAccountingEventsAtBoot:(bool)arg1;
- (void)setEventCacheOn:(bool)arg1;
- (void)setEventCacheResults:(id)arg1;
- (void)setEventCacheTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (double)timeOfLastEndedSnapshot;
- (double)timeOfLastSnapshot;
- (bool)useCachedEventsForTimeInterval:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;

@end
