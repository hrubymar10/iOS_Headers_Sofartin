/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLToneManager : NSObject {
    TLAccessQueue *_accessQueue;
    NSMutableDictionary *_alertTonesByIdentifier;
    NSDictionary *_cachedTonePreferences;
    NSMutableDictionary *_iTunesToneIdentifiersByPID;
    NSMutableDictionary *_iTunesTonesByIdentifier;
    NSDictionary *_previewBehaviorsByDefaultIdentifier;
    bool _shouldIgnoreNextToneDidChangeNotification;
    bool _shouldUseServiceToAccessTonePreferences;
    NSDictionary *_toneIdentifierAliasMap;
    NPSDomainAccessor *_transientNanoPreferencesDomainAccessor;
}

@property(setter=_setAccessQueue:,assign,retain) TLAccessQueue * _accessQueue;
@property(setter=_setAlertTonesByIdentifier:,assign,retain) NSMutableDictionary * _alertTonesByIdentifier;
@property(setter=_setCachedTonePreferences:,assign,retain) NSDictionary * _cachedTonePreferences;
@property(assign,readonly) NSString * _deviceITunesRingtoneDirectory;
@property(assign,readonly) NSString * _deviceITunesRingtoneInformationPlist;
@property(assign,readonly) NSString * _iTunesRingtoneDirectory;
@property(assign,readonly) NSString * _iTunesRingtoneInformationPlist;
@property(setter=_setITunesToneIdentifiersByPID:,assign,retain) NSMutableDictionary * _iTunesToneIdentifiersByPID;
@property(setter=_setITunesTonesByIdentifier:,assign,retain) NSMutableDictionary * _iTunesTonesByIdentifier;
@property(setter=_setPreviewBehaviorsByDefaultIdentifier:,assign,retain) NSDictionary * _previewBehaviorsByDefaultIdentifier;
@property(assign,readonly) NSString * _rootDirectory;
@property(setter=_setShouldIgnoreNextToneDidChangeNotification:,assign,readwrite) bool _shouldIgnoreNextToneDidChangeNotification;
@property(setter=_setShouldUseServiceToAccessTonePreferences:,assign,readwrite) bool _shouldUseServiceToAccessTonePreferences;
@property(assign,readonly) NSString * _systemRingtoneDirectory;
@property(setter=_setToneIdentifierAliasMap:,assign,retain) NSDictionary * _toneIdentifierAliasMap;
@property(setter=_setTransientNanoPreferencesDomainAccessor:,assign,retain) NPSDomainAccessor * _transientNanoPreferencesDomainAccessor;

+ (struct __CFString { }*)_copySharedResourcesPreferencesDomainForDomain:(struct __CFString { }*)arg1;
+ (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
+ (bool)_migrateLegacyToneSettings;
+ (id)_systemWideTonePreferenceKeyForAlertType:(int)arg1;
+ (id)sharedToneManager;

- (id)_accessQueue;
- (bool)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(bool)arg4;
- (bool)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4;
- (id)_alertTonesByIdentifier;
- (id)_aliasForToneIdentifier:(id)arg1;
- (id)_allSyncedTones;
- (id)_baseDirectoryForAlertToneSoundFiles;
- (id)_cachedTonePreferences;
- (id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2;
- (id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (int)_currentToneWatchAlertPolicyForAlertType:(int)arg1 accountIdentifier:(id)arg2 didFindPersistedWatchAlertPolicy:(bool*)arg3;
- (id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_defaultRingtoneName;
- (id)_defaultRingtonePath;
- (id)_defaultToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_deviceITunesRingtoneDirectory;
- (id)_deviceITunesRingtoneInformationPlist;
- (void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3;
- (bool)_ensureDirectoryExistsAtPath:(id)arg1;
- (long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(bool)arg1 returningFilePathsForFoundOrphans:(id*)arg2 wasAffectedByAccidentalToneDeletion:(bool*)arg3;
- (id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2;
- (id)_filePathForToneIdentifier:(id)arg1 isValid:(bool*)arg2;
- (bool)_filePathHasSupportedExtensionForRingtone:(id)arg1;
- (void)_handleDeviceRingtonesChangedNotification;
- (void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1;
- (id)_iTunesRingtoneDirectory;
- (id)_iTunesRingtoneInformationPlist;
- (id)_iTunesToneForPID:(id)arg1;
- (id)_iTunesToneIdentifiersByPID;
- (id)_iTunesToneWithIdentifier:(id)arg1;
- (id)_iTunesTonesByIdentifier;
- (bool)_insertPurchasedToneMetadata:(id)arg1 fileName:(id)arg2;
- (bool)_insertSyncedToneMetadata:(id)arg1 fileName:(id)arg2;
- (id)_installedTones;
- (unsigned long long)_installedTonesSize;
- (void)_loadAlertToneInfo;
- (void)_loadITunesRingtoneInfoPlistAtPath:(id)arg1;
- (void)_loadPreviewBehaviorsByDefaultIdentifier;
- (void)_loadToneIdentifierAliasMap;
- (id)_localizedNameOfToneWithIdentifier:(id)arg1;
- (int)_lockManifestAtPath:(id)arg1;
- (id)_nameForToneIdentifier:(id)arg1 isValid:(bool*)arg2;
- (id)_newServiceConnection;
- (void)_performBlockInAccessQueue:(id)arg1;
- (unsigned int)_previewBehaviorForDefaultIdentifier:(id)arg1;
- (id)_previewBehaviorsByDefaultIdentifier;
- (id)_previewSoundForToneIdentifier:(id)arg1;
- (void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
- (void)_reloadITunesRingtonesAfterExternalChange;
- (void)_removeAllSyncedData;
- (long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id*)arg1;
- (id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2;
- (bool)_removeSyncedToneByPID:(id)arg1;
- (bool)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2;
- (bool)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(bool)arg3 alreadyLockedManifest:(bool)arg4 removedEntries:(id*)arg5;
- (id)_rootDirectory;
- (void)_setAccessQueue:(id)arg1;
- (void)_setAlertTonesByIdentifier:(id)arg1;
- (void)_setCachedTonePreferences:(id)arg1;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2;
- (void)_setCurrentToneWatchAlertPolicy:(int)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (void)_setITunesToneIdentifiersByPID:(id)arg1;
- (void)_setITunesTonesByIdentifier:(id)arg1;
- (void)_setPreviewBehaviorsByDefaultIdentifier:(id)arg1;
- (void)_setShouldIgnoreNextToneDidChangeNotification:(bool)arg1;
- (void)_setShouldUseServiceToAccessTonePreferences:(bool)arg1;
- (void)_setToneIdentifierAliasMap:(id)arg1;
- (bool)_setToneIdentifierUsingService:(id)arg1 keyedByAccountIdentifier:(id)arg2 forPreferenceKey:(id)arg3;
- (void)_setTransientNanoPreferencesDomainAccessor:(id)arg1;
- (void)_setWatchPrefersSalientNotifications:(bool)arg1;
- (bool)_shouldIgnoreNextToneDidChangeNotification;
- (bool)_shouldUseServiceToAccessTonePreferences;
- (id)_systemModernSoundDirectory;
- (id)_systemNewSoundDirectory;
- (id)_systemRingtoneDirectory;
- (id)_systemSoundDirectory;
- (id)_toneIdentifierAliasMap;
- (id)_toneIdentifierForFileAtPath:(id)arg1;
- (id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(bool*)arg2;
- (bool)_toneIsSettableForAlertType:(int)arg1;
- (id)_tonePreferencesFromService;
- (bool)_toneWithIdentifierIsDefaultRingtone:(id)arg1;
- (bool)_toneWithIdentifierIsITunesRingtone:(id)arg1;
- (bool)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1;
- (bool)_toneWithIdentifierIsSystemAlertTone:(id)arg1;
- (bool)_toneWithIdentifierIsValid:(id)arg1;
- (bool)_transferPurchasedToITunes:(id)arg1;
- (id)_transientNanoPreferencesDomainAccessor;
- (bool)_wasAffectedByAccidentalToneDeletion;
- (bool)_watchPrefersSalientNotifications;
- (id)currentToneIdentifierForAlertType:(int)arg1;
- (id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)currentToneNameForAlertType:(int)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1;
- (unsigned int)currentToneSoundIDForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)dealloc;
- (id)defaultRingtoneIdentifier;
- (id)defaultToneIdentifierForAlertType:(int)arg1;
- (id)filePathForToneIdentifier:(id)arg1;
- (void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (id)init;
- (id)initWithITunesRingtonePlistAtPath:(id)arg1;
- (id)nameForToneIdentifier:(id)arg1;
- (id)newAVItemForToneIdentifier:(id)arg1;
- (void)removeImportedToneWithIdentifier:(id)arg1;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2;
- (void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (unsigned int)soundIDForToneIdentifier:(id)arg1;
- (bool)toneWithIdentifierIsValid:(id)arg1;

@end
