/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QueryResultSet : NSObject <NSCopying> {
    ML3QueryResultSet_BackingStore *_backingStore;
    NSObject<OS_dispatch_queue> *_fixedPriorityQueue;
    long long _localRevision;
    ML3Query *_query;
    NSObject<OS_dispatch_queue> *_queue;
    long long _revision;
    bool _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long localRevision;
@property (nonatomic, readonly) ML3Query *query;
@property (nonatomic, readonly) long long revision;

- (void).cxx_destruct;
- (id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(bool)arg2;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; }*)arg1 changedPIDs:(struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > { struct unique_ptr<std::__1::__hash_node<long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > > { struct __hash_node<long long, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<long long, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<long long, void *> *> { struct __hash_node<long long, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::hash<long long> > { unsigned long long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::equal_to<long long> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg2;
- (void)_onQueueAddUpdateFinishedBlock:(id)arg1;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(bool)arg1;
- (bool)_updateToLibraryCurrentRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)entityLimit;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (void)enumerateSectionHeadersUsingBlock:(id)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (long long)localRevision;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (id)query;
- (long long)revision;
- (id)sectionIndexTitles;
- (bool)updateToLibraryCurrentRevision;

@end
