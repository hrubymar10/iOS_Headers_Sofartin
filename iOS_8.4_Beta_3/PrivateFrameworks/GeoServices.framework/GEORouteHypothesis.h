/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesis : NSObject {
    unsigned long long _currentTrafficDensity;
    NSDate *_estimatedArrivalDate;
    bool _hasTrafficIncidentOnRoute;
    unsigned long long _historicTrafficDensity;
    GEOLocation *_lastLocation;
    int _routeIncidentSignificance;
    NSString *_routeIncidentStreetName;
    int _routeIncidentType;
    NSDate *_suggestedDepartureDate;
    unsigned long long _travelState;
    double _travelStateScore;
}

@property (nonatomic, readonly) unsigned long long currentTrafficDensity;
@property (nonatomic, readonly) NSDate *estimatedArrivalDate;
@property (nonatomic, readonly) bool hasTrafficIncidentOnRoute;
@property (nonatomic, readonly) unsigned long long historicTrafficDensity;
@property (nonatomic, retain) GEOLocation *lastLocation;
@property (nonatomic, readonly) int routeIncidentSignificance;
@property (nonatomic, readonly) NSString *routeIncidentStreetName;
@property (nonatomic, readonly) int routeIncidentType;
@property (nonatomic, readonly) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) unsigned long long travelState;
@property (nonatomic, readonly) double travelStateScore;

- (unsigned long long)currentTrafficDensity;
- (void)dealloc;
- (id)description;
- (id)estimatedArrivalDate;
- (bool)hasTrafficIncidentOnRoute;
- (unsigned long long)historicTrafficDensity;
- (id)lastLocation;
- (int)routeIncidentSignificance;
- (id)routeIncidentStreetName;
- (int)routeIncidentType;
- (void)setLastLocation:(id)arg1;
- (id)suggestedDepartureDate;
- (unsigned long long)travelState;
- (double)travelStateScore;
- (void)updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)updateDepartureAndArrivalSuggestions:(id)arg1 arrivalDate:(id)arg2 travelTimeWithTraffic:(double)arg3;
- (void)updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)updateTrafficIncidents:(id)arg1;
- (void)updateTravelState:(id)arg1;

@end
