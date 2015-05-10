/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable> {
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    id _completionBlock;
    id _context;
    <CoreDAVTaskGroupDelegate> *_delegate;
    NSError *_error;
    bool _isCancelling;
    bool _isFinished;
    bool _isTearingDown;
    NSMutableSet *_outstandingTasks;
    id _progressBlock;
    <CoreDAVTaskManager> *_taskManager;
    double _timeoutInterval;
}

@property(assign,readwrite) <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(assign,copy) id completionBlock;
@property(assign,retain) id context;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CoreDAVTaskGroupDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) NSError * error;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSMutableSet * outstandingTasks;
@property(assign,copy) id progressBlock;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) <CoreDAVTaskManager> * taskManager;
@property(assign,readwrite) double timeoutInterval;

- (void)_tearDownAllTasks;
- (id)accountInfoProvider;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (id)completionBlock;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(id)arg2;
- (void)finishEarlyWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)outstandingTasks;
- (id)progressBlock;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setTaskManager:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)startTaskGroup;
- (void)submitWithTaskManager:(id)arg1;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)taskManager;
- (double)timeoutInterval;

@end
