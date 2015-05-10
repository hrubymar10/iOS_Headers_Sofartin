/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface AlarmManager : NSObject {
    NSMutableArray *_alarms;
    NSString *_defaultSound;
    long long _defaultSoundType;
    bool _dirty;
    bool invalidAlarmsDetected;
    NSDate *lastModified;
    NSMutableArray *logMessageList;
}

@property(assign,retain) NSArray * alarms;
@property(assign,readonly) NSString * defaultSound;
@property(assign,readonly) long long defaultSoundType;
@property(assign,readwrite) bool invalidAlarmsDetected;
@property(assign,retain) NSDate * lastModified;
@property(assign,retain) NSMutableArray * logMessageList;

+ (id)copyReadAlarmsFromPreferences;
+ (bool)discardOldVersion;
+ (bool)isAlarmNotification:(id)arg1;
+ (id)sharedManager;
+ (bool)upgrade;
+ (void)writeAlarmsToPreferences:(id)arg1;

- (void)addAlarm:(id)arg1 active:(bool)arg2;
- (id)alarmWithId:(id)arg1;
- (id)alarmWithIdUrl:(id)arg1;
- (id)alarms;
- (bool)checkIfAlarmsModified;
- (void)countAlarmsInAggregateDictionary;
- (void)dealloc;
- (id)defaultSound;
- (long long)defaultSoundType;
- (void)handleAlarm:(id)arg1 startedUsingSong:(id)arg2;
- (void)handleAlarm:(id)arg1 stoppedUsingSong:(id)arg2;
- (void)handleAnyNotificationChanges;
- (void)handleExpiredOrSnoozedNotificationsOnly:(id)arg1;
- (void)handleNotificationFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1;
- (id)init;
- (bool)invalidAlarmsDetected;
- (id)lastModified;
- (void)loadAlarms;
- (void)loadDefaultSoundAndType;
- (void)loadScheduledNotifications;
- (void)loadScheduledNotificationsWithCancelUnused:(bool)arg1;
- (id)logMessageList;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(bool)arg2 allowRepeating:(bool)arg3;
- (void)reloadScheduledNotifications;
- (void)reloadScheduledNotificationsWithRefreshActive:(bool)arg1 cancelUnused:(bool)arg2;
- (void)removeAlarm:(id)arg1;
- (void)saveAlarms;
- (void)setAlarm:(id)arg1 active:(bool)arg2;
- (void)setDefaultSound:(id)arg1 ofType:(long long)arg2;
- (void)setInvalidAlarmsDetected:(bool)arg1;
- (void)setLastModified:(id)arg1;
- (void)setLogMessageList:(id)arg1;
- (void)unloadAlarms;
- (void)updateAlarm:(id)arg1 active:(bool)arg2;

@end
