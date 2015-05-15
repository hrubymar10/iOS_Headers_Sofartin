/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProvider.framework/FileProvider
 */

@interface FPDaemonConnection : NSObject {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection<FPDaemon> *_connectionQueueConnection;
}

@property(assign,readonly) NSXPCConnection<FPDaemon> * connection;
@property(assign,retain) NSObject<OS_dispatch_queue> * connectionQueue;
@property(assign,retain) NSXPCConnection<FPDaemon> * connectionQueueConnection;

+ (id)sharedConnection;

- (void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(id)arg2;
- (id)connection;
- (id)connectionQueue;
- (id)connectionQueueConnection;
- (void)documentURLFromBookmarkableString:(id)arg1 completion:(id)arg2;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id)arg4;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id)arg4;
- (id)init;
- (void)providePlaceholderForItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id)arg4;
- (void)providersCompletionHandler:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnectionQueueConnection:(id)arg1;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id)arg4;
- (void)stopProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id)arg4;
- (void)wakeUpCompletion:(id)arg1;

@end