/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate, _MKWiFiObserverDelegate> {
    bool _airplaneModeEnabled;
    bool _airplaneModeEnabledIsValid;
    struct __SCPreferences { } *_airplaneModePrefs;
    bool _allowUpdateCoalescing;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    NSTimer *_coalesceTimer;
    int _consecutiveOutOfCourseCount;
    bool _continuedAfterBecomingInactive;
    bool _continuesWhileInactive;
    bool _enabled;
    bool _hasCustomDesiredAccuracy;
    CLHeading *_heading;
    NSHashTable *_headingObservers;
    double _headingUpdateTime;
    bool _isLastLocationStale;
    CLLocation *_lastLocation;
    bool _lastLocationPushed;
    double _lastLocationReportTime;
    double _lastLocationUpdateTime;
    double _lastVehicleHeading;
    double _lastVehicleHeadingUpdateTime;
    double _lastVehicleSpeed;
    double _lastVehicleSpeedUpdateTime;
    double _locationAccuracyUpdateTime;
    id _locationCorrector;
    NSError *_locationError;
    NSHashTable *_locationListeners;
    NSHashTable *_locationObservers;
    <MKLocationProvider> *_locationProvider;
    <MKLocationRecorder> *_locationRecorder;
    GEOLocationShifter *_locationShifter;
    bool _logStartStopLocationUpdates;
    double _minimumLocationUpdateInterval;
    double _navCourse;
    id _networkActivity;
    NSMutableArray *_recentLocationUpdateIntervals;
    bool _suspended;
    CLHeading *_throttledHeading;
    bool _trackingHeading;
    bool _trackingLocation;
    bool _useCourseForHeading;
    _MKWiFiObserver *_wifiObserver;
}

@property(assign,readwrite) long long activityType;
@property(assign,readwrite) bool allowUpdateCoalescing;
@property(assign,copy) id authorizationRequestBlock;
@property(assign,readwrite) bool continuesWhileInactive;
@property(assign,readonly) GEOLocation * courseCorrectedLocation;
@property(assign,readonly) GEOLocation * currentLocation;
@property(assign,readonly) double currentVehicleHeading;
@property(assign,readonly) double currentVehicleSpeed;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) double desiredAccuracy;
@property(assign,readwrite) double distanceFilter;
@property(assign,retain) NSBundle * effectiveBundle;
@property(assign,copy) NSString * effectiveBundleIdentifier;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,readonly) double expectedGpsUpdateInterval;
@property(assign,readonly) GEOLocation * gridSnappedCurrentLocation;
@property(assign,readonly) bool hasLocation;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) CLHeading * heading;
@property(assign,readwrite) long long headingOrientation;
@property(assign,readonly) double headingUpdateTimeInterval;
@property(assign,readonly) bool isAirplaneModeBlockingLocation;
@property(assign,readonly) bool isHeadingServicesAvailable;
@property(assign,readonly) bool isLastLocationStale;
@property(assign,readonly) bool isLocationServicesApproved;
@property(assign,readonly) bool isLocationServicesAvailable;
@property(assign,readonly) bool isLocationServicesDenied;
@property(assign,readonly) bool isLocationServicesEnabled;
@property(assign,readonly) bool isLocationServicesPossiblyAvailable;
@property(assign,readonly) bool isLocationServicesRestricted;
@property(assign,readonly) bool isWiFiEnabled;
@property(assign,readonly) CLLocation * lastLocation;
@property(getter=wasLastLocationPushed,assign,readonly) bool lastLocationPushed;
@property(assign,readonly) int lastLocationSource;
@property(assign,copy) id locationCorrector;
@property(assign,readonly) NSError * locationError;
@property(assign,retain) <MKLocationProvider> * locationProvider;
@property(assign,retain) <MKLocationRecorder> * locationRecorder;
@property(getter=isLocationServicesAuthorizationNeeded,assign,readonly) bool locationServicesAuthorizationNeeded;
@property(getter=isLocationServicesPreferencesDialogEnabled,assign,readwrite) bool locationServicesPreferencesDialogEnabled;
@property(assign,readonly) bool locationShiftEnabled;
@property(assign,readwrite) bool logStartStopLocationUpdates;
@property(assign,readwrite) bool matchInfoEnabled;
@property(assign,readwrite) double minimumLocationUpdateInterval;
@property(assign,readonly) double navigationCourse;
@property(assign,copy) id networkActivity;
@property(assign,readonly) Class superclass;
@property(assign,retain) CLHeading * throttledHeading;
@property(assign,readwrite) bool useCourseForHeading;
@property(assign,readonly) double vehicleHeadingOrCourse;

+ (void)setCanMonitorWiFiStatus:(bool)arg1;
+ (id)sharedLocationManager;

- (void).cxx_destruct;
- (void)_airplaneModeChanged;
- (bool)_isTimeToResetOnResume;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)_refreshAirplaneMode;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_setTrackingHeading:(bool)arg1;
- (void)_setTrackingLocation:(bool)arg1;
- (bool)_shouldAllowLocationUpdateInterval:(double)arg1;
- (void)_startCoalescingUpdates:(int)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_stopCoalescingUpdates;
- (void)_suspend;
- (void)_syncLocationProviderWithTracking;
- (void)_useCoreLocationProvider;
- (long long)activityType;
- (bool)allowUpdateCoalescing;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)authorizationRequestBlock;
- (bool)continuesWhileInactive;
- (id)courseCorrectedLocation;
- (id)currentLocation;
- (double)currentVehicleHeading;
- (double)currentVehicleSpeed;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2;
- (void)dealloc;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (id)gridSnappedCurrentLocation;
- (bool)hasLocation;
- (id)heading;
- (long long)headingOrientation;
- (double)headingUpdateTimeInterval;
- (id)init;
- (bool)isAirplaneModeBlockingLocation;
- (bool)isEnabled;
- (bool)isHeadingServicesAvailable;
- (bool)isLastLocationStale;
- (bool)isLocationServicesApproved;
- (bool)isLocationServicesAuthorizationNeeded;
- (bool)isLocationServicesAvailable;
- (bool)isLocationServicesDenied;
- (bool)isLocationServicesEnabled;
- (bool)isLocationServicesPossiblyAvailable;
- (bool)isLocationServicesPossiblyAvailable:(id*)arg1;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isLocationServicesRestricted;
- (bool)isWiFiEnabled;
- (id)lastLocation;
- (int)lastLocationSource;
- (void)listenForLocationUpdates:(id)arg1;
- (id)locationCorrector;
- (id)locationError;
- (id)locationProvider;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (id)locationRecorder;
- (bool)locationShiftEnabled;
- (bool)logStartStopLocationUpdates;
- (bool)matchInfoEnabled;
- (double)minimumLocationUpdateInterval;
- (double)navigationCourse;
- (id)networkActivity;
- (void)pushLocation:(id)arg1;
- (void)reportCoalescedUpdated;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)reset;
- (void)resetAfterResumeIfNecessary;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setActivityType:(long long)arg1;
- (void)setAllowUpdateCoalescing:(bool)arg1;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (void)setCoalesceTimer:(id)arg1;
- (void)setContinuesWhileInactive:(bool)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHeading:(id)arg1;
- (void)setHeadingOrientation:(long long)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationCorrector:(id)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setLocationRecorder:(id)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setLogStartStopLocationUpdates:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)setMinimumLocationUpdateInterval:(double)arg1;
- (void)setNetworkActivity:(id)arg1;
- (void)setThrottledHeading:(id)arg1;
- (void)setUseCourseForHeading:(bool)arg1;
- (bool)shouldCoalesceUpdates;
- (bool)shouldStartCoalescingLocation:(id)arg1;
- (bool)shouldStopCoalescingLocation:(id)arg1;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(id)arg2;
- (id)singleLocationUpdateWithHandler:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)startVehicleHeadingUpdate;
- (void)startVehicleSpeedUpdate;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopVehicleHeadingUpdate;
- (void)stopVehicleSpeedUpdate;
- (id)throttledHeading;
- (bool)useCourseForHeading;
- (double)vehicleHeadingOrCourse;
- (bool)wasLastLocationPushed;
- (void)wiFiObserverDidChangeEnabled:(id)arg1;

@end