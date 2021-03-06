/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsResponse : PBCodable <NSCopying> {
    NSData *_directionsResponseID;
    struct { 
        unsigned int instructionSignFillColor : 1; 
        unsigned int localDistanceUnits : 1; 
        unsigned int isNavigable : 1; 
        unsigned int routeDeviatesFromOriginal : 1; 
    } _has;
    NSMutableArray *_incidentsOffRoutes;
    NSMutableArray *_incidentsOnRoutes;
    int _instructionSignFillColor;
    bool _isNavigable;
    int _localDistanceUnits;
    NSMutableArray *_placeSearchResponses;
    struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    bool _routeDeviatesFromOriginal;
    NSMutableArray *_routes;
    int _status;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _supportedTransportTypes;
}

@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, readonly) bool hasDirectionsResponseID;
@property (nonatomic) bool hasInstructionSignFillColor;
@property (nonatomic) bool hasIsNavigable;
@property (nonatomic) bool hasLocalDistanceUnits;
@property (nonatomic) bool hasRouteDeviatesFromOriginal;
@property (nonatomic, retain) NSMutableArray *incidentsOffRoutes;
@property (nonatomic, retain) NSMutableArray *incidentsOnRoutes;
@property (nonatomic) int instructionSignFillColor;
@property (nonatomic) bool isNavigable;
@property (nonatomic) int localDistanceUnits;
@property (nonatomic, retain) NSMutableArray *placeSearchResponses;
@property (nonatomic, readonly) struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*problemDetails;
@property (nonatomic, readonly) unsigned long long problemDetailsCount;
@property (nonatomic) bool routeDeviatesFromOriginal;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic) int status;
@property (nonatomic, readonly) int*supportedTransportTypes;
@property (nonatomic, readonly) unsigned long long supportedTransportTypesCount;

- (void)addIncidentsOffRoutes:(id)arg1;
- (void)addIncidentsOnRoutes:(id)arg1;
- (void)addPlaceSearchResponse:(id)arg1;
- (void)addProblemDetail:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)addRoute:(id)arg1;
- (void)addSupportedTransportType:(int)arg1;
- (void)clearIncidentsOffRoutes;
- (void)clearIncidentsOnRoutes;
- (void)clearPlaceSearchResponses;
- (void)clearProblemDetails;
- (void)clearRoutes;
- (void)clearSupportedTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (bool)hasDirectionsResponseID;
- (bool)hasInstructionSignFillColor;
- (bool)hasIsNavigable;
- (bool)hasLocalDistanceUnits;
- (bool)hasRouteDeviatesFromOriginal;
- (unsigned long long)hash;
- (id)incidentsOffRoutes;
- (id)incidentsOffRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffRoutesCount;
- (id)incidentsOnRoutes;
- (id)incidentsOnRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnRoutesCount;
- (int)instructionSignFillColor;
- (bool)isEqual:(id)arg1;
- (bool)isNavigable;
- (int)localDistanceUnits;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchResponseAtIndex:(unsigned long long)arg1;
- (id)placeSearchResponses;
- (unsigned long long)placeSearchResponsesCount;
- (struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })problemDetailAtIndex:(unsigned long long)arg1;
- (struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)problemDetails;
- (unsigned long long)problemDetailsCount;
- (bool)readFrom:(id)arg1;
- (id)routeAtIndex:(unsigned long long)arg1;
- (bool)routeDeviatesFromOriginal;
- (id)routes;
- (unsigned long long)routesCount;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setHasInstructionSignFillColor:(bool)arg1;
- (void)setHasIsNavigable:(bool)arg1;
- (void)setHasLocalDistanceUnits:(bool)arg1;
- (void)setHasRouteDeviatesFromOriginal:(bool)arg1;
- (void)setIncidentsOffRoutes:(id)arg1;
- (void)setIncidentsOnRoutes:(id)arg1;
- (void)setInstructionSignFillColor:(int)arg1;
- (void)setIsNavigable:(bool)arg1;
- (void)setLocalDistanceUnits:(int)arg1;
- (void)setPlaceSearchResponses:(id)arg1;
- (void)setProblemDetails:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setRouteDeviatesFromOriginal:(bool)arg1;
- (void)setRoutes:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int)status;
- (int)supportedTransportTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedTransportTypes;
- (unsigned long long)supportedTransportTypesCount;
- (void)writeTo:(id)arg1;

@end
