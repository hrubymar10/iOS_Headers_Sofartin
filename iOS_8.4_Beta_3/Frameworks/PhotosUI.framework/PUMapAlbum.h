/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAlbum : NSObject <PLAlbumProtocol> {
    <PUMapAnnotationAnimatable> *_annotation;
    NSMutableOrderedSet *_assets;
    unsigned long long _photosCount;
    bool _setKindCounts;
    unsigned long long _videosCount;
}

@property (nonatomic, readonly, retain) <PUMapAnnotationAnimatable> *annotation;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly) bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSURL *groupURL;
@property (nonatomic) bool hasUnseenContentBoolValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, readonly) bool isCameraAlbum;
@property (nonatomic, readonly) bool isCloudSharedAlbum;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isInTrash;
@property (nonatomic, readonly) bool isLibrary;
@property (nonatomic, readonly) bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) bool isPanoramasAlbum;
@property (nonatomic, readonly) bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) bool isPhotoStreamAlbum;
@property (nonatomic, readonly) bool isRecentlyAddedAlbum;
@property (nonatomic, readonly) bool isStandInAlbum;
@property (nonatomic, readonly) bool isUserLibraryAlbum;
@property (nonatomic, readonly) bool isWallpaperAlbum;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, retain) NSNumber *kind;
@property (nonatomic, readonly) int kindValue;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *mutableAssets;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly, retain) UIImage *posterImage;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) bool shouldDeleteWhenEmpty;
@property (nonatomic, retain) NSDictionary *slideshowSettings;
@property (nonatomic, readonly, copy) id sortingComparator;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;

- (void).cxx_destruct;
- (void)_calculateKindCounts;
- (id)annotation;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (void)batchFetchAssets:(id)arg1;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)endDate;
- (id)groupURL;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (id)initWithAnnotation:(id)arg1;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isRecentlyAddedAlbum;
- (bool)isStandInAlbum;
- (bool)isUserLibraryAlbum;
- (bool)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)mutableAssets;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned long long)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (id)secondaryKeyAsset;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (bool)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)startDate;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)uuid;
- (unsigned long long)videosCount;

@end
