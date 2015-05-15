/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibrary : NSObject {
    PLPhotoLibrary *_changeHandlingPhotoLibrary;
    NSMutableDictionary *_changeNotificationInfo;
    NSMutableDictionary *_changeRequests;
    NSMutableSet *_deletes;
    NSHashTable *_fetchResults;
    NSMutableSet *_inserts;
    bool _isChangeProcessingPending;
    double _lastChangeProcessingStarted;
    NSHashTable *_observers;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_saveTokensToKnownUUIDs;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    bool _unknownMergeEvent;
    NSMutableSet *_updates;
}

@property (nonatomic, retain) PLPhotoLibrary *changeHandlingPhotoLibrary;
@property (nonatomic, retain) NSMutableDictionary *changeNotificationInfo;
@property (nonatomic, retain) NSMutableDictionary *changeRequests;
@property (nonatomic, retain) NSMutableSet *deletes;
@property (nonatomic, retain) NSHashTable *fetchResults;
@property (nonatomic, retain) NSMutableSet *inserts;
@property (nonatomic) bool isChangeProcessingPending;
@property (nonatomic) double lastChangeProcessingStarted;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *saveTokensToKnownUUIDs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;
@property (nonatomic) bool unknownMergeEvent;
@property (nonatomic, retain) NSMutableSet *updates;

+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (id)_effectiveRootEntity:(id)arg1;
+ (void)_forceUserInterfaceReload;
+ (long long)authorizationStatus;
+ (Class)classForFetchType:(id)arg1;
+ (void)requestAuthorization:(id)arg1;
+ (id)sharedPhotoLibrary;
+ (id)uniquedOID:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOIDsFromObjects:(id)arg1;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_commitTransaction:(id)arg1;
- (void)_processPendingChanges;
- (void)assertTransaction;
- (id)changeHandlingPhotoLibrary;
- (id)changeNotificationInfo;
- (id)changeRequestForUUID:(id)arg1;
- (id)changeRequests;
- (id)deletes;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(bool)arg3;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchResults;
- (id)fetchUpdatedObject:(id)arg1;
- (void)handleMergeNotification:(id)arg1;
- (id)init;
- (id)initSharedLibrary;
- (id)inserts;
- (bool)isApplyingRequestedChanges;
- (bool)isChangeProcessingPending;
- (double)lastChangeProcessingStarted;
- (id)managedObjectContext;
- (id)observers;
- (void)performChanges:(id)arg1 completionHandler:(id)arg2;
- (bool)performChangesAndWait:(id)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (id)pl_syncProgressAlbums;
- (id)pu_beginPausingChangesWithTimeout:(double)arg1;
- (id)pu_changeDistributer;
- (void)pu_endPausingChanges:(id)arg1;
- (void)pu_registerChangeObserver:(id)arg1;
- (void)pu_unregisterChangeObserver:(id)arg1;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(bool)arg3;
- (id)queue;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerFetchResult:(id)arg1;
- (void)registerUUID:(id)arg1 forSaveToken:(id)arg2;
- (id)removeUuidForSaveToken:(id)arg1;
- (id)saveTokensToKnownUUIDs;
- (void)setChangeHandlingPhotoLibrary:(id)arg1;
- (void)setChangeNotificationInfo:(id)arg1;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (void)setChangeRequests:(id)arg1;
- (void)setDeletes:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setInserts:(id)arg1;
- (void)setIsChangeProcessingPending:(bool)arg1;
- (void)setLastChangeProcessingStarted:(double)arg1;
- (void)setObservers:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSaveTokensToKnownUUIDs:(id)arg1;
- (void)setTransactionQueue:(id)arg1;
- (void)setUnknownMergeEvent:(bool)arg1;
- (void)setUpdates:(id)arg1;
- (id)transactionContext;
- (id)transactionPLPhotoLibrary;
- (id)transactionQueue;
- (bool)unknownMergeEvent;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterFetchResult:(id)arg1;
- (id)updates;

@end
