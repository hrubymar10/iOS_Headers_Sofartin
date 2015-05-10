/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBulletinsTestDaemonJob : PLDaemonJob {
    NSArray *_addedAssetUUIDs;
    NSString *_albumUUID;
    long long _bulletinType;
    PLPhotoLibrary *_photoLibrary;
}

@property(assign,retain) NSArray * addedAssetUUIDs;
@property(assign,retain) NSString * albumUUID;
@property(assign,readwrite) long long bulletinType;
@property(assign,retain) PLPhotoLibrary * photoLibrary;

+ (void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2;
+ (void)notifyCommentWasReceivedForAssets:(id)arg1;
+ (void)notifyInvitationWasReceivedForAlbum:(id)arg1;
+ (void)notifyLikeWasReceivedForAssets:(id)arg1;

- (id)addedAssetUUIDs;
- (id)albumUUID;
- (long long)bulletinType;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)photoLibrary;
- (void)run;
- (void)runDaemonSide;
- (void)setAddedAssetUUIDs:(id)arg1;
- (void)setAlbumUUID:(id)arg1;
- (void)setBulletinType:(long long)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
