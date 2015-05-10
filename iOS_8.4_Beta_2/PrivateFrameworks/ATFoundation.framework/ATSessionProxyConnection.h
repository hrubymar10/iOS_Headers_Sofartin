/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATSessionProxyConnection : NSObject <ATSessionObserver, ATSessionProxy> {
    NSXPCConnection *_connection;
    ATSession *_session;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)connect;
- (id)initWithSession:(id)arg1 connection:(id)arg2;
- (void)session:(id)arg1 didFinishSessionTask:(id)arg2;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (void)start;
- (void)stop;

@end