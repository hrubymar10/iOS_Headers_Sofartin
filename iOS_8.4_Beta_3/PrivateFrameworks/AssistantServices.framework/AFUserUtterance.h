/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUserUtterance : NSObject {
    NSDictionary *_correctionIdentifier;
    NSMutableArray *_phrases;
    NSString *_text;
    NSMutableArray *_tokens;
}

@property (nonatomic, readonly) NSDictionary *correctionIdentifier;
@property (nonatomic, readonly) NSArray *dictationResult;

- (void).cxx_destruct;
- (id)bestTextInterpretation;
- (id)correctionIdentifier;
- (id)description;
- (id)dictationResult;
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2;
- (id)streamingTokens;

@end
