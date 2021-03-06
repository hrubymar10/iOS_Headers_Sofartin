/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioDataSource : MPUDataSource <RadioPushNotificationControllerDelegate> {
    <RURadioDataSourceDelegate> *_delegate;
    NSArray *_featuredStations;
    BOOL _optedInToRadio;
    RURadioPlaybackCoordinator *_playbackCoordinator;
    RadioPushNotificationController *_pushNotificationController;
    NSArray *_stations;
    NSArray *_userStations;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RURadioDataSourceDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSArray * featuredStations;
@property(assign,readonly) unsigned long long hash;
@property(getter=isOptedInToRadio,assign,readonly) bool optedInToRadio;
@property(assign,retain) RURadioPlaybackCoordinator * playbackCoordinator;
@property(assign,readonly) NSArray * stations;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSArray * userStations;

+ (void)_accountStoreDidChangeNotification:(id)arg1;
+ (void)_networkReachabilityDidChangeNotification:(id)arg1;
+ (void)_reloadRadioAvailability;
+ (void)_storeBagDidLoadNotification:(id)arg1;
+ (void)_updateRadioAvailabilityWithStoreBag:(id)arg1 error:(id)arg2;
+ (void)initialize;
+ (bool)isOptedInToRadio;
+ (bool)isRadioAvailable;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_deauthenticate;
- (void)_invalidateCalculatedEntities;
- (void)_notifyAssistantOfStationChanges;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_reloadOptedInToRadio;
- (void)checkAcceptedTermsWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (void)deauthenticateIfNecessary;
- (id)delegate;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (id)featuredStations;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOptedInToRadio;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (id)playbackCoordinator;
- (void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2;
- (void)refreshFeaturedStations;
- (void)setDelegate:(id)arg1;
- (void)setPlaybackCoordinator:(id)arg1;
- (id)stations;
- (void)synchronizeStationsAsAutomaticUpdate:(bool)arg1 withCompletionHandler:(id)arg2;
- (id)userStations;

@end
