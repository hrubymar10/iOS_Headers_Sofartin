/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSErrorHandler : NSObject {
    SSXPCConnection *_controlConnection;
    <SSErrorHandlerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_failureTypes;
    SSXPCConnection *_observerConnection;
}

@property <SSErrorHandlerDelegate> *delegate;
@property (copy) NSArray *failureTypes;

- (void)_dispatchToDelegate:(id)arg1;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_openSessionWithMessage:(id)arg1;
- (void)_reconnectToDaemonWithCompletionBlock:(id)arg1;
- (void)_sendDisconnectMessage;
- (void)_tearDownConnections;
- (void)dealloc;
- (id)delegate;
- (id)failureTypes;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setFailureTypes:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (void)stopWithCompletionBlock:(id)arg1;

@end
