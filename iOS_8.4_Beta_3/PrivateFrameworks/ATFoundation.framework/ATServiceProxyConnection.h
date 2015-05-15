/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATServiceProxyConnection : NSObject <ATServiceObserver, ATServiceProxyConnection> {
    NSXPCConnection *_connection;
    ATService *_service;
}

@property(assign,retain) NSXPCConnection * connection;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) ATService * service;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectWithCompletion:(id)arg1;
- (id)connection;
- (void)fetchMessageLinksWithCompletion:(id)arg1;
- (id)initWithService:(id)arg1 connection:(id)arg2;
- (id)service;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setService:(id)arg1;

@end