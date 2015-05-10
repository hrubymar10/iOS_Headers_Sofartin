/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenCameraController : VKCameraController <VKCameraControllerDelegate> {
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
    long long _annotationTrackingHeadingAnimationDisplayRate;
    long long _annotationTrackingZoomStyle;
    double _beganDoublePanPitch;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
    bool _isPitchIncreasing;
    bool _isPitchable;
    double _lastRotation;
    struct CGPoint { 
        double x; 
        double y; 
    } _panLastScreenPoint;
    struct CGPoint { 
        double x; 
        double y; 
    } _panStartScreenPoint;
    VKAnimation *_pitchAnimation;
    VKAnimation *_regionAnimation;
    VKAnimation *_rotationAnimation;
    bool _rotationLowZoomSnappingEnabled;
    bool _shouldRotationRubberband;
    bool _staysCenteredDuringPinch;
    bool _staysCenteredDuringRotation;
    VKAnimation *_zoomAnimation;
}

@property(getter=isAnimatingToTrackAnnotation,assign,readonly) bool animatingToTrackAnnotation;
@property(assign,readwrite) long long annotationTrackingHeadingAnimationDisplayRate;
@property(assign,readwrite) long long annotationTrackingZoomStyle;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) struct VKEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isPitchable;
@property(assign,readwrite) bool staysCenteredDuringPinch;
@property(assign,readwrite) bool staysCenteredDuringRotation;
@property(assign,readonly) Class superclass;
@property(assign,readonly) <VKTrackableAnnotation> * trackingAnnotation;
@property(getter=isTrackingHeading,assign,readonly) bool trackingHeading;

- (id).cxx_construct;
- (long long)annotationTrackingHeadingAnimationDisplayRate;
- (long long)annotationTrackingZoomStyle;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(bool)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)dealloc;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)init;
- (bool)isAnimating;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isPitchable;
- (bool)isTrackingHeading;
- (double)rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (void)runAnimation:(id)arg1;
- (void)setAnnotationTrackingHeadingAnimationDisplayRate:(long long)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIsPitchable:(bool)arg1;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (bool)staysCenteredDuringPinch;
- (bool)staysCenteredDuringRotation;
- (void)stopRegionAnimation;
- (void)stopSnappingAnimations;
- (void)stopTrackingAnnotation;
- (id)trackingAnnotation;

@end
