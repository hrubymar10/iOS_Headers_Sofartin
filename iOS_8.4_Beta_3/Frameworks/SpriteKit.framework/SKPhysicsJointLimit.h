/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointLimit : SKPhysicsJoint {
    double _maxLength;
}

@property(assign,readwrite) double maxLength;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint { double x1; double x2; })arg3 anchorB:(struct CGPoint { double x1; double x2; })arg4;

- (double)maxLength;
- (void)setMaxLength:(double)arg1;

@end
