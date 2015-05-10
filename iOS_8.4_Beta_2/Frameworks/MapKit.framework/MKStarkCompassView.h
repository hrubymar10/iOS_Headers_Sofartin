/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarkCompassView : UIView <MKLocationManagerObserver> {
    int _compassPoint;
    UIView *_contentsView;
    double _heading;
    UILabel *_label;
    MKLocationManager *_locationManager;
    bool _monitoringCourse;
}

@property(assign,readwrite) int compassPoint;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) double heading;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_startLocationUpdates;
- (void)_updateContents;
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;
- (void)_updateStyling;
- (int)compassPoint;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)heading;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithSharedMKLocationManager;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)setCompassPoint:(int)arg1;
- (void)setHeading:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end