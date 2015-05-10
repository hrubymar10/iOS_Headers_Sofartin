/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface _RCMPRoutingController : MPAVRoutingController {
    NSString *_AVAudioSessionCategory;
    NSString *_AVSystemControllerCategory;
    NSString *_activeInputRouteName;
    AVAudioSession *_audioSession;
    NSArray *_cachedRoutes;
    bool _disableRouteChangeNotificationHandling;
    bool _hasCategoryEverBeenActive;
    bool _isCategoryActive;
    bool _needsOutputRoutesFetch;
}

@property(assign,readonly) NSString * AVAudioSessionCategory;
@property(assign,readonly) NSString * AVSystemControllerCategory;
@property(assign,readonly) NSString * activeInputRouteName;
@property(assign,readonly) bool hasCategoryEverBeenActive;
@property(assign,readonly) bool isAudioSessionAppropriateForQueryingInputRoutes;
@property(assign,readonly) bool isAudioSessionAppropriateForQueryingOutputRoutes;
@property(assign,readonly) bool isRoutingToAirPlayMirrorDestination;
@property(assign,readonly) bool isRoutingToPhoneCall;
@property(assign,readonly) bool isTemporarilyIgnoringRouteChangeNotifications;

- (void).cxx_destruct;
- (id)AVAudioSessionCategory;
- (id)AVSystemControllerCategory;
- (void)_configureAudioCategory;
- (bool)_determineIfAudioOutputCategoryIsCurrent;
- (id)activeInputRouteName;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)dealloc;
- (void)fetchAvailableRoutesWithCompletionHandler:(id)arg1;
- (bool)hasCategoryEverBeenActive;
- (id)initWithName:(id)arg1;
- (bool)isAudioSessionAppropriateForQueryingInputRoutes;
- (bool)isAudioSessionAppropriateForQueryingOutputRoutes;
- (bool)isCategoryConfiguredForVoiceMemos;
- (bool)isRoutingToAirPlayMirrorDestination;
- (bool)isRoutingToPhoneCall;
- (bool)isTemporarilyIgnoringRouteChangeNotifications;
- (void)makeAudioSessionCategoryActive:(bool)arg1;
- (bool)routeOtherThanHandsetAndSpeakerAvailable;
- (void)routingToAirPlayMirroringDidChangeNotification:(id)arg1;
- (void)setIsCategoryActive:(bool)arg1;

@end
