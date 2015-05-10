/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {
    id _callback;
    id _cancellationToken;
    Class _entityClass;
    bool _finished;
    bool _isCancelled;
    NSPredicate *_predicate;
    int _retryCount;
    EKEventStore *_store;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

- (void)_startActualWithCompletion:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)disconnect;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (id)startWithCompletion:(id)arg1;
- (void)terminate;

@end
