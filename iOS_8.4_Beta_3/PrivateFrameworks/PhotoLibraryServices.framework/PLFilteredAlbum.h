/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilteredAlbum : NSObject <PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache, PLUserEditableAlbumProtocol> {
    struct NSObject { Class x1; } *_backingAlbum;
    bool _backingAlbumSupportsCloudShared;
    bool _backingAlbumSupportsEdits;
    NSArray *_filterParameters;
    NSMutableIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSMutableOrderedSet *_weak_assets;
    int filter;
    bool isObservingContextChanges;
    NSPredicate *predicate;
}

@property(assign,readwrite) NSMutableOrderedSet * _assets;
@property(assign,readonly) unsigned long long approximateCount;
@property(assign,retain) NSOrderedSet * assets;
@property(assign,readonly) unsigned long long assetsCount;
@property(assign,retain) NSObject<PLAlbumProtocol> * backingAlbum;
@property(assign,readwrite) unsigned long long batchSize;
@property(assign,copy) <NSObject><NSCopying> * cachedIndexMapState;
@property(assign,readonly) bool canContributeToCloudSharedAlbum;
@property(assign,readonly) bool canShowAvalancheStacks;
@property(assign,readonly) bool canShowComments;
@property(assign,retain) NSOrderedSet * cloudAlbumSubscriberRecords;
@property(assign,retain) NSDate * cloudCreationDate;
@property(assign,retain) NSDate * cloudFirstRecentBatchDate;
@property(assign,retain) NSString * cloudGUID;
@property(assign,retain) NSDate * cloudLastContributionDate;
@property(assign,retain) NSDate * cloudLastInterestingChangeDate;
@property(assign,retain) NSDictionary * cloudMetadata;
@property(assign,retain) NSNumber * cloudMultipleContributorsEnabled;
@property(assign,retain) NSNumber * cloudMultipleContributorsEnabledLocal;
@property(assign,readwrite) bool cloudNotificationsEnabled;
@property(assign,retain) NSString * cloudOwnerEmail;
@property(assign,retain) NSString * cloudOwnerFirstName;
@property(assign,retain) NSString * cloudOwnerFullName;
@property(assign,retain) NSString * cloudOwnerHashedPersonID;
@property(assign,retain) NSString * cloudOwnerLastName;
@property(assign,retain) NSString * cloudPersonID;
@property(assign,retain) NSNumber * cloudPublicURLEnabled;
@property(assign,retain) NSNumber * cloudPublicURLEnabledLocal;
@property(assign,readonly) int cloudRelationshipStateLocalValue;
@property(assign,readonly) int cloudRelationshipStateValue;
@property(assign,retain) NSDate * cloudSubscriptionDate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSDate * endDate;
@property(assign,readwrite) int filter;
@property(assign,readonly) NSArray * filterParameters;
@property(assign,copy) NSIndexSet * filteredIndexes;
@property(assign,retain) NSURL * groupURL;
@property(assign,readwrite) bool hasUnseenContentBoolValue;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * importSessionID;
@property(assign,retain) PLIndexMapper * indexMapper;
@property(assign,retain) NSOrderedSet * invitationRecords;
@property(assign,readonly) bool isCameraAlbum;
@property(assign,readonly) bool isCloudSharedAlbum;
@property(assign,readonly) bool isEmpty;
@property(assign,readonly) bool isFamilyCloudSharedAlbum;
@property(assign,readonly) bool isFolder;
@property(assign,readonly) bool isInTrash;
@property(assign,readonly) bool isLibrary;
@property(assign,readonly) bool isMultipleContributorCloudSharedAlbum;
@property(assign,readwrite) bool isObservingContextChanges;
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
@property(assign,retain) NSString * localizedSharedWithLabel;
@property(assign,copy) NSString * localizedTitle;
@property(assign,retain) NSMutableOrderedSet * mutableAssets;
@property(assign,copy) NSString * name;
@property(assign,readwrite) int pendingItemsCount;
@property(assign,readwrite) int pendingItemsType;
@property(assign,readonly) unsigned long long photosCount;
@property(assign,retain) UIImage * posterImage;
@property(assign,retain) NSPredicate * predicate;
@property(assign,retain) NSString * publicURL;
@property(assign,retain) PLManagedAsset * secondaryKeyAsset;
@property(assign,readonly) bool shouldDeleteWhenEmpty;
@property(assign,retain) NSDictionary * slideshowSettings;
@property(assign,copy) id sortingComparator;
@property(assign,retain) NSDate * startDate;
@property(assign,readonly) Class superclass;
@property(assign,retain) PLManagedAsset * tertiaryKeyAsset;
@property(assign,retain) NSString * title;
@property(assign,retain) NSNumber * unseenAssetsCount;
@property(assign,readwrite) unsigned long long unseenAssetsCountIntegerValue;
@property(assign,retain) NSMutableOrderedSet * userEditableAssets;
@property(assign,retain) NSString * uuid;
@property(assign,readonly) unsigned long long videosCount;

+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 intersectFilter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject { Class x1; }*)unfilteredAlbum:(struct NSObject { Class x1; }*)arg1;

- (id)_assets;
- (id)_cloudSharedBackingAlbum;
- (void)_commonInitWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (id)_editableBackingAlbum;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (struct NSObject { Class x1; }*)backingAlbum;
- (void)backingContextDidChange:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)cachedIndexMapState;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)cloudAlbumSubscriberRecords;
- (id)cloudCreationDate;
- (id)cloudFirstRecentBatchDate;
- (id)cloudGUID;
- (id)cloudLastContributionDate;
- (id)cloudLastInterestingChangeDate;
- (id)cloudMetadata;
- (id)cloudMultipleContributorsEnabled;
- (id)cloudMultipleContributorsEnabledLocal;
- (bool)cloudNotificationsEnabled;
- (id)cloudOwnerDisplayNameIncludingEmail:(bool)arg1 allowsEmail:(bool)arg2;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerHashedPersonID;
- (id)cloudOwnerLastName;
- (id)cloudPersonID;
- (id)cloudPublicURLEnabled;
- (id)cloudPublicURLEnabledLocal;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (id)cloudSubscriptionDate;
- (unsigned long long)count;
- (unsigned long long)countOfFilteredAssets;
- (id)currentStateForChange;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (id)description;
- (int)filter;
- (id)filterParameters;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)filteredIndexes;
- (void)getFilteredAssets:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(bool*)arg3;
- (id)groupURL;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (unsigned long long)indexInFilteredAssetsOfObject:(id)arg1;
- (id)indexMapper;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 parameters:(id)arg3;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned long long)arg2;
- (id)invitationRecords;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isObservingContextChanges;
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
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (id)localizedSharedWithLabel;
- (id)localizedTitle;
- (bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (id)mutableAssets;
- (id)name;
- (id)objectInFilteredAssetsAtIndex:(unsigned long long)arg1;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned long long)photosCount;
- (id)posterImage;
- (id)predicate;
- (id)publicURL;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned long long)arg1;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setBackingAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setCloudCreationDate:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setCloudLastContributionDate:(id)arg1;
- (void)setCloudLastInterestingChangeDate:(id)arg1;
- (void)setCloudMetadata:(id)arg1;
- (void)setCloudMultipleContributorsEnabled:(id)arg1;
- (void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
- (void)setCloudNotificationsEnabled:(bool)arg1;
- (void)setCloudOwnerEmail:(id)arg1;
- (void)setCloudOwnerFirstName:(id)arg1;
- (void)setCloudOwnerFullName:(id)arg1;
- (void)setCloudOwnerHashedPersonID:(id)arg1;
- (void)setCloudOwnerLastName:(id)arg1;
- (void)setCloudPersonID:(id)arg1;
- (void)setCloudPublicURLEnabled:(id)arg1;
- (void)setCloudPublicURLEnabledLocal:(id)arg1;
- (void)setCloudSubscriptionDate:(id)arg1;
- (void)setFilter:(int)arg1;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setInvitationRecords:(id)arg1;
- (void)setIsObservingContextChanges:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPublicURL:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setUnseenAssetsCount:(id)arg1;
- (void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1;
- (void)set_assets:(id)arg1;
- (bool)shouldDeleteWhenEmpty;
- (bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)unseenAssetsCount;
- (unsigned long long)unseenAssetsCountIntegerValue;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (id)userEditableAssets;
- (id)uuid;
- (unsigned long long)videosCount;

@end