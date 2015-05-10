/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {
    NSMutableArray *_clientConnections;
    <WebBookmarksXPCConnectionDelegate> *_delegate;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableDictionary *_messageHandlers;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_handleIncomingConnection:(id)arg1;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)dealloc;
- (id)initListenerForMachService:(const char *)arg1 delegate:(id)arg2;
- (void)setHandler:(id)arg1 forMessageNamed:(const char *)arg2;
- (void)setMessageHandlers:(id)arg1;

@end