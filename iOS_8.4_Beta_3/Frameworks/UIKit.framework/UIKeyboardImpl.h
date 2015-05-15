/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate, _UIIVCResponseDelegateImpl> {
    UIKeyboardScheduledTask *_autocorrectPromptTask;
    NSDictionary *_candidateRequestInfo;
    int _currentAlertReason;
    bool _handlingKeyCommandFromHardwareKeyboard;
    bool committingCandidate;
    bool geometryIsChanging;
    UIAlertView *keyboardAlertView;
    bool m_UsedCandidateSelection;
    bool m_acceptingCandidate;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    unsigned int m_autoDeleteCount;
    double m_autoDeleteInterval;
    double m_autoDeleteLastDelete;
    bool m_autoDeleteOK;
    unsigned int m_autoDeleteShiftCharacter;
    UIKeyboardScheduledTask *m_autoDeleteTask;
    bool m_autocapitalizationPreference;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIKeyboardAutocorrectionController *m_autocorrectionController;
    bool m_autocorrectionPreference;
    bool m_autoshift;
    <UIKeyboardCandidateList> *m_candidateList;
    TIKeyboardCandidateResultSet *m_candidateResultSet;
    bool m_caretShowingNow;
    int m_changeCount;
    bool m_changeNotificationDisabled;
    double m_changeTime;
    id m_changedDelegate;
    bool m_changingGeometryWithSameOrientation;
    bool m_clientVariantSupportEnabled;
    bool m_clientVariantSupportEnabledEver;
    bool m_correctionLearningAllowed;
    long long m_currentDirection;
    UITextInputTraits *m_defaultTraits;
    _UIActionWhenIdle *m_deferredDidSetDelegateAction;
    _UIActionWhenIdle *m_delayedCandidateRequest;
    <UIKeyInput> *m_delegate;
    bool m_delegateAdoptsKeyboardInput;
    bool m_delegateAdoptsTextInput;
    bool m_delegateAdoptsTextInputPrivate;
    bool m_delegateAdoptsWKInteraction;
    bool m_delegateIsSMSTextView;
    bool m_delegateRequiresKeyEvents;
    bool m_didAutomaticallyInsertSpace;
    bool m_didSyncDocumentStateToInputDelegate;
    bool m_doubleSpacePeriodPreference;
    bool m_doubleSpacePeriodWasAppliedInCurrentContext;
    id m_externalTask;
    <UIKeyboardImplGeometryDelegate> *m_geometryDelegate;
    bool m_hardwareKeyboardAttached;
    UIPhysicalKeyboardEvent *m_hardwareRepeatEvent;
    UIKeyboardScheduledTask *m_hardwareRepeatTask;
    bool m_hasInputOnAcceptCandidate;
    bool m_inDealloc;
    bool m_initializationDone;
    TIKeyboardInputManagerState *m_inputManagerState;
    struct CGPoint { 
        double x; 
        double y; 
    } m_inputPoint;
    bool m_insideKeyInputDelegateCall;
    id m_keyInputCompletionHandler;
    TIKeyboardState *m_keyboardState;
    NSMutableDictionary *m_keyedLayouts;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    UIView *m_languageIndicator;
    WebEvent *m_lastWebEvent;
    UIKeyboardLayout *m_layout;
    bool m_longPress;
    UIDelayedAction *m_longPressAction;
    UIView *m_markedTextOverlay;
    bool m_maximizing;
    bool m_needsCandidates;
    struct __CFRunLoopObserver { } *m_observer;
    long long m_orientation;
    long long m_originalOrientation;
    bool m_originalShouldSkipCandidateSelection;
    bool m_performanceLoggingEnabled;
    bool m_preRotateShift;
    bool m_preRotateShiftLocked;
    NSString *m_previousInputString;
    unsigned long long m_previousReturnKeyBehavior;
    unsigned long long m_previousSpaceKeyBehavior;
    bool m_receivedCandidatesInCurrentInputMode;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    bool m_replacingWord;
    int m_returnKeyState;
    bool m_rivenCenterFilled;
    bool m_scrolling;
    bool m_selecting;
    bool m_settingShift;
    bool m_shift;
    bool m_shiftHeldDownNeedsUpdated;
    bool m_shiftLocked;
    bool m_shiftLockedEnabled;
    bool m_shiftNeedsUpdate;
    bool m_shiftPreventAutoshift;
    bool m_shouldChargeKeys;
    bool m_shouldSetInputModeInNextRun;
    bool m_shouldSkipCandidateGeneration;
    bool m_shouldUpdateCacheOnInputModesChange;
    bool m_showInputModeIndicator;
    bool m_showsCandidateBar;
    bool m_showsCandidateInline;
    bool m_softwareKeyboardShownByTouch;
    double m_splitProgress;
    bool m_suggestionsShownForCurrentDeletion;
    bool m_suppressGeometryChangeNotifications;
    bool m_suppressUpdateCandidateView;
    UIKeyboardTaskQueue *m_taskQueue;
    bool m_textInputChangesIgnored;
    unsigned long long m_textInputChangingCount;
    bool m_textInputChangingDirection;
    bool m_textInputChangingText;
    TIKeyboardTouchEvent *m_touchEventWaitingForKeyInputEvent;
    UITextInputTraits *m_traits;
    bool m_updateLayoutOnShowKeyboard;
    bool m_updatingLayout;
    bool m_updatingPreferences;
    bool m_userChangedSelection;
    bool m_usesCandidateSelection;
}

@property(assign,retain) UITextInputArrowKeyHistory * arrowKeyHistory;
@property(assign,readonly) UIResponder<UIWKInteractionViewProtocol> * asynchronousInputDelegate;
@property(assign,retain) UIKeyboardScheduledTask * autocorrectPromptTask;
@property(assign,readonly) UIKeyboardAutocorrectionController * autocorrectionController;
@property(assign,retain) NSDictionary * candidateRequestInfo;
@property(assign,readonly) bool centerFilled;
@property(assign,retain) id changedDelegate;
@property(assign,retain) id changedDelegate;
@property(assign,readwrite) bool committingCandidate;
@property(assign,copy) NSString * debugDescription;
@property(assign,retain) _UIActionWhenIdle * deferredDidSetDelegateAction;
@property(assign,retain) _UIActionWhenIdle * delayedCandidateRequest;
@property(assign,retain) UIResponder<UIKeyInput> * delegate;
@property(assign,readonly) UIResponder * delegateAsResponder;
@property(assign,copy) NSString * description;
@property(assign,copy) id externalTask;
@property(assign,readwrite) <UIKeyboardImplGeometryDelegate> * geometryDelegate;
@property(assign,readwrite) bool geometryIsChanging;
@property(assign,readwrite) bool handlingKeyCommandFromHardwareKeyboard;
@property(assign,readwrite) bool hardwareKeyboardIsSeen;
@property(assign,retain) UIPhysicalKeyboardEvent * hardwareRepeatEvent;
@property(assign,retain) UIKeyboardScheduledTask * hardwareRepeatTask;
@property(assign,readonly) unsigned long long hash;
@property(getter=isInHardwareKeyboardMode,assign,readwrite) bool inHardwareKeyboardMode;
@property(assign,readonly) UIResponder<UITextInput> * inputDelegate;
@property(assign,readonly) TIKeyboardInputManagerStub * inputManager;
@property(assign,retain) TIKeyboardInputManagerState * inputManagerState;
@property(assign,retain) UIAlertView * keyboardAlertView;
@property(assign,retain) TIKeyboardLayout * layoutForKeyHitTest;
@property(assign,readonly) <UIKeyboardInput> * legacyInputDelegate;
@property(assign,readonly) unsigned long long minimumTouchesForTranslation;
@property(assign,readonly) UIResponder<UITextInputPrivate> * privateInputDelegate;
@property(assign,readwrite) bool receivedCandidatesInCurrentInputMode;
@property(assign,retain) <UIKeyboardRecording><UIApplicationEventRecording> * recorder;
@property(assign,readwrite) bool rivenSplitLock;
@property(assign,readwrite) bool shouldSetInputModeInNextRun;
@property(assign,readonly) bool shouldShowCandidateBar;
@property(assign,readwrite) bool shouldSkipCandidateSelection;
@property(assign,readwrite) bool showInputModeIndicator;
@property(assign,readwrite) bool showsCandidateBar;
@property(assign,readwrite) bool showsCandidateInline;
@property(assign,readwrite) bool softwareKeyboardShownByTouch;
@property(assign,readonly) bool splitTransitionInProgress;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UIKeyboardTaskQueue * taskQueue;
@property(assign,retain) TIKeyboardTouchEvent * touchEventWaitingForKeyInputEvent;

+ (void)_clearHardwareKeyboardMinimizationPreference;
+ (struct CGSize { double x1; double x2; })_defaultSizeForInterfaceOrientation:(long long)arg1;
+ (id)activeInstance;
+ (double)additionalInstanceHeight;
+ (double)additionalInstanceHeightForInterfaceOrientation:(long long)arg1;
+ (double)additionalInstanceHeightLoading;
+ (double)additionalInstanceHeightLoadingForInterfaceOrientation:(long long)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationWillSuspend:(id)arg1;
+ (struct CGSize { double x1; double x2; })defaultSizeForInterfaceOrientation:(long long)arg1;
+ (void)hardwareKeyboardAvailabilityChanged;
+ (long long)interfaceOrientationForSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)isSplit;
+ (id)keyboardScreen;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInterfaceOrientation:(long long)arg1;
+ (id)keyboardWindow;
+ (Class)layoutClassForCurrentInputMode;
+ (Class)layoutClassForInputMode:(id)arg1 keyboardType:(long long)arg2;
+ (void)markElapsed:(id)arg1;
+ (void)markPerformance:(id)arg1;
+ (id)normalizedInputModesFromPreference;
+ (struct CGPoint { double x1; double x2; })normalizedPersistentOffset;
+ (int)persistentDictationTargetZone;
+ (struct CGPoint { double x1; double x2; })persistentDictationWindowOffset;
+ (struct CGPoint { double x1; double x2; })persistentOffset;
+ (double)persistentSplitProgress;
+ (void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(bool)arg2;
+ (void)releaseSharedInstance;
+ (bool)rivenInstalled;
+ (bool)rivenPreference;
+ (bool)rivenTranslationPreference;
+ (void)sendPerformanceNotification:(id)arg1;
+ (void)setParentTestForProfiling:(id)arg1;
+ (void)setPersistentDictationTargetZone:(int)arg1;
+ (void)setPersistentDictationWindowOffset:(struct CGPoint { double x1; double x2; })arg1;
+ (void)setPersistentOffset:(struct CGPoint { double x1; double x2; })arg1;
+ (void)setPersistentSplitProgress:(double)arg1;
+ (id)sharedInstance;
+ (struct CGSize { double x1; double x2; })sizeForInterfaceOrientation:(long long)arg1;
+ (double)splitProgress;
+ (bool)supportsSplit;
+ (void)suppressSetPersistentOffset:(bool)arg1;

- (id)UILanguagePreference;
- (int)_clipCornersOfView:(id)arg1;
- (void)_completePerformInputViewControllerOutput:(id)arg1 executionContext:(id)arg2;
- (void)_continueHandleWebKeyEventWithTask:(id)arg1 executionContext:(id)arg2;
- (id)_getAutocorrection;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (void)_handleKeyBehavior:(unsigned long long)arg1 forKeyType:(id)arg2;
- (void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned long long)arg2 inInputString:(id)arg3 executionContext:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3;
- (bool)_hasCandidates;
- (bool)_isShowingCandidateUIWithAvailableCandidates;
- (id)_keyboardBehaviorState;
- (id)_layout;
- (void)_moveWithEvent:(id)arg1;
- (bool)_needsCandidates;
- (void)_nop;
- (void)_performInputViewControllerOutput:(id)arg1;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (long long)_positionInCandidateList:(id)arg1;
- (void)_processInputViewControllerKeyboardOutput:(id)arg1 executionContext:(id)arg2;
- (id)_rangeForAutocorrectionText:(id)arg1;
- (void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2;
- (void)_requestInputManagerSync;
- (void)_resizeForKeyplaneSize:(struct CGSize { double x1; double x2; })arg1 splitWidthsChanged:(bool)arg2;
- (void)_setAutocorrects:(bool)arg1;
- (void)_setInputManager:(id)arg1;
- (void)_setNeedsCandidates:(bool)arg1;
- (void)_setShiftLockedEnabled:(bool)arg1;
- (bool)_shouldMinimizeForHardwareKeyboard;
- (bool)_shouldRequestInputManagerSyncForKeyboardOutputCallbacks:(id)arg1;
- (void)_updateInputViewControllerOutput:(id)arg1 forKeyboardOutput:(id)arg2;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)acceptAutocorrection;
- (void)acceptAutocorrection:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2;
- (void)acceptAutocorrectionAndEndComposition;
- (id)acceptAutocorrectionForWordTerminator:(id)arg1;
- (void)acceptAutocorrectionForWordTerminator:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2;
- (void)acceptCandidate:(id)arg1;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)acceptCandidate:(id)arg1 atIndex:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)acceptCandidate:(id)arg1 forInput:(id)arg2;
- (void)acceptCurrentCandidate;
- (void)acceptCurrentCandidateForInput:(id)arg1;
- (void)acceptCurrentCandidateForInput:(id)arg1 executionContext:(id)arg2;
- (void)acceptCurrentCandidateIfSelected;
- (void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1;
- (void)acceptCurrentCandidateWithExecutionContext:(id)arg1;
- (void)acceptFirstCandidate;
- (bool)acceptInputString:(id)arg1;
- (void)acceptPredictiveInput:(id)arg1;
- (void)acceptPredictiveInput:(id)arg1 executionContext:(id)arg2;
- (bool)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2;
- (bool)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3;
- (void)addInputEvent:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1;
- (void)addInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputString:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(bool)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2 executionContext:(id)arg3;
- (void)addWordTerminator:(id)arg1 afterSpace:(bool)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 executionContext:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animateAutocorrectionToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)animateAutocorrectionToText:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (bool)applyAutocorrection:(id)arg1;
- (id)arrowKeyHistory;
- (id)asynchronousInputDelegate;
- (bool)autocapitalizationPreference;
- (id)autocorrectPrompt;
- (id)autocorrectPromptRectsForInput:(id)arg1;
- (id)autocorrectPromptRectsFromFirstDelegateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lastDelegateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)autocorrectPromptTask;
- (bool)autocorrectSpellingEnabled;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)autocorrectionController;
- (bool)autocorrectionPreference;
- (bool)autocorrectionPreferenceForTraits;
- (id)autocorrectionRecordForWord:(id)arg1;
- (bool)automaticMinimizationEnabled;
- (void)callChanged;
- (void)callChangedSelection;
- (bool)callLayoutIgnoresShiftState;
- (bool)callLayoutIsShiftKeyBeingHeld;
- (bool)callLayoutIsShiftKeyPlaneChooser;
- (void)callLayoutLongPressAction;
- (void)callLayoutSetAutoshift:(bool)arg1;
- (void)callLayoutSetShift:(bool)arg1;
- (void)callLayoutUpdateAllLocalizedKeys;
- (void)callLayoutUpdateLocalizedKeys;
- (void)callLayoutUpdateReturnKey;
- (bool)callLayoutUsesAutoShift;
- (bool)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2;
- (bool)callShouldInsertText:(id)arg1;
- (bool)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(bool)arg3;
- (bool)canHandleEvent:(id)arg1;
- (bool)canHandleKeyHitTest;
- (void)cancelAllKeyEvents;
- (void)cancelCandidateRequests;
- (void)cancelSplitTransition;
- (id)candidateList;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (id)candidateRequestInfo;
- (bool)candidateSelectionPredictionForTraits;
- (bool)caretBlinks;
- (bool)caretVisible;
- (bool)centerFilled;
- (int)changeCount;
- (bool)changeNotificationDisabled;
- (id)changedDelegate;
- (bool)checkSpellingPreference;
- (bool)checkSpellingPreferenceForTraits;
- (void)cleanUpBeforeInputModeSwitch;
- (void)clearAnimations;
- (void)clearAutoDeleteTimer;
- (void)clearAutocorrectPromptTimer;
- (void)clearChangeTimeAndCount;
- (void)clearDelegate;
- (void)clearExcessKeyboardMemory;
- (void)clearInput;
- (void)clearInputForMarkedText;
- (void)clearLanguageIndicator;
- (void)clearLayouts;
- (void)clearLongPressTimer;
- (void)clearSelection;
- (void)clearShiftState;
- (void)clearTimers;
- (void)clearTransientState;
- (void)collapseSelection;
- (void)collapseSelectionAndAdjustByOffset:(long long)arg1;
- (bool)committingCandidate;
- (void)completeAcceptCandidate:(id)arg1;
- (void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2;
- (void)completeAddInputString:(id)arg1;
- (void)completeAddInputString:(id)arg1 generateCandidates:(bool)arg2;
- (void)completeDeleteFromInput;
- (void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned int)arg1;
- (void)completeHandleAutoDelete;
- (void)completeHandleKeyEvent:(id)arg1;
- (void)completeUpdateForChangedSelection:(bool)arg1;
- (void)composeTypologyRadar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToAutocorrectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegateView:(id)arg2 container:(id)arg3;
- (bool)currentKeyboardTraitsAllowCandidateBar;
- (void)dealloc;
- (void)defaultsDidChange;
- (id)deferredDidSetDelegateAction;
- (id)delayedCandidateRequest;
- (void)delayedInit;
- (id)delegate;
- (id)delegateAsResponder;
- (bool)delegateIsSMSTextView;
- (bool)delegateSuggestionsForCurrentInput;
- (bool)delegateSupportsCorrectionUI;
- (void)deleteBackward;
- (void)deleteBackwardAndNotify:(bool)arg1;
- (void)deleteForwardAndNotify:(bool)arg1;
- (void)deleteFromInput;
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;
- (void)deleteFromInputWithFlags:(unsigned long long)arg1 executionContext:(id)arg2;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)deleteOnceFromInputWithExecutionContext:(id)arg1;
- (id)desirableInputModesWithExtensions:(bool)arg1;
- (void)detach;
- (void)didAcceptAutocorrection:(id)arg1 wordTerminator:(id)arg2;
- (void)didApplyAutocorrection:(id)arg1 autocorrectPromptFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)didChangePhraseBoundary;
- (void)didHandleWebKeyEvent;
- (void)didHandleWebKeyEvent:(id)arg1;
- (void)didMoveToSuperview;
- (void)didSetDelegate;
- (void)dismissKeyboard;
- (bool)displaysCandidates;
- (bool)doubleSpacePeriodPreference;
- (struct CGSize { double x1; double x2; })dragGestureSize;
- (id)dynamicCaretList;
- (void)ejectKeyDown;
- (void)enable;
- (id)externalTask;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)fadeAutocorrectPrompt;
- (void)finishLayoutChangeWithArguments:(id)arg1;
- (void)finishLayoutToCurrentInterfaceOrientation;
- (void)finishSetExtensionInputMode:(id)arg1 didChangeDirection:(bool)arg2;
- (void)finishSetInputMode:(id)arg1 didChangeDirection:(bool)arg2;
- (void)finishSetInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)finishSetKeyboardInputMode:(id)arg1 didChangeDirection:(bool)arg2;
- (void)finishSplitTransitionWithProgress:(double)arg1;
- (void)finishTextChanged;
- (void)firstHardwareAutoRepeatWithExecutionContext:(id)arg1;
- (void)flushTouchEventWaitingForKeyInputEventIfNecessary;
- (void)forceShiftUpdate;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (void)generateAutocorrectionWithExecutionContext:(id)arg1;
- (void)generateAutocorrectionsWithCompletionHandler:(id)arg1;
- (void)generateCandidates;
- (void)generateCandidatesAsynchronously;
- (void)generateCandidatesAsynchronouslyWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectedCandidate:(id)arg2;
- (void)generateCandidatesFromReplacements;
- (void)generateCandidatesWithOptions:(int)arg1;
- (void)generateReplacementsForString:(id)arg1 candidatesHandler:(id)arg2 executionContext:(id)arg3;
- (void)geometryChangeDone:(bool)arg1;
- (id)geometryDelegate;
- (bool)geometryIsChanging;
- (void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2;
- (void)handleAutoDeleteWithExecutionContext:(id)arg1;
- (void)handleClear;
- (void)handleClearWithExecutionContext:(id)arg1;
- (void)handleDelayedActionLongPress;
- (void)handleDelete;
- (void)handleDeleteAsRepeat:(bool)arg1 executionContext:(id)arg2;
- (id)handleDeleteAutospaceForInputString:(id)arg1 afterSpace:(bool)arg2;
- (void)handleDeleteWithExecutionContext:(id)arg1;
- (id)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(bool)arg2 elapsedTime:(double)arg3;
- (bool)handleKeyCommand:(id)arg1 repeatOkay:(bool*)arg2;
- (void)handleKeyEvent:(id)arg1;
- (void)handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3;
- (void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2;
- (void)handleObserverCallback;
- (id)handleReplacement:(id)arg1 forSpaceAndInput:(id)arg2;
- (void)handleStringInput:(id)arg1 withFlags:(unsigned long long)arg2 executionContext:(id)arg3;
- (bool)handlingKeyCommandFromHardwareKeyboard;
- (void)hardwareKeyboardAvailabilityChanged;
- (bool)hardwareKeyboardIsSeen;
- (id)hardwareKeyboardsSeenPreference;
- (id)hardwareRepeatEvent;
- (id)hardwareRepeatTask;
- (bool)hasAutoRepeat;
- (bool)hasEditableMarkedText;
- (bool)hasMarkedText;
- (bool)hideAccessoryViewsDuringSplit;
- (void)hideKeyboard;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputDelegate;
- (id)inputEventForInputString:(id)arg1;
- (id)inputManager;
- (void)inputManagerDidGenerateAutocorrections:(id)arg1 executionContext:(id)arg2;
- (void)inputManagerDidGenerateCandidatesForRequest:(id)arg1 resultSet:(id)arg2;
- (id)inputManagerState;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedPreference;
- (id)inputModePreference;
- (id)inputOverlayContainer;
- (id)inputStringFromPhraseBoundary;
- (id)inputWordForTerminatorAtSelection;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)installRecorder;
- (long long)interfaceOrientation;
- (bool)isAutoDeleteActive;
- (bool)isAutoFillMode;
- (bool)isAutoShifted;
- (bool)isInHardwareKeyboardMode;
- (bool)isLongPress;
- (bool)isMinimized;
- (bool)isSelectionAtSentenceAutoshiftBoundary;
- (bool)isShiftLocked;
- (bool)isShifted;
- (bool)isUsingDictationLayout;
- (bool)isValidKeyInput:(id)arg1;
- (void)jumpToCompositions;
- (void)keyActivated;
- (void)keyDeactivated;
- (id)keyboardAlertView;
- (void)keyboardDidHide:(id)arg1;
- (bool)keyboardDrawsOpaque;
- (bool)keyboardIsKeyPad;
- (bool)keyboardRecordingEnabled;
- (bool)keyboardsExpandedPreference;
- (id)layoutForKeyHitTest;
- (void)layoutHasChanged;
- (id)layoutState;
- (id)legacyInputDelegate;
- (void)logHandwritingData;
- (void)longPressAction;
- (id)markedText;
- (id)markedTextOverlay;
- (unsigned long long)minimumTouchesForTranslation;
- (void)moveCursorLeftShifted:(bool)arg1;
- (void)moveCursorRightShifted:(bool)arg1;
- (void)movePhraseBoundaryToDirection:(long long)arg1;
- (void)moveSelectionToEndOfWord;
- (bool)needsKeyHitTestResults;
- (bool)needsToDeferUpdateTextCandidateView;
- (bool)nextCharacterIsWordCharacter;
- (bool)noContent;
- (void)notifyShiftState;
- (void)performHitTestForTouchEvent:(id)arg1 executionContextPassingNSNumber:(id)arg2;
- (void)performKeyBehaviorConfirm;
- (void)performKeyBehaviorConfirmFirstCandidate;
- (void)performKeyboardOutput:(id)arg1;
- (bool)performanceLoggingPreference;
- (unsigned long long)phraseBoundary;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)predictionForTraits;
- (bool)predictionPreferenceForTraits;
- (void)prepareForGeometryChange;
- (void)prepareForSelectionChange;
- (void)prepareLayoutForInterfaceOrientation:(long long)arg1;
- (id)privateInputDelegate;
- (bool)receivedCandidatesInCurrentInputMode;
- (void)recomputeActiveInputModesWithExtensions:(bool)arg1;
- (id)recorder;
- (void)refreshKeyboardState;
- (void)refreshRivenPreferences;
- (void)reinitializeAfterInputModeSwitch:(bool)arg1;
- (void)releaseInputManager;
- (void)releaseInputManagerIfInactive;
- (void)releaseSuppressUpdateCandidateView;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeAllDynamicDictionaries;
- (void)removeAutocorrectPrompt;
- (void)removeAutocorrectPromptAndCandidateList;
- (void)removeAutocorrection;
- (void)removeCandidateList;
- (void)removeFromSuperview;
- (void)replaceText:(id)arg1;
- (id)replacementsFromSelectedText;
- (void)resizeCandidateBarWithDelta:(double)arg1;
- (void)responseContextDidChange;
- (id)returnKeyDisplayName;
- (bool)returnKeyEnabled;
- (int)returnKeyType;
- (void)revealHiddenCandidates;
- (bool)rivenSplitLock;
- (void)saveInputModesPreference:(id)arg1;
- (void)scheduleReplacementsAfterDeletionToEndOfWord;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (id)searchStringForMarkedText;
- (void)selectionDidChange:(id)arg1;
- (bool)selectionIsEndOfWord;
- (void)selectionScrolling:(id)arg1;
- (id)selectionView;
- (void)selectionWillChange:(id)arg1;
- (void)sendCallbacksForPostCorrectionsRemoval;
- (void)sendCallbacksForPreCorrectionsDisplay;
- (void)setArrowKeyHistory:(id)arg1;
- (void)setAutocorrectPromptTask:(id)arg1;
- (void)setAutocorrectSpellingEnabled:(bool)arg1;
- (void)setAutocorrection:(id)arg1;
- (void)setAutocorrectionList:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(bool)arg1;
- (void)setCandidateList:(id)arg1 updateCandidateView:(bool)arg2;
- (void)setCandidateRequestInfo:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setCaretBlinks:(bool)arg1;
- (void)setCaretVisible:(bool)arg1;
- (void)setChangeNotificationDisabled:(bool)arg1;
- (void)setChanged;
- (void)setChangedDelegate:(id)arg1;
- (void)setCommittingCandidate:(bool)arg1;
- (void)setCorrectionLearningAllowed:(bool)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDeferredDidSetDelegateAction:(id)arg1;
- (void)setDelayedCandidateRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 force:(bool)arg2;
- (void)setDocumentStateForAutocorrection:(id)arg1;
- (void)setExternalTask:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGeometryDelegate:(id)arg1;
- (void)setGeometryIsChanging:(bool)arg1;
- (void)setHandlingKeyCommandFromHardwareKeyboard:(bool)arg1;
- (void)setHardwareKeyboardIsSeen:(bool)arg1;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (void)setHardwareRepeatEvent:(id)arg1;
- (void)setHardwareRepeatTask:(id)arg1;
- (void)setInHardwareKeyboardMode:(bool)arg1;
- (void)setInSplitKeyboardMode:(bool)arg1;
- (void)setInitialDirection;
- (void)setInputManagerFromCurrentInputMode;
- (void)setInputManagerState:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInputMode:(id)arg1 userInitiated:(bool)arg2;
- (void)setInputMode:(id)arg1 userInitiated:(bool)arg2 updateIndicator:(bool)arg3 executionContext:(id)arg4;
- (void)setInputModeFromPreferences;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)setInputPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeyboardAlertView:(id)arg1;
- (void)setKeyboardInputMode:(id)arg1 userInitiated:(bool)arg2;
- (void)setKeyboardInputMode:(id)arg1 userInitiated:(bool)arg2 updateIndicator:(bool)arg3 executionContext:(id)arg4;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLayoutForKeyHitTest:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inputString:(id)arg3 searchString:(id)arg4;
- (void)setOrientation;
- (void)setPreviousInputString:(id)arg1;
- (void)setReceivedCandidatesInCurrentInputMode:(bool)arg1;
- (void)setRecorder:(id)arg1;
- (void)setReturnKeyEnabled:(bool)arg1;
- (void)setRivenSplitLock:(bool)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShift:(bool)arg1;
- (void)setShift:(bool)arg1 autoshift:(bool)arg2;
- (void)setShiftLocked:(bool)arg1;
- (void)setShiftLockedForced:(bool)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftOffIfNeeded;
- (void)setShiftPreventAutoshift:(bool)arg1;
- (void)setShouldSetInputModeInNextRun:(bool)arg1;
- (void)setShouldSkipCandidateSelection:(bool)arg1;
- (void)setShouldUpdateCacheOnInputModesChange:(bool)arg1;
- (void)setShowInputModeIndicator:(bool)arg1;
- (void)setShowsCandidateBar:(bool)arg1;
- (void)setShowsCandidateInline:(bool)arg1;
- (void)setSoftwareKeyboardShownByTouch:(bool)arg1;
- (void)setSplit:(bool)arg1 animated:(bool)arg2;
- (void)setSplitProgress:(double)arg1;
- (void)setTextInputChangesIgnored:(bool)arg1;
- (void)setTouchEventWaitingForKeyInputEvent:(id)arg1;
- (void)setUserSelectedCurrentCandidate:(bool)arg1;
- (void)setUsesCandidateSelection:(bool)arg1;
- (bool)shiftLockPreference;
- (bool)shiftLockedEnabled;
- (bool)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2;
- (bool)shouldApplyAcceptedAutocorrection:(id)arg1;
- (bool)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (bool)shouldEnableShiftForDeletedCharacter:(unsigned int)arg1;
- (bool)shouldForceASCIICapable;
- (bool)shouldGenerateCandidatesAfterSelectionChange;
- (bool)shouldSetInputModeInNextRun;
- (bool)shouldShowCandidateBar;
- (bool)shouldSkipCandidateSelection;
- (bool)shouldSwitchFromInputManagerMode:(id)arg1 toInputMode:(id)arg2;
- (bool)shouldSwitchInputMode:(id)arg1;
- (void)showInformationalAlertIfNeededForReason:(int)arg1;
- (bool)showInputModeIndicator;
- (void)showInternationalKeyInfoAlertIfNeeded;
- (void)showKeyboard;
- (void)showKeyboardIfNeeded;
- (void)showNextCandidates;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (bool)showsCandidateBar;
- (bool)showsCandidateInline;
- (void)skipHitTestForTouchEvent:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 delayed:(bool)arg2;
- (bool)softwareKeyboardShownByTouch;
- (bool)splitTransitionInProgress;
- (void)startAutoDeleteTimer;
- (void)startCaretBlinkIfNeeded;
- (void)startKeyboardRecording;
- (void)stopAutoDelete;
- (void)stopKeyboardRecording;
- (void)storeDelegateConformance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (bool)suppliesCompletions;
- (bool)supportsNumberKeySelection;
- (bool)swipeToTabPreference;
- (void)syncDocumentStateToInputDelegate;
- (void)syncDocumentStateToInputDelegateWithExecutionContext:(id)arg1;
- (void)syncInputManagerToAcceptedAutocorrection:(id)arg1 forInput:(id)arg2;
- (void)syncInputManagerToKeyboardState;
- (void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1;
- (void)syncKeyboardToConfiguration:(id)arg1;
- (void)takeTextInputTraitsFromDelegate;
- (id)taskQueue;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)textChanged:(id)arg1 executionContext:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)textFrameChanged:(id)arg1;
- (int)textInputChangingCount;
- (id)textInputTraits;
- (void)textWillChange:(id)arg1;
- (void)timeElapsed:(unsigned int)arg1 message:(id)arg2;
- (void)timeMark:(unsigned int)arg1;
- (void)timeMark:(unsigned int)arg1 message:(id)arg2;
- (void)toggleShift;
- (void)toggleSoftwareKeyboard;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)touchAutocorrectPromptTimer;
- (id)touchEventWaitingForKeyInputEvent;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(bool)arg2;
- (void)trackUsageForCandidateAcceptedAction:(id)arg1;
- (void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3;
- (void)unmarkText;
- (void)unmarkText:(id)arg1;
- (void)updateAutocorrectPrompt:(id)arg1;
- (void)updateAutocorrectPrompt:(id)arg1 correctionRects:(id)arg2;
- (void)updateAutocorrectPrompt:(id)arg1 executionContext:(id)arg2;
- (void)updateCandidateDisplay;
- (void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1;
- (void)updateChangeTimeAndIncrementCount;
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned int)arg1;
- (void)updateDoubleSpacePeriodStateForString:(id)arg1;
- (void)updateForChangedSelection;
- (void)updateForChangedSelectionWithExecutionContext:(id)arg1;
- (void)updateFromTextInputTraits;
- (void)updateHardwareKeyboardLayout;
- (void)updateInputManagerAutocapitalizationType;
- (void)updateInputManagerMode;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(bool)arg1;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(bool)arg1 preserveIfPossible:(bool)arg2;
- (void)updateInputModeLastChosenPreference;
- (id)updateKeyBehaviors:(id)arg1 withBehaviors:(id)arg2 forState:(id)arg3;
- (void)updateKeyboardConfigurations;
- (void)updateKeyboardEventsLagging:(id)arg1;
- (void)updateKeyboardStateForDeletion;
- (void)updateKeyboardStateForInsertion:(id)arg1;
- (void)updateLayout;
- (void)updateLayoutAndSetShift;
- (void)updateLayoutIfNeeded;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)updateNoContentViews;
- (void)updateObserverState;
- (void)updateReturnKey;
- (void)updateReturnKey:(bool)arg1;
- (void)updateShiftState;
- (void)updateStylingTraitsIfNeeded;
- (void)updateTextCandidateView;
- (bool)userSelectedCurrentCandidate;
- (bool)usesAutoDeleteWord;
- (bool)usesAutocorrectionLists;
- (bool)usesCandidateSelection;
- (void)willMoveToWindow:(id)arg1;
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;

@end