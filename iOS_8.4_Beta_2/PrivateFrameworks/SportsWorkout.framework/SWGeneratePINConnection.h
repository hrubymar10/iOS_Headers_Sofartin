/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWGeneratePINConnection : SWSyncServiceConnection {
    <SWSyncServiceConnectionDelegate><SWGeneratePINConnectionDelegate> *_delegate;
}

@property(assign,readwrite) <SWSyncServiceConnectionDelegate><SWGeneratePINConnectionDelegate> * delegate;

- (void)dealloc;
- (id)delegate;
- (void)handleResponse:(id)arg1;
- (id)initWithHost:(id)arg1 delegate:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
