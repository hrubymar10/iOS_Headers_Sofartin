/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface _PSDeferredUpdates : NSObject {
    bool _invalidatedSpecifiers;
    NSMutableSet *_searchEntries;
    PSSpecifierUpdates *_specifierUpdates;
}

@property (nonatomic) bool invalidatedSpecifiers;
@property (nonatomic, retain) NSMutableSet *searchEntries;
@property (nonatomic, retain) PSSpecifierUpdates *specifierUpdates;

+ (id)deferredInvalidationUpdatesWithEntries:(id)arg1;
+ (id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2;

- (void)dealloc;
- (id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(bool)arg3;
- (bool)invalidatedSpecifiers;
- (id)searchEntries;
- (void)setInvalidatedSpecifiers:(bool)arg1;
- (void)setSearchEntries:(id)arg1;
- (void)setSpecifierUpdates:(id)arg1;
- (id)specifierUpdates;

@end
