/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKUnitController : NSObject {
    HKHealthStore *_healthStore;
    NSDictionary *_hkUnitPreferences;
    NSMutableDictionary *_unitStrings;
}

- (void).cxx_destruct;
- (id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2;
- (id)_displayNameForUnit:(id)arg1;
- (id)_displayNameForUnit:(id)arg1 localizablePrefix:(id)arg2;
- (id)_fetchHKUnitPreferences;
- (id)_generateDefaultHKUnitPreferences;
- (id)_hkUnitPreferences;
- (id)_longDisplayNameForUnit:(id)arg1;
- (id)_nameWithKey:(id)arg1 forDataUnit:(id)arg2;
- (id)_nameWithKey:(id)arg1 forDataUnit:(id)arg2 unit:(id)arg3;
- (void)_postNotificationWithChangedKeys:(id)arg1;
- (void)_refreshHKUnitPreferences;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_updateHKUnitPreferences:(id)arg1 shouldPostNotification:(bool)arg2;
- (void)dealloc;
- (id)displayNameForDataUnit:(id)arg1;
- (id)displayNameForDataUnit:(id)arg1 unit:(id)arg2;
- (id)displayNameForDataUnitGroup:(id)arg1;
- (id)displayRangeForDataUnit:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)longDisplayNameForDataUnitGroup:(id)arg1;
- (id)manualEntryAbsoluteRangeForDataUnit:(id)arg1;
- (id)manualEntryConfirmRangeForDataUnit:(id)arg1;
- (id)singularDisplayNameForDataUnit:(id)arg1;
- (id)singularDisplayNameForDataUnit:(id)arg1 unit:(id)arg2;
- (id)unitForDataUnit:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forDataUnit:(id)arg2;

@end
