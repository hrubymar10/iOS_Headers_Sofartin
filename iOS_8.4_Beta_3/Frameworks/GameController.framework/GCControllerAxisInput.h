/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerAxisInput : GCControllerElement

@property (getter=isDigital, nonatomic, readonly) bool digital;
@property (getter=isFlipped, nonatomic, readonly) bool flipped;
@property (nonatomic, readonly) GCControllerButtonInput *negative;
@property (nonatomic, readonly) GCControllerButtonInput *positive;
@property (readonly) float value;
@property (copy) id valueChangedHandler;

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
