/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMSystemMonitor : NSObject {
    bool _active;
    bool _backingUp;
    int _dataProtectionState;
    NSDate *_dateScreenLightLastChanged;
    NSDate *_dateSystemLockLastChanged;
    double _delayTime;
    NSMutableArray *_earlyListeners;
    bool _idleOverride;
    NSDate *_idleStart;
    bool _inBackground;
    NSMutableArray *_listeners;
    bool _receivesMemoryWarnings;
    bool _screenLit;
    bool _screenLocked;
    bool _screensaverActive;
    bool _switchedOut;
    bool _systemLocked;
    NSTimer *_timer;
    bool _underFirstLock;
    NSString *_userID;
    int _userIdleToken;
    bool _usesPowerNotifications;
    bool _usesSystemIdleState;
    bool _watchesDataProtectionLockState;
    bool _watchesScreenLightState;
    bool _watchesSystemLockState;
    bool _willSleep;
}

@property(assign,readwrite) int _dataProtectionState;
@property(assign,readwrite) double _delayTime;
@property(assign,retain) NSMutableArray * _earlyListeners;
@property(assign,readwrite) bool _idleOverride;
@property(assign,retain) NSDate * _idleStart;
@property(assign,retain) NSMutableArray * _listeners;
@property(assign,retain) NSTimer * _timer;
@property(assign,readwrite) bool _underFirstLock;
@property(assign,retain) NSString * _userID;
@property(assign,retain) NSDate * dateScreenLightLastChanged;
@property(assign,retain) NSDate * dateSystemLockLastChanged;
@property(setter=setActive:,assign,readwrite) bool isActive;
@property(assign,readonly) bool isBackingUp;
@property(assign,readwrite) bool isFastUserSwitched;
@property(assign,readonly) bool isInBackground;
@property(assign,readonly) bool isScreenLit;
@property(assign,readonly) bool isScreenLocked;
@property(assign,readonly) bool isScreenSaverActive;
@property(assign,readonly) bool isSetup;
@property(assign,readonly) bool isSystemIdle;
@property(assign,readonly) bool isSystemLocked;
@property(assign,readonly) bool isUnderDataProtectionLock;
@property(assign,readonly) bool isUnderFirstDataProtectionLock;
@property(assign,readwrite) bool receivesMemoryWarnings;
@property(assign,readonly) double systemIdleTime;
@property(assign,readonly) bool systemIsShuttingDown;
@property(assign,readonly) bool systemIsSleeping;
@property(assign,readwrite) int userIdleToken;
@property(assign,readwrite) bool usesPowerNotifications;
@property(assign,readwrite) bool usesSystemIdleState;
@property(assign,readwrite) bool watchesDataProtectionLockState;
@property(assign,readwrite) bool watchesScreenLightState;
@property(assign,readwrite) bool watchesSystemLockState;

+ (id)sharedInstance;

- (void)_addEarlyListener:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_armIdleTimer;
- (void)_checkIdleTime:(id)arg1;
- (void)_checkRestoredFromBackup;
- (void)_clearIdleTimer;
- (int)_dataProtectionState;
- (double)_delayTime;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (id)_earlyListeners;
- (void)_forceResumed;
- (void)_forceSuspended;
- (void)_handleLoginWindowNotification:(id)arg1;
- (bool)_idleOverride;
- (id)_idleStart;
- (id)_listeners;
- (void)_notificationCenterDidDisappear:(id)arg1;
- (void)_notificationCenterWillAppear:(id)arg1;
- (void)_overrideAndDisableIdleTimer:(bool)arg1;
- (void)_postScreenLocked;
- (void)_postScreenSaverStarted;
- (void)_receivedMemoryNotification;
- (void)_registerForLoginWindowNotifications;
- (void)_registerForRestoreNotifications;
- (void)_removeEarlyListener:(id)arg1;
- (void)_restoreDidStart;
- (void)_restoreDidStop;
- (void)_resume:(id)arg1;
- (void)_resumeEventsOnly:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_screenSaverStopped:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_setDataProtectionLockState:(int)arg1;
- (void)_setIdleState:(bool)arg1;
- (void)_setSystemLockState:(bool)arg1;
- (void)_setSystemScreenState:(bool)arg1;
- (void)_setupStateChanged;
- (void)_suspend:(id)arg1;
- (void)_suspendEventsOnly:(id)arg1;
- (void)_systemDidWake;
- (void)_systemWillShutdown;
- (void)_systemWillSleep;
- (id)_timer;
- (bool)_underFirstLock;
- (void)_unregisterForLoginWindowNotifications;
- (void)_unregisterForRestoreNotifications;
- (void)_updateIdleState;
- (id)_userID;
- (void)addListener:(id)arg1;
- (id)dateScreenLightLastChanged;
- (id)dateSystemLockLastChanged;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (bool)isBackingUp;
- (bool)isFastUserSwitched;
- (bool)isInBackground;
- (bool)isScreenLit;
- (bool)isScreenLocked;
- (bool)isScreenSaverActive;
- (bool)isSetup;
- (bool)isSystemIdle;
- (bool)isSystemLocked;
- (bool)isUnderDataProtectionLock;
- (bool)isUnderFirstDataProtectionLock;
- (bool)receivesMemoryWarnings;
- (void)removeListener:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setIsFastUserSwitched:(bool)arg1;
- (void)setReceivesMemoryWarnings:(bool)arg1;
- (void)setUserIdleToken:(int)arg1;
- (void)setUsesPowerNotifications:(bool)arg1;
- (void)setUsesSystemIdleState:(bool)arg1;
- (void)setWatchesDataProtectionLockState:(bool)arg1;
- (void)setWatchesScreenLightState:(bool)arg1;
- (void)setWatchesSystemLockState:(bool)arg1;
- (void)set_dataProtectionState:(int)arg1;
- (void)set_delayTime:(double)arg1;
- (void)set_earlyListeners:(id)arg1;
- (void)set_idleOverride:(bool)arg1;
- (void)set_idleStart:(id)arg1;
- (void)set_listeners:(id)arg1;
- (void)set_timer:(id)arg1;
- (void)set_underFirstLock:(bool)arg1;
- (void)set_userID:(id)arg1;
- (double)systemIdleTime;
- (bool)systemIsShuttingDown;
- (bool)systemIsSleeping;
- (int)userIdleToken;
- (bool)usesPowerNotifications;
- (bool)usesSystemIdleState;
- (bool)watchesDataProtectionLockState;
- (bool)watchesScreenLightState;
- (bool)watchesSystemLockState;

@end
