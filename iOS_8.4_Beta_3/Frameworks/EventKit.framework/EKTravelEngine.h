/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngine : NSObject {
    id _adviceBlock;
    bool _databaseIsEncryptedAndUnreadable;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    bool _needsRefresh;
    PCPersistentTimer *_periodicRefreshTimer;
    bool _running;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    EKTravelEngineThrottle *_throttle;
    EKTravelAdvisor *_travelAdvisor;
    NSObject<OS_dispatch_queue> *_travelEngineQueue;
    bool _yieldingToSync;
}

@property(assign,copy) id adviceBlock;

+ (id)_engineIdentifier;
+ (int)_geoTransportTypeForCalLocationRoutingMode:(long long)arg1;
+ (bool)hasTravelEligibleEvents:(id)arg1;

- (void)_calDatabaseChangedNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_installPeriodicRefreshTimer;
- (void)_installSyncYieldTimer;
- (bool)_isProtectedDataAvailable;
- (void)_locationAuthorizationChanged:(int)arg1;
- (void)_mobileKeyBagLockStatusNotificationReceived;
- (void)_periodicRefreshTimerFired:(id)arg1;
- (void)_receivedTravelAdvice:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)_refreshIfNeeded;
- (void)_registerForNotificationObservation;
- (void)_significantTimeChangeNotificationReceived;
- (void)_trimAgendaEntriesBeforeDate:(id)arg1 andAfterDate:(id)arg2;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_uninstallSyncYieldTimer;
- (void)_unregisterAllAgendaItems;
- (void)_unregisterForNotificationObservation;
- (id)adviceBlock;
- (void)ceaseMonitoringAgendaItemForEventWithExternalURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setAdviceBlock:(id)arg1;
- (void)start;
- (void)stop;

@end