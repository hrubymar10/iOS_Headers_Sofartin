/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerButtonInput : GCControllerElement

@property(getter=isPressed,assign,readonly) bool pressed;
@property(assign,copy) id pressedChangedHandler;
@property(assign,readonly) float value;
@property(assign,copy) id valueChangedHandler;

- (bool)_setValue:(float)arg1;
- (bool)isPressed;
- (id)pressedChangedHandler;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (void)setPressedChangedHandler:(id)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (float)value;
- (id)valueChangedHandler;

@end
