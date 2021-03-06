/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCGamepad : GCGamepad <GCNamedProfile, NSSecureCoding> {
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    _GCControllerButtonInput *_button2;
    _GCControllerButtonInput *_button3;
    GCController *_controller;
    _GCControllerDirectionPad *_dpad;
    bool _dpadFlippedY;
    _GCControllerButtonInput *_leftShoulder;
    _GCControllerButtonInput *_rightShoulder;
    id _valueChangedHandler;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * name;
@property(assign,readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(bool)arg2;
- (id)leftShoulder;
- (id)name;
- (id)rightShoulder;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;

@end
