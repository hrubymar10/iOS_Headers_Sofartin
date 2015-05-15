/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizerUpdater : NSObject {
    GEOMapRegion *_arrivalMapRegion;
    GEODirectionsRouteRequest *_currentRequest;
    <GEORouteHypothesizerUpdaterDelegate> *_delegate;
    GEOComposedWaypoint *_destination;
    GEODirectionsRequestFeedback *_feedback;
    bool _hasArrived;
    bool _isTraveling;
    NSDate *_lastRerouteDate;
    unsigned long long _numThrottledReroutes;
    GEOLocation *_originLocation;
    NSLock *_requestLock;
    NSMutableArray *_rerouteEntries;
    GEOComposedRoute *_route;
    GEORouteAttributes *_routeAttributes;
    GEORouteMatch *_routeMatch;
    double _score;
    bool _shouldThrottleReroutes;
    GEOComposedWaypoint *_source;
}

@property(assign,readwrite) <GEORouteHypothesizerUpdaterDelegate> * delegate;
@property(assign,retain) GEODirectionsRequestFeedback * feedback;
@property(assign,readonly) bool hasArrived;
@property(assign,readonly) bool isTraveling;
@property(assign,readonly) GEOComposedRoute * route;
@property(assign,readonly) GEORouteMatch * routeMatch;
@property(assign,readonly) double score;

- (bool)_checkForArrival:(id)arg1 routeMatch:(id)arg2;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (id)_routeMatchForLocation:(id)arg1;
- (void)_updateScoreForLocation:(id)arg1;
- (void)cancelCurrentRequest;
- (void)dealloc;
- (id)delegate;
- (id)feedback;
- (bool)hasArrived;
- (id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (bool)isTraveling;
- (id)route;
- (id)routeMatch;
- (double)score;
- (void)setDelegate:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)startUpdatingFromLocation:(id)arg1 existingRoute:(id)arg2 usualRouteData:(id)arg3;
- (void)updateForLocation:(id)arg1;

@end
