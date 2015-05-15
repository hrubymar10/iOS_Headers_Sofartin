/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {
    GEOClientCapabilities *_clientCapabilities;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int includeBetterRouteSuggestion : 1; 
    } _has;
    bool _includeBetterRouteSuggestion;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
}

@property (nonatomic, retain) GEOClientCapabilities *clientCapabilities;
@property (nonatomic, retain) GEOLocation *currentUserLocation;
@property (nonatomic, retain) NSMutableArray *destinationWaypointTypeds;
@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasCurrentUserLocation;
@property (nonatomic, readonly) bool hasDirectionsResponseID;
@property (nonatomic) bool hasIncludeBetterRouteSuggestion;
@property (nonatomic, readonly) bool hasRouteAttributes;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool includeBetterRouteSuggestion;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic, retain) NSMutableArray *serviceTags;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } sessionID;

- (void)addDestinationWaypointTyped:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearDestinationWaypointTypeds;
- (void)clearRoutes;
- (void)clearServiceTags;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserLocation;
- (void)dealloc;
- (id)description;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (id)destinationWaypointTypeds;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (bool)hasClientCapabilities;
- (bool)hasCurrentUserLocation;
- (bool)hasDirectionsResponseID;
- (bool)hasIncludeBetterRouteSuggestion;
- (bool)hasRouteAttributes;
- (bool)hasSessionID;
- (unsigned long long)hash;
- (bool)includeBetterRouteSuggestion;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routeAttributes;
- (id)routes;
- (unsigned long long)routesCount;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setClientCapabilities:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDestinationWaypointTypeds:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setHasIncludeBetterRouteSuggestion:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setIncludeBetterRouteSuggestion:(bool)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
