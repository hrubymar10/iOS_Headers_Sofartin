/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBusiness : PBCodable <NSCopying> {
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    struct { 
        unsigned int uID : 1; 
        unsigned int isClosed : 1; 
    } _has;
    bool _isClosed;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSMutableArray *_photos;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    unsigned long long _uID;
    NSString *_uRL;
}

@property(assign,retain) NSMutableArray * attributeKeyValues;
@property(assign,retain) NSMutableArray * attributions;
@property(assign,retain) NSMutableArray * categorys;
@property(assign,retain) GEOLatLng * center;
@property(getter=_goodForKids,assign,readonly) bool goodForKids;
@property(getter=_hasAnyAmenities,assign,readonly) bool hasAnyAmenities;
@property(assign,readonly) bool hasCenter;
@property(getter=_hasDelivery,assign,readonly) bool hasDelivery;
@property(getter=_hasDeliveryAmenity,assign,readonly) bool hasDeliveryAmenity;
@property(getter=_hasGoodForKidsAmenity,assign,readonly) bool hasGoodForKidsAmenity;
@property(assign,readwrite) bool hasIsClosed;
@property(getter=_hasMUID,assign,readonly) bool hasMUID;
@property(assign,readonly) bool hasMapsURL;
@property(assign,readonly) bool hasName;
@property(getter=_hasOperatingHours,assign,readonly) bool hasOperatingHours;
@property(assign,readonly) bool hasPhoneticName;
@property(getter=_hasPriceRange,assign,readonly) bool hasPriceRange;
@property(getter=_hasTakesReservationsAmenity,assign,readonly) bool hasTakesReservationsAmenity;
@property(assign,readonly) bool hasTelephone;
@property(assign,readwrite) bool hasUID;
@property(assign,readonly) bool hasURL;
@property(getter=_hasUserRatingScore,assign,readonly) bool hasUserRatingScore;
@property(assign,readwrite) bool isClosed;
@property(assign,retain) NSMutableArray * localizedCategories;
@property(assign,retain) NSString * mapsURL;
@property(getter=_muid,assign,readonly) unsigned long long muid;
@property(assign,retain) NSString * name;
@property(getter=_normalizedUserRatingScore,assign,readonly) float normalizedUserRatingScore;
@property(assign,retain) NSMutableArray * openHours;
@property(assign,retain) NSString * phoneticName;
@property(assign,retain) NSMutableArray * photos;
@property(getter=_priceRange,assign,readonly) unsigned int priceRange;
@property(assign,retain) NSMutableArray * ratings;
@property(getter=_sampleSizeForUserRatingScore,assign,readonly) unsigned int sampleSizeForUserRatingScore;
@property(assign,retain) NSMutableArray * sources;
@property(assign,retain) NSMutableArray * starRatings;
@property(getter=_takesReservations,assign,readonly) bool takesReservations;
@property(assign,retain) NSString * telephone;
@property(assign,readwrite) unsigned long long uID;
@property(assign,retain) NSString * uRL;
@property(getter=_isYelp,assign,readonly) bool yelp;

- (id)_allCategoriesForType:(unsigned int)arg1;
- (id)_attributionMapForResponse:(id)arg1;
- (bool)_booleanValueForAmenity:(id)arg1;
- (id)_currentOperatingHoursForTimeZone:(id)arg1;
- (id)_firstPhotoOfSize:(int)arg1;
- (bool)_goodForKids;
- (bool)_hasAmenitiesContainingKeys:(id)arg1;
- (bool)_hasAnyAmenities;
- (bool)_hasDelivery;
- (bool)_hasDeliveryAmenity;
- (bool)_hasGoodForKidsAmenity;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasMUID;
- (bool)_hasOperatingHours;
- (bool)_hasPriceRange;
- (bool)_hasTakesReservationsAmenity;
- (bool)_hasUserRatingScore;
- (bool)_isYelp;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (unsigned long long)_muid;
- (float)_normalizedUserRatingScore;
- (id)_photosOfSize:(int)arg1;
- (unsigned int)_priceRange;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_stringForAmenity:(id)arg1;
- (bool)_takesReservations;
- (void)addAttributeKeyValue:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)addLocalizedCategories:(id)arg1;
- (void)addOpenHours:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)addRating:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addStarRating:(id)arg1;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;
- (id)attributeKeyValues;
- (unsigned long long)attributeKeyValuesCount;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (id)categorys;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearAttributeKeyValues;
- (void)clearAttributions;
- (void)clearCategorys;
- (void)clearLocalizedCategories;
- (void)clearOpenHours;
- (void)clearPhotos;
- (void)clearRatings;
- (void)clearSources;
- (void)clearStarRatings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasIsClosed;
- (bool)hasMapsURL;
- (bool)hasName;
- (bool)hasPhoneticName;
- (bool)hasTelephone;
- (bool)hasUID;
- (bool)hasURL;
- (unsigned long long)hash;
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6;
- (bool)isClosed;
- (bool)isEqual:(id)arg1;
- (id)localizedCategories;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategoriesCount;
- (id)mapsURL;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)openHours;
- (id)openHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)openHoursCount;
- (id)phoneticName;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photos;
- (unsigned long long)photosCount;
- (id)ratingAtIndex:(unsigned long long)arg1;
- (id)ratings;
- (unsigned long long)ratingsCount;
- (bool)readFrom:(id)arg1;
- (void)setAttributeKeyValues:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setCategorys:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasIsClosed:(bool)arg1;
- (void)setHasUID:(bool)arg1;
- (void)setIsClosed:(bool)arg1;
- (void)setLocalizedCategories:(id)arg1;
- (void)setMapsURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpenHours:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setPhotos:(id)arg1;
- (void)setRatings:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setStarRatings:(id)arg1;
- (void)setTelephone:(id)arg1;
- (void)setUID:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (id)sourceAtIndex:(unsigned long long)arg1;
- (id)sources;
- (unsigned long long)sourcesCount;
- (id)starRatingAtIndex:(unsigned long long)arg1;
- (id)starRatings;
- (unsigned long long)starRatingsCount;
- (id)telephone;
- (unsigned long long)uID;
- (id)uRL;
- (void)writeTo:(id)arg1;

@end
