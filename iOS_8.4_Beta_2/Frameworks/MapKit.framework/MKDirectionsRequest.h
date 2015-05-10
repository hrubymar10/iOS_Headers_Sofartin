/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDirectionsRequest : NSObject <NSCopying> {
    NSArray *_additionalTransportTypesRequested;
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    MKMapItem *_destination;
    bool _includeBasicRoutePoints;
    bool _includeDistanceInETA;
    bool _includeEntryPoints;
    bool _includeTrafficIncidents;
    bool _includeTravelTimes;
    bool _includeZilchRoutePoints;
    bool _requestsAlternateRoutes;
    MKMapItem *_source;
    unsigned long long _transportType;
}

@property(assign,readonly) bool _includeBasicRoutePoints;
@property(assign,readonly) bool _includeEntryPoints;
@property(assign,readonly) bool _includeTrafficIncidents;
@property(assign,readonly) bool _includeTravelTimes;
@property(assign,readonly) bool _includeTypicalRouteDuration;
@property(assign,readonly) bool _includeZilchRoutePoints;
@property(getter=_additionalTransportTypesRequested,setter=_setAdditionalTransportTypesRequested:,assign,retain) NSArray * additionalTransportTypesRequested;
@property(assign,retain) MKMapItem * destination;
@property(getter=_includeDistanceInETA,setter=_setIncludeDistanceInETA:,assign,readwrite) bool includeDistanceInETA;
@property(assign,retain) MKMapItem * source;

+ (bool)isDirectionsRequestURL:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalTransportTypesRequested;
- (id)_arrivalDate;
- (id)_departureDate;
- (bool)_includeBasicRoutePoints;
- (bool)_includeDistanceInETA;
- (bool)_includeEntryPoints;
- (bool)_includeTrafficIncidents;
- (bool)_includeTravelTimes;
- (bool)_includeTypicalRouteDuration;
- (bool)_includeZilchRoutePoints;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(bool)arg5 includeTrafficIncidents:(bool)arg6 includeEntryPoints:(bool)arg7 includeRoutePoints:(bool)arg8;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(bool)arg5 includeTrafficIncidents:(bool)arg6 includeEntryPoints:(bool)arg7 includeRoutePoints:(bool)arg8;
- (void)_setAdditionalTransportTypesRequested:(id)arg1;
- (void)_setIncludeDistanceInETA:(bool)arg1;
- (unsigned long long)_transportType;
- (id)arrivalDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureDate;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)requestsAlternateRoutes;
- (void)setArrivalDate:(id)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setRequestsAlternateRoutes:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (id)source;
- (unsigned long long)transportType;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
