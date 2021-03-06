/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerAxisInput : GCControllerElement

@property(getter=isDigital,assign,readonly) bool digital;
@property(getter=isFlipped,assign,readonly) bool flipped;
@property(assign,readonly) GCControllerButtonInput * negative;
@property(assign,readonly) GCControllerButtonInput * positive;
@property(assign,readonly) float value;
@property(assign,copy) id valueChangedHandler;

- (bool)_setValue:(float)arg1;
- (id)description;
- (bool)isAnalog;
- (bool)isDigital;
- (bool)isFlipped;
- (id)negative;
- (id)positive;
- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (float)value;
- (id)valueChangedHandler;

@end
