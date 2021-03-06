/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKLibrary : NSObject <NPKGizmoClientProtocol> {
    NSObject<OS_dispatch_semaphore> *_connectionSemaphore;
    NSDate *_dateOfLastInvalidation;
    bool _disableCaching;
    bool _disabled;
    bool _initialLoadComplete;
    int _invalidationOccurrences;
    NSArray *_lastSeenRelevantPassTuples;
    bool _needsRelevancyInformation;
    bool _needsUpdatePassDescriptions;
    bool _noPassesInDaemon;
    NSMutableDictionary *_passCache;
    NSArray *_passDescriptions;
    NSTimer *_passLibraryChangedCoalescingTimer;
    NSObject<OS_dispatch_queue> *_passesQueue;
    bool _serverHasPasses;
    bool _serverHasPotentiallyRelevantPasses;
    bool _updatingPassDescriptions;
    NSMutableArray *_workToPerformAfterInitialLoad;
    NSXPCConnection *_xpcConnection;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disableCaching;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool initialLoadComplete;
@property(assign,retain) NSArray * lastSeenRelevantPassTuples;
@property(assign,readwrite) bool needsRelevancyInformation;
@property(assign,readwrite) bool needsUpdatePassDescriptions;
@property(assign,readonly) NSArray * nonPaymentPassDescriptions;
@property(assign,retain) NSMutableDictionary * passCache;
@property(assign,retain) NSArray * passDescriptions;
@property(assign,retain) NSTimer * passLibraryChangedCoalescingTimer;
@property(assign,retain) NSObject<OS_dispatch_queue> * passesQueue;
@property(assign,readonly) NSArray * paymentPassDescriptions;
@property(assign,readonly) NSArray * relevantPassTuples;
@property(assign,readwrite) bool serverHasPasses;
@property(assign,readwrite) bool serverHasPotentiallyRelevantPasses;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool updatingPassDescriptions;
@property(assign,retain) NSMutableArray * workToPerformAfterInitialLoad;
@property(assign,readonly) NSXPCConnection * xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_descriptionsWithFilter:(id)arg1;
- (id)_init;
- (void)_nukeConnectionBecauseOfInvalidation;
- (void)_updatePassDescriptions;
- (void)_updateRelevantPassIDs;
- (void)boostDaemonUntilPassDBAvailable:(id)arg1;
- (id)cachedPassWithID:(id)arg1;
- (void)dealloc;
- (void)deletePaymentPassWithID:(id)arg1;
- (bool)disableCaching;
- (void)getDeviceHasAnyPaymentPassesWithCompletion:(id)arg1;
- (void)getDiffForPassWithID:(id)arg1 reply:(id)arg2;
- (void)getPassWithID:(id)arg1 reply:(id)arg2;
- (void)getPassWithID:(id)arg1 reply:(id)arg2 queue:(id)arg3;
- (void)handlePassLibraryChangedNotification:(id)arg1;
- (void)handleRelevancyCheckCompletedNotification:(id)arg1;
- (void)handleRelevancyPotentialChangedNotification:(id)arg1;
- (void)handleRelevantPassTuplesChanged:(id)arg1;
- (void)handleRelevantPassTuplesChangedNotification:(id)arg1;
- (id)init;
- (bool)initialLoadComplete;
- (id)lastSeenRelevantPassTuples;
- (void)markAsHavingReceivedLocation;
- (bool)needsRelevancyInformation;
- (bool)needsUpdatePassDescriptions;
- (id)nonPaymentPassDescriptions;
- (id)passCache;
- (id)passDescriptions;
- (id)passLibraryChangedCoalescingTimer;
- (id)passesQueue;
- (id)paymentPassDescriptions;
- (void)performWorkAfterFirstLibraryLoad:(id)arg1;
- (id)relevantPassTuples;
- (bool)serverHasPasses;
- (bool)serverHasPotentiallyRelevantPasses;
- (void)setDisableCaching:(bool)arg1;
- (void)setInitialLoadComplete:(bool)arg1;
- (void)setLastSeenRelevantPassTuples:(id)arg1;
- (void)setNeedsRelevancyInformation:(bool)arg1;
- (void)setNeedsUpdatePassDescriptions:(bool)arg1;
- (void)setPassCache:(id)arg1;
- (void)setPassDescriptions:(id)arg1;
- (void)setPassLibraryChangedCoalescingTimer:(id)arg1;
- (void)setPassesQueue:(id)arg1;
- (void)setServerHasPasses:(bool)arg1;
- (void)setServerHasPotentiallyRelevantPasses:(bool)arg1;
- (void)setUpdatingPassDescriptions:(bool)arg1;
- (void)setWorkToPerformAfterInitialLoad:(id)arg1;
- (bool)updatingPassDescriptions;
- (id)workToPerformAfterInitialLoad;
- (id)xpcConnection;

@end
