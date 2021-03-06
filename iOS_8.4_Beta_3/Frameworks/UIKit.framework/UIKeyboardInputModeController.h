/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputModeController : NSObject {
    NSArray *_allExtensions;
    NSArray *_allowedExtensions;
    bool _cacheNeedsRefresh;
    UIKeyboardInputMode *_currentInputMode;
    UIKeyboardInputMode *_currentUsedInputMode;
    <UIKeyboardInputModeControllerDelegate> *_delegate;
    id _extensionMatchingContext;
    NSString *_inputModeContextIdentifier;
    NSArray *_inputModesWithoutHardwareSupport;
    UIKeyboardInputMode *_lastUsedInputMode;
    UIKeyboardInputMode *_nextInputModeToUse;
    bool _shouldRunContinuousDiscovery;
    bool _skipExtensionInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultNormalizedInputModes;
    NSArray *defaultRawInputModes;
    NSArray *enabledInputModes;
    NSArray *keyboardInputModeIdentifiers;
    NSArray *keyboardInputModes;
    NSArray *normalizedInputModes;
}

@property (readonly) NSArray *activeInputModeIdentifiers;
@property (nonatomic, readonly) NSArray *allowedExtensions;
@property (nonatomic, readonly) bool containsDictationSupportedInputMode;
@property (retain) UIKeyboardInputMode *currentInputMode;
@property (nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property (nonatomic, readonly) UIKeyboardInputMode *currentPublicInputMode;
@property (nonatomic, readonly) UIKeyboardInputMode *currentSystemInputMode;
@property (nonatomic, retain) UIKeyboardInputMode *currentUsedInputMode;
@property (retain) NSArray *defaultInputModes;
@property (retain) NSArray *defaultKeyboardInputModes;
@property (retain) NSArray *defaultNormalizedInputModes;
@property (nonatomic, copy) NSArray *defaultRawInputModes;
@property (nonatomic) <UIKeyboardInputModeControllerDelegate> *delegate;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (readonly) NSArray *enabledInputModeLanguages;
@property (retain) NSArray *enabledInputModes;
@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, readonly) UIKeyboardInputMode *hardwareInputMode;
@property (nonatomic, copy) NSString *inputModeContextIdentifier;
@property (readonly) NSArray *inputModesWithoutHardwareSupport;
@property (retain) NSArray *keyboardInputModeIdentifiers;
@property (retain) NSArray *keyboardInputModes;
@property (nonatomic, retain) UIKeyboardInputMode *lastUsedInputMode;
@property (nonatomic, retain) UIKeyboardInputMode *nextInputModeToUse;
@property (readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property (retain) NSArray *normalizedInputModes;
@property (nonatomic) bool shouldRunContinuousDiscovery;
@property (readonly) NSArray *supportedInputModeIdentifiers;

+ (id)sharedInputModeController;

- (id)_MCFilteredExtensionIdentifiers;
- (void)_beginContinuousDiscoveryIfNeeded;
- (void)_clearAllExtensionIfNeeded;
- (void)_removeExtensions:(id)arg1;
- (void)_setCurrentAndNextInputModePreference;
- (void)_setCurrentInputMode:(id)arg1 force:(bool)arg2;
- (id)_systemInputModePassingTest:(id)arg1;
- (id)activeInputModeIdentifiers;
- (id)activeInputModes;
- (id)allowedExtensions;
- (bool)containsDictationSupportedInputMode;
- (id)currentInputMode;
- (id)currentInputModeInPreference;
- (bool)currentLocaleRequiresExtendedSetup;
- (id)currentPublicInputMode;
- (id)currentSystemInputMode;
- (id)currentUsedInputMode;
- (void)dealloc;
- (id)defaultEnabledInputModesForCurrentLocale:(bool)arg1;
- (id)defaultInputModes;
- (id)defaultKeyboardInputModes;
- (id)defaultNormalizedInputModes;
- (id)defaultRawInputModes;
- (id)delegate;
- (bool)deviceStateIsLocked;
- (void)didEnterBackground:(id)arg1;
- (id)enabledInputModeIdentifiers;
- (id)enabledInputModeIdentifiers:(bool)arg1;
- (id)enabledInputModeLanguages;
- (id)enabledInputModes;
- (id)extensionInputModes;
- (id)extensionMatchingContext;
- (id)hardwareInputMode;
- (bool)identifierIsValidSystemInputMode:(id)arg1;
- (id)identifiersFromInputModes:(id)arg1;
- (id)init;
- (id)inputModeContextIdentifier;
- (id)inputModeWithIdentifier:(id)arg1;
- (id)inputModesWithoutHardwareSupport;
- (id)keyboardInputModeIdentifiers;
- (id)keyboardInputModes;
- (id)lastUsedInputMode;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (id)nextInputModeToUse;
- (id)nextInputModeToUseForTraits:(id)arg1;
- (id)normalizedEnabledInputModeIdentifiers;
- (id)normalizedInputModes;
- (void)performWithForcedExtensionInputModes:(id)arg1;
- (void)performWithoutExtensionInputModes:(id)arg1;
- (id)preferredLanguages;
- (void)setCurrentInputMode:(id)arg1;
- (void)setCurrentInputModeInPreference:(id)arg1;
- (void)setCurrentUsedInputMode:(id)arg1;
- (void)setDefaultInputModes:(id)arg1;
- (void)setDefaultKeyboardInputModes:(id)arg1;
- (void)setDefaultNormalizedInputModes:(id)arg1;
- (void)setDefaultRawInputModes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setInputModeContextIdentifier:(id)arg1;
- (void)setKeyboardInputModeIdentifiers:(id)arg1;
- (void)setKeyboardInputModes:(id)arg1;
- (void)setLastUsedInputMode:(id)arg1;
- (void)setNextInputModeToUse:(id)arg1;
- (void)setNormalizedInputModes:(id)arg1;
- (void)setShouldRunContinuousDiscovery:(bool)arg1;
- (bool)shouldRunContinuousDiscovery;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)suggestedInputModesForCurrentLocale;
- (id)suggestedInputModesForCurrentLocale:(bool)arg1 fallbackToDefaultInputModes:(bool)arg2;
- (id)suggestedInputModesForPreferredLanguages;
- (id)supportedInputModeIdentifiers;
- (void)switchToCurrentSystemInputMode;
- (void)updateCurrentAndNextInputModes;
- (void)updateCurrentInputMode:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (bool)verifyKeyboardExtensionsWithApp;
- (void)willEnterForeground:(id)arg1;

@end
