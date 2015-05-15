/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCLocalItem : NSObject <BRCItem, BRCSyncThrottleItemProtocol> {
    BRCLocalContainer *_container;
    unsigned long long _dbRowID;
    bool _forceDelete;
    bool _forceDeletedAlready;
    NSNumber *_inFlightDiffs;
    NSNumber *_isInDocumentScope;
    BRCItemID *_itemID;
    NSNumber *_knownByServer;
    unsigned long long _localDiffs;
    unsigned long long _notifsRank;
    BRCLocalItem *_orig;
    NSNumber *_ownerKey;
    NSNumber *_parentFileID;
    NSString *_path;
    bool _resolvedPath;
    id _serverPathMatchID;
    BRCServerZone *_serverZone;
    BRCAccountSession *_session;
    unsigned long long _sharingOptions;
    BRCLocalStatInfo *_st;
    unsigned int _syncUpState;
}

@property (nonatomic, readonly) BRCAliasItem *asAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) CKRecord *baseStructureRecord;
@property (nonatomic, readonly) BRCLocalContainer *container;
@property (nonatomic, readonly) unsigned long long dbRowID;
@property (nonatomic, readonly) NSString *digestDescription;
@property (nonatomic, readonly) NSString *extension;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSNumber *inFlightDiffs;
@property (nonatomic, readonly) bool isAlias;
@property (nonatomic, readonly) bool isAlmostDead;
@property (nonatomic, readonly) bool isDead;
@property (nonatomic, readonly) bool isDeadInServerTruth;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) bool isDocument;
@property (nonatomic, readonly) bool isFault;
@property (nonatomic, readonly) bool isFromInitialScan;
@property (nonatomic, readonly) bool isIdleOrRejected;
@property (nonatomic, readonly) bool isInDocumentScope;
@property (nonatomic, readonly) bool isKnownByServer;
@property (nonatomic, readonly) bool isKnownByServerOrInFlight;
@property (nonatomic, readonly) bool isLive;
@property (nonatomic, readonly) bool isLost;
@property (nonatomic, readonly) bool isPackage;
@property (nonatomic, readonly) bool isReadAndUploaded;
@property (nonatomic, readonly) bool isRejected;
@property (nonatomic, readonly) bool isReserved;
@property (nonatomic, readonly) bool isSharedByMe;
@property (nonatomic, readonly) bool isSharedByMeWithAShareID;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) unsigned long long localDiffs;
@property (nonatomic, readonly) bool localNameNeedsRename;
@property (nonatomic, readonly) bool needsInsert;
@property (nonatomic, readonly) bool needsReading;
@property (nonatomic, readonly) bool needsSyncUp;
@property (nonatomic, readonly) bool needsUpload;
@property (nonatomic, readonly) unsigned long long notifsRank;
@property (nonatomic, readonly) BRCLocalItem *orig;
@property (nonatomic, readonly) NSNumber *ownerKey;
@property (nonatomic, readonly) NSNumber *parentFileID;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) BRCItemID *serverPathMatchItemID;
@property (nonatomic, readonly) BRCServerZone *serverZone;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) NSMutableSet *setOfContainersIDsWithReverseAliases;
@property (nonatomic) unsigned long long sharingOptions;
@property (nonatomic, readonly) BRCLocalStatInfo *st;
@property (nonatomic, readonly) CKRecordID *structureRecordID;
@property (nonatomic, readonly) unsigned int syncUpState;

+ (id)newItemWithPath:(id)arg1 parentID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(bool)arg3;
- (id)_initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_isInterestingUpdateForNotifs;
- (bool)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1;
- (void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2;
- (void)_markNeedsSyncingUp;
- (void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(bool)arg2;
- (void)_serializeStructuralPluginHints:(id)arg1;
- (id)_setOfParentIDs;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2;
- (id)asAlias;
- (id)asDirectory;
- (id)asDocument;
- (id)baseStructureRecord;
- (void)beginBounceAndSaveToDBWithName:(id)arg1;
- (bool)changedAtRelativePath:(id)arg1 scanPackage:(bool)arg2;
- (void)clearFromStage;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dbRowID;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstOriginalItem;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (id)digestDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)evictWithGroup:(id)arg1 error:(id*)arg2;
- (id)extension;
- (float)fakeSync;
- (id)filename;
- (void)fixupStagedItemAtStartup;
- (void)forceUpdateNotification;
- (void)handleUnknownItemError;
- (id)inFlightDiffs;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAlias;
- (bool)isAlmostDead;
- (bool)isDead;
- (bool)isDeadInServerTruth;
- (bool)isDirectory;
- (bool)isDocument;
- (bool)isFault;
- (bool)isFromInitialScan;
- (bool)isIdleOrRejected;
- (bool)isInDocumentScope;
- (bool)isInDocumentScopeWithParent:(id)arg1;
- (bool)isKnownByServer;
- (bool)isKnownByServerOrInFlight;
- (bool)isLive;
- (bool)isLost;
- (bool)isPackage;
- (bool)isReadAndUploaded;
- (bool)isRejected;
- (bool)isReserved;
- (bool)isSharedByMe;
- (bool)isSharedByMeWithAShareID;
- (id)itemID;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(bool)arg4;
- (bool)learnStagedInfoFromDownloadStageID:(id)arg1 error:(id*)arg2;
- (unsigned long long)localDiffs;
- (bool)localNameNeedsRename;
- (void)markBounceFailed;
- (void)markBounceFinished;
- (void)markDead;
- (void)markForceNeedsSyncUp;
- (void)markLatestRequestAcknowledged;
- (void)markLatestSyncRequestFailed;
- (void)markLatestSyncRequestRejected;
- (void)markLiveFromStage;
- (void)markLostClearGenerationID:(bool)arg1 backoffMode:(unsigned char)arg2;
- (void)markLostWhenReplacedByItem:(id)arg1;
- (void)markLostWithoutBackoff;
- (void)markNeedsDeleteForRescheduleOfItem:(id)arg1;
- (void)markNeedsReading;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (void)markRemovedFromFilesystemForServerEdit:(bool)arg1;
- (void)markRenamedUsingServerItem:(id)arg1 parentFileID:(id)arg2;
- (void)markReserved;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2 documentID:(unsigned int)arg3;
- (void)moveAsideLocally;
- (bool)needsInsert;
- (bool)needsReading;
- (bool)needsSyncUp;
- (bool)needsUpload;
- (unsigned long long)notifsRank;
- (id)orig;
- (id)ownerKey;
- (id)parentFileID;
- (id)parentItem;
- (id)path;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (void)prepareForSyncUp;
- (bool)saveToDB;
- (bool)saveToDBForServerEdit:(bool)arg1 keepAliases:(bool)arg2;
- (id)serverPathMatchItemID;
- (id)serverZone;
- (id)session;
- (id)setOfContainersIDsWithReverseAliases;
- (void)setSharingOptions:(unsigned long long)arg1;
- (unsigned long long)sharingOptions;
- (id)st;
- (void)startDownloadWithOptions:(unsigned long long)arg1 group:(id)arg2;
- (id)structureRecordBeingDeadInServerTruth:(bool)arg1 stageID:(id)arg2;
- (id)structureRecordID;
- (unsigned int)syncUpState;
- (void)triggerTransferNotificationIfNeeded;
- (void)updateFromFSAtPath:(id)arg1;
- (bool)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1;
- (bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateStatMetadataFromServerItem:(id)arg1;
- (void)updateStructuralCKInfoFromServerItem:(id)arg1;
- (bool)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2;
- (bool)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end
