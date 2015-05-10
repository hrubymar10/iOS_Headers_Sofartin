/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerDirectionPad : GCControllerElement

@property(assign,readonly) GCControllerButtonInput * down;
@property(assign,readonly) GCControllerButtonInput * left;
@property(assign,readonly) GCControllerButtonInput * right;
@property(assign,readonly) GCControllerButtonInput * up;
@property(assign,copy) id valueChangedHandler;
@property(assign,readonly) GCControllerAxisInput * xAxis;
@property(assign,readonly) GCControllerAxisInput * yAxis;

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