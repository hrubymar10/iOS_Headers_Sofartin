/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerDirectionPad : GCControllerElement

@property (readonly) GCControllerButtonInput *down;
@property (readonly) GCControllerButtonInput *left;
@property (readonly) GCControllerButtonInput *right;
@property (readonly) GCControllerButtonInput *up;
@property (copy) id valueChangedHandler;
@property (readonly) GCControllerAxisInput *xAxis;
@property (readonly) GCControllerAxisInput *yAxis;

- (id)description;
- (id)down;
- (id)initWithFlippedY:(bool)arg1 digital:(bool)arg2;
- (id)left;
- (id)right;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (id)up;
- (id)valueChangedHandler;
- (id)xAxis;
- (id)yAxis;

@end
