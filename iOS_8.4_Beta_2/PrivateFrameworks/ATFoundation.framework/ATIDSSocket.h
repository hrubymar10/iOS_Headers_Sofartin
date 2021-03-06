/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATIDSSocket : ATSocket {
    unsigned int _btWriteBufferSize;
    IDSDevice *_device;
    IDSDeviceConnection *_deviceConnection;
    long long _priority;
    ATIDSService *_service;
    unsigned int _wifiWriteBufferSize;
}

@property(assign,readonly) IDSDevice * device;
@property(assign,readonly) long long priority;
@property(assign,readonly) ATIDSService * service;

- (void).cxx_destruct;
- (void)addTransportUpgradeException;
- (void)closeDescriptor;
- (void)connectWithCompletion:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 service:(id)arg2 priority:(long long)arg3;
- (bool)open;
- (long long)priority;
- (void)removeTransportUpgradeException;
- (id)service;

@end
