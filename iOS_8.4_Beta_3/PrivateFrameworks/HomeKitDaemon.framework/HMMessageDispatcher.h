/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMMessageDispatcher : NSObject {
    NSMutableDictionary *_notificationHandlers;
    bool _remoteSource;
    <HMMessageTransport> *_transport;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *notificationHandlers;
@property (getter=isRemoteSource, nonatomic) bool remoteSource;
@property (nonatomic) <HMMessageTransport> *transport;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_deregisterForMessage:(id)arg1 receiver:(id)arg2 token:(id)arg3;
- (void)_sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (id)initWithTransport:(id)arg1;
- (bool)isRemoteSource;
- (id)notificationHandlers;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)setNotificationHandlers:(id)arg1;
- (void)setRemoteSource:(bool)arg1;
- (void)setTransport:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)transport;
- (id)workQueue;

@end
