/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLDefaults : NSObject {
    bool _debugEnabled;
    NSMutableDictionary *_instancePrefsCache;
    NSMutableDictionary *_managedPrefsCache;
    NSMutableDictionary *_userPrefsCache;
}

@property bool debugEnabled;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;

+ (bool)boolForKey:(id)arg1;
+ (bool)boolForKey:(id)arg1 ifNotSet:(bool)arg2;
+ (bool)debugEnabled;
+ (double)doubleForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1 ifNotSet:(double)arg2;
+ (bool)fullMode;
+ (bool)fullModeForClass:(Class)arg1;
+ (bool)fullPLLog;
+ (bool)isClassDebugEnabled:(Class)arg1;
+ (bool)isClassDebugEnabled:(Class)arg1 forKey:(id)arg2;
+ (bool)isClassNameDebugEnabled:(id)arg1;
+ (bool)isClassNameDebugEnabled:(id)arg1 forKey:(id)arg2;
+ (long long)longForKey:(id)arg1;
+ (long long)longForKey:(id)arg1 ifNotSet:(long long)arg2;
+ (bool)objectExistsForKey:(id)arg1;
+ (id)objectForKey:(id)arg1;
+ (id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(bool)arg3;
+ (id)objectForKey:(id)arg1 synchronize:(bool)arg2;
+ (void)resetUserDefaultCacheForKey:(id)arg1;
+ (void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2;
+ (void)setClass:(Class)arg1 debugEnabled:(bool)arg2;
+ (void)setClass:(Class)arg1 debugEnabled:(bool)arg2 forKey:(id)arg3;
+ (void)setClassName:(id)arg1 debugEnabled:(bool)arg2;
+ (void)setClassName:(id)arg1 debugEnabled:(bool)arg2 forKey:(id)arg3;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(bool)arg4;
+ (void)setObject:(id)arg1 forKey:(id)arg2 saveToDisk:(bool)arg3;
+ (id)sharedDefaults;

- (void).cxx_destruct;
- (bool)debugEnabled;
- (id)init;
- (id)instancePrefsCache;
- (id)instancePrefsObjectForKey:(id)arg1;
- (id)managedPrefsCache;
- (id)managedPrefsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(bool)arg3;
- (id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(bool)arg3;
- (void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2;
- (void)setDebugEnabled:(bool)arg1;
- (void)setInstancePrefsCache:(id)arg1;
- (void)setManagedPrefsCache:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(bool)arg4;
- (void)setUserPrefsCache:(id)arg1;
- (id)userDefaultsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(bool)arg3;
- (id)userPrefsCache;

@end
