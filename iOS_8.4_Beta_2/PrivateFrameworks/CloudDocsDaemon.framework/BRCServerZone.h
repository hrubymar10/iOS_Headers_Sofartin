/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerZone : NSObject <BRCContainer> {
    BRCServerChangeState *_changeState;
    NSString *_containerMetadataEtag;
    PQLConnection *_db;
    NSNumber *_dbRowID;
    BRCLocalContainer *_localContainer;
    bool _needsSave;
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    NSString *_zoneName;
}

@property(assign,readonly) BRCServerChangeState * changeState;
@property(assign,readonly) NSString * containerMetadataEtag;
@property(assign,readonly) PQLConnection * db;
@property(assign,retain) NSNumber * dbRowID;
@property(assign,readonly) bool isPrivateContainer;
@property(assign,readonly) bool isSharedContainer;
@property(assign,readonly) bool isSyncingDownForTheFirstTime;
@property(assign,readwrite) BRCLocalContainer * localContainer;
@property(assign,readwrite) bool needsSave;
@property(assign,readonly) NSString * ownerName;
@property(assign,readonly) NSMutableDictionary * plist;
@property(assign,retain) BRCAccountSession * session;
@property(assign,readonly) BRCSyncContext * syncContext;
@property(assign,readonly) CKRecordZoneID * zoneID;
@property(assign,readonly) NSString * zoneName;

- (void).cxx_destruct;
- (void)_collectTombstoneForRank:(unsigned long long)arg1;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchDeletedRecordIDs;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchRecords;
- (bool)_markItemIDDead:(id)arg1 recordID:(id)arg2;
- (bool)_saveEditedAliasRecord:(id)arg1;
- (bool)_saveEditedContentRecords:(id)arg1 syncStatus:(long long)arg2;
- (bool)_saveEditedDirOrDocStructureRecord:(id)arg1;
- (bool)_saveEditedDocumentContentRecord:(id)arg1;
- (bool)_saveEditedRecord:(id)arg1 syncStatus:(long long)arg2;
- (bool)_saveEditedStructureRecords:(id)arg1 deletedRecordIDs:(id)arg2 syncStatus:(long long)arg3;
- (bool)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3;
- (bool)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3 origName:(id)arg4 base:(id)arg5 no:(id)arg6 ext:(id)arg7;
- (bool)allocateRanks;
- (id)asPrivateZone;
- (id)asSharedZone;
- (id)changeState;
- (void)collectTombstoneRanks:(id)arg1;
- (id)containerMetadataEtag;
- (id)db;
- (id)dbRowID;
- (void)deleteAllContentsOnServerWithCompletionBlock:(id)arg1;
- (id)deleteAllContentsOperation;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 syncStatus:(long long)arg5;
- (bool)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (void)handleBrokenStructure;
- (bool)hasXattrWithSignature:(id)arg1;
- (unsigned long long)hash;
- (id)initWithZoneName:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateContainer;
- (bool)isSharedContainer;
- (bool)isSyncingDownForTheFirstTime;
- (id)itemByItemID:(id)arg1;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (id)localContainer;
- (bool)needsSave;
- (id)ownerName;
- (id)plist;
- (bool)resetServerTruth;
- (id)session;
- (void)setDbRowID:(id)arg1;
- (void)setLocalContainer:(id)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setSession:(id)arg1;
- (bool)storeXattr:(id)arg1;
- (id)syncContext;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;
- (id)zoneID;
- (id)zoneName;

@end
