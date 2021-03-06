/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCGamepad : NSObject

@property(assign,readonly) GCControllerButtonInput * buttonA;
@property(assign,readonly) GCControllerButtonInput * buttonB;
@property(assign,readonly) GCControllerButtonInput * buttonX;
@property(assign,readonly) GCControllerButtonInput * buttonY;
@property(assign,readonly) GCController * controller;
@property(assign,readonly) GCControllerDirectionPad * dpad;
@property(assign,readonly) GCControllerButtonInput * leftShoulder;
@property(assign,readonly) GCControllerButtonInput * rightShoulder;
@property(assign,copy) id valueChangedHandler;

+ (bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (void)didChangeValueForElement:(id)arg1;
- (id)dpad;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)leftShoulder;
- (id)rightShoulder;
- (id)saveSnapshot;
- (void)setButton:(id)arg1 pressed:(bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;

@end
