/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLSpringBoardAgent : PLAgent {
    PLAccountingGroup *_appAccountingGroup;
    bool _autoLockIsNil;
    PLNSTimerOperatorComposition *_dailyWallpaperPoll;
    PLEntryNotificationOperatorComposition *_displayOffNotification;
    PLNSNotificationOperatorComposition *_notificationSBAutoLockTimerFiredNotification;
    PLCFNotificationOperatorComposition *_notificationSBBlankTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBLocalNotificationFired;
    PLCFNotificationOperatorComposition *_notificationSBLockTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBRemoteNotificationReceived;
    PLNSNotificationOperatorComposition *_notificationSBScreenTimeTrackingChanged;
    PLNSNotificationOperatorComposition *_notificationSBWallpaperTrackingChanged;
    NSDictionary *_screenNumberToName;
}

@property(assign,retain) PLAccountingGroup * appAccountingGroup;
@property(assign,readwrite) bool autoLockIsNil;
@property(assign,retain) PLNSTimerOperatorComposition * dailyWallpaperPoll;
@property(assign,retain) PLEntryNotificationOperatorComposition * displayOffNotification;
@property(assign,readonly) PLNSNotificationOperatorComposition * notificationSBAutoLockTimerFiredNotification;
@property(assign,readonly) PLCFNotificationOperatorComposition * notificationSBBlankTrackingChanged;
@property(assign,readonly) PLNSNotificationOperatorComposition * notificationSBLocalNotificationFired;
@property(assign,readonly) PLCFNotificationOperatorComposition * notificationSBLockTrackingChanged;
@property(assign,readonly) PLNSNotificationOperatorComposition * notificationSBRemoteNotificationReceived;
@property(assign,readonly) PLNSNotificationOperatorComposition * notificationSBScreenTimeTrackingChanged;
@property(assign,readonly) PLNSNotificationOperatorComposition * notificationSBWallpaperTrackingChanged;
@property(assign,retain) NSDictionary * screenNumberToName;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionBlank;
+ (id)entryEventForwardDefinitionLock;
+ (id)entryEventForwardDefinitionScreen;
+ (id)entryEventForwardDefinitionWallpaper;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointAutoLock;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointLocalRemoteNotifications;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (void)addAccountingEvent:(id)arg1;
- (id)appAccountingGroup;
- (bool)autoLockIsNil;
- (void)closeLastOpenEventAtDate:(id)arg1;
- (id)dailyWallpaperPoll;
- (void)dealloc;
- (id)displayOffNotification;
- (id)fetchSBWallpaperTypeForHomescreen:(bool)arg1;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logNotification:(id)arg1 ofType:(id)arg2;
- (id)notificationSBAutoLockTimerFiredNotification;
- (id)notificationSBBlankTrackingChanged;
- (id)notificationSBLocalNotificationFired;
- (id)notificationSBLockTrackingChanged;
- (id)notificationSBRemoteNotificationReceived;
- (id)notificationSBScreenTimeTrackingChanged;
- (id)notificationSBWallpaperTrackingChanged;
- (void)resetAutoLockIsNil;
- (id)screenLock:(id)arg1;
- (id)screenNumberToName;
- (void)setAppAccountingGroup:(id)arg1;
- (void)setAutoLockIsNil:(bool)arg1;
- (void)setAutolockAG;
- (void)setDailyWallpaperPoll:(id)arg1;
- (void)setDisplayOffNotification:(id)arg1;
- (void)setScreenNumberToName:(id)arg1;
- (void)setUpScreenNumberDictionary;
- (void)settingsChangedNotification:(id)arg1;

@end
