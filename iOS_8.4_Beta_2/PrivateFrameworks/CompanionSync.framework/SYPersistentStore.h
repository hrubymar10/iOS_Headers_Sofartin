/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYPersistentStore : NSObject {
    NSSet *_cachedChangedSyncIDs;
    unsigned long long _cachedChangedSyncIDsVersion;
    bool _cachedVersionStale;
    bool _changeTrackingEnabled;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_enterFullSync;
    struct sqlite3_stmt { } *_exitFullSync;
    struct sqlite3_stmt { } *_getAllSentForCurrentSync;
    struct sqlite3_stmt { } *_getChangeCount;
    struct sqlite3_stmt { } *_getChangeIDsSinceVersion;
    struct sqlite3_stmt { } *_getCurrentSyncID;
    struct sqlite3_stmt { } *_getCurrentSyncStartTime;
    struct sqlite3_stmt { } *_getFullsyncSent;
    struct sqlite3_stmt { } *_getIgnoringSyncID;
    struct sqlite3_stmt { } *_getInFullSync;
    struct sqlite3_stmt { } *_getLastEndedSyncID;
    struct sqlite3_stmt { } *_getLastSyncError;
    struct sqlite3_stmt { } *_getLocalVersion;
    struct sqlite3_stmt { } *_getNextExpireTime;
    struct sqlite3_stmt { } *_getOldestVersion;
    struct sqlite3_stmt { } *_getPeerSeqNo;
    struct sqlite3_stmt { } *_getSyncIDSOptions;
    struct sqlite3_stmt { } *_getSyncUserInfo;
    struct sqlite3_stmt { } *_getWaitingForSyncID;
    struct sqlite3_stmt { } *_insertChange;
    struct sqlite3_stmt { } *_logSyncComplete;
    struct __CFString { } *_loggingFacility;
    NSString *_path;
    NSString *_peerID;
    NSMutableDictionary *_peerSeqnoSets;
    struct sqlite3_stmt { } *_purgeExpiredChanges;
    struct sqlite3_stmt { } *_setAllSentForSyncID;
    struct sqlite3_stmt { } *_setFullsyncSent;
    struct sqlite3_stmt { } *_setPeerSeqNo;
    struct sqlite3_stmt { } *_setPeerSeqNoSet;
    struct sqlite3_stmt { } *_setSyncIDSOptions;
    struct sqlite3_stmt { } *_setSyncUserInfo;
    struct sqlite3_stmt { } *_setVectorClock;
    struct sqlite3_stmt { } *_setWaitingForSyncID;
    NSObject<OS_dispatch_queue> *_syncQ;
    double _timeToLiveCache;
    double _unfinishedSyncTimeout;
}

@property(assign,retain) NSSet * cachedChangedSyncIDs;
@property(assign,readwrite) unsigned long long cachedChangedSyncIDsVersion;
@property(assign,readwrite) bool cachedVersionStale;
@property(assign,readonly) bool canStartNewSyncSession;
@property(assign,readonly) unsigned long long changeCount;
@property(assign,readwrite) bool completedSync;
@property(assign,readonly) NSString * currentFullSyncID;
@property(assign,readonly) unsigned long long currentLocalVersion;
@property(assign,readonly) bool currentSyncSendComplete;
@property(assign,readonly) double durationOfLastFullSync;
@property(assign,copy) NSDictionary * fullSyncIDSOptions;
@property(assign,copy) NSDictionary * fullSyncUserInfo;
@property(assign,readonly) bool inFullSync;
@property(assign,copy) NSDate * lastMessageReceived;
@property(assign,readonly) unsigned long long lastSeenRemoteVersion;
@property(assign,readonly) NSString * lastSyncEndID;
@property(assign,readonly) NSError * lastSyncError;
@property(assign,readonly) bool lastSyncFailed;
@property(assign,copy) NSDate * overflowResyncTime;
@property(assign,readonly) NSString * path;
@property(assign,readonly) NSString * peerID;
@property(getter=isPerformingDeltaSync,assign,readwrite) bool performingDeltaSync;
@property(assign,readwrite) double timeToLive;
@property(assign,readwrite) double unfinishedSyncTimeout;
@property(assign,retain) NSString * vectorClockJSON;
@property(assign,copy) NSString * waitingForSyncEndID;

- (void).cxx_destruct;
- (void)_cacheTTL;
- (void)_convertTimestamps;
- (struct sqlite3 { }*)_dbRef;
- (id)_decodeIndexSet:(id)arg1;
- (id)_encodeIndexSet:(id)arg1;
- (void)_fixPeerInfo;
- (int)_getSchemaVersion;
- (bool)_inTransaction:(bool)arg1 do:(id)arg2;
- (unsigned long long)_lastSequenceNumberForPeerID_LOCKED:(id)arg1;
- (unsigned long long)_oldestVersion;
- (bool)_openDBAtPath:(id)arg1;
- (id)_sequenceNumberSetForPeerID:(id)arg1;
- (void)_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2;
- (bool)_tableEmpty:(id)arg1;
- (id)cachedChangedSyncIDs;
- (unsigned long long)cachedChangedSyncIDsVersion;
- (bool)cachedVersionStale;
- (bool)canStartNewSyncSession;
- (unsigned long long)changeCount;
- (void)changeTrackingToggled:(bool)arg1;
- (void)clearAllChanges;
- (bool)completedSync;
- (id)currentFullSyncID;
- (unsigned long long)currentLocalVersion;
- (bool)currentSyncSendComplete;
- (void)dealloc;
- (double)durationOfLastFullSync;
- (void)enterFullSyncWithID:(id)arg1 ignoring:(bool)arg2;
- (void)exitFullSyncWithID:(id)arg1 error:(id)arg2;
- (id)fullSyncIDSOptions;
- (id)fullSyncUserInfo;
- (bool)ignoringFullSyncWithID:(id)arg1;
- (bool)inFullSync;
- (id)initWithPath:(id)arg1 loggingFacility:(struct __CFString { }*)arg2 changeTrackingEnabled:(bool)arg3;
- (bool)isPerformingDeltaSync;
- (id)lastMessageReceived;
- (unsigned long long)lastSeenRemoteVersion;
- (unsigned long long)lastSequenceNumberForPeerID:(id)arg1;
- (id)lastSyncEndID;
- (id)lastSyncError;
- (bool)lastSyncFailed;
- (bool)logChanges:(id)arg1 error:(id*)arg2;
- (bool)logSyncCompletionToRemoteVersion:(unsigned long long)arg1;
- (unsigned long long)nextSequenceNumber;
- (bool)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (id)overflowResyncTime;
- (id)path;
- (id)peerID;
- (bool)reassignCurrentSyncID:(id)arg1;
- (void)resetSequenceNumbersForPeer:(id)arg1;
- (void)sendCompletedForSyncWithID:(id)arg1;
- (bool)sequenceNumberIsDuplicate:(unsigned long long)arg1 forPeer:(id)arg2;
- (void)setCachedChangedSyncIDs:(id)arg1;
- (void)setCachedChangedSyncIDsVersion:(unsigned long long)arg1;
- (void)setCachedVersionStale:(bool)arg1;
- (void)setCompletedSync:(bool)arg1;
- (void)setFullSyncIDSOptions:(id)arg1;
- (void)setFullSyncUserInfo:(id)arg1;
- (void)setLastMessageReceived:(id)arg1;
- (void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2;
- (void)setOverflowResyncTime:(id)arg1;
- (void)setPerformingDeltaSync:(bool)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)setUnfinishedSyncTimeout:(double)arg1;
- (void)setVectorClockJSON:(id)arg1;
- (void)setWaitingForSyncEndID:(id)arg1;
- (double)timeToLive;
- (double)unfinishedSyncTimeout;
- (id)vectorClockJSON;
- (id)waitingForSyncEndID;

@end
