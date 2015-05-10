/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSourceQuery : HKQuery {
    id _completionHandler;
    id _updateHandler;
}

@property(assign,readonly) id completionHandler;
@property(assign,copy) id updateHandler;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (id)completionHandler;
- (void)deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(id)arg3;
- (void)setUpdateHandler:(id)arg1;
- (id)updateHandler;

@end
