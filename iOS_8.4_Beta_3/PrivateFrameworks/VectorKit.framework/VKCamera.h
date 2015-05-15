/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCamera : NSObject {
    bool _allowDatelineWraparound;
    float _aspectRatio;
    double _canonicalPitch;
    <VKCameraDelegate> *_delegate;
    double _distanceToGroundAndFarClipPlaneIntersection;
    VKFootprint *_footprint;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _forward;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    struct { 
        bool orthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
    } _frustum;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _gmPosition;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmUnscaledViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmViewProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmViewProjectionMatrixWithoutOffset;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmWorldMatrix;
    double _horizontalOffset;
    double _maxFarClipDistance;
    double _maxHeight;
    double _maxHeightNoPitch;
    double _maxPitch;
    double _minHeight;
    bool _needsUpdate;
    struct { 
        double v[4][4]; 
    } _orientation;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _position;
    struct { 
        double v[4][4]; 
    } _projectionMatrix;
    struct { 
        double v[4][4]; 
    } _projectionMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _projectionMatrixUnscaledWithoutOffset;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _puckPosition;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _right;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    double _terrainHeight;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _up;
    int _updateNumber;
    bool _updating;
    float _verticalFieldOfView;
    struct { 
        double v[4][4]; 
    } _viewMatrix;
    struct { 
        double v[4][4]; 
    } _viewMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrix;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrixUnscaled;
    VKViewVolume *_viewVolume;
    struct { 
        double v[4][4]; 
    } _worldMatrix;
}

@property(assign,readwrite) bool allowDatelineWraparound;
@property(assign,readwrite) float aspectRatio;
@property(assign,readwrite) struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; float x5; } cameraState;
@property(assign,readwrite) double canonicalPitch;
@property(assign,readwrite) <VKCameraDelegate> * delegate;
@property(assign,readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property(assign,readonly) double farClipDistance;
@property(assign,readonly) VKFootprint * footprint;
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property(assign,readwrite) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property(assign,readonly) struct { bool x1; double x2; double x3; double x4; double x5; } frustum;
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  gmForwardVector; /* unknown property attribute:  1>=[4d]} */
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmPosition; /* unknown property attribute:  1>=[3d]} */
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  gmRightVector; /* unknown property attribute:  1>=[4d]} */
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmUnscaledViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  gmUpVector; /* unknown property attribute:  1>=[4d]} */
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmViewProjectionMatrixWithoutOffset; /* unknown property attribute:  4>=[16d]} */
@property(assign,readonly) struct VKPoint { double x1; double x2; double x3; } groundPoint;
@property(assign,readonly) float horizontalFieldOfView;
@property(assign,readwrite) double horizontalOffset;
@property(assign,readwrite) double maxHeight;
@property(assign,readwrite) double maxHeightNoPitch;
@property(assign,readwrite) double maxPitch;
@property(assign,readwrite) double minHeight;
@property(assign,readonly) double nearClipDistance;
@property(assign,readwrite) const struct { double x1[4][4]; }* orientation;
@property(assign,readonly) double pitch;
@property(assign,readwrite) struct VKPoint { double x1; double x2; double x3; } position;
@property(assign,readonly) const struct { double x1[4][4]; }* projectionMatrix;
@property(assign,readonly) const struct { double x1[4][4]; }* projectionMatrixUnscaled;
@property(assign,readonly) const struct { double x1[4][4]; }* projectionMatrixUnscaledWithoutOffset;
@property(assign,readwrite) struct VKPoint { double x1; double x2; double x3; } puckPosition;
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property(assign,readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property(assign,readonly) double tanHalfHorizFOV;
@property(assign,readonly) double tanHalfVerticalFOV;
@property(assign,readwrite) double terrainHeight;
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property(assign,readonly) int updateNumber;
@property(assign,readwrite) float verticalFieldOfView;
@property(assign,readonly) const struct { double x1[4][4]; }* viewMatrix;
@property(assign,readonly) const struct { double x1[4][4]; }* viewMatrixUnscaled;
@property(assign,readonly) const struct { double x1[4][4]; }* viewProjectionMatrix;
@property(assign,readonly) const struct { double x1[4][4]; }* viewProjectionMatrixUnscaled;
@property(assign,readonly) VKViewVolume * viewVolume;
@property(assign,readonly) const struct { double x1[4][4]; }* worldMatrix;
@property(assign,readonly) double yaw;

- (id).cxx_construct;
- (void)_setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)adjustClipPlanes;
- (bool)allowDatelineWraparound;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (float)aspectRatio;
- (struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; float x5; })cameraState;
- (double)canonicalPitch;
- (void)dealloc;
- (id)delegate;
- (double)depthForViewWidth:(double)arg1;
- (id)description;
- (double)displayZoomLevel;
- (double)distanceToGroundAndFarClipPlaneIntersection;
- (double)farClipDistance;
- (id)footprint;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
- (struct { bool x1; double x2; double x3; double x4; double x5; })frustum;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmForwardVector;
- (struct Matrix<double, 3, 1> { double x1[3]; })gmGroundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })gmGroundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 atGroundLevel:(double)arg2;
- (const struct Matrix<double, 3, 1> { double x1[3]; }*)gmPosition;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmProjectionMatrix;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmRightVector;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmUnscaledViewMatrix;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmUpVector;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmViewMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmViewProjectionMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmViewProjectionMatrixWithoutOffset;
- (struct VKPoint { double x1; double x2; double x3; })groundPlaneIntersectionPoint;
- (struct VKPoint { double x1; double x2; double x3; })groundPoint;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 atGroundLevel:(double)arg2;
- (bool)hasChangedState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; float x5; }*)arg1;
- (float)horizontalFieldOfView;
- (double)horizontalOffset;
- (id)init;
- (bool)isOuterWorldBoundsVisible;
- (bool)isWorldSpaceRectVisible:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)logCameraState;
- (double)maxHeight;
- (double)maxHeightNoPitch;
- (double)maxPitch;
- (float)maximumStyleZForRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (double)minHeight;
- (double)nearClipDistance;
- (const struct { double x1[4][4]; }*)orientation;
- (double)pitch;
- (struct VKPoint { double x1; double x2; double x3; })position;
- (const struct { double x1[4][4]; }*)projectionMatrix;
- (const struct { double x1[4][4]; }*)projectionMatrixUnscaled;
- (const struct { double x1[4][4]; }*)projectionMatrixUnscaledWithoutOffset;
- (struct VKPoint { double x1; double x2; double x3; })puckPosition;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (double)screenHeightOfGroundAndFarClipPlaneIntersection;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (void)setAspectRatio:(float)arg1;
- (void)setCameraState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; float x5; })arg1;
- (void)setCanonicalPitch:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1;
- (void)setHorizontalOffset:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMaxHeightNoPitch:(double)arg1;
- (void)setMaxPitch:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setNeedsUpdate;
- (void)setOrientation:(const struct { double x1[4][4]; }*)arg1;
- (void)setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)setPuckPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)setTerrainHeight:(double)arg1;
- (void)setVerticalFieldOfView:(float)arg1;
- (double)tanHalfHorizFOV;
- (double)tanHalfVerticalFOV;
- (double)terrainHeight;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (void)updateIfNeeded;
- (int)updateNumber;
- (float)verticalFieldOfView;
- (const struct { double x1[4][4]; }*)viewMatrix;
- (const struct { double x1[4][4]; }*)viewMatrixUnscaled;
- (const struct { double x1[4][4]; }*)viewProjectionMatrix;
- (const struct { double x1[4][4]; }*)viewProjectionMatrixUnscaled;
- (id)viewVolume;
- (double)widthOfViewAtDepth:(double)arg1;
- (const struct { double x1[4][4]; }*)worldMatrix;
- (double)yaw;

@end
