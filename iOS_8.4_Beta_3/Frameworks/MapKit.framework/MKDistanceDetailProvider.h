/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDistanceDetailProvider : NSObject <MKLocationManagerObserver> {
    NSString *_distanceToPlace;
    GEOPlace *_place;
    id _updateHandler;
    bool _useMetric;
    bool _useYardsForShortDistances;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) GEOPlace *place;
@property (readonly) Class superclass;
@property (copy) id updateHandler;

+ (bool)infoAvailable;

- (void).cxx_destruct;
- (void)_handleLocaleChangeNotification:(id)arg1;
- (void)_updateDistanceToPlace;
- (void)beginUpdateWithHandler:(id)arg1;
- (void)dealloc;
- (void)endUpdates;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)place;
- (void)setPlace:(id)arg1;
- (void)setUpdateHandler:(id)arg1;
- (id)updateHandler;

@end
