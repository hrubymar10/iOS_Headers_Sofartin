/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate> {
    id _completionHandler;
    id _deliveryHandler;
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriRequest *_request;
    long long _state;
    <AFSiriTaskDelivering> *_taskDeliverer;
    NSXPCListener *_taskResponseListener;
    AFWatchdogTimer *_taskResponseWatchdogTimer;
    NSXPCListener *_usageResultListener;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_completeWithResponse:(id)arg1;
- (void)_completeWithResponse:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2;
- (void)handleSiriResponse:(id)arg1;
- (id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCompletionHandler:(id)arg1;
- (void)setDeliveryHandler:(id)arg1;
- (void)start;

@end
