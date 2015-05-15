/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent {
    NSString *_commandModifiedInput;
    int _inputFlags;
    NSString *_markedInput;
    NSString *_modifiedInput;
    long long _modifierFlags;
    NSString *_privateInput;
    NSString *_shiftModifiedInput;
    NSString *_unmodifiedInput;
}

@property (nonatomic, retain) NSString *_commandModifiedInput;
@property (nonatomic, readonly) long long _gsModifierFlags;
@property (nonatomic) int _inputFlags;
@property (nonatomic, readonly) bool _isKeyDown;
@property (nonatomic, readonly) long long _keyCode;
@property (nonatomic, retain) NSString *_markedInput;
@property (nonatomic, retain) NSString *_modifiedInput;
@property (nonatomic) long long _modifierFlags;
@property (nonatomic, retain) NSString *_privateInput;
@property (nonatomic, retain) NSString *_shiftModifiedInput;
@property (nonatomic, retain) NSString *_unmodifiedInput;

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;

- (id)_cloneEvent;
- (id)_commandModifiedInput;
- (long long)_gsModifierFlags;
- (int)_inputFlags;
- (bool)_isKeyDown;
- (long long)_keyCode;
- (id)_markedInput;
- (bool)_matchesKeyCommand:(id)arg1;
- (id)_modifiedInput;
- (long long)_modifierFlags;
- (id)_privateInput;
- (void)_privatizeInput;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1 keyboard:(struct __GSKeyboard { }*)arg2;
- (id)_shiftModifiedInput;
- (id)_unmodifiedInput;
- (void)dealloc;
- (bool)isEqual:(id)arg1;
- (void)set_commandModifiedInput:(id)arg1;
- (void)set_inputFlags:(int)arg1;
- (void)set_markedInput:(id)arg1;
- (void)set_modifiedInput:(id)arg1;
- (void)set_modifierFlags:(long long)arg1;
- (void)set_privateInput:(id)arg1;
- (void)set_shiftModifiedInput:(id)arg1;
- (void)set_unmodifiedInput:(id)arg1;
- (long long)type;

@end
