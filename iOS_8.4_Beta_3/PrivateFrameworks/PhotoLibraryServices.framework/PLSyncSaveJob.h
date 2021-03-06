/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSyncSaveJob : NSObject {
    NSDate *_cleanupBeforeDate;
    bool _cleanupSyncState;
    id _finishedBlock;
    NSSet *albumURIs;
    NSDate *creationDate;
    NSArray *facesInfo;
    bool isSyncComplete;
    bool isVideo;
    CLLocation *location;
    NSDate *modificationDate;
    NSURL *originalAssetURL;
    NSString *originalFileName;
    NSNumber *sortToken;
    NSString *uuid;
}

@property (nonatomic, copy) NSSet *albumURIs;
@property (nonatomic, copy) NSDate *cleanupBeforeDate;
@property (nonatomic) bool cleanupSyncState;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) NSArray *facesInfo;
@property (nonatomic, copy) id finishedBlock;
@property (nonatomic) bool isSyncComplete;
@property (nonatomic) bool isVideo;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, retain) NSURL *originalAssetURL;
@property (nonatomic, retain) NSString *originalFileName;
@property (nonatomic, retain) NSNumber *sortToken;
@property (nonatomic, copy) NSString *uuid;

- (id)albumURIs;
- (id)cleanupBeforeDate;
- (bool)cleanupSyncState;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)facesInfo;
- (id)finishedBlock;
- (id)initFromSerializedData:(id)arg1;
- (bool)isSyncComplete;
- (bool)isVideo;
- (id)location;
- (id)modificationDate;
- (id)originalAssetURL;
- (id)originalFileName;
- (void)processFacesWithBlock:(id)arg1;
- (id)serializedData;
- (void)setAlbumURIs:(id)arg1;
- (void)setCleanupBeforeDate:(id)arg1;
- (void)setCleanupSyncState:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFacesInfo:(id)arg1;
- (void)setFinishedBlock:(id)arg1;
- (void)setIsSyncComplete:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setOriginalAssetURL:(id)arg1;
- (void)setOriginalFileName:(id)arg1;
- (void)setSortToken:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)sortToken;
- (id)uuid;

@end
