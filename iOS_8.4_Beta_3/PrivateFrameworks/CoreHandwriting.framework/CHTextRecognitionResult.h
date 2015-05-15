/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTextRecognitionResult : CHRecognitionResult {
    bool _rare;
    NSString *_string;
    NSArray *_wordIDs;
    NSArray *_wordRanges;
}

@property (readonly) bool rare;
@property (readonly) NSString *string;
@property (readonly) NSArray *wordIDs;
@property (readonly) NSArray *wordRanges;

- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5;
- (bool)rare;
- (id)string;
- (id)wordIDs;
- (id)wordRanges;

@end
