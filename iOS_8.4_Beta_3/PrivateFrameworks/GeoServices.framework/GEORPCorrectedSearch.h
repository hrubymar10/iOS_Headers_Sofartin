/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {
    unsigned int _correctedSearchResultIndex;
    struct { 
        unsigned int correctedSearchResultIndex : 1; 
        unsigned int originalSearchResultIndex : 1; 
    } _has;
    unsigned int _originalSearchResultIndex;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
}

@property(assign,readwrite) unsigned int correctedSearchResultIndex;
@property(assign,readwrite) bool hasCorrectedSearchResultIndex;
@property(assign,readwrite) bool hasOriginalSearchResultIndex;
@property(assign,readonly) bool hasPlaceRequest;
@property(assign,readonly) bool hasPlaceResponse;
@property(assign,readonly) bool hasPlaceSearchRequest;
@property(assign,readonly) bool hasPlaceSearchResponse;
@property(assign,readonly) bool hasPreferredSearchDisplayLocation;
@property(assign,readwrite) unsigned int originalSearchResultIndex;
@property(assign,retain) GEOPDPlaceRequest * placeRequest;
@property(assign,retain) GEOPDPlaceResponse * placeResponse;
@property(assign,retain) GEOPlaceSearchRequest * placeSearchRequest;
@property(assign,retain) GEOPlaceSearchResponse * placeSearchResponse;
@property(assign,retain) NSString * preferredSearchDisplayLocation;

- (bool)containsReportableData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)correctedSearchResultIndex;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedSearchResultIndex;
- (bool)hasOriginalSearchResultIndex;
- (bool)hasPlaceRequest;
- (bool)hasPlaceResponse;
- (bool)hasPlaceSearchRequest;
- (bool)hasPlaceSearchResponse;
- (bool)hasPreferredSearchDisplayLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)originalSearchResultIndex;
- (id)placeRequest;
- (id)placeResponse;
- (id)placeSearchRequest;
- (id)placeSearchResponse;
- (id)preferredSearchDisplayLocation;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedSearchResultIndex:(unsigned int)arg1;
- (void)setHasCorrectedSearchResultIndex:(bool)arg1;
- (void)setHasOriginalSearchResultIndex:(bool)arg1;
- (void)setOriginalSearchResultIndex:(unsigned int)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setPlaceSearchResponse:(id)arg1;
- (void)setPreferredSearchDisplayLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
