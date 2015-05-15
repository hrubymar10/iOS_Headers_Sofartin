/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequester : PBRequester {
    NSString *_debugRequestName;
    bool _disableReplay;
    NSThread *_thread;
    bool _useBackgroundConnection;
    bool _usePersistentConnection;
}

@property(assign,retain) NSString * debugRequestName;
@property(assign,readwrite) bool disableReplay;

+ (id)_logRequestResponseDirectory;
+ (void)enablePersistentConnection;
+ (void)replayRequests;
+ (void)setAppID:(id)arg1;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (void)setOSVersion:(id)arg1;
+ (void)stopAllRequests;

- (void)_applicationDidStopAllRequests:(id)arg1;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_handleResumeOnThread;
- (void)_handleSuspendOnThread;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)dealloc;
- (id)debugRequestName;
- (bool)disableReplay;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(bool)arg3;
- (id)logRequestToFile;
- (id)logResponseToFile;
- (struct _CFURLRequest { }*)newCFMutableURLRequestWithURL:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2;
- (id)persistentConnectionSession;
- (id)requestPreamble;
- (void)setDebugRequestName:(id)arg1;
- (void)setDisableReplay:(bool)arg1;
- (void)start;
- (void)startWithConnectionProperties:(id)arg1;

@end
