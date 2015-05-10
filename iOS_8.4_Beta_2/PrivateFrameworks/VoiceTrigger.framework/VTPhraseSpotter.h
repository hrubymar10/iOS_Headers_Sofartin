/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPhraseSpotter : NSObject {
    NSObject<OS_dispatch_queue> *_assetChangedQueue;
    NSString *_audioFileDir;
    bool _audioLoggingEnabled;
    NSString *_configData;
    NSString *_configLanguageCode;
    NSString *_configPath;
    NSString *_configVersion;
    int _earlyDetectResetTimer;
    double _earlyDetectTime;
    unsigned int _extraSamplesAtStart;
    double _hardwareSampleRate;
    int _hasTriggeredNotifyToken;
    int _heartbeatCounter;
    bool _inactivityTimerSet;
    bool _isInactiveUser;
    bool _isMaximized;
    NSString *_languageCode;
    int _languageCodeChangedNotificationToken;
    NSObject<OS_dispatch_source> *_languageCodeChangedSource;
    double _lastDowntime;
    unsigned int _lastEventEnd;
    double _lastScore;
    double _lastUptime;
    int _loggingPreDelayTimer;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _loggingResetTimer;
    void *_ndetect;
    NSObject<OS_dispatch_queue> *_ndetectQueue;
    NSMutableArray *_nonceTriggerEvents;
    int _nonceTriggerNotificationToken;
    int _numFramesFromPreTrigger;
    bool _phraseSpotterEnabled;
    id _readyCompletion;
    bool _registeredForPhraseSpotterNotification;
    NSString *_resourcePath;
    unsigned int _sampleCountAtFirstChance;
    unsigned int _samplecount;
    unsigned int _samplecountAtLastTriggerEnd;
    unsigned int _samplecountAtLastTriggerStart;
    unsigned long long _samplerate;
    int _secondChanceResetTimer;
    int _siriLastUseUpdatedNotificationToken;
    long long _suggestedThreshold;
    int _suggestedThresholdChangedNotificationToken;
    double _threshold;
    double _thresholdInactiveUser;
    double _thresholdInactiveUserSecondChance;
    double _thresholdLogNearMisses;
    double _thresholdSecondChance;
    double _thresholdSiriUp;
    NSArray *_triggerPhrases;
    double _triggerThreshold;
}

@property(assign,readonly) double lastScore;
@property(assign,readonly) unsigned long long sampleCount;
@property(assign,readonly) unsigned long long sampleCountAtEndOfTrigger;
@property(assign,readonly) unsigned long long sampleCountAtStartOfTrigger;
@property(assign,readonly) unsigned long long samplerate;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_analyzeEvents:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)arg1 shouldFireNonce:(bool)arg2 isTrigger:(bool*)arg3;
- (id)_analyzeMakeResult:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)arg1 isNearMiss:(bool)arg2 isSecondChance:(bool)arg3 effectiveThreshold:(double)arg4 isNonce:(bool)arg5;
- (void)_analyzeReset;
- (void)_assetsAvailable:(id)arg1;
- (id)_capturePath:(bool)arg1;
- (void)_checkSiriIsActive;
- (void)_commonInit;
- (bool)_configureWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (bool)_configureWithDefaults;
- (void)_handleAssetChangeForLanguageCode:(id)arg1;
- (void)_initSingleton;
- (void)_languageCodeChanged;
- (void)_listenForLanguageCodeUpdates;
- (void)_listenForNonceTrigger;
- (void)_listenForSuggestedThreshold;
- (void)_logMetaData:(id)arg1;
- (void)_performReadyCompletion;
- (void)_phraseSpotterEnabledDidChange;
- (void)_resetCounters;
- (void)_safeConfigureWithNdetect:(void*)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4 threshold:(double)arg5;
- (void)_safeReconfig;
- (double)_thresholdFromNdetect:(void*)arg1 withName:(const char *)arg2 defaultTo:(double)arg3;
- (void)_unlistenForLanguageCodeUpdates;
- (void)_unlistenForNonceTrigger;
- (void)_unlistenForSuggestedThreshold;
- (void)_updateLanguageCode:(id)arg1;
- (void)_updateSuggestedThreshold;
- (id)analyze:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2 triggerThreshold:(double)arg3;
- (id)initWithHardwareSampleRate:(double)arg1;
- (id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(id)arg2;
- (double)lastScore;
- (unsigned long long)sampleCount;
- (unsigned long long)sampleCountAtEndOfTrigger;
- (unsigned long long)sampleCountAtStartOfTrigger;
- (unsigned long long)samplerate;

@end
