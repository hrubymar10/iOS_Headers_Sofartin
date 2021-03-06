/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIDebugLogManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property(getter=_baseLogDirectoryURL,assign,copy) NSURL * baseLogDirectoryURL;
@property(getter=_queue,assign,readonly) NSObject<OS_dispatch_queue> * queue;
@property(getter=_siriLogDirectoryURL,assign,copy) NSURL * siriLogDirectoryURL;

+ (int)executeSystemCommand:(id)arg1 stdoutTo:(id)arg2;

- (void).cxx_destruct;
- (id)_archiveLogDirectoryAtURL:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)_archiveLogsInDirectoryAtURL:(id)arg1 matchingPatterns:(id)arg2 archiveName:(id)arg3 error:(id*)arg4;
- (id)_baseLogDirectoryURL;
- (void)_captureLogsAtURL:(id)arg1 logName:(id)arg2 sinceTime:(double)arg3 completion:(id)arg4;
- (id)_captureLogsInDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 withMimeType:(id)arg3 attemptCompression:(bool)arg4 limit:(long long)arg5 error:(id*)arg6;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id*)arg4;
- (id)_queue;
- (id)_siriLogDirectoryURL;
- (id)_uniqueTemporaryFileURL;
- (void)captureAVVoiceControllerLogsSinceTime:(double)arg1 completion:(id)arg2;
- (void)captureBasebandLogWithCompletion:(id)arg1;
- (void)captureLocationLogWithCompletion:(id)arg1;
- (void)capturePreviousConversationWithCompletion:(id)arg1;
- (void)captureSiriCFNetworkLogsWithCompletion:(id)arg1;
- (void)captureSiriCrashLogsWithCompletion:(id)arg1;
- (void)captureSiriLogsSinceTime:(double)arg1 completion:(id)arg2;
- (void)captureSiriSpeechLogsWithCompletion:(id)arg1;
- (void)captureSiriVoiceTriggerLogsWithCompletion:(id)arg1;
- (void)captureSystemLogSinceTime:(double)arg1 completion:(id)arg2;
- (void)captureVoiceServicesLogsSinceTime:(double)arg1 completion:(id)arg2;
- (void)captureWiFiLogWithCompletion:(id)arg1;
- (id)init;

@end
