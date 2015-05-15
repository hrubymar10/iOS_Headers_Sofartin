/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSuggestedSearch : NSObject <PUSearchResult> {
    unsigned long long __approximateCount;
    id _albumUUID;
    <PUSuggestedSearchDelegate> *_delegate;
    NSString *_displaySubtitle;
    NSString *_displayTitle;
    bool _hasPendingChanges;
    PSIQuery *_query;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_searchString;
    unsigned long long _taskId;
    NSMutableArray *_uncommittedUUIDs;
    NSArray *_uuids;
}

@property(setter=_setApproximateCount:,assign,readwrite) unsigned long long _approximateCount;
@property(assign,retain) id albumUUID;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PUSuggestedSearchDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * displaySubtitle;
@property(assign,copy) NSString * displayTitle;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isEmpty;
@property(assign,copy) NSString * searchString;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSArray * uuids;

- (void).cxx_destruct;
- (unsigned long long)_approximateCount;
- (void)_inqAddAssetUUIDsFromFetchRequest:(id)arg1;
- (bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (void)_inqMergePendingChanges;
- (void)_inqRestart;
- (unsigned long long)_inqTaskId;
- (bool)_isTargetGroupResult:(id)arg1;
- (void)_mergePendingChanges;
- (void)_setAlbumUUID:(id)arg1;
- (void)_setApproximateCount:(unsigned long long)arg1;
- (void)_setDisplayTitle:(id)arg1;
- (void)_setSearchString:(id)arg1;
- (id)albumUUID;
- (void)cancel;
- (id)delegate;
- (id)displaySubtitle;
- (id)displayTitle;
- (void)fetchRemainingUUIDs:(id)arg1;
- (bool)hasPendingChanges;
- (id)init;
- (id)initWithDisplayTitle:(id)arg1;
- (id)initWithDisplayTitle:(id)arg1 uuids:(id)arg2;
- (bool)isEmpty;
- (void)restart;
- (id)searchString;
- (void)setDelegate:(id)arg1;
- (id)uuids;

@end
