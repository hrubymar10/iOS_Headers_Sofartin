/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {
    NSString *_accentKeyString;
    bool _assertDefaultKeyPlane;
    TIKeyboardInputManagerState *_inputManagerState;
    TIKeyboardIntermediateText *_intermediateText;
    NSString *_layoutTag;
}

@property(assign,copy) NSString * accentKeyString;
@property(assign,readwrite) bool assertDefaultKeyPlane;
@property(assign,copy) TIKeyboardInputManagerState * inputManagerState;
@property(assign,retain) TIKeyboardIntermediateText * intermediateText;
@property(assign,copy) NSString * layoutTag;

+ (bool)supportsSecureCoding;

- (id)accentKeyString;
- (bool)assertDefaultKeyPlane;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)inputManagerState;
- (id)intermediateText;
- (id)layoutTag;
- (void)setAccentKeyString:(id)arg1;
- (void)setAssertDefaultKeyPlane:(bool)arg1;
- (void)setInputManagerState:(id)arg1;
- (void)setIntermediateText:(id)arg1;
- (void)setLayoutTag:(id)arg1;

@end
