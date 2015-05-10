/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSVoiceAssetManager : NSObject

+ (id)sharedInstance;

- (id)_autoDownloadedAssets;
- (void)_automaticallyDownloadVoiceAssetsIfNeeded;
- (id)_voiceAssetQueryForName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 localOnly:(bool)arg6;
- (void)automaticallyDownloadVoiceAssetsIfNeeded;
- (void)getAutoDownloadedVoiceAssets:(id)arg1;
- (void)getVoiceAssetsLocalOnly:(bool)arg1 reply:(id)arg2;
- (id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 name:(id)arg4;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)startDownloadingVoiceAsset:(id)arg1 progress:(id)arg2 completion:(id)arg3;

@end
