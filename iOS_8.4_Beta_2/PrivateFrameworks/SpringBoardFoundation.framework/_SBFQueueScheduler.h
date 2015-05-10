/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFQueueScheduler : NSObject <SBFScheduler> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)performBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1;

@end
