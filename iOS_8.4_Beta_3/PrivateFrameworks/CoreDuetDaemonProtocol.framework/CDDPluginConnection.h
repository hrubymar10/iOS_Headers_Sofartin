/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDPluginConnection : NSObject {
    unsigned long long _clientId;
    CDDXPCConnection *_connection;
    CDDebug *_debug;
}

@property(assign,readonly) unsigned long long clientId;
@property(assign,readonly) CDDXPCConnection * connection;
@property(assign,readonly) CDDebug * debug;

- (void).cxx_destruct;
- (bool)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (unsigned long long)clientId;
- (id)connection;
- (bool)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(id)arg2;
- (id)debug;
- (id)init;
- (id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2;
- (id)messageWithError:(id*)arg1;
- (bool)registerForSignoffWithError:(id*)arg1 replyHandler:(id)arg2;
- (bool)requestSystemDataWithError:(id*)arg1 replyHandler:(id)arg2;
- (bool)sendMessageWithType:(long long)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(id)arg5;
- (bool)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (bool)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (bool)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (bool)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;

@end
