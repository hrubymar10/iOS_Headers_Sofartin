/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFUbiquityRecordsExporter : NSObject {
    bool _allowTempLogStorage;
    NSDate *_lastTransactionDate;
    NSString *_localPeerID;
    PFUbiquityLocation *_localRootLocation;
    bool _pendingTempLogMove;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSString *_storeName;
    bool _throwOptimisticLockingException;
    NSLock *_transactionLock;
    PFUbiquityLocation *_ubiquityRootLocation;
    bool _useLocalStorage;
}

@property(assign,readwrite) bool allowTempLogStorage;
@property(assign,readonly) PFUbiquityLocation * currentRootLocation;
@property(assign,retain) NSDate * lastTransactionDate;
@property(assign,readonly) NSString * localPeerID;
@property(assign,readonly) PFUbiquityLocation * localRootLocation;
@property(assign,readonly) bool pendingTempLogMove;
@property(assign,readwrite) bool throwOptimisticLockingException;
@property(assign,retain) PFUbiquityLocation * ubiquityRootLocation;
@property(assign,readwrite) bool useLocalStorage;

- (bool)allowTempLogStorage;
- (void)beginWatchingForChangesFromStore:(id)arg1;
- (void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2;
- (id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4;
- (id)currentRootLocation;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ubiquityRootLocation:(id)arg3 localRootLocation:(id)arg4 andProcessingQueue:(id)arg5;
- (id)lastTransactionDate;
- (id)localPeerID;
- (id)localRootLocation;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)moveLogsFromTempDirectory;
- (bool)pendingTempLogMove;
- (void)scheduleTempLogMove;
- (void)setAllowTempLogStorage:(bool)arg1;
- (void)setLastTransactionDate:(id)arg1;
- (void)setThrowOptimisticLockingException:(bool)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUseLocalStorage:(bool)arg1;
- (bool)shouldRespondToSaveNotification:(id)arg1;
- (void)stopWatchingForChanges;
- (bool)throwOptimisticLockingException;
- (id)ubiquityRootLocation;
- (bool)useLocalStorage;

@end