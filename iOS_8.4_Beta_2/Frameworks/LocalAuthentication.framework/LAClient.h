/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAClient : NSObject <LAContextCallbackXPC, LAContextXPC> {
    NSMutableArray *_callInvalidationBlocks;
    NSData *_connectToContext;
    NSString *_creatorName;
    NSXPCConnection *_daemonConnection;
    NSData *_externalizedContext;
    NSError *_permanentError;
    <LAContextXPC> *_remoteContext;
    bool _shouldRecoverConnection;
    <LAUIDelegate> *_uiDelegate;
}

@property(assign,retain) NSData * connectToContext;
@property(assign,readonly) NSString * creatorDisplayName;
@property(assign,readonly) NSData * externalizedContext;
@property(assign,readwrite) <LAUIDelegate> * uiDelegate;

+ (id)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 error:(id*)arg3;
+ (void)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 reply:(id)arg3;

- (void).cxx_destruct;
- (void)_recoverConnection;
- (void)_scheduleRecovery;
- (bool)_setPermanentError:(id)arg1;
- (id)connectToContext;
- (id)creatorDisplayName;
- (void)creatorName:(id)arg1;
- (void)dealloc;
- (void)enterPassword:(id)arg1 reply:(id)arg2;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(id)arg4;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(id)arg3;
- (id)externalizedContext;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(id)arg3;
- (void)invalidate;
- (void)invalidatedWithError:(id)arg1;
- (void)setConnectToContext:(id)arg1;
- (void)setUiDelegate:(id)arg1;
- (void)setupDaemonConnection:(id)arg1 remoteContext:(id)arg2 constInfo:(id)arg3;
- (id)uiDelegate;

@end