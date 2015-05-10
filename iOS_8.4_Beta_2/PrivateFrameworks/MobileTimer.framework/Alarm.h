/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface Alarm : NSObject {
    bool _allowsSnooze;
    unsigned int _daySetting;
    <AlarmDelegate> *_delegate;
    Alarm *_editingProxy;
    unsigned int _hour;
    NSString *_id;
    NSURL *_idUrl;
    NSDate *_lastModified;
    unsigned int _minute;
    UILocalNotification *_notification;
    bool _pretendActiveIfProxy;
    NSArray *_repeatDays;
    unsigned int _revision;
    NSMutableDictionary *_settings;
    NSString *_snapshotSound;
    long long _snapshotSoundType;
    UILocalNotification *_snoozedNotification;
    NSString *_sound;
    long long _soundType;
    NSString *_title;
    UILocalNotification *_weeklyNotifications;
}

@property(getter=isActive,assign,readonly) bool active;
@property(assign,readonly) NSString * alarmId;
@property(assign,readonly) NSURL * alarmIdUrl;
@property(assign,readwrite) bool allowsSnooze;
@property(assign,readwrite) unsigned int daySetting;
@property(assign,readwrite) <AlarmDelegate> * delegate;
@property(assign,readonly) Alarm * editingProxy;
@property(assign,readwrite) unsigned int hour;
@property(assign,readonly) NSDate * lastModified;
@property(assign,readwrite) unsigned int minute;
@property(assign,readonly) NSString * rawTitle;
@property(assign,readonly) NSArray * repeatDays;
@property(assign,readonly) bool repeats;
@property(assign,readonly) unsigned int revision;
@property(assign,readonly) NSDictionary * settings;
@property(assign,readonly) NSString * snapshotSound;
@property(assign,readonly) long long snapshotSoundType;
@property(getter=isSnoozed,assign,readonly) bool snoozed;
@property(assign,readonly) NSString * sound;
@property(assign,readonly) long long soundType;
@property(assign,readonly) NSString * uiTitle;

+ (id)_newSettingsFromNotification:(id)arg1;
+ (bool)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (bool)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (bool)isSnoozeNotification:(id)arg1;
+ (bool)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifySettings:(id)arg1;

- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (id)_newNotification:(long long)arg1;
- (unsigned long long)_notificationsCount;
- (id)alarmId;
- (id)alarmIdUrl;
- (bool)allowsSnooze;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (void)cancelNotifications;
- (long long)compareTime:(id)arg1;
- (unsigned int)daySetting;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)dropEditingProxy;
- (void)dropNotifications;
- (id)editingProxy;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(bool)arg2;
- (unsigned long long)hash;
- (unsigned int)hour;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isSnoozed;
- (id)lastModified;
- (void)markModified;
- (unsigned int)minute;
- (id)nextFireDate;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(long long)arg3;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)prepareNotifications;
- (id)rawTitle;
- (void)refreshActiveState;
- (id)repeatDays;
- (bool)repeats;
- (unsigned int)revision;
- (void)scheduleNotifications;
- (void)setAllowsSnooze:(bool)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
- (void)setTitle:(id)arg1;
- (id)settings;
- (id)snapshotSound;
- (long long)snapshotSoundType;
- (id)sound;
- (long long)soundType;
- (id)timeZoneForOffsetCalculation;
- (bool)tryAddNotification:(id)arg1;
- (id)uiTitle;

@end