/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICircleRepellor : NSObject {
    double _bufferSize;
    struct CGPoint { 
        double x; 
        double y; 
    } _center;
    PKPhysicsBody *_physicsBody;
    double _radius;
}

@property(assign,readwrite) double bufferSize;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } center;
@property(assign,retain) PKPhysicsBody * physicsBody;
@property(assign,readwrite) double radius;

- (void).cxx_destruct;
- (double)bufferSize;
- (struct CGPoint { double x1; double x2; })center;
- (id)description;
- (id)physicsBody;
- (double)radius;
- (void)setBufferSize:(double)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhysicsBody:(id)arg1;
- (void)setRadius:(double)arg1;

@end
