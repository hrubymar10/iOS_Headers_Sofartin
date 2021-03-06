/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {
    TIKeyboardCandidate *_autocorrectionRecord;
    bool _forceAutocorrectionGuesses;
    bool _forceHistoryReplacement;
    bool _forceSpellingGuesses;
    unsigned long long _maxCountAfterAutocorrectionGuesses;
    unsigned long long _maxCountAfterSpellingGuesses;
    unsigned long long _maxEditDistance;
    UITextChecker *_textChecker;
}

@property(assign,retain) TIKeyboardCandidate * autocorrectionRecord;
@property(assign,readwrite) bool forceAutocorrectionGuesses;
@property(assign,readwrite) bool forceHistoryReplacement;
@property(assign,readwrite) bool forceSpellingGuesses;
@property(assign,readwrite) unsigned long long maxCountAfterAutocorrectionGuesses;
@property(assign,readwrite) unsigned long long maxCountAfterSpellingGuesses;
@property(assign,readwrite) unsigned long long maxEditDistance;
@property(assign,retain) UITextChecker * textChecker;

- (void)addAutocorrectionGuessesToReplacements:(id)arg1;
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1;
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1;
- (void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2;
- (id)autocorrectionRecord;
- (void)dealloc;
- (bool)forceAutocorrectionGuesses;
- (bool)forceHistoryReplacement;
- (bool)forceSpellingGuesses;
- (id)init;
- (bool)isStringMisspelled:(id)arg1;
- (unsigned long long)maxCountAfterAutocorrectionGuesses;
- (unsigned long long)maxCountAfterSpellingGuesses;
- (unsigned long long)maxEditDistance;
- (id)replacements;
- (void)setAutocorrectionRecord:(id)arg1;
- (void)setForceAutocorrectionGuesses:(bool)arg1;
- (void)setForceHistoryReplacement:(bool)arg1;
- (void)setForceSpellingGuesses:(bool)arg1;
- (void)setMaxCountAfterAutocorrectionGuesses:(unsigned long long)arg1;
- (void)setMaxCountAfterSpellingGuesses:(unsigned long long)arg1;
- (void)setMaxEditDistance:(unsigned long long)arg1;
- (void)setTextChecker:(id)arg1;
- (id)textChecker;

@end
