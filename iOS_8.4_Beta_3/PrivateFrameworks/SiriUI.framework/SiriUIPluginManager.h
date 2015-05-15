/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIPluginManager : NSObject {
    SVSBundleIdentifierMap *_identifierMap;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_bundleSearchPaths;
- (id)_createDebugViewControllerForAceObject:(id)arg1;
- (id)_factoryInstancesForAceObject:(id)arg1 andAceObject:(id)arg2;
- (bool)_listItem:(id)arg1 isEqualToListItem:(id)arg2;
- (bool)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
- (void)_loadBundleMapsIfNecessary;
- (id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
- (id)listItemToPickInAutodisambiguationForListItems:(id)arg1;
- (id)speakableProviderForObject:(id)arg1;
- (id)transcriptItemForObject:(id)arg1;

@end
