/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLDerivedNotification, PLIndexMapperDataSource> {
    PLFilteredAlbum *_album;
    PLAssetContainerChangeNotification *_backingNotification;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSIndexSet *_oldFilteredIndexes;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,copy) NSIndexSet * filteredIndexes;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) PLIndexMapper * indexMapper;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSIndexSet * updatedFilteredIndexes;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)_changedObjects;
- (id)_diffDescription;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)album;
- (bool)countDidChange;
- (void)dealloc;
- (id)description;
- (id)filteredIndexes;
- (id)indexMapper;
- (id)init;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (bool)keyAssetDidChange;
- (id)object;
- (void)setFilteredIndexes:(id)arg1;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (bool)shouldReload;
- (bool)titleDidChange;
- (id)updatedFilteredIndexes;

@end
