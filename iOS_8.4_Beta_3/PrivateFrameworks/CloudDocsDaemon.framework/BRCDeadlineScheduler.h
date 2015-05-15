/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle> {
    id _computeNextAdmissibleDateForScheduling;
    NSObject<OS_dispatch_source> *_delay;
    bool _isCancelled;
    bool _isResumed;
    long long _lastSchedule;
    long long _leeway;
    BRCMinHeap *_minHeap;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

@property(assign,readwrite) long long coalescingLeeway;
@property(assign,copy) id computeNextAdmissibleDateForScheduling;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isCancelled;
@property(assign,readonly) NSObject<OS_dispatch_queue> * queue;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addToken:(id)arg1 deadline:(long long)arg2;
- (void)_close;
- (bool)_isSleepingRequiredForDeadline:(long long)arg1 now:(long long)arg2;
- (void)_schedule;
- (void)cancel;
- (void)close;
- (long long)coalescingLeeway;
- (id)computeNextAdmissibleDateForScheduling;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (bool)isCancelled;
- (id)queue;
- (void)resume;
- (void)setCoalescingLeeway:(long long)arg1;
- (void)setComputeNextAdmissibleDateForScheduling:(id)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)signal;
- (void)suspend;

@end