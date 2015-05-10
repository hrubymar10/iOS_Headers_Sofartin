/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding> {
    long long _alternativeSelectionCount;
    long long _characterModificationCount;
    NSString *_correctedText;
}

@property(assign,readwrite) long long alternativeSelectionCount;
@property(assign,readwrite) long long characterModificationCount;
@property(assign,copy) NSString * correctedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)alternativeSelectionCount;
- (long long)characterModificationCount;
- (id)correctedText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlternativeSelectionCount:(long long)arg1;
- (void)setCharacterModificationCount:(long long)arg1;
- (void)setCorrectedText:(id)arg1;

@end