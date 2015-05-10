/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKApplicationStateMonitor : NSObject {
    bool _active;
    BKSApplicationStateMonitor *_appStateMonitor;
    bool _forceBackboardServicesMonitoring;
    bool _inBackground;
    unsigned long long _observerCount;
}

@property(getter=isActive,assign,readonly) bool active;
@property(assign,readwrite) bool forceBackboardServicesMonitoring;
@property(getter=isInBackground,assign,readonly) bool inBackground;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_becomeActive;
- (void)_enterBackground;
- (void)_exitBackground;
- (void)_resignActive;
- (void)dealloc;
- (bool)forceBackboardServicesMonitoring;
- (bool)isActive;
- (bool)isInBackground;
- (void)setForceBackboardServicesMonitoring:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
