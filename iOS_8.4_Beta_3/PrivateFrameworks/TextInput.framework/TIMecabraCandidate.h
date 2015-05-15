/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIMecabraCandidate : TIKeyboardCandidate {
    NSString *_candidate;
    bool _emojiCandidate;
    bool _extensionCandidate;
    NSString *_input;
    bool _isForShortcutConversion;
    NSNumber *_mecabraCandidatePointerValue;
}

@property (nonatomic, retain) NSNumber *mecabraCandidatePointerValue;

+ (bool)supportsSecureCoding;
+ (int)type;

- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(bool)arg4 isEmoji:(bool)arg5 isShortcut:(bool)arg6;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)input;
- (bool)isEmojiCandidate;
- (bool)isExtensionCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (id)mecabraCandidatePointerValue;
- (void)setMecabraCandidatePointerValue:(id)arg1;

@end
