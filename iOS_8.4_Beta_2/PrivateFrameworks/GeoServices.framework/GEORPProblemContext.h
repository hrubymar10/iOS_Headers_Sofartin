/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemContext : PBCodable <NSCopying> {
    NSMutableArray *_auxiliaryControls;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int originatingAuxiliaryControlIndex : 1; 
        unsigned int pinType : 1; 
    } _has;
    NSString *_lastSearchString;
    GEORPMapLocation *_mapLocation;
    GEOPlace *_originalPlace;
    unsigned long long _originatingAuxiliaryControlIndex;
    int _pinType;
    GEOPDPlace *_place;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionId;
    NSString *_tileStateLog;
    NSMutableArray *_visibleTileSets;
}

@property(assign,retain) NSMutableArray * auxiliaryControls;
@property(assign,retain) NSMutableArray * directionsRequests;
@property(assign,retain) NSMutableArray * directionsResponses;
@property(assign,readonly) bool hasLastSearchString;
@property(assign,readonly) bool hasMapLocation;
@property(assign,readonly) bool hasOriginalPlace;
@property(assign,readwrite) bool hasOriginatingAuxiliaryControlIndex;
@property(assign,readwrite) bool hasPinType;
@property(assign,readonly) bool hasPlace;
@property(assign,readwrite) bool hasSessionId;
@property(assign,readonly) bool hasTileStateLog;
@property(assign,retain) NSString * lastSearchString;
@property(assign,retain) GEORPMapLocation * mapLocation;
@property(assign,retain) GEOPlace * originalPlace;
@property(assign,readwrite) unsigned long long originatingAuxiliaryControlIndex;
@property(assign,readwrite) int pinType;
@property(assign,retain) GEOPDPlace * place;
@property(assign,readwrite) struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property(assign,retain) NSString * tileStateLog;
@property(assign,retain) NSMutableArray * visibleTileSets;

- (void)addAuxiliaryControl:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)addVisibleTileSet:(id)arg1;
- (id)auxiliaryControlAtIndex:(unsigned long long)arg1;
- (id)auxiliaryControls;
- (unsigned long long)auxiliaryControlsCount;
- (void)clearAuxiliaryControls;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearVisibleTileSets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (id)directionsRequests;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (id)directionsResponses;
- (unsigned long long)directionsResponsesCount;
- (bool)hasLastSearchString;
- (bool)hasMapLocation;
- (bool)hasOriginalPlace;
- (bool)hasOriginatingAuxiliaryControlIndex;
- (bool)hasPinType;
- (bool)hasPlace;
- (bool)hasSessionId;
- (bool)hasTileStateLog;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastSearchString;
- (id)mapLocation;
- (void)mergeFrom:(id)arg1;
- (id)originalPlace;
- (unsigned long long)originatingAuxiliaryControlIndex;
- (int)pinType;
- (id)place;
- (bool)readFrom:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setAuxiliaryControls:(id)arg1;
- (void)setDirectionsRequests:(id)arg1;
- (void)setDirectionsResponses:(id)arg1;
- (void)setHasOriginatingAuxiliaryControlIndex:(bool)arg1;
- (void)setHasPinType:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setLastSearchString:(id)arg1;
- (void)setMapLocation:(id)arg1;
- (void)setOriginalPlace:(id)arg1;
- (void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1;
- (void)setPinType:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTileStateLog:(id)arg1;
- (void)setVisibleTileSets:(id)arg1;
- (id)tileStateLog;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;
- (id)visibleTileSets;
- (unsigned long long)visibleTileSetsCount;
- (void)writeTo:(id)arg1;

@end
