/* Generated by RuntimeBrowser.
 */

@protocol AFAssistantUIService <NSObject>

@optional

- (void)assistantConnection:(AFConnection *)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnection:(AFConnection *)arg1 didFinishAcousticIDRequestWithSuccess:(bool)arg2;
- (void)assistantConnection:(AFConnection *)arg1 openApplicationWithBundleID:(NSString *)arg2 URL:(NSURL *)arg3 completion:(id)arg4;
- (void)assistantConnection:(AFConnection *)arg1 openURL:(NSURL *)arg2 completion:(id)arg3;
- (void)assistantConnection:(AFConnection *)arg1 receivedCommand:(id <SAAceCommand>)arg2;
- (void)assistantConnection:(AFConnection *)arg1 requestFailedWithError:(NSError *)arg2 requestClass:(NSString *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 setUserActivtiyInfoAndMakeCurrent:(NSDictionary *)arg2 webpageURL:(NSURL *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 shouldSpeak:(bool)arg2;
- (void)assistantConnectionDidDetectMusic:(AFConnection *)arg1;
- (void)assistantConnectionDismissAssistant:(AFConnection *)arg1;
- (void)assistantConnectionInvalidateCurrentUserActivity:(AFConnection *)arg1;
- (void)assistantConnectionRequestFinished:(AFConnection *)arg1;
- (void)assistantConnectionRequestWillStart:(AFConnection *)arg1;
- (void)assistantConnectionWillStartAcousticIDRequest:(AFConnection *)arg1;

@end
