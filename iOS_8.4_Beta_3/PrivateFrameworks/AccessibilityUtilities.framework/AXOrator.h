/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXOrator : NSObject <AVSpeechSynthesizerDelegate> {
    bool _contentIsSpeakable;
    <AXOratorDelegate> *_delegate;
    bool _didRequestPauseSpeakingDuringAudioInterruption;
    bool _didRequestResumeSpeakingDuringAudioInterruption;
    bool _didRequestStartSpeakingDuringAudioInterruption;
    bool _isAudioSessionActive;
    bool _isInAudioInterruption;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _lastSpokenSubstringRange;
    AVSpeechUtterance *_lastUtterance;
    NSString *_lastUtteranceLanguageCode;
    AXLanguageTag *_lastUtteranceLanguageTag;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _lastUtteranceSubstringRange;
    unsigned long long _numberOfTokensToSkip;
    NSString *_requestedLanguageCodeDuringAudioInterruption;
    AXLanguageTaggedContent *_selectedContent;
    bool _shouldSpeakNextItemOnResume;
    AXLanguageTaggedContent *_speakingContent;
    NSArray *_speakingContentTokenRanges;
    NSMutableArray *_speechSequenceItems;
    AVSpeechSynthesizer *_speechSynthesizer;
    AVSpeechUtterance *_statusUtterance;
    NSString *_voiceIdentifier;
    bool _wasSpeakingBeforeAudioInterruption;
}

@property (nonatomic, copy) NSString *content;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXOratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRequestPauseSpeakingDuringAudioInterruption;
@property (nonatomic) bool didRequestResumeSpeakingDuringAudioInterruption;
@property (nonatomic) bool didRequestStartSpeakingDuringAudioInterruption;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAudioSessionActive;
@property (nonatomic) bool isInAudioInterruption;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastSpokenSubstringRange;
@property (nonatomic, retain) AVSpeechUtterance *lastUtterance;
@property (nonatomic, retain) NSString *lastUtteranceLanguageCode;
@property (nonatomic, retain) AXLanguageTag *lastUtteranceLanguageTag;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastUtteranceSubstringRange;
@property (nonatomic) unsigned long long numberOfTokensToSkip;
@property (nonatomic, copy) NSString *requestedLanguageCodeDuringAudioInterruption;
@property (nonatomic, retain) AXLanguageTaggedContent *selectedContent;
@property (nonatomic) bool shouldSpeakNextItemOnResume;
@property (nonatomic, retain) AXLanguageTaggedContent *speakingContent;
@property (nonatomic, retain) NSArray *speakingContentTokenRanges;
@property (nonatomic, retain) NSMutableArray *speechSequenceItems;
@property (nonatomic, retain) AVSpeechSynthesizer *speechSynthesizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *voiceIdentifier;
@property (nonatomic) bool wasSpeakingBeforeAudioInterruption;

- (bool)_canSpeakTaggedContent:(id)arg1;
- (bool)_changeSpeakingSpeed:(bool)arg1;
- (void)_clearAllContentState;
- (long long)_currentTokenIndex:(bool)arg1;
- (void)_didBeginInterruption;
- (void)_didEndInterruption;
- (void)_handleAudioInterruption:(id)arg1;
- (void)_handleMediaServicesWereLost:(id)arg1;
- (void)_handleMediaServicesWereReset:(id)arg1;
- (void)_respeakUtteranceIfNeeded;
- (void)_setAudioSessionActive:(bool)arg1;
- (bool)_skipByUnit:(bool)arg1 boundary:(unsigned long long)arg2;
- (void)_speakNextItemInSequence;
- (void)_speakNextTokenFromCurrentTokenIndex:(long long)arg1 forward:(bool)arg2 boundary:(unsigned long long)arg3;
- (id)_speechSequenceItemsStartingAtContentLocation:(unsigned long long)arg1;
- (void)_startSpeakingSequence;
- (bool)_successWithCode:(long long)arg1 error:(id*)arg2;
- (void)_tokenizeContentIfNeeded;
- (bool)canResumeWithContent:(id)arg1;
- (void)clearSelectedContent;
- (id)content;
- (bool)contentIsSpeakable;
- (void)dealloc;
- (id)delegate;
- (bool)didRequestPauseSpeakingDuringAudioInterruption;
- (bool)didRequestResumeSpeakingDuringAudioInterruption;
- (bool)didRequestStartSpeakingDuringAudioInterruption;
- (bool)fastForwardWithBoundary:(unsigned long long)arg1;
- (id)init;
- (bool)isAudioSessionActive;
- (bool)isInAudioInterruption;
- (bool)isPaused;
- (bool)isSpeaking;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastSpokenSubstringRange;
- (id)lastUtterance;
- (id)lastUtteranceLanguageCode;
- (id)lastUtteranceLanguageTag;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastUtteranceSubstringRange;
- (unsigned long long)numberOfTokensToSkip;
- (bool)pauseSpeaking:(id*)arg1;
- (id)requestedLanguageCodeDuringAudioInterruption;
- (bool)resumeSpeaking:(id*)arg1;
- (bool)rewindWithBoundary:(unsigned long long)arg1;
- (id)selectedContent;
- (void)setContent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidRequestPauseSpeakingDuringAudioInterruption:(bool)arg1;
- (void)setDidRequestResumeSpeakingDuringAudioInterruption:(bool)arg1;
- (void)setDidRequestStartSpeakingDuringAudioInterruption:(bool)arg1;
- (void)setIsAudioSessionActive:(bool)arg1;
- (void)setIsInAudioInterruption:(bool)arg1;
- (void)setLastSpokenSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLastUtterance:(id)arg1;
- (void)setLastUtteranceLanguageCode:(id)arg1;
- (void)setLastUtteranceLanguageTag:(id)arg1;
- (void)setLastUtteranceSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNumberOfTokensToSkip:(unsigned long long)arg1;
- (void)setRequestedLanguageCodeDuringAudioInterruption:(id)arg1;
- (void)setSelectedContent:(id)arg1;
- (void)setShouldSpeakNextItemOnResume:(bool)arg1;
- (void)setSpeakingContent:(id)arg1;
- (void)setSpeakingContentTokenRanges:(id)arg1;
- (void)setSpeechSequenceItems:(id)arg1;
- (void)setSpeechSynthesizer:(id)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (void)setWasSpeakingBeforeAudioInterruption:(bool)arg1;
- (bool)shouldSpeakNextItemOnResume;
- (bool)speakFaster;
- (bool)speakSlower;
- (void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2 useCompactVoice:(bool)arg3 alternateIdentifier:(id)arg4;
- (id)speakingContent;
- (id)speakingContentTokenRanges;
- (float)speechRate;
- (id)speechSequenceItems;
- (id)speechSynthesizer;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 utterance:(id)arg3;
- (bool)startSpeakingWithPreferredLanguage:(id)arg1 alternativeVoiceId:(id)arg2 error:(id*)arg3;
- (bool)stopSpeaking:(id*)arg1;
- (id)voiceIdentifier;
- (bool)wasSpeakingBeforeAudioInterruption;

@end
