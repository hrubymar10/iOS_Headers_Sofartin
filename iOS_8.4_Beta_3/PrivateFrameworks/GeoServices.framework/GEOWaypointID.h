/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointID : PBCodable <NSCopying> {
    GEOStructuredAddress *_addressHint;
    NSMutableArray *_formattedAddressLineHints;
    struct { 
        unsigned int muid : 1; 
        unsigned int resultProviderId : 1; 
        unsigned int placeTypeHint : 1; 
    } _has;
    GEOLatLng *_locationHint;
    unsigned long long _muid;
    NSString *_placeNameHint;
    int _placeTypeHint;
    unsigned long long _resultProviderId;
}

@property (nonatomic, retain) GEOStructuredAddress *addressHint;
@property (nonatomic, retain) NSMutableArray *formattedAddressLineHints;
@property (nonatomic, readonly) bool hasAddressHint;
@property (nonatomic, readonly) bool hasLocationHint;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlaceNameHint;
@property (nonatomic) bool hasPlaceTypeHint;
@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, retain) GEOLatLng *locationHint;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *placeNameHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) unsigned long long resultProviderId;

- (void)addFormattedAddressLineHint:(id)arg1;
- (id)addressHint;
- (void)clearFormattedAddressLineHints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (id)formattedAddressLineHints;
- (unsigned long long)formattedAddressLineHintsCount;
- (bool)hasAddressHint;
- (bool)hasLocationHint;
- (bool)hasMuid;
- (bool)hasPlaceNameHint;
- (bool)hasPlaceTypeHint;
- (bool)hasResultProviderId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (int)placeTypeHint;
- (bool)readFrom:(id)arg1;
- (unsigned long long)resultProviderId;
- (void)setAddressHint:(id)arg1;
- (void)setFormattedAddressLineHints:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasPlaceTypeHint:(bool)arg1;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setPlaceTypeHint:(int)arg1;
- (void)setResultProviderId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
