/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {
    CALayer *_accuracyLayer;
    bool _allowsAccuracyRing;
    bool _allowsHeadingIndicator;
    bool _allowsPulse;
    bool _effectsEnabled;
    double _headingAccuracy;
    CALayer *_headingLayer;
    CLLocation *_lastLocation;
    double _locationAccuracy;
    VKAnnotationMarker *_marker;
    double _presentationCourse;
    CALayer *_pulseLayer;
    bool _shouldDisplayHeading;
    bool _shouldPulse;
    bool _stale;
    long long _zoomDirection;
}

@property(assign,readwrite) bool allowsAccuracyRing;
@property(assign,readwrite) bool allowsHeadingIndicator;
@property(assign,readwrite) bool allowsPulse;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=isEffectsEnabled,assign,readwrite) bool effectsEnabled;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) double headingAccuracy;
@property(assign,readonly) double locationAccuracy;
@property(assign,readwrite) float opacity;
@property(assign,readwrite) double presentationCourse;
@property(assign,readwrite) bool shouldDisplayHeading;
@property(getter=isStale,assign,readonly) bool stale;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) long long zoomDirection;

+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (double)accuracyDiameter:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)_accuracyAnimation:(double)arg1;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_baseLayer;
- (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)_layerToMatchAccuracyRing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_visibleRect;
- (void)_pausePulse;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (id)_pulseTintColor;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_resumePulse;
- (void)_setAnimatingToCoordinate:(bool)arg1;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)_setTracking:(bool)arg1;
- (bool)_tracking;
- (void)_updateFromMap;
- (void)_updateHeadingLayer;
- (void)_updateLayers;
- (void)_updatePulse;
- (id)_vkMarker;
- (bool)allowsAccuracyRing;
- (bool)allowsHeadingIndicator;
- (bool)allowsPulse;
- (void)didMoveToWindow;
- (double)headingAccuracy;
- (id)init;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isEffectsEnabled;
- (bool)isStale;
- (void)layoutSubviews;
- (double)locationAccuracy;
- (void)locationManagerFailedToUpdateLocation;
- (float)opacity;
- (double)presentationCourse;
- (void)setAllowsAccuracyRing:(bool)arg1;
- (void)setAllowsHeadingIndicator:(bool)arg1;
- (void)setAllowsPulse:(bool)arg1;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setLocationAccuracy:(double)arg1 duration:(double)arg2;
- (void)setOpacity:(float)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShouldDisplayHeading:(bool)arg1;
- (void)setZoomDirection:(long long)arg1;
- (void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2;
- (bool)shouldDisplayHeading;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (long long)zoomDirection;

@end
