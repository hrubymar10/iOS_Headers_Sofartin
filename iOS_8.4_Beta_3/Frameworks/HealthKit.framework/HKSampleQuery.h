/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSampleQuery : HKQuery {
    unsigned long long _limit;
    id _resultHandler;
    NSMutableArray *_results;
    NSArray *_sortDescriptors;
}

@property(assign,readonly) unsigned long long limit;
@property(assign,readonly) id resultHandler;
@property(assign,copy) NSArray * sortDescriptors;

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id)_queue_errorHandler;
- (void)_queue_validate;
- (void)deliverResultsBatch:(id)arg1 final:(bool)arg2 error:(id)arg3 forQuery:(id)arg4;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(id)arg5;
- (unsigned long long)limit;
- (id)resultHandler;
- (id)sortDescriptors;

@end