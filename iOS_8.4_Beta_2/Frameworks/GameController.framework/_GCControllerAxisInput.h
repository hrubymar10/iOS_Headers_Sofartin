/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerAxisInput : GCControllerAxisInput {
    GCControllerElement *_collection;
    bool _digital;
    bool _flipped;
    GCControllerButtonInput *_negative;
    GCControllerButtonInput *_positive;
    float _value;
    id _valueChangedHandler;
}

- (void).cxx_destruct;
- (bool)_setValue:(float)arg1;
- (id)collection;
- (id)initWithCollection:(id)arg1 flipped:(bool)arg2 digital:(bool)arg3;
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
