/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXServer : NSObject {
    AXIPCClient *_client;
    AXIPCServer *_server;
    NSString *_serverIdentifier;
    bool _shouldRegisterClientCallbackSourceOnMainRunloop;
}

@property(assign,retain) AXIPCClient * client;
@property(assign,retain) AXIPCServer * server;
@property(assign,copy) NSString * serverIdentifier;
@property(assign,readwrite) bool shouldRegisterClientCallbackSourceOnMainRunloop;

- (bool)_connectIfNecessary;
- (void)_connectServerIfNecessary;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)client;
- (void)dealloc;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)sendMessage:(id)arg1;
- (void)sendSimpleMessage:(id)arg1;
- (id)sendSimpleMessageWithObjectResult:(id)arg1;
- (bool)sendSimpleMessageWithResult:(id)arg1;
- (id)server;
- (id)serverIdentifier;
- (void)setClient:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setShouldRegisterClientCallbackSourceOnMainRunloop:(bool)arg1;
- (bool)shouldRegisterClientCallbackSourceOnMainRunloop;

@end
