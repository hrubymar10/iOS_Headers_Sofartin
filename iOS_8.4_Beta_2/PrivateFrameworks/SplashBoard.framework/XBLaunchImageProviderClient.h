/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageProviderClient : BSBaseXPCClient

- (id)_connectionInstanceUUID;
- (void)_sendMessageType:(long long)arg1 withMessage:(id)arg2 withReplyHandler:(id)arg3 waitForReply:(bool)arg4;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)killService;
- (void)launchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 completionHandler:(id)arg3;

@end
