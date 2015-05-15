/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver> {
    NSString *_accountID;
    BRCThrottle *_aliasRemovalThrottle;
    NSString *_appSupportDirPath;
    BRCApplyScheduler *_applyScheduler;
    NSString *_cacheDirPath;
    PQLConnection *_clientDB;
    NSMutableDictionary *_clientState;
    int _cloudDocsFD;
    BRCThrottle *_containerResetThrottle;
    BRCThrottle *_containerScanThrottle;
    BRCContainerScheduler *_containerScheduler;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _containersCreationLock;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    } _containersLock;
    CDSession *_coreDuetSession;
    id _dbProfilingHook;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    BRCDeadlineScheduler *_defaultScheduler;
    BRCDiskSpaceReclaimer *_diskReclaimer;
    int _downloadSuspendCount;
    BRCFSDownloader *_fsDownloader;
    BRCFSEventsMonitor *_fsEventsMonitor;
    BRCFSReader<BRCFileCoordinationReading> *_fsReader;
    BRCFSUploader *_fsUploader;
    BRCFSWriter<BRCFileCoordinationWriting> *_fsWriter;
    bool _isCancelled;
    BRCThrottle *_lostItemThrottle;
    BRCNotificationManager *_notificationManager;
    BRCThrottle *_operationFailureThrottle;
    NSMutableDictionary *_privateLocalContainersByID;
    NSMutableDictionary *_privateServerZonesByID;
    bool _resumed;
    NSString *_rootDirPath;
    PQLConnection *_serverDB;
    BRCServerPersistedState *_serverState;
    NSMutableDictionary *_serverZoneByZoneRowID;
    NSMutableDictionary *_sharedLocalContainersByMangledID;
    NSMutableDictionary *_sharedServerZonesByMangledID;
    BRCStageRegistry *_stageRegistry;
    BRCThrottle *_syncAppContainerThrottle;
    NSMutableDictionary *_syncContexts;
    NSString *_ubiquityTokenSalt;
    int _uploadSuspendCount;
    NSMutableSet *_xpcClients;
}

@property(assign,readonly) NSString * accountID;
@property(assign,readonly) BRCThrottle * aliasRemovalThrottle;
@property(assign,retain) NSString * appSupportDirPath;
@property(assign,readonly) BRCApplyScheduler * applyScheduler;
@property(assign,retain) NSString * cacheDirPath;
@property(assign,readonly) PQLConnection * clientDB;
@property(assign,readonly) NSMutableDictionary * clientState;
@property(assign,readonly) BRCThrottle * containerResetThrottle;
@property(assign,readonly) BRCThrottle * containerScanThrottle;
@property(assign,readonly) BRCContainerScheduler * containerScheduler;
@property(assign,readonly) CDSession * coreDuetSession;
@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) BRCDeadlineScheduler * defaultScheduler;
@property(assign,copy) NSString * description;
@property(assign,readonly) BRCDiskSpaceReclaimer * diskReclaimer;
@property(assign,readonly) BRCFSDownloader * fsDownloader;
@property(assign,readonly) BRCFSEventsMonitor * fsEventsMonitor;
@property(assign,readonly) BRCFSReader<BRCFileCoordinationReading> * fsReader;
@property(assign,readonly) BRCFSUploader * fsUploader;
@property(assign,readonly) BRCFSWriter<BRCFileCoordinationWriting> * fsWriter;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isCancelled;
@property(assign,readonly) BRCThrottle * lostItemThrottle;
@property(assign,readonly) BRCNotificationManager * notificationManager;
@property(assign,readonly) BRCThrottle * operationFailureThrottle;
@property(assign,readonly) BRCRelativePath * root;
@property(assign,retain) NSString * rootDirPath;
@property(assign,readonly) PQLConnection * serverDB;
@property(assign,readonly) BRCServerPersistedState * serverState;
@property(assign,readonly) BRCStageRegistry * stageRegistry;
@property(assign,readonly) Class superclass;
@property(assign,readonly) BRCThrottle * syncAppContainerThrottle;
@property(assign,readonly) NSString * ubiquityTokenSalt;

+ (id)sessionForDumpingDatabasesAtURL:(id)arg1;

- (void).cxx_destruct;
- (bool)_attachDatabase:(id)arg1 toConnection:(id)arg2 error:(id*)arg3;
- (bool)_checkIntegrity:(id)arg1 serverTruth:(bool)arg2 error:(id*)arg3;
- (id)_containerMetadataRecordsToSave;
- (void)_createAccountSupportPathIfNeeded:(id)arg1 protectParent:(bool)arg2;
- (bool)_createLocalContainer:(id)arg1 ownerName:(id)arg2;
- (bool)_createPrivateLocalContainer:(id)arg1;
- (bool)_createSharedLocalContainer:(id)arg1 ownerName:(id)arg2;
- (bool)_deleteLocalContainer:(id)arg1;
- (bool)_dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
- (void)_loadContainersFromDisk;
- (id)_localContainersMatchingSearchString:(id)arg1 db:(id)arg2;
- (bool)_openClientTruthConnectionWithError:(id*)arg1;
- (bool)_openServerTruthConnectionWithError:(id*)arg1;
- (void)_registerLastBootIfNeeded:(id)arg1 table:(struct NSObject { Class x1; }*)arg2;
- (bool)_setupBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (bool)_setupConnection:(id)arg1 databaseName:(id)arg2 error:(id*)arg3;
- (void)_setupSharedPackageExtensionsApp;
- (void)_setupThrottles;
- (void)_startWatcher;
- (bool)_stepBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 newState:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (id)_unloadContainers;
- (id)accountID;
- (id)aliasRemovalThrottle;
- (id)appSupportDirPath;
- (id)applyScheduler;
- (bool)backupDatabaseToURL:(id)arg1 error:(id*)arg2;
- (struct PQLResultSet { Class x1; }*)bouncedItemsEnumerator;
- (id)cacheDirPath;
- (void)cancelAllOperations;
- (id)clientDB;
- (id)clientState;
- (void)close;
- (void)closeAndResetLocalState;
- (bool)closeDBWithError:(id*)arg1;
- (void)closeXPCClientsSync;
- (void)cloudDocsAppsListDidChange:(id)arg1;
- (id)containerByMangledID:(id)arg1;
- (id)containerResetThrottle;
- (id)containerScanThrottle;
- (id)containerScheduler;
- (id)coreDuetSession;
- (id)createDeviceKeyForNameInServerDB:(id)arg1;
- (id)createOwnerKeyForName:(id)arg1;
- (id)createPrivateContainerIfNeeded:(id)arg1;
- (bool)createPrivateContainerOnDisk:(id)arg1 createdRoot:(bool*)arg2 createdDocuments:(bool*)arg3;
- (bool)createServerZone:(id)arg1;
- (id)createSharedContainerIfNeeded:(id)arg1 ownerName:(id)arg2;
- (bool)createSharedContainerOnDiskWithMangledID:(id)arg1 createdRoot:(bool*)arg2;
- (void)dealloc;
- (id)defaultScheduler;
- (id)defaultSyncContext;
- (bool)deleteServerZone:(id)arg1;
- (id)description;
- (void)destroyLocalData;
- (void)destroySharedContainer:(id)arg1;
- (id)deviceKeyForName:(id)arg1 db:(id)arg2;
- (void)disableDatabaseProfilingForDB:(id)arg1;
- (id)diskReclaimer;
- (bool)dumpDatabaseToFileHandle:(id)arg1 containerID:(id)arg2 error:(id*)arg3;
- (void)enableDatabaseProfilingForDB:(id)arg1;
- (void)enumeratePrivateContainers:(id)arg1;
- (void)enumerateServerZones:(id)arg1;
- (void)enumerateSharedContainers:(id)arg1;
- (id)fsDownloader;
- (id)fsEventsMonitor;
- (id)fsReader;
- (id)fsUploader;
- (id)fsWriter;
- (id)init;
- (id)initWithAccountID:(id)arg1 salt:(id)arg2;
- (bool)isCancelled;
- (id)localContainersMatchingSearchString:(id)arg1 db:(id)arg2 error:(id*)arg3;
- (id)lostItemThrottle;
- (void)markAccountMigrationComplete;
- (id)newConnection:(id)arg1;
- (id)newConnectionWithLabel:(id)arg1 error:(id*)arg2;
- (id)newPrivateLocalContainerFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newPrivateServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedLocalContainerFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)newSharedServerZoneFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)notificationManager;
- (bool)openDBWithError:(id*)arg1;
- (bool)openWithError:(id*)arg1;
- (id)operationFailureThrottle;
- (id)ownerIdentityForKey:(id)arg1;
- (id)ownerIdentityForName:(id)arg1;
- (id)ownerIdentityForName:(id)arg1 db:(id)arg2;
- (id)ownerKeyForName:(id)arg1 db:(id)arg2;
- (id)ownerNameForKey:(id)arg1 db:(id)arg2;
- (void)preventDatabaseFromBeingReused;
- (id)privateContainerByID:(id)arg1;
- (id)privateContainerByMangledID:(id)arg1;
- (id)privateLocalContainerByID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)privateLocalContainersEnumerator:(id)arg1;
- (id)privateServerZoneByID:(id)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)privateServerZonesEnumerator:(id)arg1;
- (void)registerClient:(id)arg1;
- (void)registerPackageExtension:(id)arg1;
- (void)resume;
- (void)resumeAllTransfers;
- (id)root;
- (id)rootDirPath;
- (bool)saveLocalContainerToDB:(id)arg1;
- (bool)saveServerZoneToDB:(id)arg1;
- (id)serverDB;
- (id)serverState;
- (id)serverZoneByRowID:(id)arg1;
- (void)setAppSupportDirPath:(id)arg1;
- (void)setCacheDirPath:(id)arg1;
- (void)setOwnerIdentity:(id)arg1 forName:(id)arg2;
- (void)setRootDirPath:(id)arg1;
- (void)setupDatabase;
- (id)sharedContainerByMangledID:(id)arg1;
- (struct PQLResultSet { Class x1; }*)sharedLocalContainersEnumerator:(id)arg1;
- (id)sharedServerZoneByName:(id)arg1 ownerName:(id)arg2 db:(id)arg3;
- (struct PQLResultSet { Class x1; }*)sharedServerZonesEnumerator:(id)arg1;
- (id)sharedSyncContext;
- (id)singleLocalContainerMatchingSearchString:(id)arg1 db:(id)arg2 error:(id*)arg3;
- (id)stageRegistry;
- (struct PQLResultSet { Class x1; }*)stagedItemsEnumerator;
- (void)stopDBWatcher;
- (id)syncAppContainerThrottle;
- (id)syncContextForContextIdentifier:(id)arg1 isShared:(bool)arg2;
- (id)syncContextForZone:(id)arg1;
- (id)syncContextForZone:(id)arg1 createIfNeeded:(bool)arg2;
- (id)ubiquityTokenSalt;
- (void)unregisterClient:(id)arg1;
- (void)userDefaultsChanged;
- (bool)validateDatabase:(id)arg1 serverTruth:(bool)arg2 error:(id*)arg3;

@end