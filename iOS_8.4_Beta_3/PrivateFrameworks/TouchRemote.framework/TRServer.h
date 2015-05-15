/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRServer : NSObject <NSNetServiceDelegate> {
    TRAdvertisingInfo *_advertisingInfo;
    <TRServerDelegate> *_delegate;
    NSObject<OS_tcp_listener> *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSString *_name;
    NSNetService *_netService;
    unsigned short _port;
}

@property(assign,copy) TRAdvertisingInfo * advertisingInfo;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <TRServerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * name;
@property(assign,readonly) unsigned short port;
@property(assign,readonly) Class superclass;

+ (id)newServerWithName:(id)arg1;
+ (id)newServerWithName:(id)arg1 port:(unsigned short)arg2;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 port:(unsigned short)arg2;
- (id)advertisingInfo;
- (void)dealloc;
- (id)delegate;
- (id)name;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (unsigned short)port;
- (void)setAdvertisingInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
