/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeviceLocatorService : NSObject {
    bool _hasAttemptedToFetchState;
    unsigned long long _lastKnownState;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
    bool _wantsToEnable;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateStateAndNotify:(bool)arg1;
- (void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2;
- (void)enableInContext:(unsigned long long)arg1;
- (id)init;
- (bool)isChangingState;
- (bool)isEnabled;
- (bool)isStateKnown;
- (void)setShouldEnable:(bool)arg1;
- (bool)shouldEnable;

@end
