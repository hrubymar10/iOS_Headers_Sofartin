/* Generated by RuntimeBrowser.
 */

@protocol MKLocationProvider <NSObject>

@required

- (long long)activityType;
- (bool)airplaneModeBlocksLocation;
- (id)authorizationRequestBlock:(void)arg1;
- (int)authorizationStatus;
- (<MKLocationProviderDelegate> *)delegate;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (NSBundle *)effectiveBundle;
- (NSString *)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isSimulation;
- (bool)isTracePlayer;
- (bool)matchInfoEnabled;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)setActivityType:(long long)arg1;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (void)setDelegate:(id <MKLocationProviderDelegate>)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(NSBundle *)arg1;
- (void)setEffectiveBundleIdentifier:(NSString *)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (bool)usesCLMapCorrection;

@end
