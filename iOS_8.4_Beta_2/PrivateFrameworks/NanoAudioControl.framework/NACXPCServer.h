/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACXPCServer : NSObject <NACIDSClientDelegate, NACXPCInterface, NSXPCListenerDelegate> {
    bool _audioAndHapticPreviewIsPlaying;
    NSObject<OS_dispatch_queue> *_audioAndHapticPreviewQueue;
    NSMutableDictionary *_audioRoutesRecords;
    float _hapticIntensity;
    NACIDSClient *_idsClient;
    bool _systemMutedState;
    NSMutableSet *_volumeObservers;
    NSMutableDictionary *_volumeRecords;
    NSXPCListener *_xpcListener;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)server;

- (void).cxx_destruct;
- (void)EULimitForCategory:(id)arg1 result:(id)arg2;
- (id)_audioRoutesRecordForCategory:(id)arg1;
- (void)_cleanupConnection:(id)arg1;
- (void)_endObservingAudioRoutesForCategory:(id)arg1 connection:(id)arg2;
- (void)_endObservingVolumeForConnection:(id)arg1;
- (void)_loadHapticIntensity;
- (void)_loadSystemMutedState;
- (void)_loadVolumeRecords;
- (void)_persistHapticIntensity;
- (void)_persistSystemMutedState;
- (void)_persistVolumeRecords;
- (id)_routeObservationCategoriesForConnection:(id)arg1;
- (id)_volumeRecordForCategory:(id)arg1;
- (void)audioAndHapticPreviewHasCompletedPlaying;
- (void)audioRoutesForCategory:(id)arg1 result:(id)arg2;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)beginObservingVolume;
- (void)client:(id)arg1 EULimit:(float)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 audioRoutes:(id)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 hapticIntensityDidChange:(float)arg2;
- (void)client:(id)arg1 mutedState:(bool)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 routeObservationCancelledForCategory:(id)arg2;
- (void)client:(id)arg1 systemMutedStateDidChange:(bool)arg2;
- (void)client:(id)arg1 volumeControlAvailable:(bool)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 volumeValue:(float)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 volumeWarningEnabled:(bool)arg2 didChangeForCategory:(id)arg3;
- (void)clientVolumeObservationCancelled:(id)arg1;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingVolume;
- (void)hapticIntensity:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)mutedStateForCategory:(id)arg1 result:(id)arg2;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)playAudioAndHapticPreview;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(bool)arg1 category:(id)arg2;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1 category:(id)arg2;
- (void)systemMutedState:(id)arg1;
- (void)volumeControlAvailabilityForCategory:(id)arg1 result:(id)arg2;
- (void)volumeValueForCategory:(id)arg1 result:(id)arg2;
- (void)volumeWarningForCategory:(id)arg1 result:(id)arg2;

@end
