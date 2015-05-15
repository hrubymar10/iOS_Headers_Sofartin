/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManagerInternal : NSObject {
    long long fActivityType;
    bool fAllowsLocationPrompts;
    bool fAllowsMapCorrection;
    bool fBatchingLocation;
    struct { 
        double bestAccuracy; 
    } fCapabilities;
    bool fCapabilitiesValid;
    struct __CLClient { } *fClient;
    bool fCourtesyPromptNeeded;
    <CLLocationManagerDelegate> *fDelegate;
    double fDesiredAccuracy;
    double fDistanceFilter;
    bool fDynamicAccuracyReductionEnabled;
    double fHeadingFilter;
    int fHeadingOrientation;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
        unsigned int integrity; 
    } fLocation;
    NSString *fLocationEventType;
    double fLocationRequestAccuracy;
    double fLocationRequestTimeout;
    struct __CFRunLoopTimer { } *fLocationRequestTimer;
    bool fMatchInfoEnabled;
    bool fPaused;
    int fPausesLocationUpdatesAutomatically;
    bool fPersistentMonitoringEnabled;
    int fPreviousAuthorizationStatus;
    bool fPreviousAuthorizationStatusValid;
    NSMutableSet *fRangedRegions;
    bool fRequestingLocation;
    bool fUpdatingHeading;
    bool fUpdatingLocation;
    bool fUpdatingVehicleHeading;
    bool fUpdatingVehicleSpeed;
}

@property (nonatomic, readonly) NSMutableSet *rangedRegions;

- (int)PausesLocationUpdatesAutomatically;
- (void)cancelLocationRequest;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;
- (void)performCourtesyPromptIfNeeded;
- (id)rangedRegions;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (void)stopUpdatingLocationAutoPaused;

@end
