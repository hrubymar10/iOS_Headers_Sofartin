/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUISound : NSObject {
    NSString *_accountIdentifier;
    int _alertType;
    AVItem *_avItem;
    id _completionBlock;
    NSDictionary *_controllerAttributes;
    double _maxDuration;
    bool _repeats;
    unsigned int _resolvedSystemSoundID;
    NSString *_resolvedToneIdentifier;
    NSString *_ringtoneName;
    NSString *_songPath;
    unsigned long long _soundBehavior;
    long long _soundType;
    unsigned int _systemSoundID;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSDictionary *_vibrationPattern;
}

@property(setter=_setResolvedSoundID:,assign,readwrite) unsigned int _resolvedSystemSoundID;
@property(assign,copy) NSString * accountIdentifier;
@property(assign,readwrite) int alertType;
@property(assign,retain) AVItem * avItem;
@property(assign,retain) NSDictionary * controllerAttributes;
@property(assign,readwrite) double maxDuration;
@property(getter=isRepeating,assign,readwrite) bool repeats;
@property(assign,retain) NSString * ringtoneName;
@property(assign,copy) NSString * songPath;
@property(assign,readwrite) unsigned long long soundBehavior;
@property(assign,readwrite) long long soundType;
@property(assign,readwrite) unsigned int systemSoundID;
@property(assign,copy) NSString * toneIdentifier;
@property(assign,copy) NSString * vibrationIdentifier;
@property(assign,retain) NSDictionary * vibrationPattern;

- (id)_completionBlock;
- (unsigned int)_resolvedSystemSoundID;
- (id)_resolvedToneIdentifier;
- (void)_setCompletionBlock:(id)arg1;
- (void)_setResolvedSoundID:(unsigned int)arg1;
- (void)_setResolvedToneIdentifier:(id)arg1;
- (id)accountIdentifier;
- (int)alertType;
- (id)avItem;
- (id)controllerAttributes;
- (void)dealloc;
- (id)description;
- (id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (bool)isPlaying;
- (bool)isRepeating;
- (double)maxDuration;
- (bool)playInEvironments:(long long)arg1 completion:(id)arg2;
- (id)ringtoneName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAlertType:(int)arg1;
- (void)setAvItem:(id)arg1;
- (void)setControllerAttributes:(id)arg1;
- (void)setMaxDuration:(double)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSongPath:(id)arg1;
- (void)setSoundBehavior:(unsigned long long)arg1;
- (void)setSoundType:(long long)arg1;
- (void)setSystemSoundID:(unsigned int)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setVibrationPattern:(id)arg1;
- (id)songPath;
- (unsigned long long)soundBehavior;
- (long long)soundType;
- (void)stop;
- (unsigned int)systemSoundID;
- (id)toneIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPattern;

@end
