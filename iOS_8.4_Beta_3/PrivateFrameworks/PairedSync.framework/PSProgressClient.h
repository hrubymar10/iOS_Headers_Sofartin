/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSProgressClient : NSObject <PSYProgressClient> {
    PSYProgressObserver *_progressObserver;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 progressObserver:(id)arg2;
- (oneway void)noteClientNotEntitled:(id)arg1;
- (oneway void)scheduledActivitiesDidComplete;
- (oneway void)scheduledActivitiesProgressStateChanged:(long long)arg1;
- (oneway void)scheduledActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3;
- (oneway void)scheduledActivityProgressChanged:(float)arg1 totalProgress:(float)arg2;

@end
