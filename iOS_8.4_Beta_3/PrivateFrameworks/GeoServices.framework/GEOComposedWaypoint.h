/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWaypoint : PBCodable <NSCopying> {
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    GEOWaypointTyped *_waypoint;
}

@property(assign,readonly) bool hasLatLng;
@property(assign,readonly) bool hasMapItemStorage;
@property(assign,readonly) bool hasWaypoint;
@property(assign,retain) GEOLatLng * latLng;
@property(assign,retain) GEOMapItemStorage * mapItemStorage;
@property(assign,retain) GEOWaypointTyped * waypoint;

+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForCoordinate:(struct { double x1; double x2; })arg1 addressDictionary:(id)arg2 placeName:(id)arg3 traits:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(id)arg6;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(id)arg4;
+ (void)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (void)composedWaypointForMapItem:(id)arg1 forQuickETA:(bool)arg2 completionHandler:(id)arg3 networkActivityHandler:(id)arg4;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(id)arg5;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(id)arg4;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(id)arg6;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoMapItem;
- (bool)hasLatLng;
- (bool)hasMapItemStorage;
- (bool)hasWaypoint;
- (unsigned long long)hash;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (id)latLng;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setWaypoint:(id)arg1;
- (id)timezone;
- (id)waypoint;
- (void)writeTo:(id)arg1;

@end
