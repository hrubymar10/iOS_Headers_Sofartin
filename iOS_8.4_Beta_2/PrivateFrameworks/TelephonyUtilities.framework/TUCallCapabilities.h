/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilities : NSObject

+ (bool)_canEnableRelayCallingDefault;
+ (struct __CTServerConnection { }*)_createServerConnection;
+ (void)_initializeCTCapabilitiesSupport;
+ (void)_initializeState;
+ (bool)_relayCallingEnabledDefault;
+ (bool)_relayCallingFeaturesEnabledDefault;
+ (void)_sendNecessaryNotificationsAfterRunningBlock:(id)arg1;
+ (void)_setCTCapability:(struct __CFString { }*)arg1 value:(bool)arg2;
+ (void)_setCanEnableRelayCallingDefault:(bool)arg1;
+ (void)_setRelayCallingEnabledDefault:(bool)arg1;
+ (void)_setRelayCallingFeaturesEnabledDefault:(bool)arg1;
+ (void)_setSupportsRelayCallingDefault:(bool)arg1;
+ (void)_setUpCTCapabilitiesNotifications;
+ (void)_setUpRelayCallingListeners;
+ (bool)_supportsRelayCallingDefault;
+ (void)_tearDownCTCapabilitiesNotifications;
+ (void)_tearDownRelayCallingListeners;
+ (bool)areRelayCallingFeaturesEnabled;
+ (bool)canAttemptTelephonyCallsInAirplaneMode;
+ (bool)canEnableRelayCalling;
+ (bool)canEnableWiFiCalling;
+ (id)debugDescription;
+ (int)faceTimeAudioCallSupport;
+ (int)faceTimeVideoCallSupport;
+ (void)invalidateAndRefreshProvisioningURLs;
+ (void)invalidateCachedValues;
+ (bool)isProvisioningURLValid:(id)arg1;
+ (bool)isRelayCallingEnabled;
+ (bool)isWiFiCallingCurrentlyAvailable;
+ (bool)isWiFiCallingEnabled;
+ (void)setRelayCallingEnabled:(bool)arg1;
+ (void)setWiFiCallingCapabilityInformation:(id)arg1;
+ (void)setWiFiCallingEnabled:(bool)arg1;
+ (void)setWiFiCallingProvisioningURL:(id)arg1;
+ (bool)supportsDisplayingFaceTimeAudioCalls;
+ (bool)supportsDisplayingFaceTimeVideoCalls;
+ (bool)supportsDisplayingTelephonyCalls;
+ (bool)supportsFaceTimeAudioCalls;
+ (bool)supportsFaceTimeVideoCalls;
+ (bool)supportsHostingFaceTimeAudioCalls;
+ (bool)supportsHostingFaceTimeVideoCalls;
+ (bool)supportsHostingTelephonyCalls;
+ (bool)supportsRelayCalling;
+ (bool)supportsSimultaneousVoiceAndData;
+ (bool)supportsTelephonyCalls;
+ (int)telephonyCallSupport;
+ (id)wiFiCallingCapabilityInformation;
+ (id)wiFiCallingProvisioningURL;

@end
