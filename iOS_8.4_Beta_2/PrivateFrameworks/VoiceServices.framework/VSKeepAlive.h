/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSKeepAlive : NSObject {
    bool _active;
    long long _audioType;
    bool _keepAudioSessionActive;
    NSXPCConnection *_serverConnection;
}

@property(assign,readwrite) bool active;
@property(assign,readwrite) long long audioType;
@property(assign,readwrite) bool keepAudioSessionActive;

- (void).cxx_destruct;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (bool)active;
- (long long)audioType;
- (void)dealloc;
- (bool)keepAudioSessionActive;
- (void)setActive:(bool)arg1;
- (void)setAudioType:(long long)arg1;
- (void)setKeepAudioSessionActive:(bool)arg1;

@end
