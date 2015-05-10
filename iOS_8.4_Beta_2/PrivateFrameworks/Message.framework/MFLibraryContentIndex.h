/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryContentIndex : NSObject {
    _MFContentIndexWrapper *_contentIndexWrapper;
    <MFLibraryContentIndexDataSource> *_dataSource;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSObject<OS_dispatch_queue> *_foregroundPriorityQueue;
    NSObject<OS_dispatch_group> *_group;
    NSString *_indexName;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    int _invalidated;
    unsigned int _isForeground;
    NSString *_path;
    NSMutableArray *_pendingIndexableItems;
    NSMutableIndexSet *_pendingRemovals;
    unsigned int _processPendingChangesScheduled;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _refreshing;
    _MFLibraryContentIndexResultsCache *_resultsCache;
    unsigned int _shouldReopen;
    double _startNonIdle;
    long long _state;
    unsigned long long _throttledBatchSize;
    NSObject<OS_dispatch_queue> *_utilityPriorityQueue;
}

- (unsigned int)_addItem:(id)arg1 toContentIndex:(struct __CXIndex { }*)arg2;
- (id)_consumeBatchOfSize:(unsigned long long)arg1;
- (id)_copyContentIndex;
- (id)_copyContentIndex_indexingQueue;
- (struct __CXQuery { }*)_createQueryFromCriterion:(id)arg1 mailboxIDs:(id)arg2 contentIndex:(struct __CXIndex { }*)arg3;
- (struct __CXQueryNode { }*)_createQueryNodeFromCriterion:(id)arg1;
- (struct __CXQueryNode { }*)_createQueryNodeFromMailboxIDs:(id)arg1;
- (void)_dataSourceAssignTransactionIdentifier:(unsigned int)arg1 forDocumentIdentifiers:(id)arg2;
- (void)_dataSourceIndexItemsNeedingRefreshWithLimit:(unsigned long long)arg1;
- (void)_dataSourceInvalidateItemsGreaterThanTransactionId:(unsigned int)arg1;
- (id)_indexFullPath;
- (void)_invalidateResultsCache;
- (void)_markInvalidated;
- (void)_processIndexingBatch:(struct __CXIndex { }*)arg1;
- (void)_processRefreshRequest;
- (void)_processRemovals:(struct __CXIndex { }*)arg1;
- (void)_transitionToNextState;
- (void)_transitionToNextStatePaused:(bool)arg1;
- (void)_updateDataSourceQueueTargetIsForeground:(bool)arg1;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)dealloc;
- (id)documentIdentifiersMatchingCriterion:(id)arg1 mailboxIDs:(id)arg2;
- (void)forceReopen;
- (void)indexItems:(id)arg1;
- (id)initWithPath:(id)arg1 indexName:(id)arg2 dataSource:(id)arg3;
- (void)invalidateAndWait;
- (bool)isSearchable;
- (void)refresh;
- (void)removeItemsWithDocumentIdentifiers:(id)arg1;
- (void)resume;
- (void)scheduleProcessPendingItems;
- (void)setTargetQueue:(id)arg1;
- (void)suspend;
- (void)wait;

@end
