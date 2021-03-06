/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelPredictionCar : EKTravelPrediction <NSSecureCoding> {
    unsigned long long _currentTrafficDensity;
    bool _hasTrafficIncidentOnRoute;
    unsigned long long _historicTrafficDensity;
    int _routeIncidentSignificance;
    NSString *_routeIncidentStreetName;
    int _routeIncidentType;
    unsigned long long _travelState;
    double _travelStateScore;
}

@property(assign,readonly) unsigned long long currentTrafficDensity;
@property(assign,readonly) bool hasTrafficIncidentOnRoute;
@property(assign,readonly) unsigned long long historicTrafficDensity;
@property(assign,readonly) int routeIncidentSignificance;
@property(assign,readonly) NSString * routeIncidentStreetName;
@property(assign,readonly) int routeIncidentType;
@property(assign,readonly) unsigned long long travelState;
@property(assign,readonly) double travelStateScore;

- (void)addTrafficIncidentOfType:(int)arg1 withSignificance:(int)arg2 onStreet:(id)arg3;
- (id)advice;
- (unsigned long long)currentTrafficDensity;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTrafficIncidentOnRoute;
- (unsigned long long)historicTrafficDensity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 startingLocation:(id)arg3 predictionDate:(id)arg4 hypothesizer:(id)arg5;
- (int)routeIncidentSignificance;
- (id)routeIncidentStreetName;
- (int)routeIncidentType;
- (void)setTrafficConditionsCurrent:(unsigned long long)arg1 historic:(unsigned long long)arg2;
- (void)setTravelState:(unsigned long long)arg1 withConfidence:(double)arg2;
- (unsigned long long)travelState;
- (double)travelStateScore;

@end
