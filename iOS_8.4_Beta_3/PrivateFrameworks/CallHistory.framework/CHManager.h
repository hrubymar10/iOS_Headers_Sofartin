/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHManager : CHSynchronizedLoggable {
    id _addressBookChangedNotificationRef;
    bool _cacheIsDirty;
    NSString *_coalescingStrategy;
    id _databaseChangedNotificationRef;
    bool _generateSyncTransactions;
    unsigned int _limitingCallTypes;
    NSDate *_limitingEndDate;
    NSDate *_limitingStartDate;
    long long _numberOfUnseenMissedCalls;
    NSPredicate *_postFetchingPredicate;
    bool _reCoalesce;
    NSArray *_recentCalls;
    bool _showsFaceTimeAudioCalls;
    bool _showsFaceTimeCalls;
    bool _showsFaceTimeVideoCalls;
    bool _showsTelephonyCalls;
    <SyncManagerProtocol> *_syncManager;
    NSArray *_uncoalescedRecentCalls;
    NSArray *_uncoalescedUnFilteredRecentCalls;
    long long _unreadCallCount;
}

@property (retain) id addressBookChangedNotificationRef;
@property bool cacheIsDirty;
@property (nonatomic, copy) NSString *coalescingStrategy;
@property (retain) id databaseChangedNotificationRef;
@property bool generateSyncTransactions;
@property (nonatomic) unsigned int limitingCallTypes;
@property (nonatomic, copy) NSDate *limitingEndDate;
@property (nonatomic, copy) NSDate *limitingStartDate;
@property long long numberOfUnseenMissedCalls;
@property (nonatomic, copy) NSPredicate *postFetchingPredicate;
@property bool reCoalesce;
@property (nonatomic, retain) NSArray *recentCalls;
@property (nonatomic) bool showsFaceTimeAudioCalls;
@property (nonatomic) bool showsFaceTimeCalls;
@property (nonatomic) bool showsFaceTimeVideoCalls;
@property (nonatomic) bool showsTelephonyCalls;
@property (retain) <SyncManagerProtocol> *syncManager;
@property (getter=uncoalescedRecentCallsSync, nonatomic, retain) NSArray *uncoalescedRecentCalls;
@property (retain) NSArray *uncoalescedUnFilteredRecentCalls;
@property long long unreadCallCount;

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(bool)arg2 isAnswered:(bool)arg3;

- (void).cxx_destruct;
- (void)addMultipleCallsToCallHistory:(id)arg1;
- (void)addToCallHistory:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (id)addressBookChangedNotificationRef;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (bool)cacheIsDirty;
- (double)callTimersGetIncoming;
- (double)callTimersGetLifetime;
- (double)callTimersGetOutgoing;
- (void)callTimersReset;
- (id)coalesceCalls:(id)arg1;
- (id)coalescingStrategy;
- (unsigned long long)countCallsWithPredicate:(id)arg1;
- (unsigned long long)countCallsWithPredicateSync:(id)arg1;
- (void)databaseChanged:(id)arg1;
- (id)databaseChangedNotificationRef;
- (void)dealloc;
- (void)deleteAllCalls;
- (void)deleteAllCallsSync;
- (void)deleteCall:(id)arg1;
- (void)deleteCallAtIndex:(unsigned long long)arg1;
- (void)deleteCallsWithPredicate:(id)arg1;
- (void)deleteTheseCalls:(id)arg1;
- (void)deleteTheseCallsSync:(id)arg1;
- (id)fetchRecentCallsSyncWithCoalescing:(bool)arg1;
- (unsigned long long)fetchUnreadCallsCount;
- (void)flush;
- (bool)generateSyncTransactions;
- (id)init;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (unsigned int)limitingCallTypes;
- (id)limitingEndDate;
- (id)limitingStartDate;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (long long)numberOfUnseenMissedCalls;
- (id)postFetchingPredicate;
- (bool)reCoalesce;
- (id)recentCalls;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)registerForNotifications;
- (void)setAddressBookChangedNotificationRef:(id)arg1;
- (void)setCacheIsDirty:(bool)arg1;
- (void)setCoalescingStrategy:(id)arg1;
- (void)setDatabaseChangedNotificationRef:(id)arg1;
- (void)setGenerateSyncTransactions:(bool)arg1;
- (void)setLimitingCallTypes:(unsigned int)arg1;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)setLimitingEndDate:(id)arg1;
- (void)setLimitingStartDate:(id)arg1;
- (void)setNumberOfUnseenMissedCalls:(long long)arg1;
- (void)setPostFetchingPredicate:(id)arg1;
- (void)setReCoalesce:(bool)arg1;
- (void)setRecentCalls:(id)arg1;
- (void)setShowsFaceTimeAudioCalls:(bool)arg1;
- (void)setShowsFaceTimeCalls:(bool)arg1;
- (void)setShowsFaceTimeVideoCalls:(bool)arg1;
- (void)setShowsTelephonyCalls:(bool)arg1;
- (void)setSyncManager:(id)arg1;
- (void)setUncoalescedRecentCalls:(id)arg1;
- (void)setUncoalescedUnFilteredRecentCalls:(id)arg1;
- (void)setUnreadCallCount:(long long)arg1;
- (bool)showsFaceTimeAudioCalls;
- (bool)showsFaceTimeCalls;
- (bool)showsFaceTimeVideoCalls;
- (bool)showsTelephonyCalls;
- (id)syncManager;
- (id)unCoalesceCall:(id)arg1;
- (void)unRegisterForNotifications;
- (id)uncoalescedRecentCallsSync;
- (id)uncoalescedUnFilteredRecentCalls;
- (long long)unreadCallCount;
- (void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2;

@end
