/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATMessageLinkProxyConnection : NSObject <ATMessageLinkObserver, ATMessageLinkProxyConnection, ATMessageLinkRequestHandler, NSStreamDelegate> {
    NSXPCConnection *_connection;
    <ATMessageLink> *_messageLink;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_streamReaders;
}

@property(assign,retain) NSXPCConnection * connection;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) <ATMessageLink> * messageLink;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;
@property(assign,retain) NSMutableSet * streamReaders;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(id)arg3;
- (void)connectWithCompletion:(id)arg1;
- (id)connection;
- (id)initWithMessageLink:(id)arg1 connection:(id)arg2;
- (id)messageLink;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (id)queue;
- (void)removeRequestHandlerForDataClass:(id)arg1 completion:(id)arg2;
- (void)sendRequest:(id)arg1 withCompletion:(id)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setMessageLink:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStreamReaders:(id)arg1;
- (id)streamReaders;

@end
