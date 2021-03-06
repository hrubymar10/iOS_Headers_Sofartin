/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface _AXReplayInstance : NSObject {
    bool _async;
    long long _attemptsRemaining;
    id _completionBlock;
    bool _didSucceed;
    double _interval;
    long long _maxAttempts;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    id _replayBlock;
    NSError *_underlyingError;
    id _underlyingResult;
}

@property(assign,readwrite) bool async;
@property(assign,readwrite) long long attemptsRemaining;
@property(assign,copy) id completionBlock;
@property(assign,readwrite) bool didSucceed;
@property(assign,readwrite) double interval;
@property(assign,readwrite) long long maxAttempts;
@property(assign,retain) NSString * name;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * queue;
@property(assign,copy) id replayBlock;
@property(assign,retain) NSError * underlyingError;
@property(assign,retain) id underlyingResult;

+ (id)replayBlock:(id)arg1 name:(id)arg2 attempts:(long long)arg3 interval:(double)arg4 async:(bool)arg5 queue:(id)arg6 completion:(id)arg7;

- (void)_dispatchAsynchronously;
- (void)_dispatchSynchronously;
- (id)_genericFailError;
- (bool)async;
- (long long)attemptsRemaining;
- (id)completionBlock;
- (void)dealloc;
- (bool)didSucceed;
- (void)dispatch;
- (double)interval;
- (long long)maxAttempts;
- (id)name;
- (id)queue;
- (id)replayBlock;
- (void)setAsync:(bool)arg1;
- (void)setAttemptsRemaining:(long long)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setDidSucceed:(bool)arg1;
- (void)setInterval:(double)arg1;
- (void)setMaxAttempts:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReplayBlock:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (void)setUnderlyingResult:(id)arg1;
- (id)underlyingError;
- (id)underlyingResult;

@end
