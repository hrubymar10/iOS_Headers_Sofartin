/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFPasscodeLockAssertionTracker : NSObject {
    NSMutableSet *_assertions;
    struct __MKBAssertion { } *_mkbAssertion;
}

- (void)addAssertion:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)hasActiveAssertions;
- (id)init;
- (id)mkbAssertionOptions;
- (void)removeAssertion:(id)arg1;

@end
