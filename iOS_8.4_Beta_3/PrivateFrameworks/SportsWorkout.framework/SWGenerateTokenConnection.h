/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWGenerateTokenConnection : SWSyncServiceConnection {
    NSString *_PIN;
    <SWSyncServiceConnectionDelegate><SWGenerateTokenConnectionDelegate> *_delegate;
}

@property (nonatomic, readonly) NSString *PIN;
@property (nonatomic) <SWSyncServiceConnectionDelegate><SWGenerateTokenConnectionDelegate> *delegate;

- (id)PIN;
- (void)dealloc;
- (id)delegate;
- (void)handleResponse:(id)arg1;
- (id)initWithPIN:(id)arg1 host:(id)arg2 delegate:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
