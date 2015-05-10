/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private> {
    PLMomentNameInfo *_cachedNameInfo;
    bool _loadedNameInfo;
    bool didRegisteredWithUserInterfaceContext;
    bool isRegisteredForChanges;
}

@property(assign,readonly) unsigned long long approximateCount;
@property(assign,retain) CLLocation * approximateLocation;
@property(assign,retain) NSData * approximateLocationData;
@property(assign,retain) NSOrderedSet * assets;
@property(assign,readonly) unsigned long long assetsCount;
@property(assign,readwrite) int cachedCount;
@property(assign,readwrite) int cachedPhotosCount;
@property(assign,readwrite) int cachedVideosCount;
@property(assign,readonly) bool canShowAvalancheStacks;
@property(assign,readonly) bool canShowComments;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool didRegisteredWithUserInterfaceContext;
@property(assign,retain) NSDate * endDate;
@property(assign,readwrite) short generationType;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isEmpty;
@property(assign,readwrite) bool isRegisteredForChanges;
@property(assign,retain) PLManagedAsset * keyAsset;
@property(assign,copy) NSArray * localizedLocationNames;
@property(assign,copy) NSString * localizedTitle;
@property(assign,retain) PLMomentList * megaMomentList;
@property(assign,retain) PLMomentLibrary * momentLibrary;
@property(assign,readonly) unsigned long long photosCount;
@property(assign,retain) NSDate * representativeDate;
@property(assign,retain) NSData * reverseLocationData;
@property(assign,readwrite) bool reverseLocationDataIsValid;
@property(assign,retain) PLManagedAsset * secondaryKeyAsset;
@property(assign,retain) NSDate * startDate;
@property(assign,readonly) Class superclass;
@property(assign,retain) PLManagedAsset * tertiaryKeyAsset;
@property(assign,retain) NSString * title;
@property(assign,retain) NSString * title2;
@property(assign,retain) NSString * title3;
@property(assign,retain) NSObject<NSCopying> * uniqueObjectID;
@property(assign,retain) NSArray * userTitles;
@property(assign,retain) NSString * uuid;
@property(assign,readonly) unsigned long long videosCount;
@property(assign,retain) PLMomentList * yearMomentList;

+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(bool)arg2 error:(id*)arg3;
+ (id)allMomentsInLibrary:(id)arg1;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2;

- (void)_updateCachedNameInfoIfNeeded;
- (bool)_validateForInsertOrUpdate:(id*)arg1;
- (void)addAssets:(id)arg1;
- (void)addAssetsObject:(id)arg1;
- (unsigned long long)approximateCount;
- (id)approximateLocation;
- (unsigned long long)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)delete;
- (id)diagnosticInformation;
- (bool)didRegisteredWithUserInterfaceContext;
- (void)didTurnIntoFault;
- (id)groupURL;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)invalidateNameInfo;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isRegisteredForChanges;
- (id)keyAsset;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)mutableAssets;
- (unsigned long long)photosCount;
- (struct CGImage { }*)posterImage;
- (void)registerForChanges;
- (void)removeAssetData:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeAssetsObject:(id)arg1;
- (void)removeObjectFromAssetsAtIndex:(unsigned long long)arg1;
- (void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)replaceObjectInAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setApproximateLocation:(id)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(bool)arg1;
- (void)setIsRegisteredForChanges:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setUserTitles:(id)arg1;
- (bool)supportsDiagnosticInformation;
- (id)tertiaryKeyAsset;
- (id)uniqueObjectID;
- (void)unregisterForChanges;
- (id)userTitles;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (unsigned long long)videosCount;
- (void)willSave;
- (void)willTurnIntoFault;

@end
