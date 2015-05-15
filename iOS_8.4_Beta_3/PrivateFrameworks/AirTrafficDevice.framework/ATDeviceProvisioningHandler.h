/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {
    ATGrappaSession *_grappaSession;
    double _linkOpenTime;
    ATDeviceSettings *_settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getEndpointInfo;
- (void)_handleBeginSessionRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleCreateSessionRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleRegisterEndpointRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_processBeginSessionResponse:(id)arg1 onMessageLink:(id)arg2;
- (void)_processCreateSessionResponse:(id)arg1 onMessageLink:(id)arg2;
- (void)_processRegisterEndpointResponse:(id)arg1 onMessageLink:(id)arg2;
- (void)_sendBeginSessionRequestOnMessageLink:(id)arg1;
- (void)_sendCreateSessionRequestWithData:(id)arg1 onMessageLink:(id)arg2;
- (void)_sendRegisterEndpointRequestOnMessageLink:(id)arg1;
- (void)_setMessageLinkAsInitialized:(id)arg1;
- (id)init;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasOpened:(id)arg1;

@end
