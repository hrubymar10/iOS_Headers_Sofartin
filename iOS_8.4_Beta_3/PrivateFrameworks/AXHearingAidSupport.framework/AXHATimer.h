/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHATimer : NSObject {
    AXHAAccessQueue *_accessQueue;
    bool _accessQueueIsExternal;
    bool _active;
    bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSString *_label;
    int _state;
}

@property (nonatomic, retain) AXHAAccessQueue *accessQueue;
@property (nonatomic) bool accessQueueIsExternal;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) bool automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *dispatchTimer;
@property (copy) NSString *label;
@property (getter=isPending, nonatomic, readonly) bool pending;
@property (nonatomic) int state;

+ (id)timerTargettingMainAccessQueue;

- (void)_afterDelay:(double)arg1 processBlock:(id)arg2 shouldTreatAsWritingBlock:(bool)arg3;
- (void)_didFinishProcessingBlock;
- (void)_performEnqueuedWritingBlock:(id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
- (void)_reallyCancel;
- (void)_warnAboutAsynchronousCancelling;
- (void)_warnAboutAsynchronousScheduling;
- (id)accessQueue;
- (bool)accessQueueIsExternal;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processWritingBlock:(id)arg2;
- (bool)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)dispatchTimer;
- (id)init;
- (id)initWithTargetAccessQueue:(id)arg1;
- (bool)isActive;
- (bool)isPending;
- (id)label;
- (void)setAccessQueue:(id)arg1;
- (void)setAccessQueueIsExternal:(bool)arg1;
- (void)setActive:(bool)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(bool)arg1;
- (void)setDispatchTimer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
