/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)_changedObjects;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)albumList;
- (bool)countDidChange;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;
- (id)object;
- (bool)shouldReload;

@end
