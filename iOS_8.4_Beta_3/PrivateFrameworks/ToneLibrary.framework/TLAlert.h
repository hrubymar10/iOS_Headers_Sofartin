/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlert : NSObject {
    NSString *_accountIdentifier;
    NSTimer *_completionFallbackTimer;
    id _completionHandler;
    bool _shouldOverrideMasterSwitches;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_toneIdentifier;
    int _type;
    NSString *_vibrationIdentifier;
}

@property (setter=_setCompletionFallbackTimer:, nonatomic, retain) NSTimer *_completionFallbackTimer;
@property (setter=_setCompletionHandler:, nonatomic, copy) id _completionHandler;
@property (setter=_setShouldOverrideMasterSwitches:, nonatomic) bool _shouldOverrideMasterSwitches;
@property (setter=_setTargetQueue:, nonatomic) NSObject<OS_dispatch_queue> *_targetQueue;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *vibrationIdentifier;

+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(bool)arg4;
+ (void)_setWatchPrefersSalientToneAndVibration:(bool)arg1;
+ (bool)_watchPrefersSalientToneAndVibration;
+ (void)playToneAndVibrationForType:(int)arg1;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;

- (id)_completionFallbackTimer;
- (id)_completionHandler;
- (void)_setAccountIdentifier:(id)arg1;
- (void)_setCompletionFallbackTimer:(id)arg1;
- (void)_setCompletionHandler:(id)arg1;
- (void)_setShouldOverrideMasterSwitches:(bool)arg1;
- (void)_setTargetQueue:(id)arg1;
- (void)_setToneIdentifier:(id)arg1;
- (void)_setType:(int)arg1;
- (void)_setVibrationIdentifier:(id)arg1;
- (bool)_shouldOverrideMasterSwitches;
- (id)_targetQueue;
- (id)accountIdentifier;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (bool)playWithCompletionHandler:(id)arg1 targetQueue:(id)arg2;
- (void)startPlayingRepeatedly;
- (void)stop;
- (void)stopPlayingRepeatedlyWithOptions:(unsigned long long)arg1 completionHandler:(id)arg2 targetQueue:(id)arg3;
- (void)stopWithFadeOutDuration:(double)arg1;
- (id)toneIdentifier;
- (int)type;
- (id)vibrationIdentifier;

@end
