/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _additionalPlaceTypes;
    struct { 
        unsigned int splitIntoClusters : 1; 
    } _has;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
    bool _splitIntoClusters;
}

@property(assign,readonly) int* additionalPlaceTypes;
@property(assign,readonly) unsigned long long additionalPlaceTypesCount;
@property(assign,readwrite) bool hasSplitIntoClusters;
@property(assign,retain) NSMutableArray * locations;
@property(assign,retain) NSMutableArray * serviceTags;
@property(assign,readwrite) bool splitIntoClusters;

- (void)addAdditionalPlaceType:(int)arg1;
- (void)addLocation:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (int*)additionalPlaceTypes;
- (unsigned long long)additionalPlaceTypesCount;
- (void)clearAdditionalPlaceTypes;
- (void)clearLocations;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSplitIntoClusters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasSplitIntoClusters:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSplitIntoClusters:(bool)arg1;
- (bool)splitIntoClusters;
- (void)writeTo:(id)arg1;

@end
