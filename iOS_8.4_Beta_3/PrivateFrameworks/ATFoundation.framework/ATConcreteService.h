/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATConcreteService : ATService <ATMessageLinkObserver, ATMessageLinkRequestHandler> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_signalSource;
    double _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)run;
- (bool)stop;

@end
