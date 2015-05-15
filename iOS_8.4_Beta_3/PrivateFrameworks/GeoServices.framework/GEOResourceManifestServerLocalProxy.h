/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestServerLocalProxy : NSObject <GEOResourceManifestServerProxy, NSURLConnectionDelegate> {
    GEOActiveTileGroup *_activeTileGroup;
    NSString *_authToken;
    NSLock *_authTokenLock;
    GEOResourceManifestConfiguration *_configuration;
    NSURLConnection *_connection;
    <GEOResourceManifestServerProxyDelegate> *_delegate;
    double _lastManifestRetryTimestamp;
    NSError *_lastResourceManifestLoadError;
    double _lastTileGroupRetryTimestamp;
    NSString *_loadingTileGroupUniqueIdentifier;
    unsigned long long _manifestRetryCount;
    NSMutableArray *_manifestUpdateCompletionHandlers;
    NSTimer *_manifestUpdateTimer;
    GEOResourceLoader *_resourceLoader;
    GEOResourceManifestDownload *_resourceManifest;
    NSMutableData *_responseData;
    NSString *_responseETag;
    bool _started;
    unsigned long long _tileGroupRetryCount;
    NSTimer *_tileGroupUpdateTimer;
    bool _wantsManifestUpdateOnReachabilityChange;
    bool _wantsTileGroupUpdateOnReachabilityChange;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <GEOResourceManifestServerProxyDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (void)_cancelConnection;
- (void)_changeActiveTileGroup:(id)arg1 flushTileCache:(bool)arg2 completionHandler:(id)arg3;
- (void)_cleanupConnection;
- (void)_considerChangingActiveTileGroup;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(bool)arg2 ignoreIdentifier:(bool)arg3;
- (id)_idealTileGroupToUse;
- (void)_loadFromDisk;
- (id)_manifestURL;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)_purgeOldRegionalResources;
- (void)_purgeOldResources;
- (void)_reachabilityChanged:(id)arg1;
- (id)_resourceInfosForTileGroup:(id)arg1;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)_startServer;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_updateManifest;
- (void)_updateManifest:(id)arg1;
- (bool)_updateManifestIfNecessary:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (void)_writeActiveTileGroupToDisk:(id)arg1;
- (void)_writeManifestToDisk:(id)arg1;
- (id)authToken;
- (void)closeConnection;
- (id)configuration;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forceUpdate:(id)arg1;
- (void)getResourceManifestWithHandler:(id)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)openConnection;
- (oneway void)resetActiveTileGroup;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id)arg2;
- (void)updateIfNecessary:(id)arg1;

@end
