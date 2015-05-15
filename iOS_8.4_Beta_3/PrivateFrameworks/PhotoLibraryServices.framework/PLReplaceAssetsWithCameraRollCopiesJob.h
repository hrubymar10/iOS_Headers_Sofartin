/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob {
    PLManagedAlbum *_album;
    NSArray *_assets;
    PLPhotoLibrary *_photoLibrary;
}

@property(assign,retain) PLManagedAlbum * album;
@property(assign,copy) NSArray * assets;
@property(assign,retain) NSPersistentStoreCoordinator * coordinator;
@property(assign,retain) PLManagedObjectContext * managedObjectContext;
@property(assign,retain) PLPhotoLibrary * photoLibrary;

+ (void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2;

- (id)_cameraRollAssetDerivedFromAsset:(id)arg1;
- (id)album;
- (id)assets;
- (id)coordinator;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)managedObjectContext;
- (id)photoLibrary;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbum:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end