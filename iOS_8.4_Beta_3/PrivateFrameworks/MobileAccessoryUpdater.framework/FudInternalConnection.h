/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudInternalConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    bool didStop;
    NSObject<OS_dispatch_queue> *handlerQueue;
    id messageHandler;
    NSMutableDictionary *pendingRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (long long)getNextMessageID;
- (void)handleInboundNotification:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(id)arg3;
- (void)sendMessageToFud:(id)arg1;
- (void)sendMessageToFud:(id)arg1 reply:(id)arg2;
- (void)stop;

@end
