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

@property(assign,retain) <PUMapAnnotationAnimatable> * annotation;
@property(assign,readonly) unsigned long long approximateCount;
@property(assign,retain) NSOrderedSet * assets;
@property(assign,readonly) unsigned long long assetsCount;
@property(assign,readwrite) unsigned long long batchSize;
@property(assign,readonly) bool canContributeToCloudSharedAlbum;
@property(assign,readonly) bool canShowAvalancheStacks;
@property(assign,readonly) bool canShowComments;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSDate * endDate;
@property(assign,retain) NSURL * groupURL;
@property(assign,readwrite) bool hasUnseenContentBoolValue;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * importSessionID;
@property(assign,readonly) bool isCameraAlbum;
@property(assign,readonly) bool isCloudSharedAlbum;
@property(assign,readonly) bool isEmpty;
@property(assign,readonly) bool isFamilyCloudSharedAlbum;
@property(assign,readonly) bool isFolder;
@property(assign,readonly) bool isInTrash;
@property(assign,readonly) bool isLibrary;
@property(assign,readonly) bool isMultipleContributorCloudSharedAlbum;
@property(assign,readonly) bool isOwnedCloudSharedAlbum;
@property(assign,readonly) bool isPanoramasAlbum;
@property(assign,readonly) bool isPendingPhotoStreamAlbum;
@property(assign,readonly) bool isPhotoStreamAlbum;
@property(assign,readonly) bool isRecentlyAddedAlbum;
@property(assign,readonly) bool isStandInAlbum;
@property(assign,readonly) bool isUserLibraryAlbum;
@property(assign,readonly) bool isWallpaperAlbum;
@property(assign,retain) PLManagedAsset * keyAsset;
@property(assign,retain) NSNumber * kind;
@property(assign,readonly) int kindValue;
@property(assign,copy) NSArray * localizedLocationNames;
@property(assign,copy) NSString * localizedTitle;
@property(assign,retain) NSMutableOrderedSet * mutableAssets;
@property(assign,copy) NSString * name;
@property(assign,readwrite) int pendingItemsCount;
@property(assign,readwrite) int pendingItemsType;
@property(assign,readonly) unsigned long long photosCount;
@property(assign,retain) UIImage * posterImage;
@property(assign,retain) PLManagedAsset * secondaryKeyAsset;
@property(assign,readonly) bool shouldDeleteWhenEmpty;
@property(assign,retain) NSDictionary * slideshowSettings;
@property(assign,copy) id sortingComparator;
@property(assign,retain) NSDate * startDate;
@property(assign,readonly) Class superclass;
@property(assign,retain) PLManagedAsset * tertiaryKeyAsset;
@property(assign,retain) NSString * title;
@property(assign,retain) NSString * uuid;
@property(assign,readonly) unsigned long long videosCount;

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