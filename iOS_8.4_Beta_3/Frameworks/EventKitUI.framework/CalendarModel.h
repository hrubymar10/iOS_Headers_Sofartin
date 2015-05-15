/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {
    long long _cachedFakeTodayIndex;
    NSCalendar *_calendar;
    CalendarEventLoader *_eventLoader;
    EKEventStore *_eventStore;
    NSLock *_filterLock;
    unsigned long long _firstVisibleSecond;
    long long _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    <OccurrenceCacheDataSourceProtocol> *_occurrenceCacheDataSource;
    <OccurrenceCacheDataSourceProtocol> *_occurrenceCacheFilteredDataSource;
    long long _readWriteCalendarCount;
    NSString *_searchString;
    NSSet *_selectedCalendars;
    EKCalendarDate *_selectedDate;
    EKEvent *_selectedOccurrence;
    NSArray *_visibleCalendars;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic) unsigned long long firstVisibleSecond;
@property (nonatomic, readonly) long long readWriteCalendarCount;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSSet *selectedCalendars;
@property (nonatomic, copy) EKCalendarDate *selectedDate;
@property (nonatomic, readonly) EKCalendarDate *selectedDay;
@property (nonatomic, retain) EKEvent *selectedOccurrence;
@property (nonatomic, readonly) long long visibleCalendarCount;

- (void).cxx_destruct;
- (void)_createOccurrenceCacheDataSources;
- (id)_dataSourceUsingFilter:(bool)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)_invalidateCachedOccurrences;
- (void)_invalidateOccurrenceCacheDataSources;
- (void)_localeChanged:(id)arg1;
- (void)_notificationCountExpired:(id)arg1;
- (id)_notificationMonitor;
- (void)_notificationsExpired:(id)arg1;
- (void)_occurrenceCacheChanged;
- (void)_processReloadForCacheOnly:(bool)arg1 includingCalendars:(bool)arg2 checkCalendarsValid:(bool)arg3;
- (void)_recreateOccurrenceCacheDataSources;
- (void)_reloadIfTodayDetermined;
- (void)_searchResultsAvailable:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (void)_systemWake;
- (void)_timeZoneChanged:(id)arg1;
- (double)_tomorrow;
- (void)_tzSupportTodayRolledOver;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (long long)cachedFakeTodayIndex;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(bool)arg2;
- (bool)cachedOccurrencesAreBeingGenerated;
- (bool)cachedOccurrencesAreLoaded;
- (id)calendar;
- (void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3;
- (id)closestOccurrenceToTomorrowForEventUID:(int)arg1;
- (id)dateForCachedOccurrencesInSection:(long long)arg1;
- (id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(bool)arg2;
- (void)dealloc;
- (id)defaultCalendarForNewEvents;
- (void)ensureCalendarVisibleWithId:(id)arg1;
- (id)eventNotificationReferences;
- (unsigned long long)eventNotificationsCount;
- (id)eventStore;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(bool)arg2;
- (unsigned long long)firstVisibleSecond;
- (id)init;
- (bool)invitationBearingStoresExistForEvents;
- (bool)isCalendarVisibleWithID:(id)arg1;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(bool)arg2;
- (long long)numberOfDaysWithCachedOccurrences;
- (long long)numberOfDaysWithCachedOccurrencesUsingFilter:(bool)arg1;
- (id)occurrencesForDay:(id)arg1 waitForLoad:(bool)arg2;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (void)prepareForAppSuspend;
- (long long)readWriteCalendarCount;
- (void)refreshAccountListIfNeeded:(bool)arg1;
- (void)refreshCalendarDataIfNeeded:(bool)arg1;
- (bool)removeEvent:(id)arg1 withSpan:(int)arg2 error:(id*)arg3;
- (id)searchString;
- (bool)searchingOccurrences;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(bool*)arg2;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(bool*)arg2 usingFilter:(bool)arg3;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(bool)arg2;
- (id)selectedCalendars;
- (id)selectedDate;
- (id)selectedDateOccurrences:(bool)arg1 loadIsComplete:(bool*)arg2;
- (id)selectedDay;
- (id)selectedOccurrence;
- (bool)selectedOccurrenceIsSearchMatch;
- (void)setCalendar:(id)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setDesiredPaddingDays:(unsigned int)arg1;
- (void)setFirstVisibleSecond:(unsigned long long)arg1;
- (void)setMaxCachedDays:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSearchString:(id)arg1;
- (void)setSelectedCalendars:(id)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedOccurrence:(id)arg1;
- (void)startNotificationMonitor;
- (void)updateAfterAppResume;
- (long long)visibleCalendarCount;

@end
