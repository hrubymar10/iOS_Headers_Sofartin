/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager> {
    NSError *_error;
    NSMutableArray *_handlers;
    NSDate *_locateStartTime;
    CLLocation *_location;
    CLLocationManager *_locationManager;
    NSTimer *_locationUpdateTimer;
    NSTimer *_timeoutHandler;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSError * error;
@property(assign,retain) NSMutableArray * handlers;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSDate * locateStartTime;
@property(assign,retain) CLLocation * location;
@property(assign,readonly) bool locationAuthorizationDenied;
@property(assign,retain) CLLocationManager * locationManager;
@property(assign,retain) NSTimer * locationUpdateTimer;
@property(assign,readonly) Class superclass;

+ (Class)__CLLocationManagerClass;
+ (id)locationShifter;
+ (id)sharedInstance;

- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)handlers;
- (id)init;
- (id)locateStartTime;
- (id)location;
- (bool)locationAuthorizationDenied;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationUpdateTimer;
- (void)setError:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setLocateStartTime:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationUpdateTimer:(id)arg1;
- (void)shiftedLocationWithLocation:(id)arg1 completion:(id)arg2;
- (void)startUpdatingCurrentLocationWithHandler:(id)arg1;

@end
