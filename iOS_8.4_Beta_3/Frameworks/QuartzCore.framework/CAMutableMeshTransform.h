/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMutableMeshTransform : CAMeshTransform

@property(assign,copy) NSString * depthNormalization;
@property(assign,readwrite) int subdivisionSteps;

+ (id)meshTransform;

- (void)addFace:(struct CAMeshFace { unsigned int x1[4]; float x2[4]; })arg1;
- (void)addVertex:(struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)depthNormalization;
- (id)init;
- (void)removeFaceAtIndex:(unsigned long long)arg1;
- (void)removeVertexAtIndex:(unsigned long long)arg1;
- (void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(struct CAMeshFace { unsigned int x1[4]; float x2[4]; })arg2;
- (void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg2;
- (void)setDepthNormalization:(id)arg1;
- (void)setSubdivisionSteps:(int)arg1;
- (int)subdivisionSteps;

@end