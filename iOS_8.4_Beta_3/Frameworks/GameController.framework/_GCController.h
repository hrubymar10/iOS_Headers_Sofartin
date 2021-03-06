/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCController : GCController <NSSecureCoding> {
    id _controllerPausedHandler;
    unsigned long long _deviceHash;
    struct __IOHIDDevice { } *_deviceRef;
    long long _playerIndex;
    <GCNamedProfile> *_profile;
    unsigned int _service;
    NSString *_vendorName;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearDeviceRef;
- (id)controllerPausedHandler;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceHash;
- (struct __IOHIDDevice { }*)deviceRef;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedGamepad;
- (id)gamepad;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceRef:(struct __IOHIDDevice { }*)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)isAttachedToDevice;
- (id)motion;
- (long long)playerIndex;
- (id)profile;
- (unsigned int)service;
- (void)setControllerPausedHandler:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setProfile:(id)arg1;
- (id)vendorName;

@end
