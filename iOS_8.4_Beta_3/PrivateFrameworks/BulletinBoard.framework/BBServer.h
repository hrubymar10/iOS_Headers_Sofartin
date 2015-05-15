/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBServer : NSObject <ABPredicateDelegate, BBDataProviderManagerDelegate, BBNotificationBehaviorUtilitiesServerProtocol, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, BBSyncServiceDelegate, NSXPCListenerDelegate> {
    NSMutableArray *_activeBehaviorOverrideTypesChangeClients;
    NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;
    unsigned long long _activeBehaviorOverrides;
    unsigned long long _activeObserverBehaviorOverrideTypes;
    NSMutableDictionary *_activeSectionIDsByCategory;
    unsigned long long _activeSettingsGatewayBehaviorOverrideTypes;
    void *_addressBook;
    BBApplicationLauncher *_applicationLauncher;
    unsigned long long _behaviorOverrideState;
    long long _behaviorOverrideStatus;
    NSMutableArray *_behaviorOverrideStatusChangeClients;
    NSDate *_behaviorOverrideStatusEffectiveTime;
    NSArray *_behaviorOverrides;
    NSMutableArray *_behaviorOverridesChangeClients;
    bool _behaviorOverridesEffectiveWhileUnlocked;
    NSMutableArray *_behaviorOverridesEffectiveWhileUnlockedChangeClients;
    NSObject<OS_dispatch_source> *_behaviorOverridesTimer;
    NSDate *_behaviorOverridesWakeTime;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_bulletinRequestsByID;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_clearedSections;
    NSXPCListener *_conduitListener;
    unsigned long long _currentSystemState;
    NSMutableDictionary *_dataProviderFactoriesBySection;
    BBDataProviderManager *_dataProviderManager;
    int _demo_lockscreen_token;
    BBDismissalSyncCache *_dismissalSyncCache;
    bool _entryFound;
    NSMutableArray *_eventBasedExpiringBulletinIDs;
    NSObject<OS_dispatch_source> *_expirationTimer;
    NSMutableArray *_expiringBulletinIDs;
    ABFavoritesListManager *_favoritesListManager;
    NSMutableDictionary *_futureBulletinIDsBySectionID;
    unsigned long long _globalCounter;
    bool _isRunning;
    NSMutableDictionary *_lastContactTimeForSender;
    NSDate *_nextScheduledExpirationTimerFireDate;
    NSMutableDictionary *_noticeBulletinIDsBySectionID;
    NSMutableDictionary *_observerGatewayEnumerators;
    NSMutableArray *_observerGateways;
    NSMutableDictionary *_observerGatewaysByName;
    NSXPCListener *_observerListener;
    NSMutableSet *_observers;
    NSMutableSet *_observersByFeed;
    NSMutableDictionary *_pendingUpdatesByBulletinID;
    NSString *_privilegedAddressBookGroupName;
    int _privilegedAddressBookGroupRecordID;
    NSMutableArray *_privilegedSenderChangeSettingsGateways;
    bool _privilegedSenderFilteringNecessary;
    NSMutableArray *_privilegedSenderFilteringStateChangeClients;
    unsigned long long _privilegedSenderTypes;
    NSMutableArray *_privilegedSenderTypesChangeSettingsGateways;
    NSSet *_restrictedSectionIDs;
    NSMutableDictionary *_sectionInfoByID;
    long long _sectionOrderRule;
    int _serverIsRunningToken;
    NSMutableSet *_settingsGatewayConnections;
    NSXPCListener *_settingsListener;
    NSMutableDictionary *_sortedSectionIDsByCategory;
    NSMutableSet *_suspendedConnections;
    BBSyncService *_syncService;
    NSMutableSet *_systemStateConnections;
    NSXPCListener *_systemStateListener;
    NSMutableDictionary *_todayBulletinIDsBySectionID;
    NSMutableSet *_utilitiesConnections;
    NSXPCListener *_utilitiesListener;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;

+ (id)behaviorUtilitiesServerInterface;
+ (void)initialize;

- (unsigned long long)_activeBehaviorOverrideTypesConsideringSystemState:(bool)arg1;
- (id)_activeSectionIDsForCategory:(long long)arg1;
- (void)_addActiveSectionID:(id)arg1;
- (void)_addActiveSectionID:(id)arg1 toCategory:(long long)arg2;
- (void)_addBulletin:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_addSectionID:(id)arg1 toSortedSectionIDsForCategory:(long long)arg2;
- (void)_addSettingsGatewayConnection:(id)arg1;
- (void)_addSuspendedConnection:(id)arg1;
- (void)_addSystemStateConnection:(id)arg1;
- (void)_addUtilityConnection:(id)arg1;
- (void*)_addressBook;
- (id)_addressBookPredicateForDestinationID:(id)arg1;
- (unsigned long long)_adjustedBehaviorOverrideTypes:(unsigned long long)arg1 basedOnSystemState:(unsigned long long)arg2;
- (id)_allBulletinsForSectionID:(id)arg1;
- (id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (unsigned long long)_behaviorOverrideState;
- (void)_behaviorOverrideStatusChangedFromSource:(unsigned long long)arg1;
- (void)_behaviorOverrideTypesChangedFromSource:(unsigned long long)arg1;
- (id)_behaviorOverridesPath;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2;
- (bool)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2;
- (void)_checkPrivilegedSenderFilteringState;
- (void)_clearBehaviorOverridesTimer;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(bool)arg2;
- (void)_clearBulletinIDs:(id)arg1 andAllOtherBulletins:(bool)arg2 forSectionID:(id)arg3 shouldSync:(bool)arg4;
- (void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(bool)arg3;
- (void)_clearExpirationTimer;
- (void)_clearSection:(id)arg1;
- (id)_clearedInfoForSectionID:(id)arg1;
- (id)_clearedSectionsPath;
- (id)_dataDirectoryPath;
- (id)_defaultSectionOrderForCategory:(long long)arg1 topLevelCollection:(id)arg2;
- (id)_defaultSectionOrders;
- (bool)_deviceSupportsFavorites;
- (bool)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2;
- (bool)_doesAddressBookContainDestinationID:(id)arg1;
- (bool)_doesFavoritesListContainDestinationID:(id)arg1;
- (bool)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1;
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;
- (id)_enabledSectionIDsForDataProvider:(id)arg1;
- (void)_enqueueBulletinUpdate:(id)arg1;
- (void)_ensureDataDirectoryExists;
- (void)_expireBulletins;
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;
- (void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1;
- (id)_favoritesListManager;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3;
- (unsigned long long)_filtersForSectionID:(id)arg1;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemSleep;
- (void)_handleSystemWake;
- (unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (bool)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2;
- (bool)_isSectionIDRestricted:(id)arg1;
- (void)_loadBehaviorOverrides;
- (void)_loadClearedSections;
- (void)_loadDataProvidersAndSettings;
- (void)_loadSavedSectionInfo;
- (void)_loadSavedSectionOrderAndRule;
- (id)_mapForFeed:(unsigned long long)arg1;
- (void)_migrateLoadedData;
- (void)_migratePrivilegedSender;
- (void)_migrateSectionInfo;
- (void)_migrateSectionOrder;
- (void)_modifyBulletin:(id)arg1;
- (id)_nextExpireBulletinsDate;
- (void)_noteSystemStateChanged;
- (id)_observerGatewaysForFeeds:(unsigned long long)arg1;
- (id)_observersForCategory:(long long)arg1;
- (id)_observersForFeeds:(unsigned long long)arg1;
- (void)_performPendingBulletinUpdatesForBulletinID:(id)arg1;
- (void)_privilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_privilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 alwaysToLockScreen:(bool)arg4;
- (void)_publishBulletinsForAllDataProviders;
- (void)_reloadReloadSectionInfoForSectionID:(id)arg1;
- (void)_reloadSectionParametersForSectionID:(id)arg1;
- (id)_removalsForNoticesSection:(id)arg1 addition:(id)arg2 keepAddition:(bool*)arg3;
- (void)_removeActiveSectionID:(id)arg1;
- (void)_removeActiveSectionID:(id)arg1 fromCategory:(long long)arg2;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(bool)arg2 shouldSync:(bool)arg3;
- (void)_removeBulletin:(id)arg1 shouldSync:(bool)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_removeSection:(id)arg1;
- (void)_removeSettingsGatewayConnection:(id)arg1;
- (void)_removeSuspendedConnection:(id)arg1;
- (void)_removeSystemStateConnection:(id)arg1;
- (void)_removeUtilityConnection:(id)arg1;
- (void)_resumeAllSuspendedConnections;
- (void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_scheduleTimerForDate:(id)arg1;
- (id)_sectionIDsToMigrate;
- (id)_sectionInfoArrayForCategory:(long long)arg1 effective:(bool)arg2;
- (id)_sectionInfoForSectionID:(id)arg1 effective:(bool)arg2;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (void)_sendBulletinUpdate:(id)arg1;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (void)_sendObseversActiveOverrideTypes:(unsigned long long)arg1 state:(unsigned long long)arg2;
- (void)_sendPrivilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_sendPrivilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(bool)arg3;
- (void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(bool)arg3;
- (void)_sendSettingsGatewaysActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2;
- (void)_sendUpdateSectionInfo:(id)arg1 inCategory:(long long)arg2;
- (void)_sendUpdateSectionOrderForCategory:(long long)arg1;
- (void)_sendUpdateSectionOrderRule;
- (void)_sendUtilitiesActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2;
- (void)_setBehaviorOverridesTimer;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2;
- (id)_sortedActiveSectionsForCategory:(long long)arg1;
- (id)_sortedSectionIDsForCategory:(long long)arg1;
- (void)_storeObserver:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_updateAllBulletinsForDataProvider:(id)arg1;
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_updateBehaviorOverridesFromSource:(unsigned long long)arg1;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2;
- (void)_updateClearedInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_updateSectionInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)_updateShowsMessagePreviewForBulletin:(id)arg1;
- (id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2;
- (bool)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (void)_warmFavoritesListManagerToWorkaround17689168:(id)arg1;
- (void)_writeBehaviorOverrides;
- (void)_writeClearedSections;
- (void)_writeSectionInfo;
- (void)_writeSectionOrder;
- (id)activeSectionIDsForDefaultCategory;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2;
- (id)bulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2;
- (id)bulletinsRequestsForBulletinIDs:(id)arg1;
- (id)carBulletinIDsForSectionID:(id)arg1;
- (void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(bool)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (void)dealloc;
- (unsigned long long)defaultPrivilegedSenderType;
- (void)deliverResponse:(id)arg1;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
- (void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2;
- (void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
- (id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
- (unsigned long long)effectivePushSettingsForSectionInfo:(id)arg1;
- (void)forEachObserverFeedSetInGateways:(id)arg1;
- (id)futureBulletinIDsForSectionID:(id)arg1;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(id)arg1;
- (void)getBehaviorOverridesEnabledWithHandler:(id)arg1;
- (void)getBehaviorOverridesWithHandler:(id)arg1;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id)arg3;
- (void)getPrimaryAttachmentDataForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(id)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(id)arg3;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id)arg2;
- (id)init;
- (bool)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned long long)arg1 privilegedSenderTypes:(unsigned long long)arg2;
- (bool)isRunning;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(bool)arg2;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;
- (void)noteRestrictedSectionIDsDidChange:(id)arg1;
- (id)noticesBulletinIDsForSectionID:(id)arg1;
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(id)arg2;
- (void)observer:(id)arg1 getSectionInfoForCategory:(long long)arg2 withHandler:(id)arg3;
- (void)observer:(id)arg1 handleResponse:(id)arg2;
- (void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4;
- (void)observer:(id)arg1 requestFutureBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestTodayBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned long long)arg4;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 attachToLightsAndSirensGateway:(id)arg3;
- (void)ping:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (unsigned long long)privilegedSenderTypes;
- (void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3;
- (void)removeBulletinID:(id)arg1 fromFutureSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3;
- (void)removeBulletinID:(id)arg1 fromTodaySection:(id)arg2;
- (id)sectionIDForUniversalSectionID:(id)arg1;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(bool)arg1 forClient:(id)arg2;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(bool)arg1;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(bool)arg1 forClient:(id)arg2;
- (void)setOrderedSectionIDs:(id)arg1 forCategory:(long long)arg2;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(bool)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(bool)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
- (void)setSectionOrderRule:(long long)arg1;
- (bool)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
- (id)syncService:(id)arg1 sectionIdentifierForUniversalSectionIdentifier:(id)arg2;
- (bool)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
- (id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
- (id)todayBulletinIDsForSectionID:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3;
- (unsigned long long)userBulletinCapForSectionID:(id)arg1;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(bool)arg2;
- (void)withdrawBulletinID:(id)arg1;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;

@end
