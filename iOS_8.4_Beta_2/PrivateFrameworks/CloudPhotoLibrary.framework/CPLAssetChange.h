/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAssetChange : CPLItemChange {
    NSDate *_addedDate;
    CPLAdjustments *_adjustments;
    NSDate *_assetDate;
    unsigned long long _assetHDRType;
    unsigned long long _assetSubtype;
    unsigned long long _burstFlags;
    NSString *_burstIdentifier;
    NSString *_caption;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    long long _duration;
    NSString *_extendedDescription;
    bool _favorite;
    bool _hidden;
    NSArray *_keywords;
    NSDate *_lastSharedDate;
    CLLocation *_location;
    NSString *_masterIdentifier;
    NSString *_momentIdentifier;
    NSString *_momentName;
    long long _orientation;
    unsigned long long _originalChoice;
    NSArray *_people;
    NSArray *_resources;
    NSString *_timeZoneName;
    NSNumber *_timeZoneOffset;
}

@property(assign,copy) NSDate * addedDate;
@property(assign,retain) CPLAdjustments * adjustments;
@property(assign,copy) NSDate * assetDate;
@property(assign,readwrite) unsigned long long assetHDRType;
@property(assign,readwrite) unsigned long long assetSubtype;
@property(assign,readwrite) unsigned long long burstFlags;
@property(assign,copy) NSString * burstIdentifier;
@property(assign,copy) NSString * caption;
@property(assign,copy) NSString * collectionIdentifier;
@property(assign,copy) NSString * collectionName;
@property(assign,readwrite) long long duration;
@property(assign,copy) NSString * extendedDescription;
@property(getter=isFavorite,assign,readwrite) bool favorite;
@property(getter=isHidden,assign,readwrite) bool hidden;
@property(assign,copy) NSArray * keywords;
@property(assign,copy) NSDate * lastSharedDate;
@property(assign,retain) CLLocation * location;
@property(assign,copy) NSString * masterIdentifier;
@property(assign,copy) NSString * momentIdentifier;
@property(assign,copy) NSString * momentName;
@property(assign,readwrite) long long orientation;
@property(assign,readwrite) unsigned long long originalChoice;
@property(assign,copy) NSArray * people;
@property(assign,copy) NSArray * resources;
@property(assign,copy) NSString * timeZoneName;
@property(assign,copy) NSNumber * timeZoneOffset;

- (void).cxx_destruct;
- (bool)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id*)arg3;
- (id)addedDate;
- (id)adjustments;
- (id)assetDate;
- (unsigned long long)assetHDRType;
- (unsigned long long)assetSubtype;
- (void)awakeFromStorage;
- (unsigned long long)burstFlags;
- (id)burstIdentifier;
- (id)caption;
- (id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)collectionIdentifier;
- (id)collectionName;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(bool)arg2 usingClientCache:(id)arg3;
- (long long)dequeueOrder;
- (long long)duration;
- (id)extendedDescription;
- (id)identifiersForMapping;
- (id)init;
- (bool)isFavorite;
- (bool)isHidden;
- (id)keywords;
- (id)lastSharedDate;
- (id)location;
- (id)masterIdentifier;
- (id)momentIdentifier;
- (id)momentName;
- (long long)orientation;
- (unsigned long long)originalChoice;
- (id)people;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)proposedCloudIdentifierWithError:(id*)arg1;
- (id)relatedIdentifier;
- (id)resources;
- (void)setAddedDate:(id)arg1;
- (void)setAdjustments:(id)arg1;
- (void)setAssetDate:(id)arg1;
- (void)setAssetHDRType:(unsigned long long)arg1;
- (void)setAssetSubtype:(unsigned long long)arg1;
- (void)setBurstFlags:(unsigned long long)arg1;
- (void)setBurstIdentifier:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setExtendedDescription:(id)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLastSharedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMasterIdentifier:(id)arg1;
- (void)setMomentIdentifier:(id)arg1;
- (void)setMomentName:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOriginalChoice:(unsigned long long)arg1;
- (void)setPeople:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setTimeZoneOffset:(id)arg1;
- (bool)supportsResources;
- (id)timeZoneName;
- (id)timeZoneOffset;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;

@end
