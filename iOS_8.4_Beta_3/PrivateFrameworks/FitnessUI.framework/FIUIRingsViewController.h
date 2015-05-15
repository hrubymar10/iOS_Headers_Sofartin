/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIRingsViewController : GLKViewController <FIUIRingGroupAnimationStatusDelegate> {
    bool _buffersCreated;
    struct CGPoint { 
        double x; 
        double y; 
    } _cachedGroupCenter;
    double _cachedPointSize;
    struct CGPoint { 
        double x; 
        double y; 
    } _cachedPosition;
    double _cachedThickness;
    unsigned int _color1Attribute;
    unsigned int _color2Attribute;
    unsigned int _coordPercentAttribute;
    unsigned int _coordPercentBuffer;
    unsigned int _coordinateAttribute;
    unsigned int _coordinateBuffer;
    bool _didSetup;
    bool _dirtiedProjectionMatrix;
    bool _displayLinkInstalledInNewRunLoop;
    bool _displayLinkRemovedFromOldRunLoop;
    unsigned int _iconSpriteColorAttribute;
    unsigned int _iconSpriteIconsPerDimensionUniform;
    UIImage *_iconSpriteImage;
    unsigned int _iconSpritePositionAttribute;
    unsigned int _iconSpriteProgram;
    unsigned int _iconSpriteSamplerUniform;
    unsigned int _iconSpriteSizeAttribute;
    GLKTextureInfo *_iconSpriteTexture;
    unsigned int _iconSpriteTextureOffsetAttribute;
    unsigned int _iconSpriteTransformUniform;
    unsigned int _iconSpriteVertexBuffer;
    struct { union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; float x_1_1_3[2]; } x1; float x2; float x3; union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_4_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_4_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_4_1_3; float x_4_1_4[4]; } x4; union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; float x_2_2_2; } x_5_1_2; float x_5_1_3[2]; } x5; } *_iconSpriteVertices;
    unsigned long long _iconTextureColumns;
    unsigned long long _iconTextureRows;
    bool _iconVAOinit;
    unsigned int _iconsVAO;
    int _numRingsPerGroup;
    unsigned int _percentagesAttribute;
    unsigned int _positionAttribute;
    unsigned int _positionBuffer;
    bool _prevRingsAreEmpty;
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
    unsigned int _ringEmptyProgram;
    NSArray *_ringGroups;
    int _ringGroupsPerRow;
    unsigned int _ringProgram;
    double _ringSpacing;
    unsigned int _ringStartProgram;
    bool _ringVAOinit;
    union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } *_ringVertexCoordinates;
    union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } *_ringVertexPositions;
    struct { union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_1_1_3; float x_1_1_4[4]; } x1; union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_2_1_3; float x_2_1_4[4]; } x2; union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_3_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_3_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_3_1_3; float x_3_1_4[4]; } x3; union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct { float x_2_2_1; float x_2_2_2; } x_4_1_2; float x_4_1_3[2]; } x4; union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; float x_2_2_2; } x_5_1_2; float x_5_1_3[2]; } x5; } *_ringVertices;
    unsigned int _ringsVAO;
    double _screenScale;
    unsigned int _sizesAttribute;
    unsigned int _transformUniform;
    unsigned int _trigResultsAttribute;
    bool _viewIsVisible;
}

@property (nonatomic, retain) UIImage *iconSpriteImage;
@property (nonatomic) unsigned long long iconTextureColumns;
@property (nonatomic) unsigned long long iconTextureRows;
@property (nonatomic, readonly) NSArray *ringGroups;
@property (nonatomic) int ringGroupsPerRow;
@property (nonatomic) double ringSpacing;

+ (id)_iconSpriteImage;
+ (id)_ringsViewControllerConfiguredForCompanionWithNumberOfRings:(long long)arg1 ringType:(long long)arg2;
+ (id)ringsViewControllerConfiguredForOneRingOnCompanionOfType:(long long)arg1;
+ (id)ringsViewControllerConfiguredForThreeRingsOnCompanion;

- (void).cxx_destruct;
- (void)_appBecameActive:(id)arg1;
- (void)_context_createBuffers;
- (void)_context_loadRingDataForGroupAtIndex:(long long)arg1;
- (void)_context_loadRingEmptyProgramIfNeeded;
- (void)_context_loadUniformsAndAttributes;
- (void)_context_loadVertexShader:(id)arg1 fragmentShader:(id)arg2 forProgram:(unsigned int*)arg3;
- (void)_context_prepareForIconDraw;
- (void)_context_prepareForRingDraw:(bool)arg1;
- (void)_destroyBuffers;
- (void)_installNewDisplayLinkIfAppIsActive;
- (void)_loadIconDataForGroupAtIndex:(long long)arg1;
- (void)_setRingGroups:(id)arg1;
- (void)_setupIfNecessary;
- (void)_updateProjectionMatrix;
- (void)dealloc;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)hack_forceUnpauseRings;
- (id)iconSpriteImage;
- (unsigned long long)iconTextureColumns;
- (unsigned long long)iconTextureRows;
- (id)initWithRingGroups:(id)arg1 numberOfRingsPerGroup:(int)arg2;
- (void)ringGroupDidBeginAnimations:(id)arg1;
- (id)ringGroups;
- (int)ringGroupsPerRow;
- (double)ringSpacing;
- (void)setBriskPercentage:(double)arg1 animated:(bool)arg2;
- (void)setCalorieDotPercentage:(double)arg1 animated:(bool)arg2;
- (void)setCaloriePercentage:(double)arg1 animated:(bool)arg2;
- (void)setIconSpriteImage:(id)arg1;
- (void)setIconTextureColumns:(unsigned long long)arg1;
- (void)setIconTextureRows:(unsigned long long)arg1;
- (void)setMovingHoursPercentage:(double)arg1 animated:(bool)arg2;
- (void)setRingGroupsPerRow:(int)arg1;
- (void)setRingSpacing:(double)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)snapshot;
- (unsigned long long)supportedInterfaceOrientations;
- (void)update;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
