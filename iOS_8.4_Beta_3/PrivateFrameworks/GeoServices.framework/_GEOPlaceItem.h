/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceItem : NSObject <GEOMapItemPrivate> {
    NSMapTable *_attributionInfoMap;
    GEOPlace *_place;
    GEOPlaceResult *_placeResult;
}

@property (getter=_additionalPlaceInfos, nonatomic, readonly) NSArray *additionalPlaceInfos;
@property (nonatomic, readonly) NSDictionary *addressDictionary;
@property (getter=_areaInMeters, nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (getter=_attribution, nonatomic, readonly) GEOMapItemPlaceAttribution *attribution;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_businessURL, nonatomic, readonly) NSString *businessURL;
@property (nonatomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (getter=_clientAttributes, nonatomic, readonly) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic, readonly) int contactAddressType;
@property (nonatomic, readonly) bool contactIsMe;
@property (nonatomic, readonly) NSString *contactName;
@property (nonatomic, readonly) NSString *contactSpokenName;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegionOrNil;
@property (getter=isDisputed, nonatomic, readonly) bool disputed;
@property (nonatomic, readonly) NSData *encodedData;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventName;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncement;
@property (nonatomic, readonly) GEOAddress *geoAddress;
@property (nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (getter=_goodForKids, nonatomic, readonly) bool goodForKids;
@property (getter=_hasAnyAmenities, nonatomic, readonly) bool hasAnyAmenities;
@property (getter=_hasAreaInMeters, nonatomic, readonly) bool hasAreaInMeters;
@property (getter=_hasBusinessClaim, nonatomic, readonly) bool hasBusinessClaim;
@property (getter=_hasCurrentOperatingHours, nonatomic, readonly) bool hasCurrentOperatingHours;
@property (getter=_hasDelivery, nonatomic, readonly) bool hasDelivery;
@property (getter=_hasDeliveryAmenity, nonatomic, readonly) bool hasDeliveryAmenity;
@property (getter=_hasFlyover, nonatomic, readonly) bool hasFlyover;
@property (getter=_hasFlyoverAnnouncementMessage, nonatomic, readonly) bool hasFlyoverAnnouncement;
@property (getter=_hasGoodForKidsAmenity, nonatomic, readonly) bool hasGoodForKidsAmenity;
@property (getter=_hasMUID, nonatomic, readonly) bool hasMUID;
@property (getter=_hasOperatingHours, nonatomic, readonly) bool hasOperatingHours;
@property (getter=_hasPriceRange, nonatomic, readonly) bool hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) bool hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) bool hasResultProviderID;
@property (getter=_hasTakesReservationsAmenity, nonatomic, readonly) bool hasTakesReservationsAmenity;
@property (getter=_hasTelephone, nonatomic, readonly) bool hasTelephone;
@property (getter=_hasUserRatingScore, nonatomic, readonly) bool hasUserRatingScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEventAllDay;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) bool needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned long long openingHoursOptions;
@property (getter=_operatingHours, nonatomic, readonly) NSArray *operatingHours;
@property (getter=_photosAttribution, nonatomic, readonly) GEOMapItemPhotosAttribution *photosAttribution;
@property (getter=_place, nonatomic, readonly) GEOPlace *place;
@property (getter=_placeAsData, nonatomic, readonly) NSData *placeAsData;
@property (getter=_placeData, nonatomic, readonly) GEOPDPlace *placeData;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (getter=_placeType, nonatomic, readonly) int placeType;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_priceRange, nonatomic, readonly) unsigned int priceRange;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_reviewsAttribution, nonatomic, readonly) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_roadAccessPoints, nonatomic, readonly) NSArray *roadAccessPoints;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (getter=_takesReservations, nonatomic, readonly) bool takesReservations;
@property (getter=_telephone, nonatomic, readonly) NSString *telephone;
@property (nonatomic, readonly) NSString *timezone;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;

- (id)_additionalPlaceInfos;
- (double)_areaInMeters;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_asPlaceInfo;
- (id)_attribution;
- (id)_attributionForInfo:(id)arg1;
- (id)_attributionInfoForDisplayRequirement:(int)arg1;
- (id)_businessClaim;
- (id)_businessURL;
- (id)_clientAttributes;
- (unsigned long long)_customIconID;
- (id)_disambiguationName;
- (id)_displayNameForRequirement:(int)arg1;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (bool)_goodForKids;
- (bool)_hasAnyAmenities;
- (bool)_hasAreaInMeters;
- (bool)_hasBusinessClaim;
- (bool)_hasCurrentOperatingHours;
- (bool)_hasDelivery;
- (bool)_hasDeliveryAmenity;
- (bool)_hasFlyover;
- (bool)_hasFlyoverAnnouncementMessage;
- (bool)_hasGoodForKidsAmenity;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasMUID;
- (bool)_hasMoreForRequirement:(int)arg1;
- (bool)_hasOperatingHours;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasResultProviderID;
- (bool)_hasTakesReservationsAmenity;
- (bool)_hasTelephone;
- (bool)_hasTravelTimeForTransportType:(int)arg1;
- (bool)_hasUserRatingScore;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_logoPathForRequirement:(int)arg1 scale:(double)arg2;
- (id)_mapItemByStrippingOptionalData;
- (unsigned long long)_muid;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (id)_operatingHours;
- (id)_photosAttribution;
- (id)_place;
- (id)_placeAsData;
- (id)_placeData;
- (id)_placeDataAsData;
- (int)_placeType;
- (id)_poiSurveyURLString;
- (unsigned int)_priceRange;
- (id)_providerURL;
- (int)_recommendedTransportType;
- (int)_resultProviderID;
- (id)_reviewsAttribution;
- (id)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (bool)_showAddForRequirement:(int)arg1;
- (bool)_showAttributionForRequirement:(int)arg1;
- (id)_spokenAddressForLocale:(id)arg1;
- (id)_styleAttributes;
- (bool)_takesReservations;
- (id)_telephone;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_urlForPhotoWithUID:(id)arg1;
- (id)_urlForReviewWithUID:(id)arg1;
- (id)_urlForType:(int)arg1 withUID:(id)arg2 writeAReview:(bool)arg3 isYelp:(bool)arg4;
- (id)_urlForWritingAReview;
- (id)_vendorID;
- (id)_webURL;
- (id)_yelpID;
- (id)addressDictionary;
- (id)areasOfInterest;
- (struct { double x1; double x2; })centerCoordinate;
- (int)contactAddressType;
- (bool)contactIsMe;
- (id)contactName;
- (id)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (id)displayMapRegion;
- (id)displayMapRegionOrNil;
- (id)encodedData;
- (id)eventDate;
- (id)eventName;
- (id)geoAddress;
- (id)geoFenceMapRegion;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlaceResult:(id)arg1 response:(id)arg2;
- (bool)isDisputed;
- (bool)isEventAllDay;
- (bool)isValid;
- (id)name;
- (id)spokenNameForLocale:(id)arg1;
- (id)timezone;

@end
