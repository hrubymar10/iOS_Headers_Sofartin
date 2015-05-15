/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNManipulator : NSObject {
    SCNAuthoringEnvironment *_authoringEnvironment;
    SCNNode *_target;
}

@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (nonatomic) SCNNode *target;

- (void)_setAuthoringEnvironment:(id)arg1;
- (id)authoringEnvironment;
- (void)draw;
- (bool)mouseDown:(struct { id x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; double x6; })arg1;
- (bool)mouseDragged:(struct { id x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; double x6; })arg1;
- (bool)mouseMoved:(struct { id x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; double x6; })arg1;
- (bool)mouseUp:(struct { id x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct SCNVector3 { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; struct SCNVector3 { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5; double x6; })arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
