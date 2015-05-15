/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _additionalPlaceTypes;
    GEOAddress *_address;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _businessIDs;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    bool _excludeAddressInResults;
    NSMutableArray *_filterByBusinessCategorys;
    long long _geoId;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int searchContextSubstring : 1; 
        unsigned int geoId : 1; 
        unsigned int intersectingGeoId : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int timestamp : 1; 
        unsigned int businessSortOrder : 1; 
        unsigned int knownAccuracy : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int maxBusinessReviews : 1; 
        unsigned int maxResults : 1; 
        unsigned int placeTypeLimit : 1; 
        unsigned int searchSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int transportTypeForTravelTimes : 1; 
        unsigned int excludeAddressInResults : 1; 
        unsigned int includeBusinessCategories : 1; 
        unsigned int includeBusinessRating : 1; 
        unsigned int includeEntryPoints : 1; 
        unsigned int includeFeatureSets : 1; 
        unsigned int includeGeoId : 1; 
        unsigned int includeMatchedToken : 1; 
        unsigned int includeNameForForwardGeocodingResults : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeQuads : 1; 
        unsigned int includeRevgeoRequestTemplate : 1; 
        unsigned int includeSpokenNames : 1; 
        unsigned int includeStatusCodeInfo : 1; 
        unsigned int includeSuggestionsOnly : 1; 
        unsigned int includeTravelDistance : 1; 
        unsigned int includeTravelTime : 1; 
        unsigned int includeUnmatchedStrings : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int isStrictGeocoding : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    } _has;
    bool _includeBusinessCategories;
    bool _includeBusinessRating;
    bool _includeEntryPoints;
    bool _includeFeatureSets;
    bool _includeGeoId;
    bool _includeMatchedToken;
    bool _includeNameForForwardGeocodingResults;
    bool _includePhonetics;
    bool _includeQuads;
    bool _includeRevgeoRequestTemplate;
    bool _includeSpokenNames;
    bool _includeStatusCodeInfo;
    bool _includeSuggestionsOnly;
    bool _includeTravelDistance;
    bool _includeTravelTime;
    bool _includeUnmatchedStrings;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    unsigned long long _intersectingGeoId;
    bool _isFromAPI;
    bool _isStrictGeocoding;
    bool _isStrictMapRegion;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    int _localSearchProviderID;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _optionalSuppressionReasons;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    NSString *_search;
    NSString *_searchContext;
    struct { 
        int _beginIndex; 
        int _endIndex; 
        int _stringType; 
    } _searchContextSubstring;
    GEOLatLng *_searchLocation;
    int _searchSource;
    struct { int x1; int x2; int x3; } *_searchSubstrings;
    unsigned long long _searchSubstringsCount;
    unsigned long long _searchSubstringsSpace;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    bool _structuredSearch;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    bool _suppressResultsRequiringAttribution;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    int _transportTypeForTravelTimes;
    NSData *_zilchPoints;
}

@property(assign,readonly) int* additionalPlaceTypes;
@property(assign,readonly) unsigned long long additionalPlaceTypesCount;
@property(assign,retain) GEOAddress * address;
@property(assign,readonly) unsigned long long* businessIDs;
@property(assign,readonly) unsigned long long businessIDsCount;
@property(assign,retain) GEOBusinessOptions * businessOptions;
@property(assign,readwrite) int businessSortOrder;
@property(assign,retain) GEOClientCapabilities * clientCapabilities;
@property(assign,retain) NSString * deviceCountryCode;
@property(assign,retain) GEOLatLng * deviceLocation;
@property(assign,retain) NSString * deviceTimeZone;
@property(assign,readwrite) bool excludeAddressInResults;
@property(assign,retain) NSMutableArray * filterByBusinessCategorys;
@property(assign,readwrite) long long geoId;
@property(assign,readonly) bool hasAddress;
@property(assign,readonly) bool hasBusinessOptions;
@property(assign,readwrite) bool hasBusinessSortOrder;
@property(assign,readonly) bool hasClientCapabilities;
@property(assign,readonly) bool hasDeviceCountryCode;
@property(assign,readonly) bool hasDeviceLocation;
@property(assign,readonly) bool hasDeviceTimeZone;
@property(assign,readwrite) bool hasExcludeAddressInResults;
@property(assign,readwrite) bool hasGeoId;
@property(assign,readwrite) bool hasIncludeBusinessCategories;
@property(assign,readwrite) bool hasIncludeBusinessRating;
@property(assign,readwrite) bool hasIncludeEntryPoints;
@property(assign,readwrite) bool hasIncludeFeatureSets;
@property(assign,readwrite) bool hasIncludeGeoId;
@property(assign,readwrite) bool hasIncludeMatchedToken;
@property(assign,readwrite) bool hasIncludeNameForForwardGeocodingResults;
@property(assign,readwrite) bool hasIncludePhonetics;
@property(assign,readwrite) bool hasIncludeQuads;
@property(assign,readwrite) bool hasIncludeRevgeoRequestTemplate;
@property(assign,readwrite) bool hasIncludeSpokenNames;
@property(assign,readwrite) bool hasIncludeStatusCodeInfo;
@property(assign,readwrite) bool hasIncludeSuggestionsOnly;
@property(assign,readwrite) bool hasIncludeTravelDistance;
@property(assign,readwrite) bool hasIncludeTravelTime;
@property(assign,readwrite) bool hasIncludeUnmatchedStrings;
@property(assign,readonly) bool hasIndexFilter;
@property(assign,readonly) bool hasInputLanguage;
@property(assign,readwrite) bool hasIntersectingGeoId;
@property(assign,readwrite) bool hasIsFromAPI;
@property(assign,readwrite) bool hasIsStrictGeocoding;
@property(assign,readwrite) bool hasIsStrictMapRegion;
@property(assign,readwrite) bool hasKnownAccuracy;
@property(assign,readonly) bool hasKnownLocation;
@property(assign,readwrite) bool hasLocalSearchProviderID;
@property(assign,readonly) bool hasLocation;
@property(assign,readonly) bool hasMapRegion;
@property(assign,readwrite) bool hasMaxBusinessReviews;
@property(assign,readwrite) bool hasMaxResults;
@property(assign,readonly) bool hasPhoneticLocaleIdentifier;
@property(assign,readwrite) bool hasPlaceTypeLimit;
@property(assign,readonly) bool hasPreserveFields;
@property(assign,readonly) bool hasSearch;
@property(assign,readonly) bool hasSearchContext;
@property(assign,readwrite) bool hasSearchContextSubstring;
@property(assign,readonly) bool hasSearchLocation;
@property(assign,readwrite) bool hasSearchSource;
@property(assign,readwrite) bool hasSequenceNumber;
@property(assign,readwrite) bool hasSessionGUID;
@property(assign,readwrite) bool hasStructuredSearch;
@property(assign,readonly) bool hasSuggestionsOptions;
@property(assign,readonly) bool hasSuggestionsPrefix;
@property(assign,readwrite) bool hasSuppressResultsRequiringAttribution;
@property(assign,readwrite) bool hasTimeSinceMapEnteredForeground;
@property(assign,readwrite) bool hasTimeSinceMapViewportChanged;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTransportTypeForTravelTimes;
@property(assign,readonly) bool hasZilchPoints;
@property(assign,readwrite) bool includeBusinessCategories;
@property(assign,readwrite) bool includeBusinessRating;
@property(assign,readwrite) bool includeEntryPoints;
@property(assign,readwrite) bool includeFeatureSets;
@property(assign,readwrite) bool includeGeoId;
@property(assign,readwrite) bool includeMatchedToken;
@property(assign,readwrite) bool includeNameForForwardGeocodingResults;
@property(assign,readwrite) bool includePhonetics;
@property(assign,readwrite) bool includeQuads;
@property(assign,readwrite) bool includeRevgeoRequestTemplate;
@property(assign,readwrite) bool includeSpokenNames;
@property(assign,readwrite) bool includeStatusCodeInfo;
@property(assign,readwrite) bool includeSuggestionsOnly;
@property(assign,readwrite) bool includeTravelDistance;
@property(assign,readwrite) bool includeTravelTime;
@property(assign,readwrite) bool includeUnmatchedStrings;
@property(assign,retain) GEOIndexQueryNode * indexFilter;
@property(assign,retain) NSString * inputLanguage;
@property(assign,readwrite) unsigned long long intersectingGeoId;
@property(assign,readwrite) bool isFromAPI;
@property(assign,readwrite) bool isStrictGeocoding;
@property(assign,readwrite) bool isStrictMapRegion;
@property(assign,readwrite) int knownAccuracy;
@property(assign,retain) GEOLatLng * knownLocation;
@property(assign,readwrite) int localSearchProviderID;
@property(assign,retain) GEOLocation * location;
@property(assign,retain) GEOMapRegion * mapRegion;
@property(assign,readwrite) int maxBusinessReviews;
@property(assign,readwrite) int maxResults;
@property(assign,readonly) int* optionalSuppressionReasons;
@property(assign,readonly) unsigned long long optionalSuppressionReasonsCount;
@property(assign,retain) NSString * phoneticLocaleIdentifier;
@property(assign,readwrite) int placeTypeLimit;
@property(assign,retain) GEOAddress * preserveFields;
@property(assign,retain) NSString * search;
@property(assign,retain) NSString * searchContext;
@property(assign,readwrite) struct { int x1; int x2; int x3; } searchContextSubstring;
@property(assign,retain) GEOLatLng * searchLocation;
@property(assign,readwrite) int searchSource;
@property(assign,readonly) struct { int x1; int x2; int x3; }* searchSubstrings;
@property(assign,readonly) unsigned long long searchSubstringsCount;
@property(assign,readwrite) int sequenceNumber;
@property(assign,retain) NSMutableArray * serviceTags;
@property(assign,readwrite) struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property(assign,readwrite) bool structuredSearch;
@property(assign,retain) GEOSuggestionsOptions * suggestionsOptions;
@property(assign,retain) NSString * suggestionsPrefix;
@property(assign,readwrite) bool suppressResultsRequiringAttribution;
@property(assign,readwrite) double timeSinceMapEnteredForeground;
@property(assign,readwrite) double timeSinceMapViewportChanged;
@property(assign,readwrite) double timestamp;
@property(assign,readwrite) int transportTypeForTravelTimes;
@property(assign,retain) NSData * zilchPoints;

- (void)addAdditionalPlaceType:(int)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)addOptionalSuppressionReason:(int)arg1;
- (void)addSearchSubstring:(struct { int x1; int x2; int x3; })arg1;
- (void)addServiceTag:(id)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (int*)additionalPlaceTypes;
- (unsigned long long)additionalPlaceTypesCount;
- (id)address;
- (unsigned long long)businessIDAtIndex:(unsigned long long)arg1;
- (unsigned long long*)businessIDs;
- (unsigned long long)businessIDsCount;
- (id)businessOptions;
- (int)businessSortOrder;
- (void)clearAdditionalPlaceTypes;
- (void)clearBusinessIDs;
- (void)clearFilterByBusinessCategorys;
- (void)clearOptionalSuppressionReasons;
- (void)clearSearchSubstrings;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceCountryCode;
- (id)deviceLocation;
- (id)deviceTimeZone;
- (id)dictionaryRepresentation;
- (bool)excludeAddressInResults;
- (id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1;
- (id)filterByBusinessCategorys;
- (unsigned long long)filterByBusinessCategorysCount;
- (long long)geoId;
- (bool)hasAddress;
- (bool)hasBusinessOptions;
- (bool)hasBusinessSortOrder;
- (bool)hasClientCapabilities;
- (bool)hasDeviceCountryCode;
- (bool)hasDeviceLocation;
- (bool)hasDeviceTimeZone;
- (bool)hasExcludeAddressInResults;
- (bool)hasGeoId;
- (bool)hasIncludeBusinessCategories;
- (bool)hasIncludeBusinessRating;
- (bool)hasIncludeEntryPoints;
- (bool)hasIncludeFeatureSets;
- (bool)hasIncludeGeoId;
- (bool)hasIncludeMatchedToken;
- (bool)hasIncludeNameForForwardGeocodingResults;
- (bool)hasIncludePhonetics;
- (bool)hasIncludeQuads;
- (bool)hasIncludeRevgeoRequestTemplate;
- (bool)hasIncludeSpokenNames;
- (bool)hasIncludeStatusCodeInfo;
- (bool)hasIncludeSuggestionsOnly;
- (bool)hasIncludeTravelDistance;
- (bool)hasIncludeTravelTime;
- (bool)hasIncludeUnmatchedStrings;
- (bool)hasIndexFilter;
- (bool)hasInputLanguage;
- (bool)hasIntersectingGeoId;
- (bool)hasIsFromAPI;
- (bool)hasIsStrictGeocoding;
- (bool)hasIsStrictMapRegion;
- (bool)hasKnownAccuracy;
- (bool)hasKnownLocation;
- (bool)hasLocalSearchProviderID;
- (bool)hasLocation;
- (bool)hasMapRegion;
- (bool)hasMaxBusinessReviews;
- (bool)hasMaxResults;
- (bool)hasPhoneticLocaleIdentifier;
- (bool)hasPlaceTypeLimit;
- (bool)hasPreserveFields;
- (bool)hasSearch;
- (bool)hasSearchContext;
- (bool)hasSearchContextSubstring;
- (bool)hasSearchLocation;
- (bool)hasSearchSource;
- (bool)hasSequenceNumber;
- (bool)hasSessionGUID;
- (bool)hasStructuredSearch;
- (bool)hasSuggestionsOptions;
- (bool)hasSuggestionsPrefix;
- (bool)hasSuppressResultsRequiringAttribution;
- (bool)hasTimeSinceMapEnteredForeground;
- (bool)hasTimeSinceMapViewportChanged;
- (bool)hasTimestamp;
- (bool)hasTransportTypeForTravelTimes;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (bool)includeBusinessCategories;
- (bool)includeBusinessRating;
- (bool)includeEntryPoints;
- (bool)includeFeatureSets;
- (bool)includeGeoId;
- (bool)includeMatchedToken;
- (bool)includeNameForForwardGeocodingResults;
- (bool)includePhonetics;
- (bool)includeQuads;
- (bool)includeRevgeoRequestTemplate;
- (bool)includeSpokenNames;
- (bool)includeStatusCodeInfo;
- (bool)includeSuggestionsOnly;
- (bool)includeTravelDistance;
- (bool)includeTravelTime;
- (bool)includeUnmatchedStrings;
- (id)indexFilter;
- (id)initWithTraits:(id)arg1;
- (id)initWithTraits:(id)arg1 includeEntryPoints:(bool)arg2;
- (id)initWithTraits:(id)arg1 maxResults:(int)arg2;
- (id)inputLanguage;
- (unsigned long long)intersectingGeoId;
- (bool)isEqual:(id)arg1;
- (bool)isFromAPI;
- (bool)isStrictGeocoding;
- (bool)isStrictMapRegion;
- (int)knownAccuracy;
- (id)knownLocation;
- (int)localSearchProviderID;
- (id)location;
- (id)mapRegion;
- (int)maxBusinessReviews;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1;
- (int*)optionalSuppressionReasons;
- (unsigned long long)optionalSuppressionReasonsCount;
- (id)phoneticLocaleIdentifier;
- (int)placeTypeLimit;
- (id)preserveFields;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)search;
- (id)searchContext;
- (struct { int x1; int x2; int x3; })searchContextSubstring;
- (id)searchLocation;
- (int)searchSource;
- (struct { int x1; int x2; int x3; })searchSubstringAtIndex:(unsigned long long)arg1;
- (struct { int x1; int x2; int x3; }*)searchSubstrings;
- (unsigned long long)searchSubstringsCount;
- (int)sequenceNumber;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAddress:(id)arg1;
- (void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setBusinessOptions:(id)arg1;
- (void)setBusinessSortOrder:(int)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceTimeZone:(id)arg1;
- (void)setExcludeAddressInResults:(bool)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (void)setGeoId:(long long)arg1;
- (void)setHasBusinessSortOrder:(bool)arg1;
- (void)setHasExcludeAddressInResults:(bool)arg1;
- (void)setHasGeoId:(bool)arg1;
- (void)setHasIncludeBusinessCategories:(bool)arg1;
- (void)setHasIncludeBusinessRating:(bool)arg1;
- (void)setHasIncludeEntryPoints:(bool)arg1;
- (void)setHasIncludeFeatureSets:(bool)arg1;
- (void)setHasIncludeGeoId:(bool)arg1;
- (void)setHasIncludeMatchedToken:(bool)arg1;
- (void)setHasIncludeNameForForwardGeocodingResults:(bool)arg1;
- (void)setHasIncludePhonetics:(bool)arg1;
- (void)setHasIncludeQuads:(bool)arg1;
- (void)setHasIncludeRevgeoRequestTemplate:(bool)arg1;
- (void)setHasIncludeSpokenNames:(bool)arg1;
- (void)setHasIncludeStatusCodeInfo:(bool)arg1;
- (void)setHasIncludeSuggestionsOnly:(bool)arg1;
- (void)setHasIncludeTravelDistance:(bool)arg1;
- (void)setHasIncludeTravelTime:(bool)arg1;
- (void)setHasIncludeUnmatchedStrings:(bool)arg1;
- (void)setHasIntersectingGeoId:(bool)arg1;
- (void)setHasIsFromAPI:(bool)arg1;
- (void)setHasIsStrictGeocoding:(bool)arg1;
- (void)setHasIsStrictMapRegion:(bool)arg1;
- (void)setHasKnownAccuracy:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasMaxBusinessReviews:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasPlaceTypeLimit:(bool)arg1;
- (void)setHasSearchContextSubstring:(bool)arg1;
- (void)setHasSearchSource:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionGUID:(bool)arg1;
- (void)setHasStructuredSearch:(bool)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(bool)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setHasTimeSinceMapViewportChanged:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportTypeForTravelTimes:(bool)arg1;
- (void)setIncludeBusinessCategories:(bool)arg1;
- (void)setIncludeBusinessRating:(bool)arg1;
- (void)setIncludeEntryPoints:(bool)arg1;
- (void)setIncludeFeatureSets:(bool)arg1;
- (void)setIncludeGeoId:(bool)arg1;
- (void)setIncludeMatchedToken:(bool)arg1;
- (void)setIncludeNameForForwardGeocodingResults:(bool)arg1;
- (void)setIncludePhonetics:(bool)arg1;
- (void)setIncludeQuads:(bool)arg1;
- (void)setIncludeRevgeoRequestTemplate:(bool)arg1;
- (void)setIncludeSpokenNames:(bool)arg1;
- (void)setIncludeStatusCodeInfo:(bool)arg1;
- (void)setIncludeSuggestionsOnly:(bool)arg1;
- (void)setIncludeTravelDistance:(bool)arg1;
- (void)setIncludeTravelTime:(bool)arg1;
- (void)setIncludeUnmatchedStrings:(bool)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setIntersectingGeoId:(unsigned long long)arg1;
- (void)setIsFromAPI:(bool)arg1;
- (void)setIsStrictGeocoding:(bool)arg1;
- (void)setIsStrictMapRegion:(bool)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (void)setKnownLocation:(id)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMaxBusinessReviews:(int)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setPlaceTypeLimit:(int)arg1;
- (void)setPreserveFields:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)setSearchContextSubstring:(struct { int x1; int x2; int x3; })arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchSource:(int)arg1;
- (void)setSearchSubstrings:(struct { int x1; int x2; int x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setSequenceNumber:(int)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStructuredSearch:(bool)arg1;
- (void)setSuggestionsOptions:(id)arg1;
- (void)setSuggestionsPrefix:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(bool)arg1;
- (void)setTimeSinceMapEnteredForeground:(double)arg1;
- (void)setTimeSinceMapViewportChanged:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTransportTypeForTravelTimes:(int)arg1;
- (void)setZilchPoints:(id)arg1;
- (bool)structuredSearch;
- (id)suggestionsOptions;
- (id)suggestionsPrefix;
- (bool)suppressResultsRequiringAttribution;
- (double)timeSinceMapEnteredForeground;
- (double)timeSinceMapViewportChanged;
- (double)timestamp;
- (int)transportTypeForTravelTimes;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
