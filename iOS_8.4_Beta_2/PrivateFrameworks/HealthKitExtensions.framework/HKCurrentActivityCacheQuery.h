/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitExtensions.framework/HealthKitExtensions
 */

@interface HKCurrentActivityCacheQuery : HKQuery {
    HKActivityCache *_lastActivityCache;
    id _updateHandler;
}

@property(assign,retain) HKActivityCache * lastActivityCache;
@property(assign,copy) id updateHandler;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)deliverSample:(id)arg1 forQuery:(id)arg2;
- (id)initWithUpdateHandler:(id)arg1;
- (id)lastActivityCache;
- (void)setLastActivityCache:(id)arg1;
- (void)setUpdateHandler:(id)arg1;
- (id)updateHandler;

@end
