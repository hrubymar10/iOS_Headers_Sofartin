/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedSectionInfo : NSObject <PLAssetContainer> {
    NSString *_albumTitle;
    PLCloudFeedEntry *_cloudFeedEntry;
    NSDate *_date;
    NSIndexSet *_excludedAssetIndexes;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    PLManagedAsset *_keyAsset;
    bool _loaded;
    long long _numberOfItems;
    PLManagedAsset *_secondaryKeyAsset;
    long long _sectionType;
    <PLCloudSharedAlbumProtocol> *_sharedAlbum;
    bool _shouldBeVisibleWhenEmpty;
    PLManagedAsset *_tertiaryKeyAsset;
    NSString *_transientIdentifier;
}

@property (nonatomic, copy) NSString *albumTitle;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (nonatomic, readonly) PLCloudFeedEntry *cloudFeedEntry;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, copy) NSIndexSet *excludedAssetIndexes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (getter=isLoaded, nonatomic) bool loaded;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic) long long numberOfItems;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, retain) <PLCloudSharedAlbumProtocol> *sharedAlbum;
@property (nonatomic) bool shouldBeVisibleWhenEmpty;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, copy) NSString *transientIdentifier;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;

+ (void)beginCachingSharedAlbumsByGUIDs;
+ (void)endCachingSharedAlbumsByGUIDs;
+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;

- (void).cxx_destruct;
- (id)albumTitle;
- (unsigned long long)approximateCount;
- (bool)areAllAssetsLiked;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)cloudFeedEntry;
- (id)commentForItemAtIndex:(long long)arg1;
- (bool)containsAsset:(id)arg1;
- (id)date;
- (id)excludedAssetIndexes;
- (void)getCommentCount:(out unsigned long long*)arg1 likeCount:(out unsigned long long*)arg2;
- (void)getPhotoCount:(out unsigned long long*)arg1 videoCount:(out unsigned long long*)arg2;
- (bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)indexOfItemWithComment:(id)arg1;
- (id)initWithCloudFeedEntry:(id)arg1;
- (id)invitationRecord;
- (bool)isEmpty;
- (bool)isLoaded;
- (id)keyAsset;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (long long)numberOfItems;
- (unsigned long long)photosCount;
- (void)reload;
- (id)secondaryKeyAsset;
- (long long)sectionType;
- (void)setAlbumTitle:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setExcludedAssetIndexes:(id)arg1;
- (void)setInvitationRecord:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setNumberOfItems:(long long)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSharedAlbum:(id)arg1;
- (void)setShouldBeVisibleWhenEmpty:(bool)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)sharedAlbum;
- (id)sharedAlbumWithGUID:(id)arg1;
- (bool)shouldBeVisibleWhenEmpty;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)transientIdentifier;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (id)uuid;
- (unsigned long long)videosCount;

@end
