/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStatisticsQuery : HKQuery {
    id _completionHandler;
    unsigned long long _mergeStrategy;
    unsigned long long _options;
}

@property(assign,readonly) id completionHandler;
@property(assign,readwrite) unsigned long long mergeStrategy;
@property(assign,readonly) unsigned long long options;

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id)_queue_errorHandler;
- (void)_queue_validate;
- (id)completionHandler;
- (void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id)arg4;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)setMergeStrategy:(unsigned long long)arg1;

@end
