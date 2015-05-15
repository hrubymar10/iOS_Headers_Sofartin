/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsContact : NSObject {
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    struct CGVector { 
        double dx; 
        double dy; 
    } _contactNormal;
    struct CGPoint { 
        double x; 
        double y; 
    } _contactPoint;
    bool _didBegin;
    bool _didEnd;
    double _impulse;
}

@property (nonatomic, readonly) PKPhysicsBody *bodyA;
@property (nonatomic, readonly) PKPhysicsBody *bodyB;
@property (nonatomic, readonly) double collisionImpulse;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } contactNormal;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contactPoint;
@property bool didBegin;
@property bool didEnd;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)bodyA;
- (id)bodyB;
- (double)collisionImpulse;
- (struct CGVector { double x1; double x2; })contactNormal;
- (struct CGPoint { double x1; double x2; })contactPoint;
- (bool)didBegin;
- (bool)didEnd;
- (id)init;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;
- (void)setCollisionImpulse:(double)arg1;
- (void)setContactNormal:(struct CGVector { double x1; double x2; })arg1;
- (void)setContactPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDidBegin:(bool)arg1;
- (void)setDidEnd:(bool)arg1;

@end
