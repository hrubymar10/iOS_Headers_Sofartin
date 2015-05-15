/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    bool _isFromPhraseDictionary;
    bool _isFromTextChecker;
    NSString *_label;
    unsigned int _usageTrackingMask;
    unsigned long long _wordOriginFeedbackID;
    bool extensionCandidate;
}

@property(getter=isExtensionCandidate,assign,readwrite) bool extensionCandidate;
@property(assign,readwrite) bool isFromPhraseDictionary;
@property(assign,readwrite) bool isFromTextChecker;
@property(assign,copy) NSString * label;

+ (bool)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutocorrection;
- (bool)isExtensionCandidate;
- (bool)isFromPhraseDictionary;
- (bool)isFromTextChecker;
- (id)label;
- (void)setExtensionCandidate:(bool)arg1;
- (void)setIsFromPhraseDictionary:(bool)arg1;
- (void)setIsFromTextChecker:(bool)arg1;
- (void)setLabel:(id)arg1;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

@end