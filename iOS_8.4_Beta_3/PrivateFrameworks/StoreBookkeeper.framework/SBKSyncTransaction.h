/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncTransaction : SBKTransaction {
    long long _conflictDetectionType;
    NSString *_domain;
    NSArray *_keysToDelete;
    NSArray *_keysToUpdate;
    NSString *_syncAnchor;
    NSURL *_syncRequestURL;
    <SBKSyncTransactionProcessing> *_transactionProcessor;
    long long _type;
}

@property(assign,readonly) long long conflictDetectionType;
@property(assign,readonly) NSArray * keysToDelete;
@property(assign,readonly) NSArray * keysToUpdate;
@property(assign,copy) NSString * syncAnchor;
@property(assign,readonly) NSURL * syncRequestURL;
@property(assign,readwrite) <SBKSyncTransactionProcessing> * transactionProcessor;
@property(assign,readonly) long long type;

- (void).cxx_destruct;
- (void)_validateTransactionProcessor:(id)arg1;
- (id)clampsKey;
- (id)conflictDetectionOrdinalForKey:(id)arg1;
- (long long)conflictDetectionType;
- (id)description;
- (id)domain;
- (id)initWithStoreBagContext:(id)arg1 syncAnchor:(id)arg2 keysToUpdate:(id)arg3 keysToDelete:(id)arg4 conflictDetectionType:(long long)arg5;
- (id)initWithSyncRequestURL:(id)arg1 domain:(id)arg2 syncAnchor:(id)arg3 keysToUpdate:(id)arg4 keysToDelete:(id)arg5 conflictDetectionType:(long long)arg6;
- (id)keyValuePairForUpdatedKey:(id)arg1;
- (id)keysToDelete;
- (id)keysToUpdate;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id)arg2;
- (id)requestURL;
- (void)setTransactionProcessor:(id)arg1;
- (id)syncAnchor;
- (id)syncRequestURL;
- (id)transactionProcessor;
- (long long)type;

@end
