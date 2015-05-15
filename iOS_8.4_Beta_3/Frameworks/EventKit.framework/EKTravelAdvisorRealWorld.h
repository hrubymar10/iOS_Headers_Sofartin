/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvisorRealWorld : NSObject <CLLocationManagerDelegate, EKTravelAdvisorWorld> {
    EKTravelAgendaItem *_agendaItem;
    id _alarmHandler;
    id _geofenceHandler;
    CLLocation *_geofenceInitialLocation;
    CLLocationManager *_geofenceLocationManager;
    bool _geofenceUsingSignificantLocationUpdates;
    id _locationAuthorizationHandler;
    NSBundle *_locationBundle;
    id _locationHandler;
    CLLocation *_locationInitialLocation;
    PCPersistentTimer *_persistentTimer;
    CLLocationManager *_pollingLocationManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) EKTravelAgendaItem *agendaItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_persistentTimerIdentifier;

- (id)agendaItem;
- (void)alarmFired:(id)arg1;
- (bool)authorizedToAcquireLocation;
- (void)comeOutOfHibernation;
- (void)dealloc;
- (void)disableAlarm;
- (void)disableGeofence;
- (void)getCurrentLocationWithAccuracy:(double)arg1 block:(id)arg2;
- (void)goIntoHibernation;
- (id)initWithQueue:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)mostRecentLocationSeen;
- (id)now;
- (void)setAgendaItem:(id)arg1;
- (void)setAlarmIn:(double)arg1 block:(id)arg2;
- (void)setGeofenceWithRadius:(double)arg1 block:(id)arg2;
- (void)setLocationAuthorizationChangeCallback:(id)arg1;

@end
