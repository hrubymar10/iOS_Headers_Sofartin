/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAssetManager : NSObject {
    int _assetInstalledNotificationToken;
    int _assetMetadataUpdateNotificationToken;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cachedPathsByLanguage;
    NSObject<OS_dispatch_queue> *_serialAssetQueryQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_assetDownloaded:(int)arg1;
- (id)_defaultDownloadOptions;
- (void)_downloadAsset:(id)arg1;
- (void)_metadataUpdated:(int)arg1;
- (void)_onetimeRemoteQuery;
- (void)_runAssetQuery:(id)arg1 completion:(id)arg2;
- (void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(id)arg2 completion:(id)arg3;
- (void)_updateAssetForLanguage:(id)arg1 withTimeout:(double)arg2;
- (bool)_updateCachesIfNecessary:(id)arg1;
- (id)_voiceAssetQueryForLanguage:(id)arg1 contentVersion:(id)arg2 localOnly:(bool)arg3;
- (id)assetForLanguage:(id)arg1 forceCacheUpdate:(bool)arg2;
- (id)init;
- (void)invalidateAsset:(id)arg1;

@end