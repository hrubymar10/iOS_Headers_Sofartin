/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechConnection : NSObject {
    NSXPCConnection *_connection;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    VSSpeechRequest *_request;
}

@property (nonatomic) <VSSpeechConnectionDelegate> *delegate;
@property (nonatomic, readonly) VSSpeechRequest *request;

- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInvalidated;
- (id)_remoteObject;
- (id)_remoteObjectWithErrorHandler:(id)arg1;
- (void)_setRequest:(id)arg1;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)continueCurrentSpeechRequest;
- (void)dealloc;
- (id)delegate;
- (void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(id)arg3;
- (void)getAllVoiceAssets:(id)arg1;
- (void)getAutoDownloadedVoiceAssets:(id)arg1;
- (void)getLocalVoiceAssets:(id)arg1;
- (void)getLogToFile:(id)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(bool)arg4 reply:(id)arg5;
- (bool)isSystemSpeaking;
- (bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (id)request;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogToFile:(bool)arg1;
- (void)startSpeechRequest:(id)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;

@end
