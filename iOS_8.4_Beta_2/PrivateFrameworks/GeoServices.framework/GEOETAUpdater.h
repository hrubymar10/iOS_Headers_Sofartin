/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAUpdater : NSObject {
    bool _allowRequests;
    GEOETATrafficUpdateRequest *_currentETARequest;
    double _debugTimeWindowDuration;
    <GEOETAUpdaterDelegate> *_delegate;
    GEOComposedWaypoint *_destination;
    NSData *_directionsResponseID;
    NSTimer *_etaIdleTimer;
    long long _etaState;
    double _lastETARequestTime;
    double _requestInterval;
    GEOComposedRoute *_route;
    GEORouteAttributes *_routeAttributes;
    GEORouteMatch *_routeMatch;
    bool _shouldUseConditionalRequest;
    GEOLocation *_userLocation;
}

@property(assign,readwrite) bool allowRequests;
@property(assign,readwrite) double debugTimeWindowDuration;
@property(assign,readwrite) <GEOETAUpdaterDelegate> * delegate;
@property(assign,retain) GEOComposedWaypoint * destination;
@property(assign,retain) NSData * directionsResponseID;
@property(assign,readwrite) double requestInterval;
@property(assign,retain) GEOComposedRoute * route;
@property(assign,retain) GEORouteAttributes * routeAttributes;
@property(assign,retain) GEORouteMatch * routeMatch;
@property(assign,readwrite) bool shouldUseConditionalRequest;
@property(assign,retain) GEOLocation * userLocation;

- (double)_calculateNextTransitionTime;
- (void)_clearCurrentETARequest;
- (void)_clearTimer;
- (void)_continueUpdateRequests;
- (void)_createETARequest;
- (bool)_sendETARequest:(id)arg1 isUpdate:(bool)arg2;
- (bool)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (void)_updateCurrentETARequest;
- (bool)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (bool)_updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (bool)allowRequests;
- (id)currentStep;
- (void)dealloc;
- (double)debugTimeWindowDuration;
- (id)delegate;
- (id)destination;
- (id)directionsResponseID;
- (id)init;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (double)percentageOfCurrentStepRemaining;
- (double)requestInterval;
- (void)requestUpdate;
- (void)reset;
- (id)route;
- (id)routeAttributes;
- (id)routeMatch;
- (id)routesForETAUpdateRequest;
- (void)setAllowRequests:(bool)arg1;
- (void)setDebugTimeWindowDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setRequestInterval:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShouldUseConditionalRequest:(bool)arg1;
- (void)setUserLocation:(id)arg1;
- (bool)shouldUseConditionalRequest;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;
- (bool)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3;
- (id)userLocation;

@end
