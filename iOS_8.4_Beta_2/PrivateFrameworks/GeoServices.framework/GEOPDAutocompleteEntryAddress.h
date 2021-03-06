/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {
    GEOLatLng *_center;
    struct { 
        unsigned int opaqueGeoId : 1; 
    } _has;
    unsigned long long _opaqueGeoId;
    PBUnknownFields *_unknownFields;
}

@property(assign,retain) GEOLatLng * center;
@property(assign,readonly) bool hasCenter;
@property(assign,readwrite) bool hasOpaqueGeoId;
@property(assign,readwrite) unsigned long long opaqueGeoId;
@property(assign,readonly) PBUnknownFields * unknownFields;

- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasOpaqueGeoId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)opaqueGeoId;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasOpaqueGeoId:(bool)arg1;
- (void)setOpaqueGeoId:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
