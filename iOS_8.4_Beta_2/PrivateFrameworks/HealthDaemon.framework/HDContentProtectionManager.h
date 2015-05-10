/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject> {
    double _beganObservingTime;
    int _contentProtectionState;
    double _lastNotificationTime;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMapTable *_observers;
    int _unlockedSinceBoot;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (bool)isProtectedDataAvailableWithState:(long long)arg1;

- (void).cxx_destruct;
- (long long)_keyBagLockState;
- (void)_notifyObserversWithContentProtectionState:(long long)arg1;
- (void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2;
- (void)dealloc;
- (bool)deviceUnlockedSinceBoot;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithNotifications:(bool)arg1 initialState:(long long)arg2 unlockedSinceBoot:(bool)arg3;
- (bool)isProtectedDataAvailable;
- (long long)observedState;
- (void)removeContentProtectionObserver:(id)arg1;
- (void)setContentProtectionState:(long long)arg1;

@end
