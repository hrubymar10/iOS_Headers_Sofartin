/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentServerLocalProxy : NSObject <GEOExperimentServerProxy, GEOResourceManifestTileGroupObserver> {
    GEOABExperimentRequest *_currentRequest;
    NSLock *_currentRequestLock;
    <GEOExperimentServerProxyDelegate> *_delegate;
    GEOABExperimentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    NSObject<OS_dispatch_source> *_updateTimer;
    NSLock *_updateTimerLock;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <GEOExperimentServerProxyDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) GEOABExperimentResponse * experimentsInfo;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_invalidateTileCache:(bool)arg1 placesCache:(bool)arg2;
- (bool)_removeOldExperimentsInfoIfNecessary;
- (void)_scheduleUpdateTimer:(double)arg1;
- (double)_timeToNextUpdate;
- (void)_updateIfNecessary;
- (void)dealloc;
- (id)delegate;
- (id)experimentsInfo;
- (void)forceUpdate;
- (id)initWithDelegate:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
