/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@interface CompassBackgroundView : CompassRotatingView <GLKViewDelegate> {
    double _bearing;
    struct CGPoint { 
        double x; 
        double y; 
    } _compassCenter;
    EAGLContext *_context;
    struct CGPoint { 
        double x; 
        double y; 
    } _currentOffset;
    GLKView *_glView;
    CompassAtlas *_imageAtlas;
    CompassShader *_knockoutShader;
    unsigned int _labelsIndexBuffer;
    unsigned int *_labelsIndexes;
    struct { float x1; float x2; float x3; float x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; } *_labelsPoints;
    unsigned int _labelsVertexArray;
    unsigned int _labelsVertexBuffer;
    CompassShader *_lineShader;
    union _GLKMatrix4 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    } _modelViewMatrix;
    CompassShader *_normalShader;
    unsigned int _otherLinesIndexBuffer;
    unsigned int _otherLinesVertexArray;
    unsigned int _otherLinesVertexBuffer;
    union _GLKMatrix4 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    } _projectionMatrix;
    bool _shownInCompass;
    CompassShader *_textureShader;
    unsigned int _ticIndexBuffer;
    unsigned int *_ticIndexes;
    double _ticLength;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; } *_ticPoints;
    double _ticRadius;
    unsigned int _ticVertexArray;
    unsigned int _ticVertexBuffer;
}

@property(assign,readwrite) double bearing;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) double ticLength;
@property(assign,readwrite) double ticRadius;

- (void).cxx_destruct;
- (double)bearing;
- (void)dealloc;
- (void)generateCompassPoints;
- (void)generateExtraLines;
- (void)generateNumberAtlas;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forCompass:(bool)arg2;
- (void)layoutSubviews;
- (void)positionLabelNamed:(id)arg1 atDegrees:(long long)arg2 fromCenter:(struct CGPoint { double x1; double x2; })arg3 withRadius:(double)arg4 vertexOffset:(unsigned long long)arg5 color:(struct { float x1; float x2; float x3; float x4; })arg6;
- (void)positionLabels;
- (void)renderCrosshairInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBearing:(double)arg1;
- (void)setCompassHeading:(double)arg1;
- (bool)setCrosshairOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setTicRadius:(double)arg1;
- (void)setupGL;
- (void)tearDownGL;
- (double)ticLength;
- (double)ticRadius;
- (void)updateDisplay;

@end
