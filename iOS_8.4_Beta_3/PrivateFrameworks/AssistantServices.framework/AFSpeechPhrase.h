/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {
    NSArray *_interpretations;
    bool _isLowConfidence;
}

@property (nonatomic, copy) NSArray *interpretations;
@property (nonatomic) bool isLowConfidence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestInterpretation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interpretations;
- (bool)isLowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setIsLowConfidence:(bool)arg1;

@end
