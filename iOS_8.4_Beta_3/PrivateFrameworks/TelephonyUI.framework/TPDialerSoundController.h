/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPDialerSoundController : NSObject {
    unsigned long long _incompleteSoundCount;
    struct __CFSet { } *_inflightSounds;
    unsigned int _soundsActivated;
}

@property(assign,readwrite) unsigned long long incompleteSoundCount;

+ (void)_delayedDeactivate;

- (void)_stopAllSoundsForcingCallbacks:(bool)arg1;
- (void)applicationResumedNotification:(id)arg1;
- (void)applicationSuspendedNotification:(id)arg1;
- (void)dealloc;
- (unsigned long long)incompleteSoundCount;
- (id)init;
- (void)playSoundForDialerCharacter:(unsigned int)arg1;
- (void)setIncompleteSoundCount:(unsigned long long)arg1;
- (void)setSoundsActivated:(bool)arg1;
- (void)soundCompletedPlaying:(unsigned int)arg1;
- (void)stopSoundForDialerCharacter:(unsigned int)arg1;

@end
