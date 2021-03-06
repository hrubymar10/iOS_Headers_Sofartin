/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingSlaveController : AXHARemoteController <AXHARemoteUpdateProtocol, NSNetServiceDelegate> {
    AXRemoteHearingAidDevice *_device;
    struct __CFSocket { } *_ipv4socket;
    struct __CFSocket { } *_ipv6socket;
    bool _isVisible;
    AXHATimer *_resolveTimer;
    id _searchCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXRemoteHearingAidDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id searchCompletion;
@property (readonly) Class superclass;

- (void)acceptConnection:(int)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)init;
- (bool)initialize;
- (bool)isSlave;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)openConnectionIfNecessary;
- (void)receivedData:(id)arg1;
- (void)resetConnection;
- (void)resolveMasterWithCompletion:(id)arg1;
- (id)searchCompletion;
- (void)setDevice:(id)arg1;
- (void)setSearchCompletion:(id)arg1;
- (bool)setVisible:(bool)arg1;
- (void)updateProperty:(long long)arg1 forDeviceID:(id)arg2;
- (void)validatePairedAid;
- (void)writeValue:(id)arg1 forProperty:(long long)arg2 forDeviceID:(id)arg3;

@end
