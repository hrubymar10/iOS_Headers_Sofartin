/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource> {
    NSMutableSet *_observerRefs;
    NSMutableArray *_specifiers;
    bool _specifiersLoaded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *specifiers;
@property (readonly) Class superclass;

+ (id)loadSpecifiersFromPlist:(id)arg1 inBundle:(id)arg2 target:(id)arg3 stringsTable:(id)arg4;
+ (id)sharedInstance;

- (void)_clearAllSpecifiers;
- (void)_invalidateSpecifiersForObservers;
- (void)addObserver:(id)arg1;
- (bool)areSpecifiersLoaded;
- (void)dealloc;
- (void)enumerateObserversOfClass:(Class)arg1 usingBlock:(id)arg2;
- (void)enumerateObserversUsingBlock:(id)arg1;
- (id)init;
- (void)loadSpecifiers;
- (id)observers;
- (id)observersOfClass:(Class)arg1;
- (void)performUpdates:(id)arg1;
- (void)performUpdatesAnimated:(bool)arg1 usingBlock:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (void)reloadSpecifiers;
- (void)removeObserver:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)specifierForID:(id)arg1;
- (id)specifiers;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;

@end
