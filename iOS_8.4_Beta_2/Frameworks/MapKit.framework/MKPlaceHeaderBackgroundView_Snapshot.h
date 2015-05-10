/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate> {
    CLLocation *_location;
    MKMapView *_mapView;
    MKMapCamera *_orbitCamera;
    bool _orbiting;
    unsigned long long _pinColor;
    bool _settingUpOrbitAnimation;
    bool _showsPin;
    double _zoomLevel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) CLLocation * location;
@property(assign,retain) MKMapCamera * orbitCamera;
@property(assign,readwrite) bool orbiting;
@property(assign,readwrite) unsigned long long pinColor;
@property(assign,readwrite) bool settingUpOrbitAnimation;
@property(assign,readwrite) bool showsPin;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool useSatellite;
@property(assign,readwrite) double zoomLevel;

- (void).cxx_destruct;
- (void)_orbitNextThird;
- (void)beginOrbit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (id)location;
- (void)mapFinishedLoading:(bool)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
- (id)orbitCamera;
- (bool)orbiting;
- (void)pause;
- (void)pauseOrbit;
- (unsigned long long)pinColor;
- (void)prepareForPresentation;
- (void)present;
- (void)requestSnapshot;
- (void)reset;
- (void)resume;
- (void)setLocation:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOrbitCamera:(id)arg1;
- (void)setOrbiting:(bool)arg1;
- (void)setPinColor:(unsigned long long)arg1;
- (void)setSettingUpOrbitAnimation:(bool)arg1;
- (void)setShowsPin:(bool)arg1;
- (void)setZoomLevel:(double)arg1;
- (bool)settingUpOrbitAnimation;
- (bool)showsPin;
- (bool)useSatellite;
- (double)zoomLevel;

@end
