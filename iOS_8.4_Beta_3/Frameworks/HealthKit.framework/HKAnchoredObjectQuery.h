/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAnchoredObjectQuery : HKQuery {
    NSNumber *_anchor;
    id _completionHandler;
    unsigned long long _limit;
}

@property(assign,retain) NSNumber * anchor;
@property(assign,readonly) id completionHandler;
@property(assign,readwrite) unsigned long long limit;

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id)_queue_errorHandler;
- (void)_queue_validate;
- (id)anchor;
- (id)completionHandler;
- (void)deliverDataObjects:(id)arg1 withAnchor:(id)arg2 queryUUID:(id)arg3;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(id)arg5;
- (unsigned long long)limit;
- (void)setAnchor:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;

@end
