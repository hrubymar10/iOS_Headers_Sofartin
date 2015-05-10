/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationDetails : NSObject {
    unsigned long long _annoucementStage;
    GEOCompanionRouteDetails *_companionRoute;
    GEOCompanionRouteStatus *_companionStatus;
    NSString *_destinationName;
    double _distanceRemainingOnRoute;
    double _distanceToManeuverEnd;
    double _distanceToManeuverStart;
    double _distanceToRoute;
    GEONavigationGuidanceState *_guidanceState;
    GEOLocation *_location;
    bool _locationUnreliable;
    unsigned long long _nextAnnoucementStage;
    double _remainingTime;
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    GEONavigationRouteSummary *_routeSummary;
    double _timeUntilNextAnnouncement;
}

@property(assign,readwrite) unsigned long long announcementStage;
@property(assign,readonly) GEOCompanionRouteDetails * companionRoute;
@property(assign,readonly) GEOCompanionRouteStatus * companionStatus;
@property(assign,readonly) NSString * destinationName;
@property(assign,readwrite) double distanceRemainingOnRoute;
@property(assign,readwrite) double distanceToManeuverEnd;
@property(assign,readwrite) double distanceToManeuverStart;
@property(assign,readwrite) double distanceToRoute;
@property(assign,readonly) GEONavigationGuidanceState * guidanceState;
@property(assign,retain) GEOLocation * location;
@property(assign,readwrite) bool locationUnreliable;
@property(assign,readwrite) int navigationState;
@property(assign,readonly) unsigned long long nextAnnouncementStage;
@property(assign,readwrite) double remainingTime;
@property(assign,retain) GEOComposedRoute * route;
@property(assign,retain) GEORouteMatch * routeMatch;
@property(assign,readonly) GEONavigationRouteSummary * routeSummary;
@property(assign,readonly) double timeUntilNextAnnouncement;

- (unsigned long long)announcementStage;
- (id)companionRoute;
- (id)companionStatus;
- (void)dealloc;
- (id)destinationName;
- (double)distanceRemainingOnRoute;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (double)distanceToRoute;
- (id)guidanceState;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (id)location;
- (bool)locationUnreliable;
- (int)navigationState;
- (unsigned long long)nextAnnouncementStage;
- (double)remainingTime;
- (id)route;
- (id)routeMatch;
- (id)routeSummary;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setDistanceRemainingOnRoute:(double)arg1;
- (void)setDistanceToManeuverEnd:(double)arg1;
- (void)setDistanceToManeuverStart:(double)arg1;
- (void)setDistanceToRoute:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2;
- (void)setRemainingTime:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (double)timeUntilNextAnnouncement;

@end