/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPUserSearchInput : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOLatLng *_coordinate;
    struct { 
        unsigned int origin : 1; 
    } _has;
    int _origin;
    GEOPDPlace *_place;
    NSString *_searchString;
    NSString *_singleLineAddressString;
}

@property(assign,retain) GEOPDAutocompleteEntry * autocompleteEntry;
@property(assign,retain) GEOLatLng * coordinate;
@property(assign,readonly) bool hasAutocompleteEntry;
@property(assign,readonly) bool hasCoordinate;
@property(assign,readwrite) bool hasOrigin;
@property(assign,readonly) bool hasPlace;
@property(assign,readonly) bool hasSearchString;
@property(assign,readonly) bool hasSingleLineAddressString;
@property(assign,readwrite) int origin;
@property(assign,retain) GEOPDPlace * place;
@property(assign,retain) NSString * searchString;
@property(assign,retain) NSString * singleLineAddressString;

- (id)autocompleteEntry;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (bool)hasCoordinate;
- (bool)hasOrigin;
- (bool)hasPlace;
- (bool)hasSearchString;
- (bool)hasSingleLineAddressString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)place;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSingleLineAddressString:(id)arg1;
- (id)singleLineAddressString;
- (void)writeTo:(id)arg1;

@end
