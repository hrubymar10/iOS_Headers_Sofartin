/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVXPCTransactionController : NSObject {
    bool _inTransaction;
    NSMapTable *_openTransactions;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_signalUSR2DispatchSource;
}

@property(getter=isInTransaction,assign,readonly) bool inTransaction;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_onQueueCleanupEndedTransactions;
- (void)_onQueueUpdateInternalTransactionState;
- (void)_saveActiveTransactionsToFile;
- (void)_setupSignalHandler;
- (void)_tearDownSignalHandler;
- (id)activeTransactions;
- (void)addActiveTransaction:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isInTransaction;
- (bool)isTransactionActive:(id)arg1;
- (void)removeActiveTransaction:(id)arg1;

@end
