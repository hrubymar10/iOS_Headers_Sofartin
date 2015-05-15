/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSOperationInternal : NSObject {
    int __RC;
    id __activity;
    unsigned char __cached_isReady;
    id __children;
    id __completion;
    id __dependencies;
    id __down_dependencies;
    void *__implicitObsInfo;
    unsigned char __isBarrier;
    unsigned char __isCancelled;
    char *__nameBuffer;
    NSOperation *__nextOp;
    NSOperation *__nextPriOp;
    void *__obsInfo;
    NSOperation *__outerOp;
    struct pthread_override_s { } *__ov;
    unsigned char __pad1;
    unsigned char __pad3;
    NSOperation *__prevOp;
    BOOL __prio;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } *__pthread;
    int __qoses;
    NSOperationQueue *__queue;
    long long __seqno;
    int __state;
    double __thread_prio;
    long long __unfinished_deps;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    } __wait_cond;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } __wait_mutex;
}

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;

- (id)__;
- (id)_activity;
- (void)_addDependency:(id)arg1 outer:(id)arg2;
- (void)_cancel:(id)arg1;
- (id)_completionBlock;
- (id)_dependencies;
- (void)_invalidate;
- (bool)_isCancelled;
- (bool)_isExecuting;
- (bool)_isFinished;
- (bool)_isReady;
- (id)_name;
- (long long)_queuePriority;
- (void)_removeDependency:(id)arg1 outer:(id)arg2;
- (void)_setCompletionBlock:(id)arg1 outer:(id)arg2;
- (void)_setName:(id)arg1 outer:(id)arg2;
- (void)_setQueuePriority:(long long)arg1 outer:(id)arg2;
- (void)_setThreadPriority:(double)arg1 outer:(id)arg2;
- (void)_start:(id)arg1;
- (double)_threadPriority;
- (void)_waitUntilFinished:(id)arg1;
- (void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init:(id)arg1;

@end
