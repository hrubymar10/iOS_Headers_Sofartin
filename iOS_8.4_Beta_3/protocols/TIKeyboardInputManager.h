/* Generated by RuntimeBrowser.
 */

@protocol TIKeyboardInputManager <NSObject>

@required

- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(id)arg3;
- (void)candidateRejected:(TIKeyboardCandidate *)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(TIKeyboardState *)arg1 completionHandler:(id)arg2;
- (void)generateCandidatesWithKeyboardState:(TIKeyboardState *)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id)arg3;
- (void)generateRefinementsForCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(id)arg3;
- (void)generateReplacementsForString:(NSString *)arg1 keyLayout:(TIKeyboardLayout *)arg2 continuation:(id)arg3;
- (void)handleAcceptedCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(id)arg3;
- (void)handleKeyboardInput:(TIKeyboardInput *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(id)arg3;
- (void)lastAcceptedCandidateCorrected;
- (void)performHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2 continuation:(id)arg3;
- (void)setOriginalInput:(NSString *)arg1;
- (void)skipHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)syncToKeyboardState:(TIKeyboardState *)arg1 completionHandler:(id)arg2;
- (void)textAccepted:(TIKeyboardCandidate *)arg1;
- (void)writeTypologyLogWithCompletionHandler:(id)arg1;

@end