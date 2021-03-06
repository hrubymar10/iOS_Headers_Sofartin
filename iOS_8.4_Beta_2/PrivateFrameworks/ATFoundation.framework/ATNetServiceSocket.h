/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {
    bool _connected;
    NSObject<OS_tcp_connection> *_connection;
    NSString *_interfaceName;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _readBuffer;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSString *_serviceDomain;
    NSString *_serviceName;
    NSString *_serviceType;
    NSObject<OS_dispatch_source> *_source;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * interfaceName;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_connect;
- (void)closeDescriptor;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)interfaceName;
- (bool)open;
- (void)setInterfaceName:(id)arg1;

@end
