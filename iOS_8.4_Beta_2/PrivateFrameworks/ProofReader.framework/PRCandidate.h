/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRCandidate : NSObject {
    bool _blacklisted;
    double _errorScore;
    double _lmScore;
    NSString *_string;
}

+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 errorType:(unsigned long long)arg3;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 errorType:(unsigned long long)arg4;
+ (id)candidateWithString:(id)arg1 errorScore:(double)arg2;
+ (id)candidateWithString:(id)arg1 errorType:(unsigned long long)arg2;
+ (double)errorScoreForType:(unsigned long long)arg1;

- (void)dealloc;
- (id)description;
- (double)errorScore;
- (id)initWithString:(id)arg1 errorScore:(double)arg2;
- (bool)isBlacklisted;
- (double)languageModelScore;
- (double)score;
- (void)setBlacklisted:(bool)arg1;
- (void)setErrorScore:(double)arg1;
- (void)setLanguageModelScore:(double)arg1;
- (id)string;

@end
