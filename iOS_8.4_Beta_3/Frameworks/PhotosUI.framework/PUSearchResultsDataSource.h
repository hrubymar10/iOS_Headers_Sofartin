/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsDataSource : NSObject <PUSearchResultsValueDelegate> {
    NSSet *_albumUUIDs;
    PLSearchIndexDateFormatter *_dateFormatter;
    <PUSearchResultsDelegate> *_delegate;
    bool _ignorePastResults;
    unsigned long long _maxGroupedResultsCount;
    PLPhotoLibrary *_photoLibrary;
    PSIQuery *_query;
    unsigned long long _queryTag;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_results;
    PSIDatabase *_searchIndex;
    unsigned long long _uncommittedMaxGroupedResultsCount;
    NSArray *_uncommittedResults;
    unsigned long long _unprocessedSearchResultsCount;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PUSearchResultsDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) PSIDatabase * searchIndex;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchAlbumsWithUUIDs:(id)arg1;
- (id)_fetchAssetsWithUUIDs:(id)arg1;
- (void)_inqBackgroundProcessSearchResults:(id)arg1 withTag:(unsigned long long)arg2 searchString:(id)arg3;
- (void)_inqCancel;
- (bool)_shouldCancel:(unsigned long long)arg1;
- (void)cancel;
- (id)dateFormatter;
- (id)delegate;
- (bool)hasPendingChanges;
- (id)initWithSearchIndex:(id)arg1;
- (void)mergePendingChanges;
- (unsigned long long)numberOfSearchResults;
- (id)searchIndex;
- (bool)searchIsFinished:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;

@end
