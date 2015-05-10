/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSConnection : NSObject {
    NSObject<OS_dispatch_source> *_activityTimerSource;
    HSConnectionConfiguration *_configuration;
    NSURLSession *_connectionSession;
    long long _connectionState;
    long long _connectionType;
    unsigned int _controlKey;
    unsigned int _controlPort;
    unsigned int _interfaceID;
    unsigned int _promptID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    bool _tokenCheckRequred;
    bool authenticationRequired;
    unsigned int basePlaylistContainerID;
    unsigned int databaseID;
    unsigned int databaseRevision;
    HSFairPlayInfo *fairPlayInfo;
    NSString *homeSharingGroupID;
    unsigned int sessionID;
    bool tokenCheckRequired;
}

@property(getter=isAuthenticationRequired,assign,readwrite) bool authenticationRequired;
@property(assign,readwrite) unsigned int basePlaylistContainerID;
@property(assign,readonly) NSURL * baseURL;
@property(assign,readwrite) long long connectionState;
@property(assign,readonly) long long connectionType;
@property(assign,readwrite) unsigned int controlKey;
@property(assign,readwrite) unsigned int controlPort;
@property(assign,readwrite) unsigned int databaseID;
@property(assign,readwrite) unsigned int databaseRevision;
@property(assign,retain) HSFairPlayInfo * fairPlayInfo;
@property(assign,copy) NSString * homeSharingGroupID;
@property(assign,readwrite) unsigned int interfaceID;
@property(assign,readwrite) unsigned int promptID;
@property(assign,readwrite) unsigned int sessionID;
@property(assign,readwrite) bool tokenCheckRequired;
@property(getter=isTokenCheckRequired,assign,readonly) bool tokenCheckRequred;

+ (void)_scheduleDialogResetIfNeeded;

- (void).cxx_destruct;
- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id)arg2;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg1;
- (id)_onSerialQueue_connectionSession;
- (void)_onSerialQueue_sendRequest:(id)arg1 withInternalResponseHandler:(id)arg2;
- (unsigned int)_sapVersionForConnectionType;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(id)arg2;
- (void)_setupControlConnectionWithInternalConnectionCompletionHandler:(id)arg1;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg1;
- (void)connectWithCompletionHandler:(id)arg1;
- (long long)connectionState;
- (long long)connectionType;
- (unsigned int)controlKey;
- (unsigned int)controlPort;
- (unsigned int)databaseID;
- (unsigned int)databaseRevision;
- (void)dealloc;
- (void)disconnect;
- (id)fairPlayInfo;
- (id)homeSharingGroupID;
- (id)initWithBaseURL:(id)arg1;
- (id)initWithBaseURL:(id)arg1 connectionType:(long long)arg2;
- (id)initWithConfiguration:(id)arg1 connectionType:(long long)arg2;
- (unsigned int)interfaceID;
- (bool)isAuthenticationRequired;
- (bool)isTokenCheckRequired;
- (id)newControlConnection;
- (unsigned int)promptID;
- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;
- (unsigned int)sessionID;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setBasePlaylistContainerID:(unsigned int)arg1;
- (void)setConnectionState:(long long)arg1;
- (void)setControlKey:(unsigned int)arg1;
- (void)setControlPort:(unsigned int)arg1;
- (void)setDatabaseID:(unsigned int)arg1;
- (void)setDatabaseRevision:(unsigned int)arg1;
- (void)setFairPlayInfo:(id)arg1;
- (void)setHomeSharingGroupID:(id)arg1;
- (void)setInterfaceID:(unsigned int)arg1;
- (void)setPromptID:(unsigned int)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setTokenCheckRequired:(bool)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (bool)tokenCheckRequired;

@end