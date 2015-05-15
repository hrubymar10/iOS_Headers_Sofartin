/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKGizmoDatabase : NSObject {
    struct sqlite3 { } *_database;
    NSObject<OS_dispatch_queue> *_dbQueue;
    struct sqlite3_stmt { } *_deleteStatement;
    int _externallyChangedBroadcasts;
    struct sqlite3_stmt { } *_insertDiffStatement;
    struct sqlite3_stmt { } *_insertStatement;
    bool _isInTransaction;
    NSData *_libraryHash;
    NSMutableDictionary *_manifest;
    bool _needsMoreLocalNotifyDatabaseChanged;
    bool _observingFirstUnlockNotification;
    bool _passDBIsAvailable;
    NSMutableArray *_passDescriptions;
    struct sqlite3_stmt { } *_selectPassDataStatement;
    struct sqlite3_stmt { } *_selectPassDiffStatement;
    bool _sendingLocalNotifyDatabaseChanged;
    struct sqlite3_stmt { } *_updateDeletePendingStatment;
}

@property (readonly) struct sqlite3 { }*database;
@property (readonly) struct sqlite3_stmt { }*deleteStatement;
@property (readonly) struct sqlite3_stmt { }*insertDiffStatement;
@property (readonly) struct sqlite3_stmt { }*insertStatement;
@property (readonly) NSData *libraryHash;
@property (readonly) NSDictionary *manifestHashes;
@property (nonatomic) bool passDBIsAvailable;
@property (readonly) NSArray *passDescriptions;
@property (readonly) struct sqlite3_stmt { }*selectPassDataStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassDiffStatement;
@property (readonly) struct sqlite3_stmt { }*updateDeletePendingStatement;

+ (long long)maxDatabaseVersion;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (long long)_databaseVersionExists:(bool*)arg1 valid:(bool*)arg2;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (bool)_executeSQL:(id)arg1;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(id)arg2;
- (void)_handleDatabaseChangedExternally;
- (void)_handleFirstUnlock;
- (void)_insertDatabaseVersionRow:(long long)arg1;
- (id)_libraryHashLocked;
- (void)_loadInitialManifestLocked;
- (void)_migrateDatabase:(id)arg1;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(bool)arg1;
- (void)_notifyDatabaseChangedWithNoop:(bool)arg1 firstUnlock:(bool)arg2;
- (void)_notifyForFirstUnlock;
- (bool)_passDBIsAvailableLocked;
- (id)_passForUniqueIDLocked:(id)arg1;
- (void)_performTransactionWithBlock:(id)arg1;
- (bool)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_savePassLocked:(id)arg1;
- (void)_updateDatabaseVersionRow:(long long)arg1;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (struct sqlite3_stmt { }*)deleteStatement;
- (id)diffForUniqueID:(id)arg1;
- (void)enumerateAllPassesWithBlock:(id)arg1;
- (id)hashForUniqueID:(id)arg1;
- (id)init;
- (struct sqlite3_stmt { }*)insertDiffStatement;
- (struct sqlite3_stmt { }*)insertStatement;
- (id)libraryHash;
- (id)manifestHashes;
- (id)nukeAndRebuildDatabaseWithPasses:(id)arg1;
- (bool)passDBIsAvailable;
- (id)passDescriptions;
- (id)passForUniqueID:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1;
- (struct sqlite3_stmt { }*)selectPassDataStatement;
- (struct sqlite3_stmt { }*)selectPassDiffStatement;
- (void)setDeletePending:(bool)arg1 forUniqueID:(id)arg2;
- (void)setPassDBIsAvailable:(bool)arg1;
- (struct sqlite3_stmt { }*)updateDeletePendingStatement;

@end
